/*
 * XREFs of MiCleanupPageTablePages @ 0x14030803C
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x140307B4C (MiMakeZeroedPageTablesEx.c)
 *     MmCreateShadowMapping @ 0x1407A02AC (MmCreateShadowMapping.c)
 * Callees:
 *     MiReturnSystemCharges @ 0x140237D28 (MiReturnSystemCharges.c)
 *     MiFreeLargeZeroPages @ 0x1403080A4 (MiFreeLargeZeroPages.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 */

unsigned __int64 __fastcall MiCleanupPageTablePages(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdi
  unsigned __int64 v6; // rdi

  result = MiFreeLargeZeroPages(*(_QWORD *)(a1 + 32), a1, 0LL);
  v5 = *(_QWORD *)(a1 + 40);
  if ( v5 )
  {
    result = *(_QWORD *)(a1 + 48);
    if ( result != v5 )
    {
      v6 = v5 - result;
      MiReturnCommit(*(_QWORD *)(a1 + 32), v6, v3, v4);
      result = MiReturnSystemCharges(*(_QWORD *)(a1 + 32), v6, *(_DWORD *)(a1 + 56));
    }
  }
  *(_QWORD *)(a1 + 40) = 0LL;
  return result;
}
