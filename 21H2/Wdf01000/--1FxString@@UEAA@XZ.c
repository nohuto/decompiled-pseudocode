/*
 * XREFs of ??1FxString@@UEAA@XZ @ 0x1C0027530
 * Callers:
 *     ??_GFxString@@UEAAPEAXI@Z @ 0x1C00274F0 (--_GFxString@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x1C00083A0 (--1FxObject@@UEAA@XZ.c)
 */

void __fastcall FxString::~FxString(FxString *this, unsigned int a2, unsigned int a3)
{
  wchar_t *Buffer; // rcx

  this->__vftable = (FxString_vtbl *)FxString::`vftable';
  Buffer = this->m_UnicodeString.Buffer;
  if ( Buffer )
    FxPoolFree((FX_POOL_TRACKER *)Buffer);
  FxObject::~FxObject(this, a2, a3);
}
