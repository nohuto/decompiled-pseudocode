/*
 * XREFs of ??_ECAnimationTriggerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01D06F0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     ??1CResourceMarshalerArray@DirectComposition@@QEAA@XZ @ 0x1C009A8B4 (--1CResourceMarshalerArray@DirectComposition@@QEAA@XZ.c)
 */

DirectComposition::CAnimationTriggerMarshaler *__fastcall DirectComposition::CAnimationTriggerMarshaler::`vector deleting destructor'(
        DirectComposition::CAnimationTriggerMarshaler *this)
{
  char v2; // r9

  DirectComposition::CResourceMarshalerArray::~CResourceMarshalerArray((DirectComposition::CAnimationTriggerMarshaler *)((char *)this + 80));
  if ( (v2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
