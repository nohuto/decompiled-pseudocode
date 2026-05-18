/*
 * XREFs of sub_18007233C @ 0x18007233C
 * Callers:
 *     sub_18007AF2C @ 0x18007AF2C (sub_18007AF2C.c)
 * Callees:
 *     sub_180012DD0 @ 0x180012DD0 (sub_180012DD0.c)
 *     sub_180013670 @ 0x180013670 (sub_180013670.c)
 */

__int64 __fastcall sub_18007233C(const void **Src, char *a2, unsigned __int64 a3)
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
        sub_180013670(Src);
    }
    else
    {
      sub_180012DD0(Src, v5 - v3);
      Src[2] = (const void *)v3;
    }
  }
  return sub_180072294(Src, a2, a3);
}
