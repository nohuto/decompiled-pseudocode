/*
 * XREFs of ??_ECAnimationTriggerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01CE370
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     ??1CResourceMarshalerArray@DirectComposition@@QEAA@XZ @ 0x1C005AB94 (--1CResourceMarshalerArray@DirectComposition@@QEAA@XZ.c)
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
