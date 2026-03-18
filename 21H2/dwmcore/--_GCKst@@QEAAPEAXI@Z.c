/*
 * XREFs of ??_GCKst@@QEAAPEAXI@Z @ 0x18027231C
 * Callers:
 *     ?Create@CKst@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18002E0FC (-Create@CKst@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ??1CGlobalInputManager@@UEAA@XZ @ 0x180272278 (--1CGlobalInputManager@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     ??1CKst@@QEAA@XZ @ 0x180276EB4 (--1CKst@@QEAA@XZ.c)
 */

CKst *__fastcall CKst::`scalar deleting destructor'(CKst *this)
{
  CKst::~CKst(this);
  operator delete(this);
  return this;
}
