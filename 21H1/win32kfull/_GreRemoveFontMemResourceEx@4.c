/*
 * XREFs of _GreRemoveFontMemResourceEx@4 @ 0x1EBC87
 * Callers:
 *     _NtGdiAddFontMemResourceEx@20 @ 0x21201C (_NtGdiAddFontMemResourceEx@20.c)
 *     _NtGdiRemoveFontMemResourceEx@4 @ 0x213CD9 (_NtGdiRemoveFontMemResourceEx@4.c)
 * Callees:
 *     ?GetPFFFromId@@YGPAVPFF@@PAVPFT@@IPAPAPAV1@@Z @ 0xACE02 (-GetPFFFromId@@YGPAVPFF@@PAVPFT@@IPAPAPAV1@@Z.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QAEHPAVPFF@@PAPAV2@K@Z @ 0xCDA6C (-bUnloadWorkhorse@PFTOBJ@@QAEHPAVPFF@@PAPAV2@K@Z.c)
 */

int __thiscall GreRemoveFontMemResourceEx(void *this)
{
  int v2; // esi
  struct PFF *PFFFromId; // eax
  unsigned int v5; // [esp+0h] [ebp-14h]
  struct PFF ***v6; // [esp+4h] [ebp-10h]
  struct PFT *v7; // [esp+Ch] [ebp-8h] BYREF
  struct PFF **v8; // [esp+10h] [ebp-4h] BYREF

  v2 = 0;
  v8 = 0;
  GreAcquireSemaphore(_ghsemPublicPFT);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", _ghsemPublicPFT, 15);
  v7 = gpPFTPrivate;
  if ( gpPFTPrivate )
  {
    PFFFromId = GetPFFFromId((unsigned int)this, (int)gpPFTPrivate, (struct PFT *)&v8, v5, v6);
    if ( PFFFromId )
    {
      if ( (*((_BYTE *)PFFFromId + 32) & 0x10) != 0 )
        return PFTOBJ::bUnloadWorkhorse((PFTOBJ *)&v7, PFFFromId, v8, 0x30u);
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", _ghsemPublicPFT);
  GreReleaseSemaphoreInternal(_ghsemPublicPFT);
  return v2;
}
