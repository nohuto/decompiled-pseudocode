/*
 * XREFs of sub_18006CA6C @ 0x18006CA6C
 * Callers:
 *     sub_18007565C @ 0x18007565C (sub_18007565C.c)
 * Callees:
 *     sub_180012CF0 @ 0x180012CF0 (sub_180012CF0.c)
 *     sub_180013590 @ 0x180013590 (sub_180013590.c)
 */

__int64 __fastcall sub_18006CA6C(const void **Src, char *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v5; // rax

  v3 = (unsigned __int64)Src[2];
  v5 = (__int64)(a3 - (_QWORD)a2) >> 1;
  if ( v3 <= v5 && Src[3] != (const void *)v5 )
  {
    if ( (unsigned __int64)Src[3] >= v5 )
    {
      if ( v5 < 0x10 && (unsigned __int64)Src[3] >= 0x10 )
        sub_180013590(Src);
    }
    else
    {
      sub_180012CF0(Src, v5 - v3);
      Src[2] = (const void *)v3;
    }
  }
  return sub_18006C9C4(Src, a2, a3);
}
