/*
 * XREFs of rimNullXYPolicyUpdateStateAndApply @ 0x1C017CB20
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1C017A434 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C01809E8 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1C0180EC8 (RIMCmRemoveContactSuppressionReasons.c)
 */

__int64 __fastcall rimNullXYPolicyUpdateStateAndApply(__int64 a1, _DWORD *a2, int a3, int a4)
{
  _DWORD *v4; // rbx
  __int64 result; // rax
  unsigned int v7; // edi
  int v8; // eax
  __int64 v9; // r8
  int v10; // eax

  v4 = a2;
  if ( *(_DWORD *)(a1 + 24) == 5 )
  {
    if ( !a3 && !a4 )
      return RIMCmRemoveContactSuppressionReasons(a1, a2, 32LL);
    v7 = 2;
    if ( (a2[605] & 6) == 2 )
    {
      v7 = 32;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = *a2;
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_d(
        (_DWORD)gRimLog,
        (_DWORD)a2,
        1,
        45,
        (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids,
        v8);
    }
    v9 = v7;
    goto LABEL_15;
  }
  if ( a3 || a4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = *a2;
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_d(
        (_DWORD)gRimLog,
        (_DWORD)a2,
        1,
        46,
        (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids,
        v10);
    }
    v9 = 2LL;
LABEL_15:
    result = RIMCmAddContactSuppressionReasons(a1, v4, v9);
    v4[605] |= 0x8000u;
  }
  return result;
}
