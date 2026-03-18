/*
 * XREFs of ??9CDrawListBitmap@@QEBA_NAEBV0@@Z @ 0x1800CA648
 * Callers:
 *     _lambda_611de328e1bb62dc15d573c6a00f4466_::operator() @ 0x1800E9FF4 (_lambda_611de328e1bb62dc15d573c6a00f4466_--operator().c)
 * Callees:
 *     <none>
 */

char __fastcall CDrawListBitmap::operator!=(__int64 a1, __int64 a2)
{
  char v2; // r8
  bool v3; // zf

  v2 = 0;
  if ( *(_QWORD *)a1 )
    v3 = *(_QWORD *)a1 == *(_QWORD *)a2;
  else
    v3 = *(_QWORD *)(a1 + 8) == *(_QWORD *)(a2 + 8);
  if ( !v3 || *(_BYTE *)(a1 + 40) != *(_BYTE *)(a2 + 40) )
    return 1;
  return v2;
}
