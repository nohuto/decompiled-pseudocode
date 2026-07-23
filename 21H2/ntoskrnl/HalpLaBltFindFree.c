/*
 * XREFs of HalpLaBltFindFree @ 0x1404DB274
 * Callers:
 *     HalpLaAllocateBlt @ 0x1404DB044 (HalpLaAllocateBlt.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall HalpLaBltFindFree(unsigned __int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rax
  _QWORD *v5; // r10
  __int64 v8; // r11
  __int64 v9; // r8
  __int64 v10; // rbx
  _QWORD *v11; // r9
  _QWORD *i; // rdx
  unsigned __int64 v13; // rcx

  v4 = *(_QWORD *)(a2 + 16);
  v5 = 0LL;
  if ( v4 == -1 )
    LODWORD(v8) = 64;
  else
    _BitScanForward64((unsigned __int64 *)&v8, v4 + 1);
  _BitScanForward64((unsigned __int64 *)&v9, a1);
  if ( (unsigned int)v9 <= (unsigned int)v8 )
  {
    v10 = *(_QWORD *)(a2 + 64);
    do
    {
      v11 = (_QWORD *)(v10 + 16LL * (unsigned int)(v9 - 12));
      for ( i = (_QWORD *)*v11; i != v11; i = (_QWORD *)*i )
      {
        v13 = i[6];
        v5 = i;
        if ( v13 >= a3 && i[8] + v13 - 1 <= a4 )
          return v5;
      }
      LODWORD(v9) = v9 + 1;
    }
    while ( (unsigned int)v9 <= (unsigned int)v8 );
  }
  return v5;
}
