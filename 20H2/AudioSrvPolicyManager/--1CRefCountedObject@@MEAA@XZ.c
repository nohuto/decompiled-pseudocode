/*
 * XREFs of ??1CRefCountedObject@@MEAA@XZ @ 0x18001A3E4
 * Callers:
 *     _CApplication::CApplication_::_1_::dtor$0 @ 0x18003B864 (_CApplication--CApplication_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CRefCountedObject::~CRefCountedObject(CRefCountedObject *this)
{
  *(_QWORD *)this = &CRefCountedObject::`vftable';
}
