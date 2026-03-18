/*
 * XREFs of ??_GDXGK_GAMMA_RAMP@@UEAAPEAXI@Z @ 0x1C0010DE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x1C0010360 (--1ReferenceCounted@@UEAA@XZ.c)
 */

DXGK_GAMMA_RAMP *__fastcall DXGK_GAMMA_RAMP::`scalar deleting destructor'(DXGK_GAMMA_RAMP *this, __int64 a2)
{
  void *v3; // rcx
  char v4; // di

  *((_DWORD *)this + 4) = 0;
  *(_QWORD *)this = &DXGK_GAMMA_RAMP::`vftable';
  v3 = (void *)*((_QWORD *)this + 4);
  v4 = a2;
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
  }
  ReferenceCounted::~ReferenceCounted(this, a2);
  if ( (v4 & 1) != 0 )
    ExFreePoolWithTag(this, 0);
  return this;
}
