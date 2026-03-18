/*
 * XREFs of _lambda_6aad3aa5895b9deeeac484e7d6965f8a_::operator() @ 0x1C00E9BEC
 * Callers:
 *     UmfdQueryFontData @ 0x1C00E97E0 (UmfdQueryFontData.c)
 * Callees:
 *     ?Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ @ 0x1C00E9E78 (-Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     ?QueueTryResurrectPffApc@UmfdHostLifeTimeManager@@SAX_K@Z @ 0x1C02C0BFC (-QueueTryResurrectPffApc@UmfdHostLifeTimeManager@@SAX_K@Z.c)
 *     ??1?$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ @ 0x1C02DE268 (--1-$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ.c)
 *     ??1?$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ @ 0x1C02DE2A8 (--1-$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_6aad3aa5895b9deeeac484e7d6965f8a_::operator()(_QWORD *a1)
{
  _DWORD *v2; // rbx
  _QWORD *v3; // r14
  _QWORD *v4; // rbp
  _QWORD *v5; // r15
  __int64 v6; // rdi
  PSLIST_ENTRY v7; // rsi
  _DWORD *v8; // rax
  _DWORD *v9; // rdi
  _BYTE *v10; // rsi
  unsigned __int64 v12; // rax
  PSLIST_ENTRY v13; // [rsp+50h] [rbp+8h] BYREF
  _DWORD *v14; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0LL;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)a1[1] + 16LL))(*(_QWORD *)a1[1])
    || UmfdHostLifeTimeManager::s_UmfdHostResurrectionThread == KeGetCurrentThread() )
  {
    v3 = (_QWORD *)*a1;
    v4 = (_QWORD *)a1[1];
    v5 = (_QWORD *)a1[2];
    v6 = *(_QWORD *)(*a1 + 8LL);
    v7 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v6 + 16));
    if ( v7 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v6);
    }
    else
    {
      v7 = (PSLIST_ENTRY)CEventPool::CEventPoolEntry::Create();
      if ( !v7 )
      {
        v13 = 0LL;
        goto LABEL_15;
      }
    }
    v13 = v7;
    v8 = EngAllocMem(0, 0x40u, 0x676D6466u);
    v9 = v8;
    if ( v8 )
    {
      v14 = v8;
      v8[6] = 8;
      *((_QWORD *)v8 + 5) = v7;
      v8[7] = 8;
      *((_QWORD *)v8 + 2) = v8 + 14;
      *((_QWORD *)v8 + 7) = *v4;
      v8[2] = 0;
      v10 = (_BYTE *)*v3;
      if ( !*(_BYTE *)*v3 )
      {
        v8[2] = 1;
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v10 + 1, (PSLIST_ENTRY)v8);
        KeSetEvent(**((PRKEVENT **)v10 + 1), 1, 0);
        v2 = v9;
LABEL_8:
        *v5 = v2;
        return v2 == 0LL ? 0xC0000001 : 0;
      }
    }
    else
    {
      v14 = 0LL;
    }
    CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>::~CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>(&v14);
LABEL_15:
    CAutoDestroy<CEventPool::CEventPoolEntry>::~CAutoDestroy<CEventPool::CEventPoolEntry>(&v13);
    goto LABEL_8;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a1[1] + 8LL))(*(_QWORD *)a1[1]);
  UmfdHostLifeTimeManager::QueueTryResurrectPffApc(v12);
  return 3221225473LL;
}
