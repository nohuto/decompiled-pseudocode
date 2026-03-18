/*
 * XREFs of XilCoreCommonBuffer_Cleanup @ 0x1C0050AC8
 * Callers:
 *     CommonBuffer_WdfEvtCleanupCallback @ 0x1C00309D0 (CommonBuffer_WdfEvtCleanupCallback.c)
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x1C0013618 (WPP_RECORDER_SF_ddd.c)
 */

__int64 __fastcall XilCoreCommonBuffer_Cleanup(__int64 a1)
{
  unsigned int *v2; // rbx
  unsigned int i; // edi
  __int64 result; // rax
  __int64 v5; // [rsp+28h] [rbp-20h]
  __int64 v6; // [rsp+30h] [rbp-18h]
  __int64 v7; // [rsp+38h] [rbp-10h]

  v2 = (unsigned int *)(a1 + 56);
  for ( i = 0; i < 2; ++i )
  {
    result = *v2;
    if ( (_DWORD)result != v2[1] && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v7) = v2[1];
      LODWORD(v6) = *v2;
      LODWORD(v5) = i;
      result = WPP_RECORDER_SF_ddd(
                 *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
                 3u,
                 8u,
                 0xAu,
                 (__int64)&WPP_a84c20f32b9f317edc0159cb83ba05a2_Traceguids,
                 v5,
                 v6,
                 v7);
    }
    v2 += 16;
  }
  return result;
}
