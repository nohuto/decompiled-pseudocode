/*
 * XREFs of CmpRemoveFromPreloadedHivesList @ 0x1405E0768
 * Callers:
 *     CmpCompleteUnloadKey @ 0x1405E0268 (CmpCompleteUnloadKey.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpRemoveFromPreloadedHivesList(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  _QWORD *v3; // rcx

  if ( (*(_DWORD *)(a1 + 160) & 0x400) != 0 )
  {
    v1 = a1 + 1616;
    v2 = *(_QWORD *)(a1 + 1616);
    if ( *(_QWORD *)(v2 + 8) != a1 + 1616 || (v3 = *(_QWORD **)(a1 + 1624), *v3 != v1) )
      __fastfail(3u);
    *v3 = v2;
    *(_QWORD *)(v2 + 8) = v3;
  }
}
