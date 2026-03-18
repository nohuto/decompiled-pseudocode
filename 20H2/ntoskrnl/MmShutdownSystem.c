/*
 * XREFs of MmShutdownSystem @ 0x1409B3280
 * Callers:
 *     PoBroadcastSystemState @ 0x1409952E0 (PoBroadcastSystemState.c)
 *     PopGracefulShutdown @ 0x1409B4060 (PopGracefulShutdown.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     MmTrimAllSystemPagableMemory @ 0x14053AE90 (MmTrimAllSystemPagableMemory.c)
 *     MiShutdownSystem @ 0x1409B2EB8 (MiShutdownSystem.c)
 */

char __fastcall MmShutdownSystem(int a1)
{
  char *v2; // rbx
  __int64 v3; // rdi

  if ( !a1 )
    return MiShutdownSystem();
  if ( a1 == 1 )
  {
    if ( (unsigned int)dword_140C4E544 < 2 )
    {
      dword_140C4E544 = 2;
      if ( (PopShutdownCleanly & 2) != 0 )
      {
        MmTrimAllSystemPagableMemory(1);
        if ( Count )
        {
          v2 = (char *)&unk_140C52720;
          v3 = Count;
          do
          {
            if ( (*(_WORD *)(*(_QWORD *)v2 + 204LL) & 0x840) == 0 )
              HalPutDmaAdapter(*(PADAPTER_OBJECT *)(*(_QWORD *)v2 + 56LL));
            v2 += 8;
            --v3;
          }
          while ( v3 );
        }
      }
    }
  }
  else if ( (unsigned int)dword_140C4E544 < 3 )
  {
    dword_140C4E544 = 3;
  }
  return 1;
}
