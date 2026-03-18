/*
 * XREFs of MmShutdownSystem @ 0x1409AC4B0
 * Callers:
 *     PoBroadcastSystemState @ 0x14098E5D0 (PoBroadcastSystemState.c)
 *     PopGracefulShutdown @ 0x1409AD290 (PopGracefulShutdown.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     MmTrimAllSystemPagableMemory @ 0x140536E70 (MmTrimAllSystemPagableMemory.c)
 *     MiShutdownSystem @ 0x1409AC0E8 (MiShutdownSystem.c)
 */

char __fastcall MmShutdownSystem(int a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  char *v5; // rbx
  __int64 v6; // rdi

  if ( !a1 )
    return MiShutdownSystem();
  if ( a1 == 1 )
  {
    if ( (unsigned int)dword_140C4E604 < 2 )
    {
      dword_140C4E604 = 2;
      if ( (PopShutdownCleanly & 2) != 0 )
      {
        MmTrimAllSystemPagableMemory(1u, a2, a3, a4);
        if ( Count )
        {
          v5 = (char *)&unk_140C527A0;
          v6 = Count;
          do
          {
            if ( (*(_WORD *)(*(_QWORD *)v5 + 204LL) & 0x840) == 0 )
              HalPutDmaAdapter(*(PADAPTER_OBJECT *)(*(_QWORD *)v5 + 56LL));
            v5 += 8;
            --v6;
          }
          while ( v6 );
        }
      }
    }
  }
  else if ( (unsigned int)dword_140C4E604 < 3 )
  {
    dword_140C4E604 = 3;
  }
  return 1;
}
