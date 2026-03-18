/*
 * XREFs of MmShutdownSystem @ 0x1409AD310
 * Callers:
 *     PoBroadcastSystemState @ 0x14098F324 (PoBroadcastSystemState.c)
 *     PopGracefulShutdown @ 0x1409AE0F0 (PopGracefulShutdown.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     MmTrimAllSystemPagableMemory @ 0x1405374C0 (MmTrimAllSystemPagableMemory.c)
 *     MiShutdownSystem @ 0x1409ACF48 (MiShutdownSystem.c)
 */

char __fastcall MmShutdownSystem(int a1)
{
  char *v2; // rbx
  __int64 v3; // rdi

  if ( !a1 )
    return MiShutdownSystem();
  if ( a1 == 1 )
  {
    if ( (unsigned int)dword_140C4E4C4 < 2 )
    {
      dword_140C4E4C4 = 2;
      if ( (PopShutdownCleanly & 2) != 0 )
      {
        MmTrimAllSystemPagableMemory(1);
        if ( Count )
        {
          v2 = (char *)&unk_140C526A0;
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
  else if ( (unsigned int)dword_140C4E4C4 < 3 )
  {
    dword_140C4E4C4 = 3;
  }
  return 1;
}
