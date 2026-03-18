/*
 * XREFs of vUnlinkAllEudcRFONTsAndPFEs @ 0xCE766
 * Callers:
 *     bDeleteAllFlEntry @ 0xCD72E (bDeleteAllFlEntry.c)
 *     GreEudcLoadLinkW @ 0x1F7AA9 (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x1F7CCC (GreEudcUnloadLinkW.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     vUnlinkAllEudcRFONTsAndPFEsWorker @ 0xCE802 (vUnlinkAllEudcRFONTsAndPFEsWorker.c)
 */

void __fastcall vUnlinkAllEudcRFONTsAndPFEs(int a1, int a2)
{
  struct _FONTHASH **v2; // esi
  unsigned int v3; // edi
  unsigned int v4; // eax
  struct _FONTHASH **v5; // ebx
  struct PFT *v6; // esi
  _DWORD *v7; // ebx
  int v8; // [esp+Ch] [ebp-10h] BYREF
  _DWORD v9[2]; // [esp+10h] [ebp-Ch] BYREF
  unsigned int v10; // [esp+18h] [ebp-4h]

  v9[1] = a2;
  v8 = _ghsemPublicPFT;
  GreAcquireSemaphore(_ghsemPublicPFT);
  v9[0] = _ghsemRFONTList;
  GreAcquireSemaphore(_ghsemRFONTList);
  v2 = gpPFTPublic;
  v3 = 0;
  v4 = 0;
  v10 = 0;
  if ( gpPFTPublic[3] )
  {
    v5 = gpPFTPublic + 6;
    do
    {
      if ( *v5 )
      {
        vUnlinkAllEudcRFONTsAndPFEsWorker(*v5);
        v4 = v10;
      }
      ++v4;
      ++v5;
      v10 = v4;
    }
    while ( v4 < (unsigned int)v2[3] );
    v3 = 0;
  }
  v6 = gpPFTDevice;
  if ( *((_DWORD *)gpPFTDevice + 3) )
  {
    v7 = (_DWORD *)((char *)gpPFTDevice + 24);
    do
    {
      if ( *v7 )
        vUnlinkAllEudcRFONTsAndPFEsWorker(*v7);
      ++v3;
      ++v7;
    }
    while ( v3 < *((_DWORD *)v6 + 3) );
  }
  SEMOBJ::vUnlock((SEMOBJ *)v9);
  SEMOBJ::vUnlock((SEMOBJ *)&v8);
}
