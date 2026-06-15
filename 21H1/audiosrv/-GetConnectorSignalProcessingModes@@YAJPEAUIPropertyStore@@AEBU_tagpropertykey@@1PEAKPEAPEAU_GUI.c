/*
 * XREFs of ?GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUID@@@Z @ 0x1800593D8
 * Callers:
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z @ 0x180054F30 (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z.c)
 *     ?GetHostConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@PEAKPEAPEAU_GUID@@@Z @ 0x180059344 (-GetHostConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@PEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18002A740 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?GetConnectorSignalProcessingModes@@YAJPEBGIPEAKPEAPEAU_GUID@@@Z @ 0x180059584 (-GetConnectorSignalProcessingModes@@YAJPEBGIPEAKPEAPEAU_GUID@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetConnectorSignalProcessingModes(
        struct IPropertyStore *a1,
        const struct _tagpropertykey *a2,
        const struct _tagpropertykey *a3,
        unsigned int *a4,
        struct _GUID **a5)
{
  unsigned __int16 *v8; // rsi
  int ConnectorSignalProcessingModes; // ebx
  unsigned int v11; // r15d
  const unsigned __int16 *v12; // r14
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rbp
  char *v15; // rax
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v17; // [rsp+50h] [rbp-38h]

  *a4 = 0;
  *(_OWORD *)pvar = 0LL;
  v17 = 0LL;
  *a5 = 0LL;
  v8 = 0LL;
  ConnectorSignalProcessingModes = ((__int64 (__fastcall *)(struct IPropertyStore *, const struct _tagpropertykey *, PROPVARIANT *))a1->lpVtbl->GetValue)(
                                     a1,
                                     a3,
                                     pvar);
  if ( ConnectorSignalProcessingModes >= 0 )
  {
    if ( !LOWORD(pvar[0]) )
    {
LABEL_3:
      ConnectorSignalProcessingModes = -2147023728;
      goto LABEL_4;
    }
    if ( LOWORD(pvar[0]) != 19 )
      goto LABEL_20;
    v11 = (unsigned int)pvar[1];
    PropVariantClear(pvar);
    ConnectorSignalProcessingModes = ((__int64 (__fastcall *)(struct IPropertyStore *, const struct _tagpropertykey *, PROPVARIANT *))a1->lpVtbl->GetValue)(
                                       a1,
                                       a2,
                                       pvar);
    if ( ConnectorSignalProcessingModes < 0 )
      goto LABEL_4;
    if ( !LOWORD(pvar[0]) )
      goto LABEL_3;
    if ( LOWORD(pvar[0]) != 31 )
    {
LABEL_20:
      ConnectorSignalProcessingModes = -2147418113;
      goto LABEL_4;
    }
    v12 = (const unsigned __int16 *)pvar[1];
    v13 = -1LL;
    ConnectorSignalProcessingModes = 0;
    do
      ++v13;
    while ( *((_WORD *)pvar[1] + v13) );
    v14 = v13 + 1;
    if ( v13 + 1 < v13 )
    {
      ConnectorSignalProcessingModes = -2147024362;
      goto LABEL_4;
    }
    if ( is_mul_ok(v14, 2uLL) )
    {
      v15 = (char *)CoTaskMemAlloc(2 * v14);
      v8 = (unsigned __int16 *)v15;
      if ( !v15 )
      {
        ConnectorSignalProcessingModes = -2147024882;
        goto LABEL_4;
      }
      StringCchCopyNExW(v15, v13 + 1, v12, v13);
    }
    else
    {
      ConnectorSignalProcessingModes = -2147024362;
    }
    if ( ConnectorSignalProcessingModes >= 0 )
    {
      PropVariantClear(pvar);
      ConnectorSignalProcessingModes = GetConnectorSignalProcessingModes(v8, v11, a4, a5);
      if ( ConnectorSignalProcessingModes >= 0 )
        ConnectorSignalProcessingModes = 0;
    }
  }
LABEL_4:
  CoTaskMemFree(v8);
  PropVariantClear(pvar);
  return (unsigned int)ConnectorSignalProcessingModes;
}
