/*
 * XREFs of ??_E?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BI@@@MEAAPEAXI@Z @ 0x18016C530
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x1800ABB58 (--1CResource@@MEAA@XZ.c)
 */

CResource *__fastcall TValueResource<MilColorTransform,tagMILCMD_COLORTRANSFORMRESOURCE,24>::`vector deleting destructor'(
        CResource *a1,
        char a2)
{
  *(_QWORD *)a1 = &TValueResource<MilColorTransform,tagMILCMD_COLORTRANSFORMRESOURCE,24>::`vftable';
  CResource::~CResource(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
