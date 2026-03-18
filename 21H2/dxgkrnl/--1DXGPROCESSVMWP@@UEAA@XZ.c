/*
 * XREFs of ??1DXGPROCESSVMWP@@UEAA@XZ @ 0x1C0057784
 * Callers:
 *     ??_EDXGPROCESSVMWP@@UEAAPEAXI@Z @ 0x1C0057840 (--_EDXGPROCESSVMWP@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_GDXGVIRTUALMACHINE@@QEAAPEAXI@Z @ 0x1C0057884 (--_GDXGVIRTUALMACHINE@@QEAAPEAXI@Z.c)
 *     ??1DXGPROCESS@@MEAA@XZ @ 0x1C019A588 (--1DXGPROCESS@@MEAA@XZ.c)
 */

void __fastcall DXGPROCESSVMWP::~DXGPROCESSVMWP(DXGPROCESSVMWP *this, unsigned int a2)
{
  void *v3; // rcx

  *(_QWORD *)this = &DXGPROCESSVMWP::`vftable';
  v3 = (void *)*((_QWORD *)this + 76);
  if ( v3 )
    DXGVIRTUALMACHINE::`scalar deleting destructor'(v3, a2);
  DXGPROCESS::~DXGPROCESS(this);
}
