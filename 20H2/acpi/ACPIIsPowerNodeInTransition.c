/*
 * XREFs of ACPIIsPowerNodeInTransition @ 0x1C00319E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqqss @ 0x1C004AB14 (WPP_RECORDER_SF_qqqss.c)
 */

__int64 __fastcall ACPIIsPowerNodeInTransition(__int64 a1, int a2, __int64 a3)
{
  void *v4; // rdx
  __int64 v5; // r9
  __int64 v6; // rax
  void *v7; // r10
  __int64 v8; // r9
  __int64 v9; // [rsp+40h] [rbp-18h]

  if ( (*(_DWORD *)(a3 + 104) == a2 || *(_DWORD *)(*(_QWORD *)(a3 + 40) + 344LL) == a2)
    && _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 64), 1, 1) == 4 )
  {
    *(_DWORD *)(a3 + 56) |= 0x8000000u;
    v4 = &unk_1C00701BA;
    v5 = *(_QWORD *)(a3 + 40);
    LOBYTE(v6) = 0;
    v7 = &unk_1C00701BA;
    if ( v5 )
    {
      v6 = *(_QWORD *)(a3 + 40);
      v8 = *(_QWORD *)(v5 + 8);
      if ( (v8 & 0x200000000000LL) != 0 )
      {
        v4 = *(void **)(v6 + 568);
        if ( (v8 & 0x400000000000LL) != 0 )
          v7 = *(void **)(v6 + 576);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = (__int64)v4;
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_qqqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v4,
        10,
        50,
        (__int64)&WPP_095c070a05c4368bad966ca54a81e920_Traceguids,
        a3,
        a1,
        v6,
        v9,
        (__int64)v7);
    }
  }
  return 0LL;
}
