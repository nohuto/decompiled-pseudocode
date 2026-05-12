/*
 * XREFs of RaidGetStorageMiniportProperty @ 0x1C00749D4
 * Callers:
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C00714A8 (RaidAdapterStorageQueryPropertyIoctl.c)
 * Callees:
 *     memset @ 0x1C001DA00 (memset.c)
 */

__int64 __fastcall RaidGetStorageMiniportProperty(__int64 a1, _DWORD *a2, size_t *a3)
{
  size_t v3; // rbp
  __int64 v7; // rdi
  __int64 v9; // r15

  v3 = *a3;
  if ( *a3 < 8 )
  {
    *a3 = 24LL;
    return 3221225507LL;
  }
  else
  {
    v7 = 16LL;
    if ( v3 >= 0x10 )
    {
      v9 = *(_QWORD *)(a1 + 536);
      memset(a2, 0, *a3);
      a2[2] = 1;
      *((_WORD *)a2 + 6) = 257;
      *((_WORD *)a2 + 7) = *(_WORD *)(a1 + 4268);
      if ( v3 < 0x18 )
      {
        *a2 = 16;
        a2[1] = 16;
      }
      else
      {
        *a2 = 24;
        v7 = 24LL;
        a2[1] = 24;
        *((_BYTE *)a2 + 16) = (*(_DWORD *)(v9 + 184) & 0x80) != 0;
      }
      *a3 = v7;
    }
    else
    {
      *a2 = 24;
      a2[1] = 24;
      *a3 = 8LL;
    }
    return 0LL;
  }
}
