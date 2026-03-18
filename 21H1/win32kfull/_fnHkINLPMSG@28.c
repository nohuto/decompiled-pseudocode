/*
 * XREFs of _fnHkINLPMSG@28 @ 0x6B870
 * Callers:
 *     _xxxHkCallHook@16 @ 0x6B2E0 (_xxxHkCallHook@16.c)
 *     _xxxCallCtfHook@16 @ 0x6D91E (_xxxCallCtfHook@16.c)
 * Callees:
 *     _IsTouchInputMessage@4 @ 0x46022 (_IsTouchInputMessage@4.c)
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _RtlWCSMessageWParamCharToMB@8 @ 0xC5322 (_RtlWCSMessageWParamCharToMB@8.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     __FreeTouchInputInfo@8 @ 0x149EED (__FreeTouchInputInfo@8.c)
 *     _IsAnyGestureMessage@4 @ 0x14E35B (_IsAnyGestureMessage@4.c)
 *     __FreeGestureInfo@8 @ 0x188C90 (__FreeGestureInfo@8.c)
 *     _RtlMBMessageWParamCharToWCS@8 @ 0x1B72F5 (_RtlMBMessageWParamCharToWCS@8.c)
 */

int __fastcall fnHkINLPMSG(int a1, int a2, int a3, int a4, int a5, int a6, int *a7)
{
  void *v7; // esi
  int v8; // edx
  int v9; // edx
  PKTHREAD CurrentThread; // ebx
  int v11; // edi
  int *ThreadWin32Thread; // eax
  int DLT; // eax
  bool v14; // bl
  int v15; // edi
  int *v16; // eax
  int v17; // eax
  tagDomLock *DomainLockRef; // eax
  int *v19; // ecx
  int *v20; // ebx
  _DWORD *v21; // ebx
  _DWORD *v22; // edx
  int v23; // esi
  int v24; // ecx
  int v25; // ebx
  void *v26; // esi
  BOOL v27; // eax
  int v28; // ebx
  _DWORD v30[2]; // [esp+14h] [ebp-A0h] BYREF
  int v31; // [esp+1Ch] [ebp-98h]
  int v32; // [esp+20h] [ebp-94h]
  _DWORD v33[7]; // [esp+24h] [ebp-90h] BYREF
  int v34; // [esp+40h] [ebp-74h]
  int v35; // [esp+44h] [ebp-70h]
  int v36; // [esp+48h] [ebp-6Ch]
  _DWORD *v37; // [esp+4Ch] [ebp-68h]
  int v38; // [esp+50h] [ebp-64h]
  int v39; // [esp+54h] [ebp-60h]
  _DWORD *v40; // [esp+58h] [ebp-5Ch]
  int v41; // [esp+6Ch] [ebp-48h]
  int v42; // [esp+74h] [ebp-40h]
  PKTHREAD v43; // [esp+78h] [ebp-3Ch]
  void *v44; // [esp+7Ch] [ebp-38h]
  int v45; // [esp+80h] [ebp-34h] BYREF
  int v46; // [esp+84h] [ebp-30h]
  int v47; // [esp+88h] [ebp-2Ch]
  unsigned int v48; // [esp+8Ch] [ebp-28h] BYREF
  int v49; // [esp+90h] [ebp-24h]
  int v50; // [esp+94h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+9Ch] [ebp-18h]
  int v52; // [esp+C0h] [ebp+Ch]
  char v53; // [esp+C3h] [ebp+Fh]

  v48 = 0;
  v45 = 0;
  v50 = 0;
  v49 = 0;
  v47 = 0;
  v46 = 0;
  v31 = 0;
  v32 = 0;
  v34 = 0;
  v30[0] = a1;
  v30[1] = a2;
  qmemcpy(v33, (const void *)a3, sizeof(v33));
  v7 = *(void **)(a3 + 4);
  v44 = v7;
  if ( (v7 == (void *)258 || v7 == (void *)262) && a6 )
  {
    v50 = *(_DWORD *)(a3 + 8);
    RtlWCSMessageWParamCharToMB(v7, &v33[2]);
  }
  else if ( v7 == (void *)576 || v7 == (void *)283 || v7 == (void *)281 )
  {
    v50 = *(_DWORD *)(a3 + 8);
    v49 = *(_DWORD *)(a3 + 12);
    LOBYTE(a2) = -1;
    v46 = HMValidateHandle(v49, a2);
    if ( !v46
      || IsTouchInputMessage(*(void **)(a3 + 4)) && *(_BYTE *)(_HMPheFromObject(v8) + 12) != 20
      || IsAnyGestureMessage(*(_DWORD *)(a3 + 4)) && *(_BYTE *)(_HMPheFromObject(v9) + 12) != 21 )
    {
      return 0;
    }
    v47 = *(_DWORD *)(_gptiCurrent + 384);
    v46 = *(_DWORD *)(_gptiCurrent + 388);
    *(_DWORD *)(_gptiCurrent + 384) = v49;
    *(_DWORD *)(_gptiCurrent + 388) = v50;
  }
  v31 = a4;
  v32 = a5;
  v34 = *a7;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  CurrentThread = KeGetCurrentThread();
  v11 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v11 = *ThreadWin32Thread;
  }
  v53 = *(_BYTE *)(v11 + 844);
  *(_BYTE *)(v11 + 844) = 0;
  if ( (v53 & 1) != 0 )
  {
    tagObjLock::UnLockExclusive();
    DLT = DLT_THREADINFO::getDLT();
    GetDomainLockRef(DLT);
    tagDomLock::UnLockShared();
  }
  v14 = !ExIsResourceAcquiredExclusiveLite(_gpresUser) && ExIsResourceAcquiredSharedLite(_gpresUser);
  UserSessionSwitchLeaveCrit();
  EtwTraceBeginCallback(47);
  v42 = KeUserModeCallback(47, v30, 48, &v48, &v45);
  EtwTraceEndCallback(47);
  if ( v14 )
    EnterSharedCrit(0, 1);
  else
    EnterCrit(0, 1);
  v43 = KeGetCurrentThread();
  v15 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    v16 = (int *)PsGetThreadWin32Thread(v43);
    if ( v16 )
      v15 = *v16;
  }
  if ( (v53 & 1) != 0 )
  {
    v17 = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(v17);
    tagDomLock::LockShared(DomainLockRef);
    tagObjLock::LockExclusive((tagObjLock *)(v15 + 216));
  }
  *(_BYTE *)(v15 + 844) = v53;
  if ( v7 == (void *)576 || v7 == (void *)283 || v7 == (void *)281 )
  {
    *(_DWORD *)(_gptiCurrent + 384) = v47;
    *(_DWORD *)(_gptiCurrent + 388) = v46;
  }
  if ( v42 < 0 || v45 != 12 )
    return 0;
  ms_exc.registration.TryLevel = 0;
  v19 = (int *)v48;
  if ( v48 + 4 < v48 || v48 + 4 > _MmUserProbeAddress )
    v19 = (int *)_MmUserProbeAddress;
  v52 = *v19;
  v41 = *v19;
  ms_exc.registration.TryLevel = 1;
  v20 = (int *)v48;
  if ( v48 + 12 < v48 || v48 + 12 > _MmUserProbeAddress )
    v20 = (int *)_MmUserProbeAddress;
  v38 = *v20;
  v39 = v20[1];
  v21 = (_DWORD *)v20[2];
  v40 = v21;
  v35 = v38;
  v36 = v39;
  v37 = v21;
  ProbeForRead(v21, 0x20u, 4u);
  v22 = (_DWORD *)a3;
  qmemcpy((void *)a3, v21, 0x1Cu);
  *a7 ^= ((unsigned __int8)*a7 ^ (unsigned __int8)v21[7]) & 0x10;
  ms_exc.registration.TryLevel = -2;
  v23 = *(_DWORD *)(a3 + 4);
  if ( v23 == 258 || (v24 = *(_DWORD *)(a3 + 4), v23 == 262) )
  {
    v24 = *(_DWORD *)(a3 + 4);
    if ( a6 )
    {
      if ( v33[2] == *(_DWORD *)(a3 + 8) )
      {
        v25 = v50;
        *(_DWORD *)(a3 + 8) = v50;
        goto LABEL_53;
      }
      RtlMBMessageWParamCharToWCS(v24, a3 + 8);
      v22 = (_DWORD *)a3;
      v24 = *(_DWORD *)(a3 + 4);
    }
  }
  v25 = v50;
LABEL_53:
  if ( v24 == 576 || v24 == 283 || v24 == 281 )
  {
    v22[1] = v44;
    v22[2] = v25;
    v22[3] = v49;
  }
  else if ( v25 == 1 )
  {
    v26 = v44;
    v27 = IsTouchInputMessage(v44);
    v28 = v49;
    if ( v27 )
      _FreeTouchInputInfo(v49, 1);
    if ( IsAnyGestureMessage(v26) )
    {
      _FreeGestureInfo(v28, 1);
      return v52;
    }
  }
  return v52;
}
