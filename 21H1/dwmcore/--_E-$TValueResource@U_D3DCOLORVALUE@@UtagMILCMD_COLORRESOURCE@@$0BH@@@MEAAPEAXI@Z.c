/*
 * XREFs of ??_E?$TValueResource@U_D3DCOLORVALUE@@UtagMILCMD_COLORRESOURCE@@$0BH@@@MEAAPEAXI@Z @ 0x180170F90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x18007E868 (--1CResource@@MEAA@XZ.c)
 */

CResource *__fastcall TValueResource<_D3DCOLORVALUE,tagMILCMD_COLORRESOURCE,23>::`vector deleting destructor'(
        CResource *a1,
        char a2)
{
  *(_QWORD *)a1 = &TValueResource<_D3DCOLORVALUE,tagMILCMD_COLORRESOURCE,23>::`vftable';
  CResource::~CResource(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
