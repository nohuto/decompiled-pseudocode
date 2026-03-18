/*
 * XREFs of ??_GCRIMBase@@UEAAPEAXI@Z @ 0x1C01A0A50
 * Callers:
 *     <none>
 * Callees:
 *     ??1CRIMBase@@UEAA@XZ @ 0x1C00082A4 (--1CRIMBase@@UEAA@XZ.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 */

CRIMBase *__fastcall CRIMBase::`scalar deleting destructor'(CRIMBase *this, char a2)
{
  CRIMBase::~CRIMBase(this);
  if ( (a2 & 1) != 0 && this )
    Win32FreePool((__int64)this);
  return this;
}
