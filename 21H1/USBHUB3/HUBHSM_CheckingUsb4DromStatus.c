/*
 * XREFs of HUBHSM_CheckingUsb4DromStatus @ 0x1C0009A60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall HUBHSM_CheckingUsb4DromStatus(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 960);
  if ( *(int *)(v1 + 2704) >= 0 )
    return 2053LL;
  if ( (__int64)(MEMORY[0xFFFFF78000000008] - *(_QWORD *)(v1 + 2712)) <= 50000000 )
    return 2065LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(v1 + 2520), 2u, 3u, 0x34u, (__int64)&WPP_9aa0d3c30565357af50089cbd72f3b9b_Traceguids);
  return 2045LL;
}
