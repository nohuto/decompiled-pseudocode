/*
 * XREFs of ??_GCRIMBase@@UEAAPEAXI@Z @ 0x1C019E6B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CRIMBase@@UEAA@XZ @ 0x1C0008934 (--1CRIMBase@@UEAA@XZ.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 */

CRIMBase *__fastcall CRIMBase::`scalar deleting destructor'(CRIMBase *this, char a2)
{
  CRIMBase::~CRIMBase(this);
  if ( (a2 & 1) != 0 && this )
    Win32FreePool((__int64)this);
  return this;
}
