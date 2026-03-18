/*
 * XREFs of ??_GCTransformGroupMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01D0E20
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     ??1CResourceMarshalerArray@DirectComposition@@QEAA@XZ @ 0x1C009A8B4 (--1CResourceMarshalerArray@DirectComposition@@QEAA@XZ.c)
 */

DirectComposition::CTransformGroupMarshaler *__fastcall DirectComposition::CTransformGroupMarshaler::`scalar deleting destructor'(
        DirectComposition::CTransformGroupMarshaler *this)
{
  char v2; // r9

  DirectComposition::CResourceMarshalerArray::~CResourceMarshalerArray((DirectComposition::CTransformGroupMarshaler *)((char *)this + 72));
  if ( (v2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
