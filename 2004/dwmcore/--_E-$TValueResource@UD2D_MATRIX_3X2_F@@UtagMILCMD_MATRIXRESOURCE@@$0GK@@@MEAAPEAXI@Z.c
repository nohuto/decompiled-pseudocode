/*
 * XREFs of ??_E?$TValueResource@UD2D_MATRIX_3X2_F@@UtagMILCMD_MATRIXRESOURCE@@$0GK@@@MEAAPEAXI@Z @ 0x18016E2C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x1800A40A8 (--1CResource@@MEAA@XZ.c)
 */

CResource *__fastcall TValueResource<D2D_MATRIX_3X2_F,tagMILCMD_MATRIXRESOURCE,106>::`vector deleting destructor'(
        CResource *a1,
        char a2)
{
  *(_QWORD *)a1 = &TValueResource<D2D_MATRIX_3X2_F,tagMILCMD_MATRIXRESOURCE,106>::`vftable';
  CResource::~CResource(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
