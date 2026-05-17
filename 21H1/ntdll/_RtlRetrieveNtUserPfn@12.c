/*
 * XREFs of _RtlRetrieveNtUserPfn@12 @ 0x4B2F4A20
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

int __stdcall RtlRetrieveNtUserPfn(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  if ( LdrParentRtlRetrieveNtUserPfn )
    return LdrParentRtlRetrieveNtUserPfn(LdrParentRtlRetrieveNtUserPfn, a1, a2, a3);
  if ( !byte_4B3A91D8 )
    return -1073741811;
  *a1 = &NtDllUserStubs;
  *a2 = &off_4B281508;
  *a3 = &off_4B2815C8;
  return 0;
}
