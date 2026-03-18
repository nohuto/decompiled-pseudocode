/*
 * XREFs of ??1ESTROBJ@@QAE@XZ @ 0xF7084
 * Callers:
 *     _GreGetTextExtentW@20 @ 0xE26D8 (_GreGetTextExtentW@20.c)
 *     _GreGetTextExtentExW@32 @ 0xF83A4 (_GreGetTextExtentExW@32.c)
 *     ?GreGetStringBitmapW@@YGIPAUHDC__@@PAGIPAUSTRINGBITMAP@@I@Z @ 0x1F7DA3 (-GreGetStringBitmapW@@YGIPAUHDC__@@PAGIPAUSTRINGBITMAP@@I@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall ESTROBJ::~ESTROBJ(ESTROBJ *this)
{
  int v2; // eax

  v2 = *((_DWORD *)this + 48);
  if ( (v2 & 0x801) != 0 )
  {
    if ( (v2 & 1) != 0 )
    {
      FreeTmpBuffer(*((_DWORD *)this + 12));
      v2 = *((_DWORD *)this + 48);
    }
    if ( (v2 & 0x800) != 0 )
      Win32FreePool(*((_DWORD *)this + 56));
  }
}
