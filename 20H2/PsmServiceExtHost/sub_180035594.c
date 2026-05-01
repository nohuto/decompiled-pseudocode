/*
 * XREFs of sub_180035594 @ 0x180035594
 * Callers:
 *     sub_18001B300 @ 0x18001B300 (sub_18001B300.c)
 *     sub_18001E310 @ 0x18001E310 (sub_18001E310.c)
 *     sub_18001E880 @ 0x18001E880 (sub_18001E880.c)
 *     sub_18001E9C0 @ 0x18001E9C0 (sub_18001E9C0.c)
 *     sub_18007E4D4 @ 0x18007E4D4 (sub_18007E4D4.c)
 *     sub_18007E5CC @ 0x18007E5CC (sub_18007E5CC.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_180035594(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 i; // rdx
  _QWORD *v3; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
  {
    v3 = *(_QWORD **)v1;
    if ( *(_QWORD *)v1 )
    {
      do
      {
        v1 = (unsigned __int64)v3;
        v3 = (_QWORD *)*v3;
      }
      while ( v3 );
    }
  }
  else
  {
    for ( i = *(_QWORD *)(a1 + 16); ; i = *(_QWORD *)(v1 + 16) )
    {
      v1 = i & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v1 || *(_QWORD *)v1 == a1 )
        break;
      a1 = v1;
    }
  }
  return v1;
}
