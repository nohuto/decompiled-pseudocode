/*
 * XREFs of _SfnINOUTSTYLECHANGE@32 @ 0x40A10
 * Callers:
 *     _xxxDefWindowProc@16 @ 0x16650 (_xxxDefWindowProc@16.c)
 *     _xxxReceiveMessage@4 @ 0x415B8 (_xxxReceiveMessage@4.c)
 *     _xxxDispatchMessage@4 @ 0x45B62 (_xxxDispatchMessage@4.c)
 *     _xxxHkCallHook@16 @ 0x6B2E0 (_xxxHkCallHook@16.c)
 *     ?xxxWrapCallWindowProc@@YGJPAUtagWND@@IIJK@Z @ 0xC449A (-xxxWrapCallWindowProc@@YGJPAUtagWND@@IIJK@Z.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 */

int __stdcall SfnINOUTSTYLECHANGE(int *a1, int a2, int a3, _DWORD *a4, int a5, int a6, char a7, int a8)
{
  PKTHREAD CurrentThread; // esi
  int v9; // ebx
  int *ThreadWin32Thread; // eax
  int v12; // edi
  int v13; // ebx
  int *v14; // eax
  int v15; // ebx
  _DWORD *v16; // eax
  int v17; // ecx
  int v18; // ecx
  PKTHREAD v19; // edi
  int v20; // esi
  _DWORD (__stdcall *v21)(PKTHREAD); // edi
  int *v22; // eax
  int DLT; // eax
  tagDomLock *DomainLockRef; // eax
  int v25; // esi
  int *v26; // eax
  int v27; // eax
  tagDomLock *v28; // eax
  _DWORD *v29; // eax
  int *v30; // ecx
  int v31; // esi
  int v32; // eax
  int *v33; // ecx
  int v34; // eax
  int v35; // ecx
  PKTHREAD v37; // [esp-4h] [ebp-94h]
  _DWORD v38[7]; // [esp+10h] [ebp-80h] BYREF
  _DWORD v39[3]; // [esp+2Ch] [ebp-64h] BYREF
  int v40; // [esp+38h] [ebp-58h]
  int v41; // [esp+3Ch] [ebp-54h]
  int v42; // [esp+40h] [ebp-50h]
  int v43; // [esp+54h] [ebp-3Ch]
  int v44; // [esp+60h] [ebp-30h]
  int v45; // [esp+64h] [ebp-2Ch]
  int v46; // [esp+68h] [ebp-28h]
  int v47; // [esp+6Ch] [ebp-24h] BYREF
  int v48; // [esp+70h] [ebp-20h]
  unsigned int v49; // [esp+74h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+78h] [ebp-18h]
  PKTHREAD v51; // [esp+98h] [ebp+8h]
  PKTHREAD v52; // [esp+98h] [ebp+8h]
  char v53; // [esp+9Bh] [ebp+Bh]
  char v54; // [esp+ABh] [ebp+1Bh]

  v49 = 0;
  v47 = 0;
  v39[2] = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  CurrentThread = KeGetCurrentThread();
  v9 = 0;
  v48 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v9 = *ThreadWin32Thread;
      v48 = *ThreadWin32Thread;
    }
  }
  if ( a1 )
    v12 = a1[5] - *(_DWORD *)(v9 + 256);
  else
    v12 = 0;
  v38[0] = v12;
  v38[1] = a2;
  v38[2] = a3;
  v38[5] = a5;
  v38[6] = a6;
  v38[3] = *a4;
  v38[4] = a4[1];
  v51 = KeGetCurrentThread();
  v13 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    v14 = (int *)PsGetThreadWin32Thread(v51);
    if ( v14 )
      v13 = *v14;
  }
  v39[0] = *(_DWORD *)(v13 + 228);
  *(_DWORD *)(v13 + 228) = v39;
  v39[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  ms_exc.registration.TryLevel = 0;
  v15 = v48;
  v16 = *(_DWORD **)(v48 + 260);
  v48 = v16[10];
  v40 = v48;
  v46 = v16[11];
  v41 = v46;
  v45 = v16[12];
  v42 = v45;
  v16[11] = v12;
  if ( a1 )
    v17 = *a1;
  else
    v17 = 0;
  *(_DWORD *)(*(_DWORD *)(v15 + 260) + 40) = v17;
  if ( a1 )
    v18 = *(_DWORD *)(a1[5] + 140);
  else
    v18 = 0;
  *(_DWORD *)(*(_DWORD *)(v15 + 260) + 48) = v18;
  ms_exc.registration.TryLevel = -2;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  v19 = KeGetCurrentThread();
  v20 = 0;
  if ( IsThreadCrossSessionAttached() )
  {
    v21 = (_DWORD (__stdcall *)(PKTHREAD))PsGetThreadWin32Thread;
  }
  else
  {
    v37 = v19;
    v21 = (_DWORD (__stdcall *)(PKTHREAD))PsGetThreadWin32Thread;
    v22 = (int *)PsGetThreadWin32Thread(v37);
    if ( v22 )
      v20 = *v22;
  }
  v54 = *(_BYTE *)(v20 + 844);
  *(_BYTE *)(v20 + 844) = 0;
  if ( (v54 & 1) != 0 )
  {
    tagObjLock::UnLockExclusive((tagObjLock *)(v20 + 216));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    tagDomLock::UnLockShared(DomainLockRef);
  }
  if ( ExIsResourceAcquiredExclusiveLite(_gpresUser) || (v53 = 1, !ExIsResourceAcquiredSharedLite(_gpresUser)) )
    v53 = 0;
  UserSessionSwitchLeaveCrit();
  EtwTraceBeginCallback(39);
  v44 = KeUserModeCallback(39, v38, 28, &v49, &v47);
  EtwTraceEndCallback(39);
  if ( v53 )
    EnterSharedCrit(0, 1);
  else
    EnterCrit(0, 1);
  v52 = KeGetCurrentThread();
  v25 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    v26 = (int *)v21(v52);
    if ( v26 )
      v25 = *v26;
  }
  if ( (v54 & 1) != 0 )
  {
    v27 = DLT_THREADINFO::getDLT();
    v28 = (tagDomLock *)GetDomainLockRef(v27);
    tagDomLock::LockShared(v28);
    tagObjLock::LockExclusive((tagObjLock *)(v25 + 216));
  }
  *(_BYTE *)(v25 + 844) = v54;
  ThreadUnlock1();
  ms_exc.registration.TryLevel = 1;
  v29 = *(_DWORD **)(v15 + 260);
  v29[10] = v48;
  v29[11] = v46;
  v29[12] = v45;
  ms_exc.registration.TryLevel = -2;
  if ( v44 >= 0 && v47 == 12 )
  {
    ms_exc.registration.TryLevel = 2;
    v30 = (int *)v49;
    if ( v49 + 4 < v49 || v49 + 4 > _MmUserProbeAddress )
      v30 = (int *)_MmUserProbeAddress;
    v31 = *v30;
    v43 = *v30;
    ms_exc.registration.TryLevel = -2;
    if ( a2 != 124 || a8 && (*(_BYTE *)(a8 + 44) & 5) != 0 || (a7 & 2) != 0 )
      return v31;
    v32 = *(_DWORD *)(_gptiCurrent + 276);
    if ( !v32 || (*(_BYTE *)(v32 + 44) & 1) == 0 || *(_DWORD **)(v32 + 52) != a4 )
    {
      ms_exc.registration.TryLevel = 3;
      v33 = *(int **)(v49 + 8);
      if ( v33 + 2 < v33 || (unsigned int)(v33 + 2) > _MmUserProbeAddress )
        v33 = (int *)_MmUserProbeAddress;
      v34 = *v33;
      v35 = v33[1];
      *a4 = v34;
      a4[1] = v35;
      ms_exc.registration.TryLevel = -2;
      return v31;
    }
  }
  return 0;
}
