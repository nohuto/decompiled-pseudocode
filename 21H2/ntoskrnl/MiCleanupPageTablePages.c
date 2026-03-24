/*
 * XREFs of MiCleanupPageTablePages @ 0x1402FD2EC
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x1402FCDFC (MiMakeZeroedPageTablesEx.c)
 *     MmCreateShadowMapping @ 0x1407A00AC (MmCreateShadowMapping.c)
 * Callees:
 *     MiReturnSystemCharges @ 0x1402B9B18 (MiReturnSystemCharges.c)
 *     MiFreeLargeZeroPages @ 0x1402FD354 (MiFreeLargeZeroPages.c)
 *     MiReturnCommit @ 0x1403182A0 (MiReturnCommit.c)
 */

unsigned __int64 __fastcall MiCleanupPageTablePages(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v3; // rdi
  unsigned __int64 v4; // rdi

  result = MiFreeLargeZeroPages(*(_QWORD *)(a1 + 32), a1, 0LL);
  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 )
  {
    result = *(_QWORD *)(a1 + 48);
    if ( result != v3 )
    {
      v4 = v3 - result;
      MiReturnCommit(*(_QWORD *)(a1 + 32), v4);
      result = MiReturnSystemCharges(*(_QWORD *)(a1 + 32), v4, *(_DWORD *)(a1 + 56));
    }
  }
  *(_QWORD *)(a1 + 40) = 0LL;
  return result;
}
