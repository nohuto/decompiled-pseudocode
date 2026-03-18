/*
 * XREFs of PsIsServiceSession @ 0x14071C3F0
 * Callers:
 *     PopGetSettingNotificationName @ 0x14071C434 (PopGetSettingNotificationName.c)
 *     PopInputDisabled @ 0x1408F792C (PopInputDisabled.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x14023F2F0 (PsGetServerSiloServiceSessionId.c)
 *     PsGetSiloBySessionId @ 0x14063BBB4 (PsGetSiloBySessionId.c)
 */

bool __fastcall PsIsServiceSession(__int64 a1)
{
  int v1; // ebx
  int (__fastcall *v3)(_DMA_ADAPTER *, _DEVICE_OBJECT *, _MDL *, void *, unsigned int, void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *), void *, unsigned __int8, void *, unsigned int); // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  v1 = a1;
  if ( !(_DWORD)a1 )
    return 1;
  if ( (int)PsGetSiloBySessionId(a1, &v3) < 0 )
    return 0;
  return (unsigned int)PsGetServerSiloServiceSessionId((__int64)v3) == v1;
}
