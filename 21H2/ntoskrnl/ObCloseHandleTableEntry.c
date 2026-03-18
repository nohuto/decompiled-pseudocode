/*
 * XREFs of ObCloseHandleTableEntry @ 0x1407A2E10
 * Callers:
 *     ExSweepHandleTable @ 0x1407A2CB0 (ExSweepHandleTable.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     ExSweepSingleHandle @ 0x1402F3584 (ExSweepSingleHandle.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x14041AC40 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     KeRaiseUserException @ 0x14056E010 (KeRaiseUserException.c)
 *     ExDestroyHandle @ 0x1407A2B78 (ExDestroyHandle.c)
 *     ObpDecrementHandleCount @ 0x1407A2FA0 (ObpDecrementHandleCount.c)
 *     SeCloseObjectAuditAlarm @ 0x1409CAD20 (SeCloseObjectAuditAlarm.c)
 *     EtwpTraceHandle @ 0x1409E3B48 (EtwpTraceHandle.c)
 */

__int64 __fastcall ObCloseHandleTableEntry(
        __int64 a1,
        volatile signed __int64 *a2,
        _KPROCESS *a3,
        ULONG_PTR a4,
        char a5,
        char a6)
{
  unsigned __int64 v7; // r14
  unsigned __int64 v11; // r8
  char v12; // r13
  __int64 v13; // r9
  unsigned __int8 (__fastcall *v14)(_KPROCESS *, unsigned __int64, ULONG_PTR, __int64); // r10
  __int64 v15; // r15
  int v16; // eax
  int v17; // ebx
  __int64 v18; // r8
  __int64 v20; // rdx
  signed __int32 v21[8]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+30h] [rbp-88h]
  _OWORD v23[3]; // [rsp+38h] [rbp-80h] BYREF

  v7 = (*(__int64 *)a2 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
  memset(v23, 0, sizeof(v23));
  v11 = v7 + 48;
  v12 = 0;
  v13 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v7 + 24) ^ (unsigned __int64)BYTE1(v7)];
  v22 = v13;
  v14 = *(unsigned __int8 (__fastcall **)(_KPROCESS *, unsigned __int64, ULONG_PTR, __int64))(v13 + 168);
  if ( v14 )
  {
    if ( KeGetCurrentThread()->ApcState.Process != a3 )
    {
      KiStackAttachProcess(a3, 0LL, (__int64)v23, (_DWORD *)v13);
      v12 = 1;
      v14 = *(unsigned __int8 (__fastcall **)(_KPROCESS *, unsigned __int64, ULONG_PTR, __int64))(v22 + 168);
    }
    LOBYTE(v13) = a5;
    if ( !v14(a3, v7 + 48, a4, v13) )
    {
      _InterlockedExchangeAdd64(a2, 1uLL);
      _InterlockedOr(v21, 0);
      if ( *(_QWORD *)(a1 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
      KeLeaveCriticalRegion();
      if ( v12 )
        KiUnstackDetachProcess((__int64)v23, 0LL);
      return 3221226037LL;
    }
    v13 = v22;
    v11 = v7 + 48;
  }
  v15 = *(__int64 *)a2 >> 17;
  if ( (v15 & 1) != 0 && !a6 )
  {
    if ( !a5 )
      KeBugCheckEx(0x93u, a4, 0LL, 0LL, 0LL);
    _InterlockedExchangeAdd64(a2, 1uLL);
    _InterlockedOr(v21, 0);
    if ( *(_QWORD *)(a1 + 48) )
      ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
    KeLeaveCriticalRegion();
    if ( v12 )
      KiUnstackDetachProcess((__int64)v23, 0LL);
    if ( KeGetCurrentThread()->ApcStateIndex != 1
      && ((NtGlobalFlag & 0x400000) != 0
       || KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[29]
       || *(_QWORD *)(a1 + 96)) )
    {
      return KeRaiseUserException(0xC0000235);
    }
    return 3221226037LL;
  }
  if ( (xmmword_140D06910 & 0x40) != 0 )
  {
    v20 = a4;
    if ( a3 == PsInitialSystemProcess )
      v20 = a4 | 0x80000000;
    EtwpTraceHandle(4385LL, v20, v11, v13);
  }
  if ( a6 )
    v16 = ExSweepSingleHandle(a1, a2);
  else
    v16 = ExDestroyHandle(a1, a4, a2);
  v17 = v16;
  KeLeaveCriticalRegion();
  if ( (v15 & 4) != 0 )
  {
    LOBYTE(v18) = 1;
    SeCloseObjectAuditAlarm(v7 + 48, a4 & 0xFFFFFFFFFFFFFFFCuLL, v18);
  }
  ObpDecrementHandleCount((ULONG_PTR)a3);
  if ( v12 )
    KiUnstackDetachProcess((__int64)v23, 0LL);
  if ( v17 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)v7, -v17);
  ObfDereferenceObjectWithTag((PVOID)(v7 + 48), 0x6E48624Fu);
  return 0LL;
}
