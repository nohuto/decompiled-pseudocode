/*
 * XREFs of DisplayFilter @ 0x1404B6070
 * Callers:
 *     <none>
 * Callees:
 *     DisplayBootBitmap @ 0x1403B4D50 (DisplayBootBitmap.c)
 */

int __fastcall DisplayFilter(unsigned __int8 **a1)
{
  int v1; // edx
  __int64 *v2; // rax

  if ( byte_140CF5388 )
    goto LABEL_6;
  v1 = **a1 - 46;
  if ( **a1 == 46 )
    v1 = (*a1)[1];
  if ( v1 )
  {
LABEL_6:
    byte_140CF5388 = 1;
    qword_140C50B78 = 0LL;
    LODWORD(v2) = DisplayBootBitmap(1);
  }
  else
  {
    v2 = &qword_14002EE60;
    *a1 = (unsigned __int8 *)&qword_14002EE60;
  }
  return (int)v2;
}
