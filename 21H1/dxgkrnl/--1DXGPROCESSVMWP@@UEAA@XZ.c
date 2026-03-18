/*
 * XREFs of ??1DXGPROCESSVMWP@@UEAA@XZ @ 0x1C0046AFC
 * Callers:
 *     ??_EDXGPROCESSVMWP@@UEAAPEAXI@Z @ 0x1C0046BC0 (--_EDXGPROCESSVMWP@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_GDXGVIRTUALMACHINE@@QEAAPEAXI@Z @ 0x1C0046C04 (--_GDXGVIRTUALMACHINE@@QEAAPEAXI@Z.c)
 *     ??1DXGPROCESS@@MEAA@XZ @ 0x1C01164F0 (--1DXGPROCESS@@MEAA@XZ.c)
 */

void __fastcall DXGPROCESSVMWP::~DXGPROCESSVMWP(DXGPROCESSVMWP *this, unsigned int a2)
{
  void *v3; // rcx

  *(_QWORD *)this = &DXGPROCESSVMWP::`vftable';
  v3 = (void *)*((_QWORD *)this + 62);
  if ( v3 )
    DXGVIRTUALMACHINE::`scalar deleting destructor'(v3, a2);
  DXGPROCESS::~DXGPROCESS(this);
}
