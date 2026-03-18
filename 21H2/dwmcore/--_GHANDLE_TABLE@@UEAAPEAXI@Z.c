/*
 * XREFs of ??_GHANDLE_TABLE@@UEAAPEAXI@Z @ 0x1801AD490
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

void **__fastcall HANDLE_TABLE::`scalar deleting destructor'(void **this, char a2)
{
  *this = &HANDLE_TABLE::`vftable';
  DefaultHeap::Free(this[3]);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
