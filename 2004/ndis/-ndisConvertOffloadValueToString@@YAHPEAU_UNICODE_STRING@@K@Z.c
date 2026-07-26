/*
 * XREFs of ?ndisConvertOffloadValueToString@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C009A160
 * Callers:
 *     ?ndisUpdateOffloadKeywords@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD_PARAMETERS@@@Z @ 0x1C00A01B4 (-ndisUpdateOffloadKeywords@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD_PARAMETERS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisConvertOffloadValueToString(struct _UNICODE_STRING *a1, int a2)
{
  __int64 result; // rax
  int v3; // edx
  int v4; // edx
  wchar_t *v5; // rdx

  result = 0LL;
  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 != 1 )
          return 3221225485LL;
        v5 = L"3";
      }
      else
      {
        v5 = L"2";
      }
    }
    else
    {
      v5 = L"1";
    }
  }
  else
  {
    v5 = (wchar_t *)L"0";
  }
  a1->Buffer = v5;
  return result;
}
