/*
 * XREFs of vLinkEudcPFEs @ 0x1C0010450
 * Callers:
 *     bAddAllFlEntry @ 0x1C000F6D0 (bAddAllFlEntry.c)
 *     bDeleteAllFlEntry @ 0x1C0011ABC (bDeleteAllFlEntry.c)
 *     GreEudcLoadLinkW @ 0x1C02985A0 (GreEudcLoadLinkW.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000F68C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     vLinkEudcPFEsWorker @ 0x1C0011928 (vLinkEudcPFEsWorker.c)
 */

void __fastcall vLinkEudcPFEs(__int64 a1)
{
  struct _FONTHASH **v2; // rbx
  __int64 i; // rdi
  struct PFT *v4; // rbx
  __int64 j; // rdi
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v2 = gpPFTPublic;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)v2 + 6); i = (unsigned int)(i + 1) )
  {
    if ( v2[i + 5] )
      vLinkEudcPFEsWorker(a1);
  }
  v4 = gpPFTDevice;
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)v4 + 6); j = (unsigned int)(j + 1) )
  {
    if ( *((_QWORD *)v4 + j + 5) )
      vLinkEudcPFEsWorker(a1);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v6);
}
