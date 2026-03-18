/*
 * XREFs of _GreAddFontResourceWInternal@28 @ 0xDC42C
 * Callers:
 *     _NtGdiAddFontResourceW@24 @ 0xDC320 (_NtGdiAddFontResourceW@24.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QAEHPAGKKPAUtagDESIGNVECTOR@@KPAKKPAPAVPFF@@KHPAU_EUDCLOAD@@HH@Z @ 0xDD3E2 (-bLoadFonts@PUBLIC_PFTOBJ@@QAEHPAGKKPAUtagDESIGNVECTOR@@KPAKKPAPAVPFF@@KHPAU_EUDCLOAD@@HH@Z.c)
 *     ?bInitPrivatePFT@@YGHXZ @ 0x1D0823 (-bInitPrivatePFT@@YGHXZ.c)
 *     ?RegistryNotificaionEnumerationEnd@@YGXPAK@Z @ 0x1EB769 (-RegistryNotificaionEnumerationEnd@@YGXPAK@Z.c)
 */

int __fastcall GreAddFontResourceWInternal(
        unsigned __int16 *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        HANDLE a5,
        struct tagDESIGNVECTOR *a6,
        unsigned int a7)
{
  unsigned int v8; // esi
  struct _FONTHASH **v9; // eax
  unsigned int *v11; // [esp+0h] [ebp-20h]
  unsigned int v12; // [esp+Ch] [ebp-14h] BYREF
  struct PFF *v13; // [esp+10h] [ebp-10h] BYREF
  unsigned int v14; // [esp+14h] [ebp-Ch]
  struct _UNICODE_STRING DestinationString; // [esp+18h] [ebp-8h] BYREF

  v14 = a2;
  v12 = 0;
  if ( (a4 & 0x600) == 0x600 )
  {
    RegistryNotificaionEnumerationEnd(v11);
    return v12;
  }
  if ( !a1 )
  {
    EngSetLastError(0x57u);
    return v12;
  }
  if ( a4 != 0x80000000 )
  {
    if ( ((a4 & 8) == 0 || a5 == (HANDLE)((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC))
      && ((a4 & 4) == 0 || a5 == PsGetCurrentThreadId()) )
    {
      v8 = 2 * (a4 & 1);
      if ( (a4 & 2) != 0 )
        v8 |= 4u;
      v13 = 0;
      if ( (a4 & 0x1C) == 0 )
      {
        v9 = gpPFTPublic;
        goto LABEL_10;
      }
      if ( gpPFTPrivate || bInitPrivatePFT() )
      {
        v9 = (struct _FONTHASH **)gpPFTPrivate;
LABEL_10:
        *(_DWORD *)&DestinationString.Length = v9;
        if ( !v9
          || !PUBLIC_PFTOBJ::bLoadFonts(
                (PUBLIC_PFTOBJ *)&DestinationString,
                a1,
                v14,
                a3,
                a6,
                a7,
                &v12,
                v8,
                &v13,
                a4,
                0,
                0,
                0,
                0) )
        {
          v12 = 0;
        }
        if ( v12 )
          GreQuerySystemTime(&PFTOBJ::FontChangeTime);
      }
    }
    return v12;
  }
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  if ( RtlCreateUnicodeString(&DestinationString, a1) )
  {
    v13 = (struct PFF *)*((_DWORD *)gpxsGlobals + 2);
    GreAcquireSemaphore(v13);
    RtlInsertElementGenericTableAvl(*((PRTL_AVL_TABLE *)gpxsGlobals + 3), &DestinationString, 8u, 0);
    SEMOBJ::vUnlock((SEMOBJ *)&v13);
  }
  return 1;
}
