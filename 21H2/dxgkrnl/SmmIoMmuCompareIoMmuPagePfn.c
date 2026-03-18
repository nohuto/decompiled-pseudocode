/*
 * XREFs of SmmIoMmuCompareIoMmuPagePfn @ 0x1C002FB30
 * Callers:
 *     SmmIoMmuAllocatePage @ 0x1C006D894 (SmmIoMmuAllocatePage.c)
 *     SmmIoMmuUpdatePfn @ 0x1C006DCC8 (SmmIoMmuUpdatePfn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmmIoMmuCompareIoMmuPagePfn(_QWORD *a1, __int64 a2)
{
  if ( *a1 == *(_QWORD *)(a2 + 32) )
    return 0LL;
  else
    return *a1 < *(_QWORD *)(a2 + 32) ? -1 : 1;
}
