/*
 * XREFs of ?UnmapDeferredSharedSectionViews@CComposition@@IEAAXXZ @ 0x180157790
 * Callers:
 *     ??1CComposition@@MEAA@XZ @ 0x180156718 (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BC868 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

void __fastcall CComposition::UnmapDeferredSharedSectionViews(CComposition *this)
{
  __int64 v2; // rdi

  if ( *((_DWORD *)this + 170) )
  {
    v2 = 0LL;
    do
    {
      UnmapViewOfFile(*(LPCVOID *)(*((_QWORD *)this + 82) + 8 * v2));
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < *((_DWORD *)this + 170) );
    *((_DWORD *)this + 170) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 656, 8u);
  }
}
