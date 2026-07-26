/*
 * XREFs of ?ndisIsValidPmCountedString@@YAEPEAU_NDIS_PM_COUNTED_STRING@@@Z @ 0x1C00169B8
 * Callers:
 *     ?ndisIsValidWoLPattern@@YAEPEAU_NDIS_PM_WOL_PATTERN@@I@Z @ 0x1C0016900 (-ndisIsValidWoLPattern@@YAEPEAU_NDIS_PM_WOL_PATTERN@@I@Z.c)
 *     ?ndisOidPreAddPMProtocolOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0091510 (-ndisOidPreAddPMProtocolOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisIsValidPmCountedString(struct _NDIS_PM_COUNTED_STRING *a1)
{
  wchar_t *String; // rax
  __int64 v2; // rcx
  signed int v3; // eax

  if ( a1->Length > 0x80u || (a1->Length & 1) != 0 )
    return 0;
  String = a1->String;
  if ( a1 == (struct _NDIS_PM_COUNTED_STRING *)-2LL )
  {
    v3 = -1073741811;
  }
  else
  {
    v2 = 65LL;
    do
    {
      if ( !*String )
        break;
      ++String;
      --v2;
    }
    while ( v2 );
    v3 = v2 == 0 ? 0xC000000D : 0;
  }
  return v3 >= 0;
}
