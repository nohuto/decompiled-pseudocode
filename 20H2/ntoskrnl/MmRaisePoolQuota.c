/*
 * XREFs of MmRaisePoolQuota @ 0x140323070
 * Callers:
 *     <none>
 * Callees:
 *     MiFreePoolPagesLeft @ 0x14023DFEC (MiFreePoolPagesLeft.c)
 */

char __fastcall MmRaisePoolQuota(int a1)
{
  unsigned __int64 v1; // rax
  _QWORD *v2; // r9
  unsigned __int64 v3; // r10
  __int64 v4; // r11
  unsigned __int64 v5; // rcx
  char result; // al
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax

  if ( a1 == 1 )
  {
    v7 = MiFreePoolPagesLeft(6);
    v8 = v3;
    if ( v3 < 0x100000 )
      v8 = 0x100000LL;
    if ( v7 > v8 >> 12 && v3 + qword_140C4C7D8 >= qword_140C4C7D8 )
    {
      qword_140C4C7D8 += v3;
      goto LABEL_7;
    }
  }
  else
  {
    v1 = MiFreePoolPagesLeft(5);
    v5 = v3;
    if ( v3 < 0x100000 )
      v5 = 0x100000LL;
    if ( v1 > v5 >> 12 && v3 + qword_140C4C7E0 >= qword_140C4C7E0 )
    {
      qword_140C4C7E0 += v3;
LABEL_7:
      result = 1;
      *v2 = v4 + v3;
      return result;
    }
  }
  return 0;
}
