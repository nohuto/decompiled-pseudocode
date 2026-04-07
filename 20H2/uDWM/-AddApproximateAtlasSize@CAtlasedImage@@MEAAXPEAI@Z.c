/*
 * XREFs of ?AddApproximateAtlasSize@CAtlasedImage@@MEAAXPEAI@Z @ 0x18003A630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAtlasedImage::AddApproximateAtlasSize(CAtlasedImage *this, unsigned int *a2)
{
  _DWORD *v2; // rax

  v2 = (_DWORD *)*((_QWORD *)this + 9);
  if ( v2 )
    *a2 += ((v2[8] > 0) + 1 + (v2[9] > 0)) * ((v2[10] > 0) + 1 + (v2[11] > 0));
}
