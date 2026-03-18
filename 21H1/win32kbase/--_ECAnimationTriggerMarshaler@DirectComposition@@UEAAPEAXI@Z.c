/*
 * XREFs of ??_ECAnimationTriggerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01D6670
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ??1CResourceMarshalerArray@DirectComposition@@QEAA@XZ @ 0x1C0092904 (--1CResourceMarshalerArray@DirectComposition@@QEAA@XZ.c)
 */

DirectComposition::CAnimationTriggerMarshaler *__fastcall DirectComposition::CAnimationTriggerMarshaler::`vector deleting destructor'(
        DirectComposition::CAnimationTriggerMarshaler *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  char v4; // r9

  DirectComposition::CResourceMarshalerArray::~CResourceMarshalerArray((DirectComposition::CAnimationTriggerMarshaler *)((char *)this + 80));
  if ( (v4 & 1) != 0 )
    Win32FreePool((__int64)this, v2, v3);
  return this;
}
