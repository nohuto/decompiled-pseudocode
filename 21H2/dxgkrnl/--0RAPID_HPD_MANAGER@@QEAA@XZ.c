/*
 * XREFs of ??0RAPID_HPD_MANAGER@@QEAA@XZ @ 0x1C0028184
 * Callers:
 *     ??0DXGGLOBAL@@AEAA@XZ @ 0x1C020F33C (--0DXGGLOBAL@@AEAA@XZ.c)
 * Callees:
 *     ?CheckVelocitySetting@RAPID_HPD_MANAGER@@AEAAXXZ @ 0x1C00281E8 (-CheckVelocitySetting@RAPID_HPD_MANAGER@@AEAAXXZ.c)
 */

RAPID_HPD_MANAGER *__fastcall RAPID_HPD_MANAGER::RAPID_HPD_MANAGER(RAPID_HPD_MANAGER *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 1;
  *((_DWORD *)this + 6) = 5000;
  *((_DWORD *)this + 7) = 15000;
  *((_BYTE *)this + 32) = 1;
  *(_OWORD *)((char *)this + 36) = 0LL;
  *((_DWORD *)this + 13) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  RAPID_HPD_MANAGER::CheckVelocitySetting(this);
  return this;
}
