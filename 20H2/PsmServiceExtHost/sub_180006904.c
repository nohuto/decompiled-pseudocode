/*
 * XREFs of sub_180006904 @ 0x180006904
 * Callers:
 *     sub_180006AB4 @ 0x180006AB4 (sub_180006AB4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180006904(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  _QWORD *v3; // r8
  _QWORD *v4; // r10
  _OWORD *v5; // r9
  __int64 v6; // rax

  v2 = 0;
  v3 = (_QWORD *)(a1 + 560);
  v4 = 0LL;
  while ( 1 )
  {
    if ( !v3 )
      return (unsigned int)-1073741275;
    v5 = v3 - 1;
    if ( *(v3 - 1) == a2 )
      break;
    v4 = v3;
    v3 = (_QWORD *)*v3;
  }
  if ( a2 == *(_QWORD *)(a1 + 568) )
    *(_QWORD *)(a1 + 568) = 0LL;
  if ( !v4 )
  {
    v6 = *v3;
    if ( !*v3 )
    {
      *v5 = 0LL;
      return v2;
    }
    v4 = v3;
    *v5 = *(_OWORD *)(v6 - 8);
    v5 = (_OWORD *)(v6 - 8);
  }
  *v4 = *v3;
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  return v2;
}
