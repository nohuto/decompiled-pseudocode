/*
 * XREFs of ?ndisIsValidWoLPattern@@YAEPEAU_NDIS_PM_WOL_PATTERN@@I@Z @ 0x1C0016940
 * Callers:
 *     ?ndisOidPrePMAddWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00167E0 (-ndisOidPrePMAddWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisIsValidPmCountedString@@YAEPEAU_NDIS_PM_COUNTED_STRING@@@Z @ 0x1C00169F8 (-ndisIsValidPmCountedString@@YAEPEAU_NDIS_PM_COUNTED_STRING@@@Z.c)
 */

unsigned __int8 __fastcall ndisIsValidWoLPattern(struct _NDIS_PM_WOL_PATTERN *a1)
{
  UCHAR Revision; // al
  _DWORD *v2; // r8
  unsigned int v3; // r9d
  unsigned int v4; // r11d
  int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // edx
  unsigned int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // edx

  if ( a1->Header.Type == 0x80 )
  {
    Revision = a1->Header.Revision;
    if ( (Revision == 1 || Revision == 2)
      && a1->Header.Size >= 0xC4u
      && ndisIsValidPmCountedString(&a1->FriendlyName)
      && !v2[38] )
    {
      v5 = v2[3];
      if ( v5 == 1 )
      {
        v6 = v2[41];
        if ( v6 )
        {
          v7 = v2[43];
          if ( v7 )
          {
            if ( v6 >= v7 >> 3 )
            {
              v8 = v2[40];
              if ( v8 >= v3 && v8 + v6 >= v8 && v8 + v6 <= v4 )
              {
                v9 = v2[42];
                if ( v9 >= v3 )
                {
                  v10 = v9 + v7;
                  if ( v10 >= v9 && v10 <= v4 )
                    return 1;
                }
              }
            }
          }
        }
      }
      else if ( v5 > 1 && v5 <= 5 )
      {
        return 1;
      }
    }
  }
  return 0;
}
