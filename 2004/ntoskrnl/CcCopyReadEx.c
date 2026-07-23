/*
 * XREFs of CcCopyReadEx @ 0x14022EBC0
 * Callers:
 *     CcCopyRead @ 0x14070F1D0 (CcCopyRead.c)
 *     CcFastCopyRead @ 0x140864160 (CcFastCopyRead.c)
 *     FsRtlCopyRead @ 0x140887520 (FsRtlCopyRead.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14027A2C4 (IoDiskIoAttributionDereference.c)
 *     IoReferenceIoAttributionFromThread @ 0x1402C83D8 (IoReferenceIoAttributionFromThread.c)
 *     CcScheduleReadAheadEx @ 0x1402C8600 (CcScheduleReadAheadEx.c)
 *     CcUpdateSharedCacheMapFlag @ 0x140320EF0 (CcUpdateSharedCacheMapFlag.c)
 *     RtlRaiseStatus @ 0x1403281A0 (RtlRaiseStatus.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     CcMapAndCopyFromCache @ 0x1405FCB10 (CcMapAndCopyFromCache.c)
 */

__int64 __fastcall CcCopyReadEx(
        _QWORD *Object,
        __int64 *a2,
        unsigned int a3,
        unsigned __int8 a4,
        void *a5,
        _DWORD *a6,
        __int64 a7)
{
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v10; // r11d
  __int64 v11; // r13
  _DWORD *v12; // rdx
  unsigned __int8 v13; // di
  __int64 v14; // rsi
  void *v15; // r15
  __int64 v16; // r12
  unsigned int v17; // eax
  __int64 v18; // r10
  __int64 v19; // rax
  _DWORD *v20; // rax
  __int64 v22; // [rsp+40h] [rbp-68h] BYREF
  _DWORD *v23; // [rsp+48h] [rbp-60h]
  struct _KTHREAD *v24; // [rsp+50h] [rbp-58h]
  struct _KTHREAD *v25; // [rsp+58h] [rbp-50h]
  struct _KTHREAD *v26; // [rsp+60h] [rbp-48h]
  unsigned __int8 v27; // [rsp+B0h] [rbp+8h]
  __int64 v28; // [rsp+B8h] [rbp+10h] BYREF
  unsigned int v29; // [rsp+C0h] [rbp+18h]

  v29 = a3;
  LODWORD(v28) = 0;
  CurrentThread = KeGetCurrentThread();
  v10 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
  if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    v10 = 0;
  if ( v10 < 2 && CurrentThread == KeGetCurrentThread() && LODWORD(CurrentThread[1].Timer.TimerListEntry.Flink) )
    v10 = 2;
  v22 = 0LL;
  v11 = *(_QWORD *)(Object[5] + 8LL);
  v12 = (_DWORD *)Object[6];
  v23 = v12;
  v13 = 1;
  if ( v10 )
    v13 = a4;
  v14 = a3;
  if ( a3 + *a2 > *(_QWORD *)(v11 + 8) )
    KeBugCheckEx(0x34u, 0x273uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v15 = a5;
  if ( !a5 )
    RtlRaiseStatus(-1073741592);
  v16 = a7;
  if ( (*v12 & 0x20000) != 0 )
  {
    CcScheduleReadAheadEx(Object);
    v12 = v23;
    a3 = v29;
  }
  v17 = 11988;
  if ( !v13 )
    v17 = 11984;
  __incgsdword(v17);
  v24 = KeGetCurrentThread();
  v24[1].Timer.DueTime.HighPart = 0;
  if ( v16 )
  {
    v25 = KeGetCurrentThread();
    if ( (struct _KTHREAD *)v16 != v25 )
    {
      IoReferenceIoAttributionFromThread(v16, &v22);
      v12 = v23;
      a3 = v29;
    }
  }
  v27 = CcMapAndCopyFromCache((int)Object, *a2, a3, v13, v15, (__int64)&v28, (*v12 >> 18) & 7, v22);
  if ( v27 )
  {
    v26 = KeGetCurrentThread();
    __addgsdword(0x8144u, v26[1].Timer.DueTime.HighPart);
    if ( (*(_DWORD *)(v11 + 152) & 0x40000000) == 0 )
    {
      if ( (_DWORD)v28 && (*v23 & 0x20000) == 0 )
        CcScheduleReadAheadEx(Object);
      v18 = *(_QWORD *)(Object[5] + 8LL);
      v19 = Object[6];
      _InterlockedExchange64((volatile __int64 *)(v19 + 16), *(_QWORD *)(v19 + 32));
      _InterlockedExchange64((volatile __int64 *)(v19 + 24), *(_QWORD *)(v19 + 40));
      _InterlockedExchange64((volatile __int64 *)(v19 + 32), *a2);
      _InterlockedExchange64((volatile __int64 *)(v19 + 40), v14 + *a2);
      if ( (*(_DWORD *)(v18 + 152) & 0x200000) != 0
        && (unsigned int)((*(_DWORD *)(v19 + 32) >> 12) - (*(_DWORD *)(v19 + 24) >> 12)) > 1 )
      {
        CcUpdateSharedCacheMapFlag(v18, 0x200000LL, 0LL);
      }
    }
    v20 = a6;
    *a6 = 0;
    *((_QWORD *)v20 + 1) = v14;
  }
  else
  {
    __incgsdword(0x2ED8u);
  }
  if ( v22 )
    IoDiskIoAttributionDereference(v22);
  return v27;
}
