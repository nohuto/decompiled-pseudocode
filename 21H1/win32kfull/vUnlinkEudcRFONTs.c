/*
 * XREFs of vUnlinkEudcRFONTs @ 0x1F90F9
 * Callers:
 *     bDeleteFlEntry @ 0x1F84B8 (bDeleteFlEntry.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     vUnlinkEudcRFONTsWorker @ 0x1F9371 (vUnlinkEudcRFONTsWorker.c)
 */

void __thiscall vUnlinkEudcRFONTs(void *this)
{
  struct _FONTHASH **v1; // esi
  unsigned int v2; // edi
  unsigned int v3; // eax
  struct _FONTHASH **v4; // ebx
  struct PFT *v5; // esi
  _DWORD *v6; // ebx
  int v7; // [esp+10h] [ebp-10h] BYREF
  int v8; // [esp+14h] [ebp-Ch] BYREF
  void *v9; // [esp+18h] [ebp-8h]
  unsigned int v10; // [esp+1Ch] [ebp-4h]

  v9 = this;
  v7 = _ghsemPublicPFT;
  GreAcquireSemaphore(_ghsemPublicPFT);
  v8 = _ghsemRFONTList;
  GreAcquireSemaphore(_ghsemRFONTList);
  v1 = gpPFTPublic;
  v2 = 0;
  v3 = 0;
  v10 = 0;
  if ( gpPFTPublic[3] )
  {
    v4 = gpPFTPublic + 6;
    do
    {
      if ( *v4 )
      {
        vUnlinkEudcRFONTsWorker(v9);
        v3 = v10;
      }
      ++v3;
      ++v4;
      v10 = v3;
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
        vUnlinkEudcRFONTsWorker(v9);
      ++v2;
      ++v6;
    }
    while ( v2 < *((_DWORD *)v5 + 3) );
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v8);
  SEMOBJ::vUnlock((SEMOBJ *)&v7);
}
