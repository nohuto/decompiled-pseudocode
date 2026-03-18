/*
 * XREFs of ?ivHandlePnpOtherPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B3480
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     rimDoVirtRimDevChange @ 0x1C016D300 (rimDoVirtRimDevChange.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C01AE5FC (--1CIVSerializer@@QEAA@XZ.c)
 */

__int64 __fastcall CBaseInput::ivHandlePnpOtherPacket(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  UNICODE_STRING v6; // xmm0
  int v7; // r8d
  UNICODE_STRING String1; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v10[16]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v11; // [rsp+50h] [rbp-38h]
  __int64 v12; // [rsp+58h] [rbp-30h]
  __int64 v13; // [rsp+60h] [rbp-28h]
  __int64 v14; // [rsp+68h] [rbp-20h]
  char v15; // [rsp+70h] [rbp-18h]

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      a2,
      12,
      38,
      (__int64)&WPP_2ccd359dbff93ea23c150f58e4d81fa3_Traceguids);
  }
  v5 = *(_QWORD *)(v4 + 16);
  v11 = v4;
  v12 = 0LL;
  v13 = 0LL;
  *(_QWORD *)(v4 + 16) = v4 + (v5 & 0xFFFFFFFFFFFFFFFEuLL);
  v6 = *(UNICODE_STRING *)(v4 + 8);
  v7 = *(_DWORD *)v4;
  v14 = 0LL;
  String1 = v6;
  v15 = 1;
  rimDoVirtRimDevChange(a3, &String1, v7);
  CIVSerializer::~CIVSerializer((CIVSerializer *)v10);
  return 1LL;
}
