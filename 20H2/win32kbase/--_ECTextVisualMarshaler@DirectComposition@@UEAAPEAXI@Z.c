/*
 * XREFs of ??_ECTextVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01CEA40
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     ??1CVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1C005AB5C (--1CVisualMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ??1CResourceMarshalerArray@DirectComposition@@QEAA@XZ @ 0x1C005AB94 (--1CResourceMarshalerArray@DirectComposition@@QEAA@XZ.c)
 */

DirectComposition::CTextVisualMarshaler *__fastcall DirectComposition::CTextVisualMarshaler::`vector deleting destructor'(
        DirectComposition::CTextVisualMarshaler *this,
        char a2)
{
  DirectComposition::CResourceMarshalerArray::~CResourceMarshalerArray((DirectComposition::CTextVisualMarshaler *)((char *)this + 432));
  DirectComposition::CResourceMarshalerArray::~CResourceMarshalerArray((DirectComposition::CTextVisualMarshaler *)((char *)this + 400));
  DirectComposition::CResourceMarshalerArray::~CResourceMarshalerArray((DirectComposition::CTextVisualMarshaler *)((char *)this + 368));
  DirectComposition::CVisualMarshaler::~CVisualMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
