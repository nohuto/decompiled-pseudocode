/*
 * XREFs of rimTransformGeometry @ 0x1C017DDFC
 * Callers:
 *     rimPopulateContactFrameData @ 0x1C017CD9C (rimPopulateContactFrameData.c)
 * Callees:
 *     EtwTracePointerDeviceTransformationStart @ 0x1C0128820 (EtwTracePointerDeviceTransformationStart.c)
 *     EtwTracePointerDeviceTransformationStop @ 0x1C0128850 (EtwTracePointerDeviceTransformationStop.c)
 *     RIMApplyPTPTranslation @ 0x1C0166868 (RIMApplyPTPTranslation.c)
 *     RIMApplyTransforms @ 0x1C0166920 (RIMApplyTransforms.c)
 *     rimComputeHimetricGeometry @ 0x1C017A618 (rimComputeHimetricGeometry.c)
 */

__int64 __fastcall rimTransformGeometry(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        __int64 a2,
        unsigned int *a3,
        int a4,
        _DWORD *a5)
{
  int v8; // ebp
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8

  v8 = a2;
  EtwTracePointerDeviceTransformationStart(*a3, a2, (__int64)a3);
  if ( *((_DWORD *)a1 + 6) == 7 )
  {
    RIMApplyPTPTranslation(a1, (__int64)a3, v9, v10);
  }
  else
  {
    RIMApplyTransforms((__int64)a1, v8, (__int64)a3, a4, a5);
    rimComputeHimetricGeometry((__int64)a1, (__int64)a3, (__int64)(a3 + 8));
  }
  return EtwTracePointerDeviceTransformationStop(*a3, v11, v12);
}
