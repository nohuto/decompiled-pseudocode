/*
 * XREFs of ?IsInLayer@CDrawingContext@@QEBA_NXZ @ 0x1801774B4
 * Callers:
 *     ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z @ 0x18007389C (-DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CDrawingContext::IsInLayer(CDrawingContext *this)
{
  unsigned int v1; // r9d
  char v2; // dl
  unsigned int v3; // r8d
  _DWORD *v4; // rax

  v1 = *((_DWORD *)this + 94);
  v2 = 0;
  v3 = 0;
  if ( v1 )
  {
    while ( 1 )
    {
      v4 = 0LL;
      if ( v3 < v1 )
        v4 = (_DWORD *)(*((_QWORD *)this + 49) + 16LL * v3);
      if ( ((*v4 - 6) & 0xFFFFFFFD) == 0 )
        break;
      if ( ++v3 >= v1 )
        return v2;
    }
    return 1;
  }
  return v2;
}
