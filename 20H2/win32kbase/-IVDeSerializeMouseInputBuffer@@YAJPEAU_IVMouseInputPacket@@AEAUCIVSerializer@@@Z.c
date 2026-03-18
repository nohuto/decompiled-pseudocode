/*
 * XREFs of ?IVDeSerializeMouseInputBuffer@@YAJPEAU_IVMouseInputPacket@@AEAUCIVSerializer@@@Z @ 0x1C01AF8E4
 * Callers:
 *     ?ivHandleMouseInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B2FB0 (-ivHandleMouseInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     ?Deserialize@CIVSerializer@@QEAAJPEAPEAU_IVMouseInputData@@@Z @ 0x1C01AF290 (-Deserialize@CIVSerializer@@QEAAJPEAPEAU_IVMouseInputData@@@Z.c)
 */

__int64 __fastcall IVDeSerializeMouseInputBuffer(struct _IVMouseInputPacket *a1, struct CIVSerializer *a2)
{
  struct CIVSerializer *v2; // rdi
  int v4; // edx
  unsigned int v5; // ebx

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      12,
      124,
      (__int64)&WPP_2ccd359dbff93ea23c150f58e4d81fa3_Traceguids);
  }
  if ( (*((_DWORD *)a1 + 4) & 4) != 0 )
    *((_QWORD *)a1 + 1) = *((_QWORD *)v2 + 2) + (*((_QWORD *)a1 + 1) & 0xFFFFFFFFFFFFFFFEuLL);
  v5 = CIVSerializer::Deserialize(v2, (struct _IVMouseInputData **)a1 + 3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v4) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      12,
      125,
      (__int64)&WPP_2ccd359dbff93ea23c150f58e4d81fa3_Traceguids);
  }
  return v5;
}
