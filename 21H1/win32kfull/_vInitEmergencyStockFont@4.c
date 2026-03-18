/*
 * XREFs of _vInitEmergencyStockFont@4 @ 0x29229C
 * Callers:
 *     _FinishStockFontInit@4 @ 0xDBAB4 (_FinishStockFontInit@4.c)
 * Callees:
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QAEHPAGPAKKPAPAVPFF@@PAU_EUDCLOAD@@H@Z @ 0xDD364 (-bLoadAFont@PUBLIC_PFTOBJ@@QAEHPAGPAKKPAPAVPFF@@PAU_EUDCLOAD@@H@Z.c)
 */

struct _FONTHASH **vInitEmergencyStockFont()
{
  struct _FONTHASH **result; // eax
  unsigned int v1; // edi
  unsigned int v2; // ebx
  char *v3; // esi
  int v4; // esi
  struct _FONTHASH **v5; // [esp+4h] [ebp-Ch] BYREF
  struct PFF *v6; // [esp+8h] [ebp-8h] BYREF
  unsigned int v7; // [esp+Ch] [ebp-4h] BYREF

  result = gpPFTPublic;
  v1 = 0;
  v5 = gpPFTPublic;
  v6 = 0;
  v7 = 0;
  if ( !gppfeMapperDefault )
  {
    result = (struct _FONTHASH **)PUBLIC_PFTOBJ::bLoadAFont(
                                    (PUBLIC_PFTOBJ *)&v5,
                                    L"\\SystemRoot\\System32\\winsrv.dll",
                                    &v7,
                                    2u,
                                    &v6,
                                    0,
                                    0);
    if ( result )
    {
      v2 = v7;
      if ( v7 )
      {
        if ( v6 )
        {
          v3 = (char *)v6 + 132;
          v6 = (struct PFF *)((char *)v6 + 132);
          do
          {
            if ( gppfeMapperDefault )
              break;
            v4 = *(_DWORD *)v3;
            if ( v4 )
            {
              result = (struct _FONTHASH **)__wcsicmp(
                                              (const wchar_t *)(*(_DWORD *)(v4 + 20)
                                                              + *(_DWORD *)(*(_DWORD *)(v4 + 20) + 16)),
                                              L"SYSTEM");
              if ( !result )
                gppfeMapperDefault = (struct PFE *)v4;
            }
            ++v1;
            v3 = (char *)v6 + 4;
            v6 = (struct PFF *)((char *)v6 + 4);
          }
          while ( v1 < v2 );
        }
      }
    }
  }
  return result;
}
