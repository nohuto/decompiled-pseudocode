/*
 * XREFs of MiFreeUnusedPfnPages @ 0x1403B7CB0
 * Callers:
 *     MiInitNucleus @ 0x140AF47DC (MiInitNucleus.c)
 * Callees:
 *     KeGenericCallDpc @ 0x140217420 (KeGenericCallDpc.c)
 *     KeWaitForGate @ 0x140217454 (KeWaitForGate.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char __fastcall MiFreeUnusedPfnPages(ULONG_PTR *a1)
{
  ULONG_PTR *v1; // r15
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int SessionId; // r12d
  volatile signed __int64 *v5; // rdi
  struct _KTHREAD *v6; // rsi
  __int64 v7; // rbx
  unsigned int v8; // ecx
  $CEA84C04E3712D858E5667A507841A2A *v9; // rax
  bool v10; // zf
  int v11; // r9d
  struct _KTHREAD *v12; // r14
  unsigned int v13; // ecx
  __int64 v14; // rsi
  unsigned int v15; // edx
  int v16; // r8d
  struct _KTHREAD *v17; // rsi
  __int64 p_Process; // rbx
  unsigned int v19; // ecx
  int v20; // r8d
  _QWORD v22[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v23; // [rsp+40h] [rbp-58h]
  _BYTE v24[40]; // [rsp+48h] [rbp-50h] BYREF

  v22[0] = a1;
  v23 = 0LL;
  memset(v24, 0, 32);
  v22[1] = v24;
  v1 = a1;
  CurrentThread = KeGetCurrentThread();
  if ( !a1 )
    v1 = &MiSystemPartition;
  SessionId = -1;
  v5 = (volatile signed __int64 *)(v1 + 24);
  while ( 1 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v1 + 24), 0LL);
    if ( !a1 && *((_BYTE *)v1 + 204) )
    {
      if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v1 + 24);
      v17 = KeGetCurrentThread();
      if ( (unsigned __int64)v5 - qword_140C50630 < 0x8000000000LL )
        SessionId = MmGetSessionIdEx((__int64)v17->ApcState.Process);
      _disable();
      p_Process = (__int64)&v17[1].Process;
      v19 = 0;
      while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)v5 & 0x7FFFFFFFFFFFFFFCLL)
           || !*(_BYTE *)(p_Process + 18)
           || (*(_DWORD *)p_Process & 1) != 0
           || *(_DWORD *)(p_Process + 8) != SessionId )
      {
        ++v19;
        p_Process += 96LL;
        if ( v19 >= 6 )
          goto LABEL_66;
      }
      *(_BYTE *)(p_Process + 18) = 0;
      if ( p_Process )
      {
        if ( *(__int64 *)p_Process < 0 )
        {
          *(_BYTE *)p_Process |= 2u;
          _enable();
          KiAbEntryRemoveFromTree(p_Process);
          _disable();
        }
        v20 = *(_DWORD *)(p_Process + 88);
        *(_DWORD *)(p_Process + 88) = 0;
        *(_BYTE *)(p_Process + 17) = 0;
        *(_QWORD *)p_Process = 0LL;
        v17->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
        _enable();
        if ( v20 )
          KiAbThreadRemoveBoostsSlow((ULONG_PTR)v17, (__int64)(v1 + 24), v20);
        goto LABEL_69;
      }
LABEL_66:
      if ( (*((_DWORD *)&v17->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v17, (ULONG_PTR)(v1 + 24), SessionId, 0LL);
      _enable();
LABEL_69:
      LOBYTE(v9) = 1;
      v10 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v10 )
        goto LABEL_20;
      return (char)v9;
    }
    KeGenericCallDpc((__int64)MiFreeUnusedPfnPagesDpc, (__int64)v22);
    if ( (_DWORD)v23 != 259 )
      break;
    if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v1 + 24);
    v12 = KeGetCurrentThread();
    if ( (unsigned __int64)v5 - qword_140C50630 >= 0x8000000000LL )
      v13 = -1;
    else
      v13 = MmGetSessionIdEx((__int64)v12->ApcState.Process);
    _disable();
    v14 = (__int64)&v12[1].Process;
    v15 = 0;
    while ( (*(_QWORD *)v14 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)v5 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(v14 + 18)
         || (*(_DWORD *)v14 & 1) != 0
         || *(_DWORD *)(v14 + 8) != v13 )
    {
      ++v15;
      v14 += 96LL;
      if ( v15 >= 6 )
        goto LABEL_44;
    }
    *(_BYTE *)(v14 + 18) = 0;
    if ( v14 )
    {
      if ( *(__int64 *)v14 < 0 )
      {
        *(_BYTE *)v14 |= 2u;
        _enable();
        KiAbEntryRemoveFromTree(v14);
        _disable();
      }
      v16 = *(_DWORD *)(v14 + 88);
      *(_DWORD *)(v14 + 88) = 0;
      *(_BYTE *)(v14 + 17) = 0;
      *(_QWORD *)v14 = 0LL;
      v12->AbEntrySummary |= 1 << *(_BYTE *)(v14 + 16);
      _enable();
      if ( v16 )
        KiAbThreadRemoveBoostsSlow((ULONG_PTR)v12, (__int64)(v1 + 24), v16);
      goto LABEL_46;
    }
LABEL_44:
    if ( (*((_DWORD *)&v12->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v12, (ULONG_PTR)(v1 + 24), v13, 0LL);
    _enable();
LABEL_46:
    LOBYTE(v9) = 1;
    v10 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v10 )
    {
      v9 = &CurrentThread->152;
      if ( ($CEA84C04E3712D858E5667A507841A2A *)v9->ApcState.ApcListHead[0].Flink != v9 )
        LOBYTE(v9) = KiCheckForKernelApcDelivery();
    }
    if ( !v22[0] )
      return (char)v9;
    KeWaitForGate((__int64)&v24[8], 0x12u);
  }
  *((_BYTE *)v1 + 204) = 0;
  v1[10] = 0LL;
  if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1 + 24);
  v6 = KeGetCurrentThread();
  if ( (unsigned __int64)v5 - qword_140C50630 < 0x8000000000LL )
    SessionId = MmGetSessionIdEx((__int64)v6->ApcState.Process);
  _disable();
  v7 = (__int64)&v6[1].Process;
  v8 = 0;
  while ( (*(_QWORD *)v7 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)v5 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v7 + 18)
       || (*(_DWORD *)v7 & 1) != 0
       || *(_DWORD *)(v7 + 8) != SessionId )
  {
    ++v8;
    v7 += 96LL;
    if ( v8 >= 6 )
      goto LABEL_17;
  }
  *(_BYTE *)(v7 + 18) = 0;
  if ( !v7 )
  {
LABEL_17:
    if ( (*((_DWORD *)&v6->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v6, (ULONG_PTR)(v1 + 24), SessionId, 0LL);
    _enable();
    goto LABEL_19;
  }
  if ( *(__int64 *)v7 < 0 )
  {
    *(_BYTE *)v7 |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(v7);
    _disable();
  }
  v11 = *(_DWORD *)(v7 + 88);
  *(_DWORD *)(v7 + 88) = 0;
  *(_BYTE *)(v7 + 17) = 0;
  *(_QWORD *)v7 = 0LL;
  v6->AbEntrySummary |= 1 << *(_BYTE *)(v7 + 16);
  _enable();
  if ( v11 )
    KiAbThreadRemoveBoostsSlow((ULONG_PTR)v6, (__int64)(v1 + 24), v11);
LABEL_19:
  LOBYTE(v9) = 1;
  v10 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v10 )
  {
LABEL_20:
    v9 = &CurrentThread->152;
    if ( ($CEA84C04E3712D858E5667A507841A2A *)v9->ApcState.ApcListHead[0].Flink != v9 )
      LOBYTE(v9) = KiCheckForKernelApcDelivery();
  }
  return (char)v9;
}
