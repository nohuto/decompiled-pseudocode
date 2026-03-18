/*
 * XREFs of ??_GCHidInput@@UEAAPEAXI@Z @ 0x1C00081C0
 * Callers:
 *     CHidInput_Destroy @ 0x1C0008130 (CHidInput_Destroy.c)
 *     CKeyboardSensor_Destroy @ 0x1C0008160 (CKeyboardSensor_Destroy.c)
 *     CMouseSensor_Destroy @ 0x1C0008190 (CMouseSensor_Destroy.c)
 * Callees:
 *     ??1CRIMBase@@UEAA@XZ @ 0x1C00082A4 (--1CRIMBase@@UEAA@XZ.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 */

CHidInput *__fastcall CHidInput::`scalar deleting destructor'(CHidInput *this, char a2)
{
  *(_QWORD *)this = &CBaseInput::`vftable';
  CRIMBase::~CRIMBase(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
