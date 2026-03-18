/*
 * XREFs of _DeleteHrgnClip@4 @ 0x83A5C
 * Callers:
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 * Callees:
 *     _RevalidateDCE@4 @ 0x83C68 (_RevalidateDCE@4.c)
 */

int __stdcall DeleteHrgnClip(_DWORD *a1)
{
  int v1; // eax
  unsigned int v2; // eax
  bool v3; // zf
  int result; // eax

  a1[8] &= 0xFFFFFF3F;
  v1 = a1[8];
  if ( (v1 & 0x40000) != 0 )
  {
    a1[8] = v1 & 0xFFFBFFFF;
  }
  else
  {
    v2 = a1[5];
    if ( v2 > 2 )
    {
      GreMarkDeletableRgn(a1[5]);
      v2 = a1[5];
    }
    DeleteMaybeSpecialRgn(v2);
  }
  DeleteMaybeSpecialRgn(a1[6]);
  v3 = (a1[8] & 0x2000) == 0;
  a1[5] = 0;
  a1[6] = 0;
  if ( v3 )
  {
    result = a1[7];
    if ( !result )
      return result;
    result = GreSelectVisRgn(a1[1], result, 1);
    goto LABEL_8;
  }
  RevalidateDCE(a1);
  result = a1[7];
  if ( result )
  {
    result = GreDeleteObject(a1[7]);
LABEL_8:
    a1[7] = 0;
  }
  return result;
}
