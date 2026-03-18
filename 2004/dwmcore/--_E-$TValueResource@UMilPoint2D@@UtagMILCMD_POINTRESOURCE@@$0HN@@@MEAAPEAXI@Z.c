/*
 * XREFs of ??_E?$TValueResource@UMilPoint2D@@UtagMILCMD_POINTRESOURCE@@$0HN@@@MEAAPEAXI@Z @ 0x18016E360
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x1800A40A8 (--1CResource@@MEAA@XZ.c)
 */

CResource *__fastcall TValueResource<MilPoint2D,tagMILCMD_POINTRESOURCE,125>::`vector deleting destructor'(
        CResource *a1,
        char a2)
{
  *(_QWORD *)a1 = &TValueResource<MilPoint2D,tagMILCMD_POINTRESOURCE,125>::`vftable';
  CResource::~CResource(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
