/*
 * XREFs of ?Initialize@CImage@@EEAAJXZ @ 0x18003ED30
 * Callers:
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x18003EBE4 (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x180014F10 (-Initialize@CVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CImage::Initialize(CImage *this)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CVisual::Initialize(this);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x14u);
  else
    *((_DWORD *)this + 72) = 1;
  return v3;
}
