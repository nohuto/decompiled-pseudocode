/*
 * XREFs of ?ndisPcwMatchInstance@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEBU_UNICODE_STRING@@@Z @ 0x1C00FECC8
 * Callers:
 *     ?ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x1C001DCEC (-ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     ?ndisWildCardStringMatch@@YAEPEBU_UNICODE_STRING@@0E@Z @ 0x1C00FED5C (-ndisWildCardStringMatch@@YAEPEBU_UNICODE_STRING@@0E@Z.c)
 *     ?ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z @ 0x1C00FEFE8 (-ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z.c)
 */

bool __fastcall ndisPcwMatchInstance(
        struct _NDIS_MINIPORT_BLOCK *a1,
        unsigned int a2,
        const struct _UNICODE_STRING *a3)
{
  unsigned __int8 v6; // r8
  bool result; // al
  unsigned __int8 v8; // r8
  unsigned __int8 v9; // r8
  struct _UNICODE_STRING v10; // [rsp+20h] [rbp-E0h] BYREF
  char v11; // [rsp+30h] [rbp-D0h] BYREF

  *(_QWORD *)&v10.Length = 33685504LL;
  v10.Buffer = (wchar_t *)&v11;
  result = 0;
  if ( ndisPcwGetInstanceName(a1, a2, &v10) >= 0 )
  {
    if ( ndisWildCardStringMatch(a3, &v10, v6) )
      return 1;
    if ( !a2 )
    {
      v10.Length = 0;
      if ( ndisPcwGetInstanceName(a1, 0xFFFu, &v10) >= 0 )
      {
        if ( ndisWildCardStringMatch(a3, &v10, v8) )
          return 1;
        v10.Length = 0;
        if ( ndisPcwGetInstanceName(0LL, 0xFFFFFFFE, &v10) >= 0 )
        {
          if ( ndisWildCardStringMatch(a3, &v10, v9) )
            return 1;
        }
      }
    }
  }
  return result;
}
