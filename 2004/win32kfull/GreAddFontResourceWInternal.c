/*
 * XREFs of GreAddFontResourceWInternal @ 0x1C0105D34
 * Callers:
 *     NtGdiAddFontResourceW @ 0x1C0105B50 (NtGdiAddFontResourceW.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000F68C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C00D8FE8 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?RegistryNotificaionEnumerationEnd@@YAXPEAK@Z @ 0x1C0105F24 (-RegistryNotificaionEnumerationEnd@@YAXPEAK@Z.c)
 *     ?bInitPrivatePFT@@YAHXZ @ 0x1C0273730 (-bInitPrivatePFT@@YAHXZ.c)
 */

__int64 __fastcall GreAddFontResourceWInternal(
        unsigned __int16 *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        struct tagDESIGNVECTOR *a6,
        size_t a7)
{
  unsigned int v11; // esi
  struct _FONTHASH **v12; // rcx
  size_t v14; // [rsp+30h] [rbp-39h]
  struct PFF *v15; // [rsp+78h] [rbp+Fh] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp+17h] BYREF
  unsigned int v17; // [rsp+D0h] [rbp+67h] BYREF

  v17 = 0;
  if ( (a4 & 0x600) == 0x600 )
  {
    RegistryNotificaionEnumerationEnd(&v17);
    return v17;
  }
  if ( !a1 )
  {
    EngSetLastError(0x57u);
    return v17;
  }
  if ( a4 != 0x80000000 )
  {
    if ( ((a4 & 8) == 0 || a5 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC))
      && ((a4 & 4) == 0 || a5 == (unsigned int)PsGetCurrentThreadId()) )
    {
      v11 = (2 * (a4 & 1)) | 4;
      if ( (a4 & 2) == 0 )
        v11 = 2 * (a4 & 1);
      v15 = 0LL;
      if ( (a4 & 0x1C) == 0 )
      {
        v12 = gpPFTPublic;
        goto LABEL_10;
      }
      if ( gpPFTPrivate || (unsigned int)bInitPrivatePFT() )
      {
        v12 = gpPFTPrivate;
LABEL_10:
        *(_QWORD *)&DestinationString.Length = v12;
        if ( !v12
          || (LODWORD(v14) = a7,
              !(unsigned int)PUBLIC_PFTOBJ::bLoadFonts(
                               (PUBLIC_PFTOBJ *)&DestinationString,
                               a1,
                               a2,
                               a3,
                               a6,
                               v14,
                               &v17,
                               v11,
                               &v15,
                               a4,
                               0,
                               0LL,
                               0,
                               0)) )
        {
          v17 = 0;
        }
        if ( v17 )
          GreQuerySystemTime(&PFTOBJ::FontChangeTime);
      }
    }
    return v17;
  }
  DestinationString = 0LL;
  if ( RtlCreateUnicodeString(&DestinationString, a1) )
  {
    v15 = (struct PFF *)*((_QWORD *)gpxsGlobals + 2);
    GreAcquireSemaphore(v15);
    RtlInsertElementGenericTableAvl(*((PRTL_AVL_TABLE *)gpxsGlobals + 3), &DestinationString, 0x10u, 0LL);
    SEMOBJ::vUnlock((SEMOBJ *)&v15);
  }
  return 1LL;
}
