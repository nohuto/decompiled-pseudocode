/*
 * XREFs of ?IVSerializeMouseInputBuffer@@YAJ_NAEBUContainerMouseInput@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C01B2500
 * Callers:
 *     ?SerializeContainerMouseInput@Detail@Mouse@IVRootDeliver@@YAJAEAUCIVSerializer@@AEBU_UNICODE_STRING@@_NAEBUContainerMouseInput@@@Z @ 0x1C01B9790 (-SerializeContainerMouseInput@Detail@Mouse@IVRootDeliver@@YAJAEAUCIVSerializer@@AEBU_UNICODE_STR.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z @ 0x1C01B3CB0 (-Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJPEAPEAU_IVMouseInputData@@PEBUContainerMouseInputData@@_K_N@Z @ 0x1C01B3D50 (-Serialize@CIVSerializer@@QEAAJPEAPEAU_IVMouseInputData@@PEBUContainerMouseInputData@@_K_N@Z.c)
 */

__int64 __fastcall IVSerializeMouseInputBuffer(
        char a1,
        const struct ContainerMouseInput *a2,
        const struct _UNICODE_STRING *a3,
        struct CIVSerializer *a4)
{
  const struct ContainerMouseInput *v6; // rdi
  __int64 v8; // rbx
  int v9; // eax
  int v10; // edx
  int v11; // esi
  int v12; // eax

  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      12,
      122,
      (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids);
  }
  v8 = *((_QWORD *)a4 + 2);
  v9 = 0;
  *(_DWORD *)(v8 + 16) = 0;
  if ( a3->Length )
  {
    v11 = CIVSerializer::Serialize(a4, (struct _UNICODE_STRING *)v8, a3, 0);
    if ( v11 < 0 )
      goto LABEL_12;
    *(_DWORD *)(v8 + 16) |= 4u;
    v9 = *(_DWORD *)(v8 + 16);
  }
  if ( a1 )
  {
    *(_DWORD *)(v8 + 16) = v9 | 2;
    *(_QWORD *)(v8 + 48) = *(_QWORD *)(*(_QWORD *)v6 + 40LL);
  }
  if ( *((_BYTE *)v6 + 20) )
  {
    *(_DWORD *)(v8 + 36) = *((_DWORD *)v6 + 3);
    v12 = *((_DWORD *)v6 + 4);
    *(_DWORD *)(v8 + 16) |= 1u;
    *(_DWORD *)(v8 + 40) = v12;
  }
  *(_DWORD *)(v8 + 32) = *((_DWORD *)v6 + 2);
  *(_QWORD *)(v8 + 24) = *(_QWORD *)v6;
  v11 = CIVSerializer::Serialize(
          a4,
          (struct _IVMouseInputData **)(v8 + 24),
          *(const struct ContainerMouseInputData **)v6,
          *((unsigned int *)v6 + 2),
          0);
LABEL_12:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v10) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      12,
      123,
      (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids);
  }
  return (unsigned int)v11;
}
