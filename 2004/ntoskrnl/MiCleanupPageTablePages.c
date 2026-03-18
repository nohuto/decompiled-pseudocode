/*
 * XREFs of MiCleanupPageTablePages @ 0x1402E1364
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x1402509D0 (MiMakeZeroedPageTablesEx.c)
 *     MmCreateShadowMapping @ 0x140787E7C (MmCreateShadowMapping.c)
 * Callees:
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     MiFreeLargeZeroPages @ 0x1402E13CC (MiFreeLargeZeroPages.c)
 *     MiReturnSystemCharges @ 0x1403456C8 (MiReturnSystemCharges.c)
 */

__int64 __fastcall MiCleanupPageTablePages(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // rdi

  result = MiFreeLargeZeroPages(*(_QWORD *)(a1 + 32), a1, 0LL);
  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 )
  {
    result = *(_QWORD *)(a1 + 48);
    if ( result != v3 )
    {
      v4 = v3 - result;
      MiReturnCommit(*(_QWORD *)(a1 + 32), v4);
      result = MiReturnSystemCharges(*(_QWORD *)(a1 + 32), v4, *(unsigned int *)(a1 + 56));
    }
  }
  *(_QWORD *)(a1 + 40) = 0LL;
  return result;
}
