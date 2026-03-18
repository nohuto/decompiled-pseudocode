/*
 * XREFs of ?CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C009E94C
 * Callers:
 *     ?CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C009D280 (-CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C009E268 (-CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 * Callees:
 *     ?CitpPostUpdateUseInfoOpenKey@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAPEAX@Z @ 0x1C009EA34 (-CitpPostUpdateUseInfoOpenKey@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAPEAX@Z.c)
 *     ?CitpPostUpdateUseInfoCalculate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C009EBC0 (-CitpPostUpdateUseInfoCalculate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_POST_UPDATE_USE_INFO@@@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     memset @ 0x1C00D3740 (memset.c)
 */

NTSTATUS __fastcall CitpPostUpdateUseInfoSave(struct _CIT_IMPACT_CONTEXT *a1, _BYTE *Data)
{
  NTSTATUS result; // eax
  HANDLE KeyHandle; // [rsp+30h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-B0h] BYREF
  _BYTE v7[128]; // [rsp+50h] [rbp-98h] BYREF

  KeyHandle = 0LL;
  memset(v7, 0, 0x78uLL);
  if ( !*((_WORD *)a1 + 172) )
    return -1073741823;
  if ( !Data )
  {
    CitpPostUpdateUseInfoCalculate(a1, (struct _CIT_POST_UPDATE_USE_INFO *)v7);
    Data = v7;
  }
  result = CitpPostUpdateUseInfoOpenKey(a1, &KeyHandle);
  if ( result >= 0 )
  {
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"PUUActive");
    result = ZwSetValueKey(KeyHandle, &DestinationString, 0, 3u, Data, 0x78u);
    if ( result >= 0 )
      return 0;
  }
  return result;
}
