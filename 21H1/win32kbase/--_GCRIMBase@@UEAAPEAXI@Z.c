/*
 * XREFs of ??_GCRIMBase@@UEAAPEAXI@Z @ 0x1C01A67B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CRIMBase@@UEAA@XZ @ 0x1C0023214 (--1CRIMBase@@UEAA@XZ.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

CRIMBase *__fastcall CRIMBase::`scalar deleting destructor'(CRIMBase *this, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8

  CRIMBase::~CRIMBase(this);
  if ( (a2 & 1) != 0 && this )
    Win32FreePool((__int64)this, v4, v5);
  return this;
}
