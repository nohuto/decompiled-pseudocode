/*
 * XREFs of HUBHSM_InitializingUsb4Drom @ 0x1C0009860
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall HUBHSM_InitializingUsb4Drom(__int64 a1)
{
  __int64 v1; // rbx
  __int16 v2; // cx
  int v3; // ecx
  unsigned __int16 v4; // r9
  unsigned int v6; // edi
  PVOID PoolWithTag; // rsi
  unsigned int v8; // edi

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(_WORD *)(v1 + 2678);
  if ( (v2 & 0xFFFu) < 3 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 2045LL;
    v3 = v2 & 0xFFF;
    v4 = 54;
LABEL_4:
    WPP_RECORDER_SF_d(*(_QWORD *)(v1 + 2520), 2u, 3u, v4, (__int64)&WPP_ed60294ab0b33001d37f1713c861e88d_Traceguids, v3);
    return 2045LL;
  }
  v3 = v2 & 0xFFF;
  v6 = v3 + 13;
  if ( (unsigned int)(v3 + 13) < 0xF )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 2045LL;
    v4 = 55;
    goto LABEL_4;
  }
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v6, 0x68334855u);
  if ( !PoolWithTag )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(v1 + 2520), 2u, 3u, 0x38u, (__int64)&WPP_ed60294ab0b33001d37f1713c861e88d_Traceguids);
    return 2045LL;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v1 + 2520),
      4u,
      3u,
      0x39u,
      (__int64)&WPP_ed60294ab0b33001d37f1713c861e88d_Traceguids,
      *(_WORD *)(v1 + 2678) & 0xFFF);
  *(_DWORD *)(v1 + 2696) = 0;
  *(_DWORD *)(v1 + 2700) = 0;
  *(_DWORD *)(v1 + 2684) = v6;
  v8 = v6 >> 2;
  *(_QWORD *)(v1 + 2688) = PoolWithTag;
  *(_DWORD *)(v1 + 2680) = v8;
  if ( (*(_BYTE *)(v1 + 2678) & 3) != 0 )
    *(_DWORD *)(v1 + 2680) = v8 + 1;
  return 2053LL;
}
