/*
 * XREFs of _GreRemoveFontResourceW@28 @ 0x1EBD13
 * Callers:
 *     _NtGdiRemoveFontResourceW@24 @ 0x213CF7 (_NtGdiRemoveFontResourceW@24.c)
 * Callees:
 *     ?bUnloadWorkhorse@PFTOBJ@@QAEHPAVPFF@@PAPAV2@K@Z @ 0xCDA6C (-bUnloadWorkhorse@PFTOBJ@@QAEHPAVPFF@@PAPAV2@K@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QAEPAVPFF@@PBGKKPAUtagDESIGNVECTOR@@KPAPAPAV2@H@Z @ 0xDDADA (-pPFFGet@PUBLIC_PFTOBJ@@QAEPAVPFF@@PBGKKPAUtagDESIGNVECTOR@@KPAPAPAV2@H@Z.c)
 */

int __fastcall GreRemoveFontResourceW(
        unsigned __int16 *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        struct _FONTHASH **a5,
        struct tagDESIGNVECTOR *a6,
        unsigned int a7)
{
  int v7; // esi
  struct _FONTHASH **v10; // eax
  struct PFF *v11; // eax
  struct PFF **v13; // [esp+Ch] [ebp-4h] BYREF

  v7 = 0;
  v13 = 0;
  if ( (a4 & 4) != 0 && a5 != PsGetCurrentThreadId()
    || (a4 & 8) != 0 && a5 != (struct _FONTHASH **)((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
  {
    return 0;
  }
  if ( (a4 & 0x1C) != 0 )
    v10 = (struct _FONTHASH **)gpPFTPrivate;
  else
    v10 = gpPFTPublic;
  a5 = v10;
  if ( v10 )
  {
    GreAcquireSemaphore(_ghsemPublicPFT);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", _ghsemPublicPFT, 15);
    v11 = PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)&a5, a1, a2, a3, a6, a7, &v13, 0);
    if ( v11 )
    {
      v7 = PFTOBJ::bUnloadWorkhorse((PFTOBJ *)&a5, v11, v13, a4);
      if ( v7 )
        GreQuerySystemTime(&PFTOBJ::FontChangeTime);
    }
    else
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", _ghsemPublicPFT);
      GreReleaseSemaphoreInternal(_ghsemPublicPFT);
    }
  }
  return v7;
}
