/*
 * XREFs of ??_E?$TValueResource@UMilRectF@@UtagMILCMD_RECTRESOURCE@@$0IM@@@MEAAPEAXI@Z @ 0x18001DB50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180042800 (--3@YAXPEAX_K@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x1800A0EAC (--1CResource@@MEAA@XZ.c)
 */

CResource *__fastcall TValueResource<MilRectF,tagMILCMD_RECTRESOURCE,140>::`vector deleting destructor'(
        CResource *a1,
        char a2)
{
  *(_QWORD *)a1 = &TValueResource<MilRectF,tagMILCMD_RECTRESOURCE,140>::`vftable';
  CResource::~CResource(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x48uLL);
  return a1;
}
