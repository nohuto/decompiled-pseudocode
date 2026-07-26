/*
 * XREFs of ?ndisNblTrackerReadConfiguration@@YAXXZ @ 0x1C0143678
 * Callers:
 *     ?ndisNblTrackerInitialize@@YAXXZ @ 0x1C0144F5C (-ndisNblTrackerInitialize@@YAXXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_DDD @ 0x1C0031DAC (WPP_RECORDER_SF_DDD.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     ?ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z @ 0x1C0107624 (-ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z.c)
 */

void __fastcall ndisNblTrackerReadConfiguration(struct _DRIVER_OBJECT *a1)
{
  ULONG VerifierFlags[4]; // [rsp+40h] [rbp-49h] BYREF
  _QWORD v2[2]; // [rsp+50h] [rbp-39h] BYREF
  int v3; // [rsp+60h] [rbp-29h]
  const wchar_t *v4; // [rsp+68h] [rbp-21h]
  char *v5; // [rsp+70h] [rbp-19h]
  int v6; // [rsp+78h] [rbp-11h]
  const wchar_t *v7; // [rsp+80h] [rbp-9h]
  void *v8; // [rsp+88h] [rbp-1h]
  int v9; // [rsp+90h] [rbp+7h]
  const wchar_t *v10; // [rsp+98h] [rbp+Fh]
  char *v11; // [rsp+A0h] [rbp+17h]
  int v12; // [rsp+A8h] [rbp+1Fh]
  const wchar_t *v13; // [rsp+B0h] [rbp+27h]
  unsigned int *v14; // [rsp+B8h] [rbp+2Fh]
  int v15; // [rsp+C0h] [rbp+37h]

  v3 = 0;
  v15 = 0;
  v2[0] = L"TrackNblOwner";
  v6 = 2;
  v2[1] = ndisNblTrackerMode;
  v4 = L"StuckNblReaction";
  v5 = ndisNblTrackerStuckNblDisposition;
  v7 = L"LeakedNblReaction";
  v8 = &ndisNblTrackerLeakedNblDisposition;
  v10 = L"NblTimeoutMs";
  v11 = ndisNblTrackerNblTimeoutMilliseconds;
  v13 = L"NblTrackerHistorySize";
  v14 = &ndisNblTrackerHistorySize;
  v9 = 5;
  v12 = 60000;
  ndisReadRegistryKnobs(a1, (const struct NDIS_REGISTRY_KNOB *)v2, 5uLL);
  if ( *(_DWORD *)ndisNblTrackerNblTimeoutMilliseconds )
  {
    if ( *(_DWORD *)ndisNblTrackerNblTimeoutMilliseconds < 0x64u )
      *(_DWORD *)ndisNblTrackerNblTimeoutMilliseconds = 100;
  }
  else
  {
    *(_DWORD *)ndisNblTrackerNblTimeoutMilliseconds = 60000;
  }
  if ( ndisNblTrackerLeakedNblDisposition
    && ndisNblTrackerLeakedNblDisposition != 5
    && ndisNblTrackerLeakedNblDisposition != 2 )
  {
    ndisNblTrackerLeakedNblDisposition = 5;
  }
  if ( MmIsDriverVerifying((struct _DRIVER_OBJECT *)ndisDriverObject) )
  {
    if ( *(int *)ndisNblTrackerMode < 1 )
      *(_DWORD *)ndisNblTrackerMode = 1;
    VerifierFlags[0] = 0;
    if ( MmIsVerifierEnabled(VerifierFlags) >= 0 && (VerifierFlags[0] & 0x200000) != 0 && *(int *)ndisNblTrackerMode < 3 )
      *(_DWORD *)ndisNblTrackerMode = 3;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xAu,
      (struct _GUID *)&WPP_5e110f494fc33fedd56e6eda5750fecd_Traceguids,
      ndisNblTrackerMode[0],
      ndisNblTrackerStuckNblDisposition[0],
      *(_DWORD *)ndisNblTrackerNblTimeoutMilliseconds);
}
