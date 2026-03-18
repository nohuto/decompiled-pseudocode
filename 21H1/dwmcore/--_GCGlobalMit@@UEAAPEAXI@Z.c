/*
 * XREFs of ??_GCGlobalMit@@UEAAPEAXI@Z @ 0x180234110
 * Callers:
 *     ?Create@CGlobalMit@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800AE868 (-Create@CGlobalMit@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ??1CGlobalMit@@UEAA@XZ @ 0x1802340A8 (--1CGlobalMit@@UEAA@XZ.c)
 */

wil::details **__fastcall CGlobalMit::`scalar deleting destructor'(wil::details **this, char a2)
{
  CGlobalMit::~CGlobalMit(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
