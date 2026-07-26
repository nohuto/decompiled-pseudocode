/*
 * XREFs of ?ndisStartNsiProvider@@YAJXZ @ 0x1C0108E5C
 * Callers:
 *     ndisIfInitializePhase2 @ 0x1C0108770 (ndisIfInitializePhase2.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008A74 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C001918C (WPP_RECORDER_SF_d.c)
 */

__int64 ndisStartNsiProvider(void)
{
  NTSTATUS v0; // eax
  unsigned int v1; // ebx
  char v3[4]; // [rsp+28h] [rbp-10h]

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x10u,
      (struct _GUID *)&WPP_eedb22cfce4b35869e6cfcd0b1c979d6_Traceguids);
  v0 = NmrRegisterProvider(&ProviderCharacteristics, 0LL, &NmrProviderHandle);
  v1 = v0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v3 = v0;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x11u,
      (struct _GUID *)&WPP_eedb22cfce4b35869e6cfcd0b1c979d6_Traceguids,
      *(_DWORD *)v3);
  }
  return v1;
}
