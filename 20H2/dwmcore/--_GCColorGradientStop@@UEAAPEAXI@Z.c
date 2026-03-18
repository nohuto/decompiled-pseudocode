/*
 * XREFs of ??_GCColorGradientStop@@UEAAPEAXI@Z @ 0x1801B7C10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x1800ABB58 (--1CResource@@MEAA@XZ.c)
 */

CColorGradientStop *__fastcall CColorGradientStop::`scalar deleting destructor'(CColorGradientStop *this, char a2)
{
  CResource::~CResource(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
