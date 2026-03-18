/*
 * XREFs of ??_GFxString@@UEAAPEAXI@Z @ 0x1C00619F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x1C00079A0 (--1FxObject@@UEAA@XZ.c)
 */

FxString *__fastcall FxString::`scalar deleting destructor'(FxString *this, char a2, unsigned int a3)
{
  wchar_t *Buffer; // rcx
  FxString *v6; // rcx

  this->__vftable = (FxString_vtbl *)FxString::`vftable';
  Buffer = this->m_UnicodeString.Buffer;
  if ( Buffer )
    FxPoolFree((FX_POOL_TRACKER *)Buffer);
  FxObject::~FxObject(this, a2, a3);
  if ( (a2 & 1) != 0 )
  {
    v6 = (FxString *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v6 = this;
    FxPoolFree((FX_POOL_TRACKER *)v6);
  }
  return this;
}
