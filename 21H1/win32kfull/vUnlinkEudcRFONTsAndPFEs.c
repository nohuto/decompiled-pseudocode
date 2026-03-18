/*
 * XREFs of vUnlinkEudcRFONTsAndPFEs @ 0x1F9197
 * Callers:
 *     bDeleteFlEntry @ 0x1F84B8 (bDeleteFlEntry.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     vUnlinkEudcRFONTsAndPFEsWorker @ 0x1F9240 (vUnlinkEudcRFONTsAndPFEsWorker.c)
 */

void __fastcall vUnlinkEudcRFONTsAndPFEs(int a1, int a2)
{
  struct _FONTHASH **v2; // esi
  unsigned int v3; // edi
  unsigned int v4; // eax
  struct _FONTHASH **v5; // ebx
  struct PFT *v6; // esi
  _DWORD *v7; // ebx
  int v8; // [esp+Ch] [ebp-14h] BYREF
  _DWORD v9[3]; // [esp+10h] [ebp-10h] BYREF
  unsigned int v10; // [esp+1Ch] [ebp-4h]

  v9[1] = a1;
  v9[2] = a2;
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
        vUnlinkEudcRFONTsAndPFEsWorker(*v5);
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
        vUnlinkEudcRFONTsAndPFEsWorker(*v7);
      ++v3;
      ++v7;
    }
    while ( v3 < *((_DWORD *)v6 + 3) );
  }
  SEMOBJ::vUnlock((SEMOBJ *)v9);
  SEMOBJ::vUnlock((SEMOBJ *)&v8);
}
