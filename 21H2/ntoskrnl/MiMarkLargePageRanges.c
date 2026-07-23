/*
 * XREFs of MiMarkLargePageRanges @ 0x140A43D88
 * Callers:
 *     MiInitNucleus @ 0x140A43F34 (MiInitNucleus.c)
 * Callees:
 *     MiUpdateLargePageBitMap @ 0x14030ADE0 (MiUpdateLargePageBitMap.c)
 *     MiMarkLargePageMappings @ 0x140A43CD0 (MiMarkLargePageMappings.c)
 */

void MiMarkLargePageRanges()
{
  unsigned int v0; // ebp
  __int64 v1; // r14
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax

  MiMarkLargePageMappings();
  v0 = *(_DWORD *)MmPhysicalMemoryBlock;
  if ( *(_DWORD *)MmPhysicalMemoryBlock )
  {
    v1 = 16LL * v0;
    do
    {
      v1 -= 16LL;
      --v0;
      v2 = *(_QWORD *)((char *)MmPhysicalMemoryBlock + v1 + 16);
      v3 = (v2 + *(_QWORD *)((char *)MmPhysicalMemoryBlock + v1 + 24)) & 0xFFFFFFFFFFFFFE00uLL;
      v4 = (v2 + 511) & 0xFFFFFFFFFFFFFE00uLL;
      if ( v4 )
      {
        if ( v4 < v3 )
        {
          v5 = -1LL;
          v6 = 0LL;
          v7 = 48 * v4 - 0x58000000000LL;
          v8 = v7 + 48 * (v3 - v4);
          if ( v7 < v8 )
          {
            do
            {
              if ( (*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0
                && (*(_BYTE *)(v7 + 34) & 7) == 6
                && (*(_QWORD *)(v7 + 40) & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL )
              {
                if ( !v6 )
                  v5 = (__int64)(v7 + 0x58000000000LL) / 48;
                ++v6;
              }
              else
              {
                if ( v6 >= 0x200 )
                {
                  v6 &= 0xFFFFFFFFFFFFFE00uLL;
                  MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v5, v6, 1, 1);
                }
                if ( !v6 )
                  v5 = (__int64)(v7 + 0x58000000000LL) / 48;
                v9 = v6 + 512;
                v6 = 0LL;
                v10 = (v5 + v9) & 0xFFFFFFFFFFFFFE00uLL;
                if ( !v10 )
                  goto LABEL_16;
                v7 = 48 * v10 - 0x58000000030LL;
              }
              v7 += 48LL;
            }
            while ( v7 < v8 );
            if ( v6 >= 0x200 )
              MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v5, v6 & 0xFFFFFFFFFFFFFE00uLL, 1, 1);
          }
        }
      }
LABEL_16:
      ;
    }
    while ( v0 );
  }
}
