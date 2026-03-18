/*
 * XREFs of VidSchCreateDevice @ 0x1C0098C70
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     VidSchiCreateDeviceInternal @ 0x1C0098844 (VidSchiCreateDeviceInternal.c)
 */

__int64 __fastcall VidSchCreateDevice(__int64 a1, __int128 *a2, __int64 *a3)
{
  __int64 v4; // rcx

  *a3 = 0LL;
  if ( a1 && a2 )
    return VidSchiCreateDeviceInternal(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 632LL), a2, a1, a3);
  WdLogSingleEntry0(1LL);
  DxgkLogInternalTriageEvent(v4, 0x40000LL);
  return 3221225485LL;
}
