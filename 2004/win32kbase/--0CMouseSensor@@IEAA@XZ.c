/*
 * XREFs of ??0CMouseSensor@@IEAA@XZ @ 0x1C0008200
 * Callers:
 *     CMouseSensor_CreateInstance @ 0x1C00080E0 (CMouseSensor_CreateInstance.c)
 * Callees:
 *     ??0CBaseInput@@IEAA@K@Z @ 0x1C0008258 (--0CBaseInput@@IEAA@K@Z.c)
 */

CMouseSensor *__fastcall CMouseSensor::CMouseSensor(CMouseSensor *this)
{
  CBaseInput::CBaseInput(this, 1u);
  *(_QWORD *)this = &CMouseSensor::`vftable';
  *((_QWORD *)this + 161) = 0LL;
  *((_QWORD *)this + 214) = 0LL;
  *((_QWORD *)this + 215) = 0LL;
  *((_BYTE *)this + 1728) = 0;
  *((_QWORD *)this + 217) = 0LL;
  *((_QWORD *)this + 218) = 0LL;
  return this;
}
