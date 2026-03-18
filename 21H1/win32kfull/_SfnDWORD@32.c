/*
 * XREFs of _SfnDWORD@32 @ 0x40E50
 * Callers:
 *     _xxxDefWindowProc@16 @ 0x16650 (_xxxDefWindowProc@16.c)
 *     ?xxxSendMessageToClient@@YGXPAUtagWND@@IIJPAUtagSMS@@HPAJ@Z @ 0x40764 (-xxxSendMessageToClient@@YGXPAUtagWND@@IIJPAUtagSMS@@HPAJ@Z.c)
 *     _xxxReceiveMessage@4 @ 0x415B8 (_xxxReceiveMessage@4.c)
 *     _xxxDispatchMessage@4 @ 0x45B62 (_xxxDispatchMessage@4.c)
 *     _xxxSendMessageCallback@36 @ 0x46062 (_xxxSendMessageCallback@36.c)
 *     _xxxHkCallHook@16 @ 0x6B2E0 (_xxxHkCallHook@16.c)
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     ?xxxWrapCallWindowProc@@YGJPAUtagWND@@IIJK@Z @ 0xC449A (-xxxWrapCallWindowProc@@YGJPAUtagWND@@IIJK@Z.c)
 *     ?_SfnINBOXSTRING@@YGJJPAUtagWND@@IIJKP6GHXZKPAUtagSMS@@@Z @ 0x19FF69 (-_SfnINBOXSTRING@@YGJJPAUtagWND@@IIJKP6GHXZKPAUtagSMS@@@Z.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall SfnDWORD(int *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // ebx
  PKTHREAD CurrentThread; // edi
  int v10; // esi
  _DWORD (__stdcall *v11)(PKTHREAD); // edi
  int *ThreadWin32Thread; // eax
  int v13; // eax
  int v14; // esi
  int *v15; // eax
  int *v16; // ecx
  _DWORD *v17; // eax
  int v18; // edx
  int v19; // esi
  int v20; // ecx
  PKTHREAD v21; // edi
  int v22; // esi
  _DWORD (__stdcall *v23)(PKTHREAD); // edi
  int *v24; // eax
  int DLT; // eax
  tagDomLock *DomainLockRef; // eax
  PKTHREAD v27; // esi
  int *v28; // eax
  int v29; // eax
  tagDomLock *v30; // eax
  _DWORD *v31; // edi
  int *v32; // ecx
  int result; // eax
  PKTHREAD v34; // [esp-4h] [ebp-84h]
  PKTHREAD v35; // [esp-4h] [ebp-84h]
  _DWORD v36[6]; // [esp+10h] [ebp-70h] BYREF
  int v37; // [esp+28h] [ebp-58h]
  int v38; // [esp+2Ch] [ebp-54h]
  int v39; // [esp+30h] [ebp-50h]
  _DWORD v40[7]; // [esp+34h] [ebp-4Ch] BYREF
  unsigned int v41; // [esp+58h] [ebp-28h] BYREF
  int v42; // [esp+5Ch] [ebp-24h] BYREF
  int v43; // [esp+60h] [ebp-20h]
  int v44; // [esp+64h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+68h] [ebp-18h]
  char v46; // [esp+8Bh] [ebp+Bh]
  PKTHREAD v47; // [esp+8Ch] [ebp+Ch]
  char v48; // [esp+93h] [ebp+13h]
  int v49; // [esp+98h] [ebp+18h]

  v8 = 0;
  v41 = 0;
  v42 = 0;
  v40[2] = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  CurrentThread = KeGetCurrentThread();
  v10 = 0;
  v44 = 0;
  if ( IsThreadCrossSessionAttached() )
  {
    v11 = (_DWORD (__stdcall *)(PKTHREAD))PsGetThreadWin32Thread;
  }
  else
  {
    v34 = CurrentThread;
    v11 = (_DWORD (__stdcall *)(PKTHREAD))PsGetThreadWin32Thread;
    ThreadWin32Thread = (int *)PsGetThreadWin32Thread(v34);
    if ( ThreadWin32Thread )
    {
      v10 = *ThreadWin32Thread;
      v44 = *ThreadWin32Thread;
    }
  }
  if ( a1 )
  {
    v13 = a1[5] - *(_DWORD *)(v10 + 256);
    v43 = v13;
  }
  else
  {
    v13 = 0;
    v43 = 0;
  }
  v36[0] = v13;
  v36[1] = a2;
  v36[2] = a3;
  v36[3] = a4;
  v36[4] = a5;
  v36[5] = a6;
  v47 = KeGetCurrentThread();
  v14 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    v15 = (int *)v11(v47);
    if ( v15 )
      v14 = *v15;
  }
  v40[0] = *(_DWORD *)(v14 + 228);
  *(_DWORD *)(v14 + 228) = v40;
  v16 = a1;
  v40[1] = a1;
  if ( a1 )
  {
    HMLockObject(a1);
    v16 = a1;
  }
  ms_exc.registration.TryLevel = 0;
  v17 = *(_DWORD **)(v44 + 260);
  v37 = v17[10];
  v38 = v17[11];
  v39 = v17[12];
  v17[11] = v43;
  v18 = 0;
  if ( v16 )
    v18 = *v16;
  v19 = v44;
  *(_DWORD *)(*(_DWORD *)(v44 + 260) + 40) = v18;
  if ( v16 )
    v20 = *(_DWORD *)(v16[5] + 140);
  else
    v20 = 0;
  *(_DWORD *)(*(_DWORD *)(v19 + 260) + 48) = v20;
  ms_exc.registration.TryLevel = -2;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  v21 = KeGetCurrentThread();
  v22 = 0;
  if ( IsThreadCrossSessionAttached() )
  {
    v23 = (_DWORD (__stdcall *)(PKTHREAD))PsGetThreadWin32Thread;
  }
  else
  {
    v35 = v21;
    v23 = (_DWORD (__stdcall *)(PKTHREAD))PsGetThreadWin32Thread;
    v24 = (int *)PsGetThreadWin32Thread(v35);
    if ( v24 )
      v22 = *v24;
  }
  v48 = *(_BYTE *)(v22 + 844);
  *(_BYTE *)(v22 + 844) = 0;
  if ( (v48 & 1) != 0 )
  {
    tagObjLock::UnLockExclusive((tagObjLock *)(v22 + 216));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    tagDomLock::UnLockShared(DomainLockRef);
  }
  if ( ExIsResourceAcquiredExclusiveLite(_gpresUser) || (v46 = 1, !ExIsResourceAcquiredSharedLite(_gpresUser)) )
    v46 = 0;
  UserSessionSwitchLeaveCrit();
  EtwTraceBeginCallback(2);
  v49 = KeUserModeCallback(2, v36, 24, &v41, &v42);
  EtwTraceEndCallback(2);
  if ( v46 )
    EnterSharedCrit(0, 1);
  else
    EnterCrit(0, 1);
  v27 = KeGetCurrentThread();
  if ( !IsThreadCrossSessionAttached() )
  {
    v28 = (int *)v23(v27);
    if ( v28 )
      v8 = *v28;
  }
  if ( (v48 & 1) != 0 )
  {
    v29 = DLT_THREADINFO::getDLT();
    v30 = (tagDomLock *)GetDomainLockRef(v29);
    tagDomLock::LockShared(v30);
    tagObjLock::LockExclusive((tagObjLock *)(v8 + 216));
  }
  *(_BYTE *)(v8 + 844) = v48;
  ThreadUnlock1();
  ms_exc.registration.TryLevel = 1;
  v31 = (_DWORD *)(*(_DWORD *)(v44 + 260) + 40);
  *v31++ = v37;
  *v31 = v38;
  v31[1] = v39;
  ms_exc.registration.TryLevel = -2;
  if ( v49 < 0 || v42 != 12 )
    return 0;
  ms_exc.registration.TryLevel = 2;
  v32 = (int *)v41;
  if ( v41 + 4 < v41 || v41 + 4 > _MmUserProbeAddress )
    v32 = (int *)_MmUserProbeAddress;
  result = *v32;
  v40[6] = *v32;
  ms_exc.registration.TryLevel = -2;
  return result;
}
