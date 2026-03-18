/*
 * XREFs of ??1CAtlasedRectsMesh@@MEAA@XZ @ 0x1800C40A4
 * Callers:
 *     ??_ECAtlasedRectsMesh@@MEAAPEAXI@Z @ 0x1800C4060 (--_ECAtlasedRectsMesh@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CAtlasedRectsMesh@@MEAAXXZ @ 0x18003AA60 (-UnRegisterNotifiers@CAtlasedRectsMesh@@MEAAXXZ.c)
 */

void __fastcall CAtlasedRectsMesh::~CAtlasedRectsMesh(CAtlasedRectsMesh *this)
{
  *(_QWORD *)this = &CAtlasedRectsMesh::`vftable';
  CAtlasedRectsMesh::UnRegisterNotifiers(this);
  CResource::~CResource(this);
}
