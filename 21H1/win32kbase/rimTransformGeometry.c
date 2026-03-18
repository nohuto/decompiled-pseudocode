/*
 * XREFs of rimTransformGeometry @ 0x1C0183AFC
 * Callers:
 *     rimPopulateContactFrameData @ 0x1C0182A9C (rimPopulateContactFrameData.c)
 * Callees:
 *     EtwTracePointerDeviceTransformationStart @ 0x1C012E810 (EtwTracePointerDeviceTransformationStart.c)
 *     EtwTracePointerDeviceTransformationStop @ 0x1C012E840 (EtwTracePointerDeviceTransformationStop.c)
 *     RIMApplyPTPTranslation @ 0x1C016CBB8 (RIMApplyPTPTranslation.c)
 *     RIMApplyTransforms @ 0x1C016CC70 (RIMApplyTransforms.c)
 *     rimComputeHimetricGeometry @ 0x1C0180318 (rimComputeHimetricGeometry.c)
 */

__int64 __fastcall rimTransformGeometry(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        __int64 a2,
        unsigned int *a3,
        int a4,
        _DWORD *a5)
{
  int v8; // ebp
  __int64 v9; // rdx
  __int64 v10; // r8

  v8 = a2;
  EtwTracePointerDeviceTransformationStart(*a3, a2, (__int64)a3);
  if ( *((_DWORD *)a1 + 6) == 7 )
  {
    RIMApplyPTPTranslation(a1, (__int64)a3);
  }
  else
  {
    RIMApplyTransforms((__int64)a1, v8, (__int64)a3, a4, a5);
    rimComputeHimetricGeometry((__int64)a1, (__int64)a3, (__int64)(a3 + 8));
  }
  return EtwTracePointerDeviceTransformationStop(*a3, v9, v10);
}
