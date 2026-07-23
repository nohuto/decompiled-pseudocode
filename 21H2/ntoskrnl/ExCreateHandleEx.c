/*
 * XREFs of ExCreateHandleEx @ 0x1405E38B0
 * Callers:
 *     ObCompleteObjectDuplication @ 0x1405E36D0 (ObCompleteObjectDuplication.c)
 *     AlpcpAllocateMessageFunction @ 0x140603060 (AlpcpAllocateMessageFunction.c)
 *     RtlpInsertStringAtom @ 0x14060B34C (RtlpInsertStringAtom.c)
 *     PspAllocateThread @ 0x14063FE68 (PspAllocateThread.c)
 *     ObDuplicateObject @ 0x1406E4910 (ObDuplicateObject.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x1408C2F30 (AlpcpAllocateMessageFromExtendedTables.c)
 *     ExCreateHandle @ 0x14094C800 (ExCreateHandle.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExpAllocateHandleTableEntry @ 0x1405E39A0 (ExpAllocateHandleTableEntry.c)
 *     ExpFreeHandleTableEntry @ 0x140683A3C (ExpFreeHandleTableEntry.c)
 *     ExpSetHandleExtraInfo @ 0x14094CD48 (ExpSetHandleExtraInfo.c)
 *     ExpUpdateDebugInfo @ 0x14094CFD4 (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ExCreateHandleEx(__int64 a1, __int64 a2, int a3, int a4, _DWORD *a5)
{
  int v5; // r8d
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  _QWORD *v13; // rdi
  __int64 v15; // [rsp+20h] [rbp-28h]
  __int64 v16; // [rsp+28h] [rbp-20h]
  __int64 v17; // [rsp+58h] [rbp+10h] BYREF

  v5 = a3 & 0x1FFFFFF;
  HIDWORD(v16) = 0;
  if ( (a4 & 8) != 0 )
    v5 |= 0x2000000u;
  CurrentThread = KeGetCurrentThread();
  LODWORD(v16) = v5;
  v15 = (a2 << 16) ^ ((a4 << 17) ^ ((_DWORD)a2 << 16)) & 0xE0000 | 1;
  --CurrentThread->KernelApcDisable;
  v17 = 0LL;
  v8 = ExpAllocateHandleTableEntry(a1, &v17);
  v12 = v17;
  v13 = (_QWORD *)v8;
  if ( v8 )
  {
    v10 = (__int64)a5;
    if ( a5 && (*a5 || a5[1]) && (unsigned int)ExpSetHandleExtraInfo(a1, v17) )
    {
      ExpFreeHandleTableEntry(a1, v12, v13);
      v12 = 0LL;
    }
    else
    {
      if ( *(_QWORD *)(a1 + 96) )
        ExpUpdateDebugInfo(a1, CurrentThread, v12, 1LL);
      v13[1] = v16;
      *v13 = v15;
    }
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v9, v10, v11);
  return v12;
}
