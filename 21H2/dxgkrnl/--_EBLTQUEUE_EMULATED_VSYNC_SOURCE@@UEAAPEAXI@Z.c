/*
 * XREFs of ??_EBLTQUEUE_EMULATED_VSYNC_SOURCE@@UEAAPEAXI@Z @ 0x1C005F8C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1BLTQUEUE_EMULATED_VSYNC_SOURCE@@UEAA@XZ @ 0x1C0300BE4 (--1BLTQUEUE_EMULATED_VSYNC_SOURCE@@UEAA@XZ.c)
 */

BLTQUEUE_EMULATED_VSYNC_SOURCE *__fastcall BLTQUEUE_EMULATED_VSYNC_SOURCE::`vector deleting destructor'(
        BLTQUEUE_EMULATED_VSYNC_SOURCE *this)
{
  void *v2; // rcx
  char v3; // dl

  BLTQUEUE_EMULATED_VSYNC_SOURCE::~BLTQUEUE_EMULATED_VSYNC_SOURCE(this);
  if ( (v3 & 1) != 0 && v2 )
    ExFreePoolWithTag(v2, 0);
  return this;
}
