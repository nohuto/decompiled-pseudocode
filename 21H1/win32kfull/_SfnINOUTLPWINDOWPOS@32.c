/*
 * XREFs of _SfnINOUTLPWINDOWPOS@32 @ 0x411EA
 * Callers:
 *     _xxxDefWindowProc@16 @ 0x16650 (_xxxDefWindowProc@16.c)
 *     _xxxReceiveMessage@4 @ 0x415B8 (_xxxReceiveMessage@4.c)
 *     _xxxDispatchMessage@4 @ 0x45B62 (_xxxDispatchMessage@4.c)
 *     _xxxHkCallHook@16 @ 0x6B2E0 (_xxxHkCallHook@16.c)
 *     ?xxxWrapCallWindowProc@@YGJPAUtagWND@@IIJK@Z @ 0xC449A (-xxxWrapCallWindowProc@@YGJPAUtagWND@@IIJK@Z.c)
 * Callees:
 *     _IS_USERCRIT_OWNED_SHAREDONLY@0 @ 0x4159E (_IS_USERCRIT_OWNED_SHAREDONLY@0.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall SfnINOUTLPWINDOWPOS(int *a1, int a2, int a3, void *a4, int a5, int a6, char a7, int a8)
{
  int v8; // ebx
  PKTHREAD CurrentThread; // edi
  int v10; // esi
  int *ThreadWin32Thread; // eax
  int v12; // eax
  PKTHREAD v13; // edi
  int v14; // esi
  int *v15; // eax
  int *v16; // ecx
  _DWORD *v17; // eax
  int v18; // edx
  int v19; // edi
  int v20; // ecx
  int v21; // esi
  int *v22; // eax
  int DLT; // eax
  tagDomLock *DomainLockRef; // eax
  PKTHREAD v25; // esi
  int *v26; // eax
  int v27; // eax
  tagDomLock *v28; // eax
  _DWORD *v29; // edi
  int *v30; // ecx
  int v31; // edx
  int v32; // eax
  char *v33; // esi
  _BYTE v35[28]; // [esp+10h] [ebp-B0h] BYREF
  _DWORD v36[3]; // [esp+34h] [ebp-8Ch] BYREF
  _BYTE v37[28]; // [esp+40h] [ebp-80h] BYREF
  int v38; // [esp+5Ch] [ebp-64h]
  int v39; // [esp+60h] [ebp-60h]
  int v40; // [esp+64h] [ebp-5Ch]
  int v41; // [esp+68h] [ebp-58h]
  int v42; // [esp+6Ch] [ebp-54h]
  int v43; // [esp+80h] [ebp-40h]
  _DWORD v44[3]; // [esp+84h] [ebp-3Ch] BYREF
  int v45; // [esp+98h] [ebp-28h] BYREF
  int v46; // [esp+9Ch] [ebp-24h]
  unsigned int v47; // [esp+A0h] [ebp-20h] BYREF
  int v48; // [esp+A4h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+A8h] [ebp-18h]
  PKTHREAD v50; // [esp+C8h] [ebp+8h]
  bool v51; // [esp+CBh] [ebp+Bh]
  char v52; // [esp+D3h] [ebp+13h]
  int v53; // [esp+DCh] [ebp+1Ch]

  v8 = 0;
  v47 = 0;
  v45 = 0;
  v44[2] = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  CurrentThread = KeGetCurrentThread();
  v10 = 0;
  v48 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v10 = *ThreadWin32Thread;
      v48 = *ThreadWin32Thread;
    }
  }
  if ( a1 )
  {
    v12 = a1[5] - *(_DWORD *)(v10 + 256);
    v46 = v12;
  }
  else
  {
    v12 = 0;
    v46 = 0;
  }
  v36[0] = v12;
  v36[1] = a2;
  v36[2] = a3;
  qmemcpy(v37, a4, sizeof(v37));
  v38 = a5;
  v39 = a6;
  v13 = KeGetCurrentThread();
  v14 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    v15 = (int *)PsGetThreadWin32Thread(v13);
    if ( v15 )
      v14 = *v15;
  }
  v44[0] = *(_DWORD *)(v14 + 228);
  *(_DWORD *)(v14 + 228) = v44;
  v16 = a1;
  v44[1] = a1;
  if ( a1 )
  {
    HMLockObject(a1);
    v16 = a1;
  }
  ms_exc.registration.TryLevel = 0;
  v17 = *(_DWORD **)(v48 + 260);
  v40 = v17[10];
  v41 = v17[11];
  v42 = v17[12];
  v17[11] = v46;
  v18 = 0;
  if ( v16 )
    v18 = *v16;
  v19 = v48;
  *(_DWORD *)(*(_DWORD *)(v48 + 260) + 40) = v18;
  if ( v16 )
    v20 = *(_DWORD *)(v16[5] + 140);
  else
    v20 = 0;
  *(_DWORD *)(*(_DWORD *)(v19 + 260) + 48) = v20;
  ms_exc.registration.TryLevel = -2;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  v50 = KeGetCurrentThread();
  v21 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    v22 = (int *)PsGetThreadWin32Thread(v50);
    if ( v22 )
      v21 = *v22;
  }
  v52 = *(_BYTE *)(v21 + 844);
  *(_BYTE *)(v21 + 844) = 0;
  if ( (v52 & 1) != 0 )
  {
    tagObjLock::UnLockExclusive((tagObjLock *)(v21 + 216));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    tagDomLock::UnLockShared(DomainLockRef);
  }
  v51 = IS_USERCRIT_OWNED_SHAREDONLY() != 0;
  UserSessionSwitchLeaveCrit();
  EtwTraceBeginCallback(22);
  v53 = KeUserModeCallback(22, v36, 48, &v47, &v45);
  EtwTraceEndCallback(22);
  if ( v51 )
    EnterSharedCrit(0, 1);
  else
    EnterCrit(0, 1);
  v25 = KeGetCurrentThread();
  if ( !IsThreadCrossSessionAttached() )
  {
    v26 = (int *)PsGetThreadWin32Thread(v25);
    if ( v26 )
      v8 = *v26;
  }
  if ( (v52 & 1) != 0 )
  {
    v27 = DLT_THREADINFO::getDLT();
    v28 = (tagDomLock *)GetDomainLockRef(v27);
    tagDomLock::LockShared(v28);
    tagObjLock::LockExclusive((tagObjLock *)(v8 + 216));
  }
  *(_BYTE *)(v8 + 844) = v52;
  ThreadUnlock1();
  ms_exc.registration.TryLevel = 1;
  v29 = (_DWORD *)(*(_DWORD *)(v19 + 260) + 40);
  *v29++ = v40;
  *v29 = v41;
  v29[1] = v42;
  ms_exc.registration.TryLevel = -2;
  if ( v53 >= 0 && v45 == 12 )
  {
    ms_exc.registration.TryLevel = 2;
    v30 = (int *)v47;
    if ( v47 + 4 < v47 || v47 + 4 > _MmUserProbeAddress )
      v30 = (int *)_MmUserProbeAddress;
    v31 = *v30;
    v43 = *v30;
    ms_exc.registration.TryLevel = -2;
    if ( a8 && (*(_BYTE *)(a8 + 44) & 5) != 0 || (a7 & 2) != 0 )
      return v31;
    v32 = *(_DWORD *)(_gptiCurrent + 276);
    if ( !v32 || (*(_BYTE *)(v32 + 44) & 1) == 0 || *(void **)(v32 + 52) != a4 )
    {
      ms_exc.registration.TryLevel = 3;
      v33 = *(char **)(v47 + 8);
      if ( v33 + 28 < v33 || (unsigned int)(v33 + 28) > _MmUserProbeAddress )
        v33 = (char *)_MmUserProbeAddress;
      qmemcpy(v35, v33, sizeof(v35));
      qmemcpy(a4, v35, 0x1Cu);
      ms_exc.registration.TryLevel = -2;
      return v31;
    }
  }
  return 0;
}
