/*
 * XREFs of KeSetIntervalProfile @ 0x1407345E4
 * Callers:
 *     NtSetIntervalProfile @ 0x140734590 (NtSetIntervalProfile.c)
 *     EtwpEnableKernelTrace @ 0x1407983D8 (EtwpEnableKernelTrace.c)
 *     EtwpCoverageSamplerStart @ 0x14094735C (EtwpCoverageSamplerStart.c)
 *     KiInitializeCacheErrataSupport @ 0x140A930CC (KiInitializeCacheErrataSupport.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     KeGenericProcessorCallback @ 0x14029C4C8 (KeGenericProcessorCallback.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiSanitizeProfileInterval @ 0x140522700 (KiSanitizeProfileInterval.c)
 *     KeQueryIntervalProfile @ 0x140734334 (KeQueryIntervalProfile.c)
 */

void __fastcall KeSetIntervalProfile(int a1, int a2)
{
  int IntervalProfile; // esi
  int v4; // edi
  int v5; // eax
  int v6; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v7; // [rsp+38h] [rbp-38h] BYREF
  _DWORD v8[4]; // [rsp+40h] [rbp-30h] BYREF
  _DWORD *v9; // [rsp+50h] [rbp-20h] BYREF
  int v10; // [rsp+58h] [rbp-18h]
  int v11; // [rsp+5Ch] [rbp-14h]

  IntervalProfile = 0;
  v6 = a1;
  v7 = 0LL;
  v4 = a1;
  if ( (WORD2(PerfGlobalGroupMask) & 0x402) != 0 )
    IntervalProfile = KeQueryIntervalProfile(a2);
  if ( !a2 )
  {
    if ( (KiCacheErrataMonitor & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
    {
LABEL_5:
      v7 = __PAIR64__(v4, a2);
      KeGenericProcessorCallback(
        KeActiveProcessors,
        (void (__fastcall *)(struct _KPRCB *, __int64))KiSetIntervalWorker,
        (__int64)&v7,
        1);
      goto LABEL_6;
    }
    KiSanitizeProfileInterval(&v6);
    v4 = v6;
  }
  if ( a2 != 1 )
    goto LABEL_5;
  KiProfileAlignmentFixupInterval = v4;
LABEL_6:
  if ( (WORD2(PerfGlobalGroupMask) & 0x402) != 0 )
  {
    v5 = KeQueryIntervalProfile(a2);
    if ( v5 != IntervalProfile )
    {
      v11 = 0;
      v8[1] = v5;
      v8[0] = a2;
      v9 = v8;
      v8[2] = IntervalProfile;
      v10 = 12;
      EtwTraceKernelEvent((int)&v9, 1, 0x20000402u, 3912, 4200706);
    }
  }
}
