/*
 * XREFs of ExpFreeHandleTable @ 0x1406AC130
 * Callers:
 *     ObInitProcess @ 0x1406A6448 (ObInitProcess.c)
 *     ExDupHandleTable @ 0x1406A6520 (ExDupHandleTable.c)
 *     RtlDestroyAtomTable @ 0x1406AB410 (RtlDestroyAtomTable.c)
 *     ObKillProcess @ 0x14070BCA4 (ObKillProcess.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x140966C80 (AlpcpAllocateMessageFromExtendedTables.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1402331E0 (PsReturnProcessPagedPoolQuota.c)
 *     ExpFreeLowLevelTable @ 0x1406AC258 (ExpFreeLowLevelTable.c)
 *     ExpFreeTablePagedPool @ 0x1406AC298 (ExpFreeTablePagedPool.c)
 *     ExDereferenceHandleDebugInfo @ 0x1409F8D78 (ExDereferenceHandleDebugInfo.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall ExpFreeHandleTable(_QWORD *P)
{
  struct _KPROCESS *v2; // rdi
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  _QWORD *v5; // r14
  unsigned int i; // ebp
  __int64 v7; // r8
  unsigned int j; // r12d
  _QWORD *v9; // rbp
  unsigned int v10; // r13d
  _QWORD *v11; // r15

  v2 = (struct _KPROCESS *)P[2];
  v3 = P[1] & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (P[1] & 3) != 0 )
  {
    v5 = (_QWORD *)(P[1] & 0xFFFFFFFFFFFFFFFCuLL);
    if ( (P[1] & 3) == 1 )
    {
      for ( i = 0; i < 0x200; ++i )
      {
        if ( !*v5 )
          break;
        ExpFreeLowLevelTable(v2);
        ++v5;
      }
      v7 = 4096LL;
    }
    else
    {
      for ( j = 0; j < 0x80; ++j )
      {
        v9 = (_QWORD *)*v5;
        if ( !*v5 )
          break;
        v10 = 0;
        v11 = (_QWORD *)*v5;
        do
        {
          if ( !*v11 )
            break;
          ExpFreeLowLevelTable(v2);
          ++v10;
          ++v11;
        }
        while ( v10 < 0x200 );
        ExpFreeTablePagedPool(v2, v9, 4096LL);
        ++v5;
      }
      v7 = 1024LL;
    }
    ExpFreeTablePagedPool(v2, v3, v7);
  }
  else
  {
    ExpFreeLowLevelTable(P[2]);
  }
  v4 = P[12];
  if ( v4 )
    ExDereferenceHandleDebugInfo(P, v4);
  ExFreePoolWithTag(P, 0x6274624Fu);
  if ( v2 )
    PsReturnProcessPagedPoolQuota(v2, 128LL);
}
