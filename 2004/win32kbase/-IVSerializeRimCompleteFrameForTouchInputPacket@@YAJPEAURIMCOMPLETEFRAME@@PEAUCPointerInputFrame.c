/*
 * XREFs of ?IVSerializeRimCompleteFrameForTouchInputPacket@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame@@U_UNICODE_STRING@@HAEAUCIVSerializer@@@Z @ 0x1C01B272C
 * Callers:
 *     ?SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z @ 0x1C01B9388 (-SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z @ 0x1C01B3CB0 (-Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJPEAPEAU_IVRIMPOINTERINFONODE@@PEAUtagRIMPOINTERINFONODE@@K_K_N@Z @ 0x1C01B3E3C (-Serialize@CIVSerializer@@QEAAJPEAPEAU_IVRIMPOINTERINFONODE@@PEAUtagRIMPOINTERINFONODE@@K_K_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJPEAPEAU_IVRIMPOINTERRAWDATA@@PEAUCPointerRawData@@K_N@Z @ 0x1C01B4010 (-Serialize@CIVSerializer@@QEAAJPEAPEAU_IVRIMPOINTERRAWDATA@@PEAUCPointerRawData@@K_N@Z.c)
 */

__int64 __fastcall IVSerializeRimCompleteFrameForTouchInputPacket(
        struct RIMCOMPLETEFRAME *a1,
        struct CPointerInputFrame *a2,
        struct _UNICODE_STRING *a3,
        int a4,
        struct CIVSerializer *a5)
{
  struct CPointerInputFrame *v7; // r15
  __int64 v9; // rsi
  int v10; // edx
  int v11; // ebx
  struct CPointerRawData *v12; // r8
  bool v14; // [rsp+28h] [rbp-30h]

  v7 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      12,
      110,
      (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids);
  }
  v9 = *((_QWORD *)a5 + 2);
  v11 = CIVSerializer::Serialize(a5, (struct _UNICODE_STRING *)v9, a3, 0);
  if ( v11 >= 0 )
  {
    *(_DWORD *)(v9 + 16) = *(_DWORD *)a1;
    *(_DWORD *)(v9 + 20) = *((_DWORD *)a1 + 6);
    *(_DWORD *)(v9 + 24) = *((_DWORD *)a1 + 7);
    *(_OWORD *)(v9 + 32) = *(_OWORD *)((char *)a1 + 40);
    *(_OWORD *)(v9 + 48) = *(_OWORD *)((char *)a1 + 56);
    *(_QWORD *)(v9 + 64) = *((_QWORD *)a1 + 9);
    *(_DWORD *)(v9 + 72) = *((_DWORD *)a1 + 20);
    *(_DWORD *)(v9 + 76) = *((_DWORD *)a1 + 21);
    *(_DWORD *)(v9 + 80) = *((_DWORD *)a1 + 22);
    *(_DWORD *)(v9 + 84) = *((_DWORD *)a1 + 23);
    *(_QWORD *)(v9 + 88) = *((_QWORD *)a1 + 12);
    *(_QWORD *)(v9 + 104) = 0LL;
    *(_DWORD *)(v9 + 120) = a4 != 0;
    v12 = (struct CPointerRawData *)*((_QWORD *)v7 + 16);
    if ( !v12
      || (v11 = CIVSerializer::Serialize(a5, (struct _IVRIMPOINTERRAWDATA **)(v9 + 104), v12, *((_DWORD *)a1 + 7), 0),
          v11 >= 0) )
    {
      v11 = CIVSerializer::Serialize(
              a5,
              (struct _IVRIMPOINTERINFONODE **)(v9 + 112),
              *((struct tagRIMPOINTERINFONODE **)a1 + 15),
              *((_DWORD *)a1 + 6),
              176LL * *((unsigned int *)a1 + 6),
              v14);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v10) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      12,
      111,
      (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids);
  }
  return (unsigned int)v11;
}
