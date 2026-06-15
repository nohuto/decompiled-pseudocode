/*
 * XREFs of ??_ECAudioMediaType@@MEAAPEAXI@Z @ 0x140050970
 * Callers:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x14000C6B0 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x14001CC7C (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001CCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void **__fastcall CAudioMediaType::`vector deleting destructor'(void **this, char a2)
{
  *this = &CAudioMediaType::`vftable';
  operator delete(this[2]);
  this[2] = 0LL;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
