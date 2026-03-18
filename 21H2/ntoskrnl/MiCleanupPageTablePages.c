/*
 * XREFs of MiCleanupPageTablePages @ 0x14026DFF0
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x14026DC5C (MiMakeZeroedPageTablesEx.c)
 *     MmCreateShadowMapping @ 0x14082A644 (MmCreateShadowMapping.c)
 * Callees:
 *     MiReturnSystemCharges @ 0x140229640 (MiReturnSystemCharges.c)
 *     MiFreeLargeZeroPages @ 0x14026E05C (MiFreeLargeZeroPages.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 */

unsigned __int64 __fastcall MiCleanupPageTablePages(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v3; // rdi
  unsigned __int64 v4; // rdi

  result = MiFreeLargeZeroPages(*(_QWORD *)(a1 + 96), a1, 0LL);
  v3 = *(_QWORD *)(a1 + 104);
  if ( v3 )
  {
    result = *(_QWORD *)(a1 + 112);
    if ( result != v3 )
    {
      v4 = v3 - result;
      MiReturnCommit(*(_QWORD *)(a1 + 96), v4);
      result = MiReturnSystemCharges(*(_QWORD *)(a1 + 96), v4, *(_DWORD *)(a1 + 120));
    }
  }
  *(_QWORD *)(a1 + 104) = 0LL;
  return result;
}
