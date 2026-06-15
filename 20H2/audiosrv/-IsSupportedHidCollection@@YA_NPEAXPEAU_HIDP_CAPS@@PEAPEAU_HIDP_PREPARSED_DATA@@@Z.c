/*
 * XREFs of ?IsSupportedHidCollection@@YA_NPEAXPEAU_HIDP_CAPS@@PEAPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1800BBF18
 * Callers:
 *     ?FindSupportedHidCollection@@YAJPEAV?$CAtlList@PEAGV?$CElementTraits@PEAG@ATL@@@ATL@@PEAPEAXPEAU_HIDP_CAPS@@PEAPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1800BBA64 (-FindSupportedHidCollection@@YAJPEAV-$CAtlList@PEAGV-$CElementTraits@PEAG@ATL@@@ATL@@PEAPEAXPEAU.c)
 * Callees:
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 */

char __fastcall IsSupportedHidCollection(
        HANDLE HidDeviceObject,
        struct _HIDP_CAPS *a2,
        struct _HIDP_PREPARSED_DATA **a3)
{
  char v6; // di
  struct _HIDP_PREPARSED_DATA *v7; // rcx
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  PHIDP_PREPARSED_DATA PreparsedData; // [rsp+20h] [rbp-39h] BYREF
  _HIDD_ATTRIBUTES Attributes; // [rsp+28h] [rbp-31h] BYREF
  _HIDP_CAPS Capabilities; // [rsp+40h] [rbp-19h] BYREF

  PreparsedData = 0LL;
  v6 = 0;
  if ( HidD_GetAttributes(HidDeviceObject, &Attributes)
    && Attributes.VendorID == 1118
    && Attributes.ProductID == 1574
    && HidD_GetPreparsedData(HidDeviceObject, &PreparsedData)
    && HidP_GetCaps(PreparsedData, &Capabilities)
    && Capabilities.UsagePage == 11 )
  {
    v7 = 0LL;
    v8 = *(_OWORD *)&Capabilities.Usage;
    v6 = 1;
    v9 = *(_OWORD *)&Capabilities.Reserved[3];
    *a3 = PreparsedData;
    *(_OWORD *)&a2->Usage = v8;
    v10 = *(_OWORD *)&Capabilities.Reserved[11];
    *(_OWORD *)&a2->Reserved[3] = v9;
    v11 = *(_OWORD *)&Capabilities.NumberInputValueCaps;
    *(_OWORD *)&a2->Reserved[11] = v10;
    *(_OWORD *)&a2->NumberInputValueCaps = v11;
    PreparsedData = 0LL;
  }
  else
  {
    v7 = PreparsedData;
  }
  if ( v7 )
    HidD_FreePreparsedData(v7);
  return v6;
}
