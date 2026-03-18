/*
 * XREFs of ??_GHANDLE_TABLE@@UEAAPEAXI@Z @ 0x180154D80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 */

void **__fastcall HANDLE_TABLE::`scalar deleting destructor'(void **this, char a2)
{
  *this = &HANDLE_TABLE::`vftable';
  operator delete(this[3]);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
