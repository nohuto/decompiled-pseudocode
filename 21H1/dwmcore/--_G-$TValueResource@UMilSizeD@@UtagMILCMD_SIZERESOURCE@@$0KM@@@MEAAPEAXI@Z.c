/*
 * XREFs of ??_G?$TValueResource@UMilSizeD@@UtagMILCMD_SIZERESOURCE@@$0KM@@@MEAAPEAXI@Z @ 0x18001FC70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x18007E868 (--1CResource@@MEAA@XZ.c)
 */

CResource *__fastcall TValueResource<MilSizeD,tagMILCMD_SIZERESOURCE,172>::`scalar deleting destructor'(
        CResource *a1,
        char a2)
{
  *(_QWORD *)a1 = &TValueResource<MilSizeD,tagMILCMD_SIZERESOURCE,172>::`vftable';
  CResource::~CResource(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x48uLL);
  return a1;
}
