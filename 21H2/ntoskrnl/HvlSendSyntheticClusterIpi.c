/*
 * XREFs of HvlSendSyntheticClusterIpi @ 0x140390580
 * Callers:
 *     <none>
 * Callees:
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x1403905DC (HvlpUseExtendedProcessorSetHypercalls.c)
 *     HvcallInitiateHypercall @ 0x140390610 (HvcallInitiateHypercall.c)
 *     HvlpFastSendSyntheticClusterIpiEx @ 0x1404F761C (HvlpFastSendSyntheticClusterIpiEx.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x1404F789C (HvlpSlowSendSyntheticClusterIpiEx.c)
 */

__int64 __fastcall HvlSendSyntheticClusterIpi(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // al
  unsigned int v5; // edx
  __int64 v6; // r8
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r8
  _BYTE *i; // rcx
  unsigned __int64 v11; // r8

  v4 = HvlpUseExtendedProcessorSetHypercalls(a1, a2, a1, a4);
  v7 = 0LL;
  if ( v4 )
  {
    if ( ((HvlpFlags >> 8) & 0xF) + 4 > 0xE || (HvlEnlightenments & 0x80u) == 0 )
      return HvlpSlowSendSyntheticClusterIpiEx(v6);
    else
      return HvlpFastSendSyntheticClusterIpiEx(v6);
  }
  else
  {
    v8 = *(_QWORD *)(v6 + 8);
    if ( !HvlpVirtualProcessorsIdentityMapped )
    {
      for ( i = &unk_140D006C3; ; i += 4 )
      {
        if ( (v8 & 1) != 0 )
          v7 |= 1LL << *(i - 2);
        v11 = v8 >> 1;
        if ( !v11 )
          break;
        if ( (v11 & 1) != 0 )
          v7 |= 1LL << *i;
        v8 = v11 >> 1;
        if ( !v8 )
          break;
      }
      v8 = v7;
    }
    return (unsigned __int16)HvcallInitiateHypercall(65547LL, v5, v8) != 0 ? 0xC0000001 : 0;
  }
}
