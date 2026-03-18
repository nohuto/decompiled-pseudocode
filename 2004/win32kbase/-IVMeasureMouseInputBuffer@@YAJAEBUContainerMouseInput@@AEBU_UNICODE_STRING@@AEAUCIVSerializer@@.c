/*
 * XREFs of ?IVMeasureMouseInputBuffer@@YAJAEBUContainerMouseInput@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C01B1EE8
 * Callers:
 *     ?SerializeContainerMouseInput@Detail@Mouse@IVRootDeliver@@YAJAEAUCIVSerializer@@AEBU_UNICODE_STRING@@_NAEBUContainerMouseInput@@@Z @ 0x1C01B9790 (-SerializeContainerMouseInput@Detail@Mouse@IVRootDeliver@@YAJAEAUCIVSerializer@@AEBU_UNICODE_STR.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z @ 0x1C01B3CB0 (-Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJPEAPEAU_IVMouseInputData@@PEBUContainerMouseInputData@@_K_N@Z @ 0x1C01B3D50 (-Serialize@CIVSerializer@@QEAAJPEAPEAU_IVMouseInputData@@PEBUContainerMouseInputData@@_K_N@Z.c)
 */

__int64 __fastcall IVMeasureMouseInputBuffer(
        const struct ContainerMouseInputData **a1,
        const struct _UNICODE_STRING *a2,
        struct CIVSerializer *a3)
{
  const struct _UNICODE_STRING *v4; // rbx
  __int64 v6; // rsi
  int v7; // edx
  int v8; // ebx

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      12,
      120,
      (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids);
  }
  v6 = *((_QWORD *)a3 + 2);
  if ( !v4->Length || (v8 = CIVSerializer::Serialize(a3, *((struct _UNICODE_STRING **)a3 + 2), v4, 1), v8 >= 0) )
    v8 = CIVSerializer::Serialize(a3, (struct _IVMouseInputData **)(v6 + 24), *a1, *((unsigned int *)a1 + 2), 1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v7) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      12,
      121,
      (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids);
  }
  return (unsigned int)v8;
}
