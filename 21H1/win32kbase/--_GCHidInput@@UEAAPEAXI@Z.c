/*
 * XREFs of ??_GCHidInput@@UEAAPEAXI@Z @ 0x1C0023130
 * Callers:
 *     CHidInput_Destroy @ 0x1C00230A0 (CHidInput_Destroy.c)
 *     CKeyboardSensor_Destroy @ 0x1C00230D0 (CKeyboardSensor_Destroy.c)
 *     CMouseSensor_Destroy @ 0x1C0023100 (CMouseSensor_Destroy.c)
 * Callees:
 *     ??1CRIMBase@@UEAA@XZ @ 0x1C0023214 (--1CRIMBase@@UEAA@XZ.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

CHidInput *__fastcall CHidInput::`scalar deleting destructor'(CHidInput *this, char a2)
{
  *(_QWORD *)this = &CBaseInput::`vftable';
  CRIMBase::~CRIMBase(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
