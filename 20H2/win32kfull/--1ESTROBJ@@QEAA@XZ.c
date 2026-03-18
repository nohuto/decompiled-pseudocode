/*
 * XREFs of ??1ESTROBJ@@QEAA@XZ @ 0x1C015DFFC
 * Callers:
 *     GreGetTextExtentW @ 0x1C0024ECC (GreGetTextExtentW.c)
 *     GreGetTextExtentExW @ 0x1C015EFE8 (GreGetTextExtentExW.c)
 *     ?GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x1C0297584 (-GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ESTROBJ::~ESTROBJ(ESTROBJ *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 58);
  if ( (v1 & 0x801) != 0 )
  {
    if ( (v1 & 1) != 0 )
    {
      FreeTmpBuffer(*((_QWORD *)this + 8));
      v1 = *((_DWORD *)this + 58);
    }
    if ( (v1 & 0x800) != 0 )
      Win32FreePool(*((_QWORD *)this + 33));
  }
}
