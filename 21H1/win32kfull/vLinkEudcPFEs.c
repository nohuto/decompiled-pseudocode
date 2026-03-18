/*
 * XREFs of vLinkEudcPFEs @ 0xDC1CC
 * Callers:
 *     bDeleteAllFlEntry @ 0xCD72E (bDeleteAllFlEntry.c)
 *     bAddAllFlEntry @ 0xDBBB8 (bAddAllFlEntry.c)
 *     GreEudcLoadLinkW @ 0x1F7AA9 (GreEudcLoadLinkW.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     vLinkEudcPFEsWorker @ 0xDC252 (vLinkEudcPFEsWorker.c)
 */

void __thiscall vLinkEudcPFEs(void *this)
{
  struct _FONTHASH **v1; // esi
  unsigned int v2; // edi
  unsigned int v3; // eax
  struct _FONTHASH **v4; // ebx
  struct PFT *v5; // esi
  _DWORD *v6; // ebx
  int v7; // [esp+Ch] [ebp-Ch] BYREF
  void *v8; // [esp+10h] [ebp-8h]
  unsigned int v9; // [esp+14h] [ebp-4h]

  v8 = this;
  v7 = _ghsemPublicPFT;
  GreAcquireSemaphore(_ghsemPublicPFT);
  v1 = gpPFTPublic;
  v2 = 0;
  v3 = 0;
  v9 = 0;
  if ( gpPFTPublic[3] )
  {
    v4 = gpPFTPublic + 6;
    do
    {
      if ( *v4 )
      {
        vLinkEudcPFEsWorker(v8);
        v3 = v9;
      }
      ++v3;
      ++v4;
      v9 = v3;
    }
    while ( v3 < (unsigned int)v1[3] );
    v2 = 0;
  }
  v5 = gpPFTDevice;
  if ( *((_DWORD *)gpPFTDevice + 3) )
  {
    v6 = (_DWORD *)((char *)gpPFTDevice + 24);
    do
    {
      if ( *v6 )
        vLinkEudcPFEsWorker(v8);
      ++v2;
      ++v6;
    }
    while ( v2 < *((_DWORD *)v5 + 3) );
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v7);
}
