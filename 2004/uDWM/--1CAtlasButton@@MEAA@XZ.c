/*
 * XREFs of ??1CAtlasButton@@MEAA@XZ @ 0x180015138
 * Callers:
 *     ??_GCAtlasButton@@MEAAPEAXI@Z @ 0x1800150F0 (--_GCAtlasButton@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CAtlasButton::~CAtlasButton(CAtlasButton *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx

  *(_QWORD *)this = &CAtlasButton::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 16);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 16) = 0LL;
  }
  v3 = (CBaseObject *)*((_QWORD *)this + 17);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 17) = 0LL;
  }
  CAtlasedImage::~CAtlasedImage(this);
}
