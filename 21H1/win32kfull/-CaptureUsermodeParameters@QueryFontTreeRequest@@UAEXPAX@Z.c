/*
 * XREFs of ?CaptureUsermodeParameters@QueryFontTreeRequest@@UAEXPAX@Z @ 0x8CD52
 * Callers:
 *     <none>
 * Callees:
 *     ?CaptureGlyphSet@QueryFontTreeRequest@@AAEXXZ @ 0x8D1AE (-CaptureGlyphSet@QueryFontTreeRequest@@AAEXXZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ?CaptureKerningPairs@QueryFontTreeRequest@@AAEXXZ @ 0x24AA6E (-CaptureKerningPairs@QueryFontTreeRequest@@AAEXXZ.c)
 */

void __thiscall QueryFontTreeRequest::CaptureUsermodeParameters(QueryFontTreeRequest *this, _DWORD *a2)
{
  _DWORD *v2; // esi

  v2 = (_DWORD *)a2[4];
  *((_DWORD *)this + 13) = a2[5];
  if ( v2 == *((_DWORD **)this + 12) )
  {
    **((_DWORD **)this + 10) = *v2;
    if ( *((_DWORD *)this + 9) == 2 )
    {
      QueryFontTreeRequest::CaptureKerningPairs(this);
    }
    else if ( *((_DWORD *)this + 9) == 3 )
    {
      QueryFontTreeRequest::CaptureGlyphSet(this);
    }
  }
}
