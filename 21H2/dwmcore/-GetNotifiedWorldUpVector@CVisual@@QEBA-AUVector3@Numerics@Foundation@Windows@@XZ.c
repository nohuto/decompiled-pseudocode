/*
 * XREFs of ?GetNotifiedWorldUpVector@CVisual@@QEBA?AUVector3@Numerics@Foundation@Windows@@XZ @ 0x1800D61E0
 * Callers:
 *     ?IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z @ 0x1800D5E90 (-IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::GetNotifiedWorldUpVector(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 i; // rcx
  int v4; // eax

  v2 = *(_QWORD *)(a1 + 224);
  if ( (*(_DWORD *)(v2 + 4) & 0x200000) != 0 )
  {
    for ( i = v2 + 12; (*(_DWORD *)i & 0x7F000000) != 0xB000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
      ;
    *(_QWORD *)a2 = *(_QWORD *)(i + 4);
    v4 = *(_DWORD *)(i + 12);
  }
  else
  {
    v4 = 0;
    *(_QWORD *)a2 = 0LL;
  }
  *(_DWORD *)(a2 + 8) = v4;
  return a2;
}
