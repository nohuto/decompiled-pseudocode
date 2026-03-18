/*
 * XREFs of PsIsServiceSession @ 0x1406EC848
 * Callers:
 *     PopGetSettingNotificationName @ 0x14070E014 (PopGetSettingNotificationName.c)
 *     PopInputDisabled @ 0x1408F0A2C (PopInputDisabled.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x1402E5A50 (PsGetServerSiloServiceSessionId.c)
 *     PsGetSiloBySessionId @ 0x1406A64A4 (PsGetSiloBySessionId.c)
 */

bool __fastcall PsIsServiceSession(unsigned int a1)
{
  int (__fastcall *v3)(_DMA_ADAPTER *, _DEVICE_OBJECT *, _MDL *, void *, unsigned int, void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *), void *, unsigned __int8, void *, unsigned int); // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  if ( !a1 )
    return 1;
  if ( (int)PsGetSiloBySessionId(a1, &v3) < 0 )
    return 0;
  return (unsigned int)PsGetServerSiloServiceSessionId((__int64)v3) == a1;
}
