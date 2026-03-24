/*
 * XREFs of ??_G?$TValueResource@UMilRectD@@UtagMILCMD_RECTDRESOURCE@@$0IL@@@MEAAPEAXI@Z @ 0x18016CAE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180042800 (--3@YAXPEAX_K@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x1800A0EAC (--1CResource@@MEAA@XZ.c)
 */

CResource *__fastcall TValueResource<MilRectD,tagMILCMD_RECTDRESOURCE,139>::`scalar deleting destructor'(
        CResource *a1,
        char a2)
{
  *(_QWORD *)a1 = &TValueResource<MilRectD,tagMILCMD_RECTDRESOURCE,139>::`vftable';
  CResource::~CResource(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
