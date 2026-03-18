/*
 * XREFs of ExCreateHandleEx @ 0x14061D9E0
 * Callers:
 *     ObDuplicateObject @ 0x14061ECE0 (ObDuplicateObject.c)
 *     ObCompleteObjectDuplication @ 0x14066B79C (ObCompleteObjectDuplication.c)
 *     AlpcpAllocateMessageFunction @ 0x1406D2800 (AlpcpAllocateMessageFunction.c)
 *     RtlpInsertStringAtom @ 0x1406D883C (RtlpInsertStringAtom.c)
 *     PspAllocateThread @ 0x14070559C (PspAllocateThread.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x1408BE510 (AlpcpAllocateMessageFromExtendedTables.c)
 *     ExCreateHandle @ 0x140947D00 (ExCreateHandle.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExpFreeHandleTableEntry @ 0x1405F1ADC (ExpFreeHandleTableEntry.c)
 *     ExpAllocateHandleTableEntry @ 0x14061DAD0 (ExpAllocateHandleTableEntry.c)
 *     ExpSetHandleExtraInfo @ 0x140948248 (ExpSetHandleExtraInfo.c)
 *     ExpUpdateDebugInfo @ 0x1409484D4 (ExpUpdateDebugInfo.c)
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
      ExpFreeHandleTableEntry(a1, v12, (__int64)v13);
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
