/*
 * XREFs of ExCreateHandleEx @ 0x14062D820
 * Callers:
 *     ObDuplicateObject @ 0x1405F51B0 (ObDuplicateObject.c)
 *     ObCompleteObjectDuplication @ 0x14062D640 (ObCompleteObjectDuplication.c)
 *     PspAllocateThread @ 0x14064B048 (PspAllocateThread.c)
 *     AlpcpAllocateMessageFunction @ 0x1406A5430 (AlpcpAllocateMessageFunction.c)
 *     RtlpInsertStringAtom @ 0x1406ACC5C (RtlpInsertStringAtom.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x1408C2DD0 (AlpcpAllocateMessageFromExtendedTables.c)
 *     ExCreateHandle @ 0x14094C630 (ExCreateHandle.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExpFreeHandleTableEntry @ 0x140619DDC (ExpFreeHandleTableEntry.c)
 *     ExpAllocateHandleTableEntry @ 0x14062D910 (ExpAllocateHandleTableEntry.c)
 *     ExpSetHandleExtraInfo @ 0x14094CB78 (ExpSetHandleExtraInfo.c)
 *     ExpUpdateDebugInfo @ 0x14094CE04 (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ExCreateHandleEx(__int64 a1, __int64 a2, int a3, int a4, _DWORD *a5)
{
  int v5; // r8d
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v8; // rax
  __int64 v9; // rbx
  _QWORD *v10; // rdi
  __int64 v12; // [rsp+20h] [rbp-28h]
  __int64 v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  v5 = a3 & 0x1FFFFFF;
  HIDWORD(v13) = 0;
  if ( (a4 & 8) != 0 )
    v5 |= 0x2000000u;
  CurrentThread = KeGetCurrentThread();
  LODWORD(v13) = v5;
  v12 = (a2 << 16) ^ ((a4 << 17) ^ ((_DWORD)a2 << 16)) & 0xE0000 | 1;
  --CurrentThread->KernelApcDisable;
  v14 = 0LL;
  v8 = ExpAllocateHandleTableEntry(a1, &v14);
  v9 = v14;
  v10 = (_QWORD *)v8;
  if ( v8 )
  {
    if ( a5 && (*a5 || a5[1]) && (unsigned int)ExpSetHandleExtraInfo(a1, v14, a5) )
    {
      ExpFreeHandleTableEntry(a1, v9, (__int64)v10);
      v9 = 0LL;
    }
    else
    {
      if ( *(_QWORD *)(a1 + 96) )
        ExpUpdateDebugInfo(a1, CurrentThread, v9, 1LL);
      v10[1] = v13;
      *v10 = v12;
    }
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v9;
}
