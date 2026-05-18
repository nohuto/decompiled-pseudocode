/*
 * XREFs of sub_180048FF0 @ 0x180048FF0
 * Callers:
 *     sub_1800491D4 @ 0x1800491D4 (sub_1800491D4.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_180048FF0(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rdi
  _DWORD *v5; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v4 = *a2;
  if ( *a2 )
  {
    v5 = operator new(0x18uLL);
    if ( v5 )
    {
      *(_OWORD *)v5 = 0LL;
      v5[2] = 1;
      v5[3] = 1;
      *(_QWORD *)v5 = &std::_Ref_count_resource<unsigned char *,std::default_delete<unsigned char [0]>>::`vftable';
      *((_QWORD *)v5 + 2) = v4;
    }
    *a1 = v4;
    a1[1] = v5;
    *a2 = 0LL;
  }
  return a1;
}
