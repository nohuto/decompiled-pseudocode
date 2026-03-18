/*
 * XREFs of ?GetNotifiedEffectiveLayoutSize@CVisual@@QEBA?AUVector2@Numerics@Foundation@Windows@@XZ @ 0x1800D64D4
 * Callers:
 *     ?IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z @ 0x1800D5E90 (-IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CVisual::GetNotifiedEffectiveLayoutSize(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 i; // rcx
  __int64 v4; // rax

  v2 = *(_QWORD *)(a1 + 224);
  if ( (*(_DWORD *)(v2 + 4) & 0x800000) != 0 )
  {
    for ( i = v2 + 12; (*(_DWORD *)i & 0x7F000000) != 0x9000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
      ;
    v4 = *(_QWORD *)(i + 4);
  }
  else
  {
    v4 = 0LL;
  }
  *a2 = v4;
  return a2;
}
