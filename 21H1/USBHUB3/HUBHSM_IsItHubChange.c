/*
 * XREFs of HUBHSM_IsItHubChange @ 0x1C00081C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall HUBHSM_IsItHubChange(__int64 a1)
{
  __int64 v1; // r10
  unsigned int v2; // r8d
  unsigned int v3; // r9d
  unsigned int v4; // edx
  __int64 i; // rcx
  __int64 v6; // rcx
  unsigned int v8; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 1;
  v3 = 8 * *(unsigned __int16 *)(v1 + 1130);
  v4 = _bittest64(*(const signed __int64 **)(v1 + 1144), 0) != 0 ? 2057 : 2041;
  if ( v3 > 1 )
  {
    while ( !_bittest64(*(const signed __int64 **)(v1 + 1144), v2) )
    {
LABEL_7:
      if ( ++v2 >= v3 )
        return v4;
    }
    for ( i = *(_QWORD *)(v1 + 2360); ; i = *(_QWORD *)(v6 + 248) )
    {
      v6 = i - 248;
      if ( v1 == v6 - 2112 )
        break;
      if ( *(unsigned __int16 *)(v6 + 200) == v2 )
        goto LABEL_7;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = v2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v1 + 2520),
        2u,
        3u,
        0x20u,
        (__int64)&WPP_48f9d914ad953e47f49793ea568006bd_Traceguids,
        v8);
    }
    return 2026;
  }
  return v4;
}
