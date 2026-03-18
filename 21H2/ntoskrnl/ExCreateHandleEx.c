/*
 * XREFs of ExCreateHandleEx @ 0x1407A1CE8
 * Callers:
 *     ObCompleteObjectDuplication @ 0x14066B204 (ObCompleteObjectDuplication.c)
 *     NtCreateJobObject @ 0x140681CB0 (NtCreateJobObject.c)
 *     AlpcpAllocateMessageFunction @ 0x1406C1810 (AlpcpAllocateMessageFunction.c)
 *     RtlpInsertStringAtom @ 0x1406C5878 (RtlpInsertStringAtom.c)
 *     ExCreateHandle @ 0x1407A347C (ExCreateHandle.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x140966C80 (AlpcpAllocateMessageFromExtendedTables.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ExSetHandleAttributes @ 0x1402F3510 (ExSetHandleAttributes.c)
 *     ExpAllocateHandleTableEntry @ 0x1407A28C0 (ExpAllocateHandleTableEntry.c)
 *     ExpFreeHandleTableEntry @ 0x1407A2BDC (ExpFreeHandleTableEntry.c)
 *     ExpSetHandleExtraInfo @ 0x1409F9244 (ExpSetHandleExtraInfo.c)
 *     ExpUpdateDebugInfo @ 0x1409F92FC (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ExCreateHandleEx(__int64 a1, __int64 a2, int a3, unsigned int a4, _DWORD *a5)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v7; // rax
  __int64 v8; // rbx
  _QWORD *v9; // rsi
  __int64 v11; // [rsp+20h] [rbp-10h] BYREF
  __int64 v12; // [rsp+28h] [rbp-8h]
  __int64 v13; // [rsp+58h] [rbp+28h] BYREF

  v11 = a2 << 16;
  v12 = a3 & 0x1FFFFFF;
  ExSetHandleAttributes((__int64)&v11, a4, 15);
  CurrentThread = KeGetCurrentThread();
  v11 |= 1uLL;
  --CurrentThread->KernelApcDisable;
  v13 = 0LL;
  v7 = ExpAllocateHandleTableEntry(a1, &v13);
  v8 = v13;
  v9 = (_QWORD *)v7;
  if ( v7 )
  {
    if ( a5 && (*a5 || a5[1]) && (unsigned int)ExpSetHandleExtraInfo(a1, v13, a5) )
    {
      ExpFreeHandleTableEntry(a1, v8, v9);
      v8 = 0LL;
    }
    else
    {
      if ( *(_QWORD *)(a1 + 96) )
        ExpUpdateDebugInfo(a1, CurrentThread, v8, 1LL);
      v9[1] = v12;
      *v9 = v11;
    }
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v8;
}
