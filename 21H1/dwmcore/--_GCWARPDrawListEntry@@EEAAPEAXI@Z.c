/*
 * XREFs of ??_GCWARPDrawListEntry@@EEAAPEAXI@Z @ 0x1801A5C10
 * Callers:
 *     ??_ECWARPDrawListEntry@@GBA@EAAPEAXI@Z @ 0x1800EDA20 (--_ECWARPDrawListEntry@@GBA@EAAPEAXI@Z.c)
 *     ??_ECWARPDrawListEntry@@GCA@EAAPEAXI@Z @ 0x1800EDA30 (--_ECWARPDrawListEntry@@GCA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CWARPDrawListEntry@@EEAA@XZ @ 0x1801A5B30 (--1CWARPDrawListEntry@@EEAA@XZ.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCWARPDrawListEntry@@@Z @ 0x180212938 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCWARPDrawListEntry@@@Z.c)
 */

CWARPDrawListEntry *__fastcall CWARPDrawListEntry::`scalar deleting destructor'(CWARPDrawListEntry *this, char a2)
{
  struct CWARPDrawListEntry *v4; // rcx
  struct CObjectCache *ObjectCache; // rax

  CWARPDrawListEntry::~CWARPDrawListEntry(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x1C8);
    }
    else
    {
      ObjectCache = CThreadContext::GetObjectCache(v4);
      if ( *((_DWORD *)ObjectCache + 1) >= *(_DWORD *)ObjectCache )
      {
        operator delete(this);
      }
      else
      {
        *(_QWORD *)this = *((_QWORD *)ObjectCache + 1);
        ++*((_DWORD *)ObjectCache + 1);
        *((_QWORD *)ObjectCache + 1) = this;
      }
    }
  }
  return this;
}
