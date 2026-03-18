/*
 * XREFs of ?IVDeSerializeIVTouchInputPacket@@YAJPEAU_IVTouchInputPacket@@AEAUCIVSerializer@@@Z @ 0x1C01AF804
 * Callers:
 *     ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B3BC0 (-ivHandleTouchInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     ?Deserialize@CIVSerializer@@QEAAJPEAPEAG@Z @ 0x1C01AF270 (-Deserialize@CIVSerializer@@QEAAJPEAPEAG@Z.c)
 *     ?Deserialize@CIVSerializer@@QEAAJPEAPEAU_IVRIMPOINTERRAWDATA@@@Z @ 0x1C01AF348 (-Deserialize@CIVSerializer@@QEAAJPEAPEAU_IVRIMPOINTERRAWDATA@@@Z.c)
 */

__int64 __fastcall IVDeSerializeIVTouchInputPacket(struct _IVTouchInputPacket *a1, struct CIVSerializer *a2)
{
  struct CIVSerializer *v2; // rsi
  int v4; // edx
  int v5; // ebx

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      12,
      112,
      (__int64)&WPP_2ccd359dbff93ea23c150f58e4d81fa3_Traceguids);
  }
  *((_QWORD *)a1 + 1) = *((_QWORD *)v2 + 2) + (*((_QWORD *)a1 + 1) & 0xFFFFFFFFFFFFFFFEuLL);
  v5 = CIVSerializer::Deserialize(v2, (struct _IVRIMPOINTERRAWDATA **)a1 + 13);
  if ( v5 >= 0 )
    v5 = CIVSerializer::Deserialize(v2, (unsigned __int16 **)a1 + 14);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v4) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      12,
      113,
      (__int64)&WPP_2ccd359dbff93ea23c150f58e4d81fa3_Traceguids);
  }
  return (unsigned int)v5;
}
