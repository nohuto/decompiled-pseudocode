/*
 * XREFs of ??_EInkDevice@@UAEPAXI@Z @ 0x1ABDB7
 * Callers:
 *     ??_EInkDevice@@WBE@AEPAXI@Z @ 0xF9ACA (--_EInkDevice@@WBE@AEPAXI@Z.c)
 * Callees:
 *     ??1InkDevice@@UAE@XZ @ 0x1B0320 (--1InkDevice@@UAE@XZ.c)
 */

InkDevice *__thiscall InkDevice::`vector deleting destructor'(InkDevice *this, char a2)
{
  InkDevice::~InkDevice(this);
  if ( (a2 & 1) != 0 && this )
    Win32FreePool(this);
  return this;
}
