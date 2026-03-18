/*
 * XREFs of IoMmuCompareIoMmuPagePfn @ 0x1C0055120
 * Callers:
 *     IoMmuAllocatePage @ 0x1C0054F70 (IoMmuAllocatePage.c)
 *     IoMmuUpdatePfn @ 0x1C00556C0 (IoMmuUpdatePfn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoMmuCompareIoMmuPagePfn(_QWORD *a1, __int64 a2)
{
  if ( *a1 == *(_QWORD *)(a2 + 32) )
    return 0LL;
  else
    return *a1 < *(_QWORD *)(a2 + 32) ? -1 : 1;
}
