/*
 * XREFs of ?bUnloadEUDCFont@PFTOBJ@@QAEHPAG@Z @ 0xCD9B6
 * Callers:
 *     bUnloadEudcFont @ 0xCD8F6 (bUnloadEudcFont.c)
 *     ?CleanUpEUDC@@YGXXZ @ 0xCE864 (-CleanUpEUDC@@YGXXZ.c)
 *     ?vInitializeFontAssocStatus@@YGXXZ @ 0xD67C2 (-vInitializeFontAssocStatus@@YGXXZ.c)
 *     bAddAllFlEntry @ 0xDBBB8 (bAddAllFlEntry.c)
 *     bAddFlEntry @ 0xDCD78 (bAddFlEntry.c)
 *     ?bSetupDefaultFlEntry@@YGHXZ @ 0x1F7794 (-bSetupDefaultFlEntry@@YGHXZ.c)
 * Callees:
 *     _cCapString@12 @ 0x89EC2 (_cCapString@12.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QAEHPAVPFF@@PAPAV2@K@Z @ 0xCDA6C (-bUnloadWorkhorse@PFTOBJ@@QAEHPAVPFF@@PAPAV2@K@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QAEPAVPFF@@PBGKKPAUtagDESIGNVECTOR@@KPAPAPAV2@H@Z @ 0xDDADA (-pPFFGet@PUBLIC_PFTOBJ@@QAEPAVPFF@@PBGKKPAUtagDESIGNVECTOR@@KPAPAPAV2@H@Z.c)
 */

int __thiscall PFTOBJ::bUnloadEUDCFont(PFTOBJ *this, unsigned __int16 *a2)
{
  int v2; // esi
  unsigned int v3; // ebx
  WCHAR *v4; // eax
  const unsigned __int16 *v5; // edi
  struct PFF *v6; // eax
  struct PFF **v8; // [esp+Ch] [ebp-4h] BYREF

  v2 = 0;
  v8 = 0;
  v3 = wcslen(a2) + 1;
  if ( v3 > 0x1388000 )
    return 0;
  v4 = (WCHAR *)AllocFreeTmpBuffer(2 * v3);
  v5 = v4;
  if ( !v4 )
    return 0;
  cCapString(v4, a2, v3);
  a2 = (unsigned __int16 *)gpPFTPublic;
  GreAcquireSemaphore(_ghsemPublicPFT);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", _ghsemPublicPFT, 15);
  v6 = PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)&a2, v5, v3, 1u, 0, 0, &v8, 1);
  if ( v6 )
  {
    v2 = PFTOBJ::bUnloadWorkhorse((PFTOBJ *)&a2, v6, v8, 0);
  }
  else
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", _ghsemPublicPFT);
    GreReleaseSemaphoreInternal(_ghsemPublicPFT);
  }
  FreeTmpBuffer(v5);
  return v2;
}
