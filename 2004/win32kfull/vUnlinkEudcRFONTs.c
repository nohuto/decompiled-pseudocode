/*
 * XREFs of vUnlinkEudcRFONTs @ 0x1C02991C4
 * Callers:
 *     bDeleteFlEntry @ 0x1C0298E50 (bDeleteFlEntry.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000F68C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C01599E8 (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     ?bValid@SURFREF@@QEBAHXZ @ 0x1C026E1A8 (-bValid@SURFREF@@QEBAHXZ.c)
 *     vUnlinkEudcRFONTsWorker @ 0x1C029952C (vUnlinkEudcRFONTsWorker.c)
 */

void __fastcall vUnlinkEudcRFONTs(__int64 a1)
{
  struct _FONTHASH **v2; // rbx
  __int64 i; // rdi
  struct PFT *v4; // rbx
  __int64 j; // rdi
  __int64 v6; // rbx
  __int64 k; // rdi
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v9 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  v2 = gpPFTPublic;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)v2 + 6); i = (unsigned int)(i + 1) )
  {
    if ( v2[i + 5] )
      vUnlinkEudcRFONTsWorker(a1);
  }
  v4 = gpPFTDevice;
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)v4 + 6); j = (unsigned int)(j + 1) )
  {
    if ( *((_QWORD *)v4 + j + 5) )
      vUnlinkEudcRFONTsWorker(a1);
  }
  PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&v8, (struct PFT *)gpPFTPrivate);
  if ( SURFREF::bValid((SURFREF *)&v8) )
  {
    v6 = v8;
    for ( k = 0LL; (unsigned int)k < *(_DWORD *)(v6 + 24); k = (unsigned int)(k + 1) )
    {
      if ( *(_QWORD *)(v6 + 8 * k + 40) )
        vUnlinkEudcRFONTsWorker(a1);
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v9);
  SEMOBJ::vUnlock((SEMOBJ *)&v10);
}
