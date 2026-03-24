/*
 * XREFs of ??_E?$TValueResource@MUtagMILCMD_FLOATRESOURCE@@$0DM@@@MEAAPEAXI@Z @ 0x18016C9A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180042800 (--3@YAXPEAX_K@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x1800A0EAC (--1CResource@@MEAA@XZ.c)
 */

CResource *__fastcall TValueResource<float,tagMILCMD_FLOATRESOURCE,60>::`vector deleting destructor'(
        CResource *a1,
        char a2)
{
  *(_QWORD *)a1 = &TValueResource<float,tagMILCMD_FLOATRESOURCE,60>::`vftable';
  CResource::~CResource(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
