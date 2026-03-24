/*
 * XREFs of VidSchiProcessSuspendContextCompletedDpc @ 0x1C003B88C
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C0006AC0 (VidSchDdiNotifyDpc.c)
 *     VidSchDdiNotifyDpcWorker @ 0x1C002EE08 (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0011F60 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00129FC (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C0013758 (VidSchiSignalRegisteredEvent.c)
 *     memset @ 0x1C0018EC0 (memset.c)
 *     ?VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C00396E8 (-VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 */

void __fastcall VidSchiProcessSuspendContextCompletedDpc(PSLIST_ENTRY ListEntry)
{
  struct _SLIST_ENTRY *Next; // rsi
  unsigned __int64 v2; // rdi
  struct _SLIST_ENTRY *v3; // r14
  __int64 v4; // r15
  __int64 v5; // rbp
  _DWORD *v6; // rbx
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  _QWORD *v10; // rax
  _QWORD v11[4]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v12; // [rsp+40h] [rbp-28h]

  Next = ListEntry[2].Next;
  v2 = *((_QWORD *)&ListEntry[2].Next + 1);
  v3 = Next[1].Next;
  v4 = *((_QWORD *)&Next->Next + 1);
  v5 = *((_QWORD *)&v3[1].Next + 1);
  ExpInterlockedPushEntrySList((PSLIST_HEADER)&v3[502], ListEntry);
  v12 = 256;
  v11[0] = v5 + 1712;
  AcquireSpinLock::Acquire((Acquire *)v11);
  v6 = (_DWORD *)(*((_QWORD *)&v3[11].Next + 1) + 112LL * HIDWORD(v3[12].Next));
  memset(v6, 0, 0x70uLL);
  HIDWORD(v3[12].Next) = (HIDWORD(v3[12].Next) + 1) & (LODWORD(v3[12].Next) - 1);
  *v6 = 12;
  *((_QWORD *)v6 + 2) = Next;
  *(struct _SLIST_ENTRY *)(v6 + 6) = Next[10];
  *((_QWORD *)v6 + 5) = v2;
  v8 = *((_QWORD *)&Next[10].Next + 1);
  if ( v2 != v8 )
  {
    v9 = (unsigned __int64)Next[10].Next;
    if ( v2 > v9 )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, v7);
      v10[3] = 281LL;
      v10[4] = 17LL;
      v10[5] = v2;
      v10[6] = *((_QWORD *)&Next[10].Next + 1);
      v10[7] = Next[10].Next;
      v9 = WdLogEvent5_WdCriticalError(v10);
      __debugbreak();
    }
    if ( v2 >= v8 )
    {
      *((_QWORD *)&Next[10].Next + 1) = v2;
      if ( v2 == v9 )
      {
        --*(_DWORD *)(v5 + 64);
        VidSchiSignalRegisteredEvent(v5, (struct _KEVENT **)(v4 + 168));
      }
    }
  }
  VidSchiUpdateHwSchRunningTime((struct _VIDSCH_NODE *)v3);
  AcquireSpinLock::Release((AcquireSpinLock *)v11);
}
