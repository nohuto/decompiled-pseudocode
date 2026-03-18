/*
 * XREFs of ?Deserialize@CIVSerializer@@QEAAJPEAPEAU_IVRIMPOINTERRAWDATA@@@Z @ 0x1C01B16C8
 * Callers:
 *     ?IVDeSerializeIVTouchInputPacket@@YAJPEAU_IVTouchInputPacket@@AEAUCIVSerializer@@@Z @ 0x1C01B1B84 (-IVDeSerializeIVTouchInputPacket@@YAJPEAU_IVTouchInputPacket@@AEAUCIVSerializer@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ?Deserialize@CIVSerializer@@QEAAJPEAPEAG@Z @ 0x1C01B15F0 (-Deserialize@CIVSerializer@@QEAAJPEAPEAG@Z.c)
 */

__int64 __fastcall CIVSerializer::Deserialize(CIVSerializer *this, struct _IVRIMPOINTERRAWDATA **a2)
{
  unsigned __int16 **v2; // rdi
  unsigned __int16 **v4; // rdx
  int v5; // ebx
  unsigned __int16 *i; // r8
  CIVSerializer *v7; // rcx
  __int64 v8; // r8

  v2 = (unsigned __int16 **)a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      12,
      98,
      (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids);
  }
  v5 = CIVSerializer::Deserialize(this, v2);
  if ( v5 >= 0 )
  {
    for ( i = *v2; i; i = *v4 )
    {
      v5 = CIVSerializer::Deserialize(this, (unsigned __int16 **)i + 1);
      if ( v5 < 0 )
        break;
      v5 = CIVSerializer::Deserialize(v7, (unsigned __int16 **)(v8 + 16));
      if ( v5 < 0 )
        break;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v4) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v4,
      12,
      99,
      (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids);
  }
  return (unsigned int)v5;
}
