/*
 * XREFs of USBCntrlGetSetBoolean @ 0x1C0031570
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0004174 (WPP_RECORDER_SF_ddd.c)
 *     USBHwGetSetByte @ 0x1C002C810 (USBHwGetSetByte.c)
 */

__int64 __fastcall USBCntrlGetSetBoolean(
        __int64 a1,
        __int64 a2,
        _BYTE *a3,
        unsigned int a4,
        signed __int8 a5,
        _DWORD *a6)
{
  __int64 v8; // rbx
  int SetByte; // eax
  __int64 v11; // rdx
  unsigned int v12; // ebx
  int v14; // [rsp+28h] [rbp-30h]
  __int64 v15; // [rsp+28h] [rbp-30h]
  int v17; // [rsp+38h] [rbp-20h]

  v8 = *(_QWORD *)(a2 + 128) + 16LL * a4;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = (unsigned __int8)*a3;
    v14 = *(_DWORD *)(a2 + 76);
    WPP_RECORDER_SF_ddd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      0xAu,
      0xCu,
      (__int64)&WPP_33bb0946d2ee3d47bfcb664d3a11472f_Traceguids,
      v14,
      a4,
      v17);
  }
  SetByte = USBHwGetSetByte(
              a1,
              *(_DWORD *)(a2 + 80),
              *(_DWORD *)(v8 + 8),
              (unsigned __int16)*(_DWORD *)(a2 + 76) - 6,
              a3,
              a5);
  v12 = SetByte;
  if ( SetByte < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v15) = SetByte;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v11,
        0xAu,
        0xDu,
        (__int64)&WPP_33bb0946d2ee3d47bfcb664d3a11472f_Traceguids,
        v15);
    }
  }
  else if ( a5 >= 0 )
  {
    *a6 = 4;
  }
  return v12;
}
