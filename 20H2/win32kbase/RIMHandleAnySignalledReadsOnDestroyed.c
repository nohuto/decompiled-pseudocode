/*
 * XREFs of RIMHandleAnySignalledReadsOnDestroyed @ 0x1C0026178
 * Callers:
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C0024A7C (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 */

ULONG64 __fastcall RIMHandleAnySignalledReadsOnDestroyed(__int64 a1)
{
  ULONG64 result; // rax
  int v3; // ecx
  __int64 v4; // r9
  __int64 v5; // r8
  ULONG64 *v6; // rdx
  _QWORD *v7; // rdx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 59, (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids);
  result = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)a1 == 4 )
  {
    v3 = *(_DWORD *)(result + 272);
    if ( v3 < 0 )
    {
      v4 = *(_QWORD *)(result + 424);
      if ( (v3 & 0x2000) != 0 )
      {
        v5 = *(_QWORD *)(result + 112);
      }
      else
      {
        v5 = *(_QWORD *)(result + 432);
        if ( !v5 )
          v5 = *(_QWORD *)(result + 104);
      }
      if ( *(_DWORD *)(v4 + 656) )
      {
        v6 = *(ULONG64 **)(v4 + 672);
        if ( (unsigned __int64)v6 >= MmUserProbeAddress )
          v6 = (ULONG64 *)MmUserProbeAddress;
        result = *v6;
        if ( *v6 == v5 )
        {
          v7 = *(_QWORD **)(v4 + 672);
          result = MmUserProbeAddress;
          if ( (unsigned __int64)v7 >= MmUserProbeAddress )
            v7 = (_QWORD *)MmUserProbeAddress;
          *v7 = -1LL;
        }
      }
      else
      {
        result = *(_QWORD *)(v4 + 672);
        if ( *(_QWORD *)result == v5 )
          *(_QWORD *)result = -1LL;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 61, (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids);
  return result;
}
