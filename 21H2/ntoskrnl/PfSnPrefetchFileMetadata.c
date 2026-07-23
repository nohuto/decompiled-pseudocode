/*
 * XREFs of PfSnPrefetchFileMetadata @ 0x14067563C
 * Callers:
 *     PfSnPrefetchMetadata @ 0x140676A74 (PfSnPrefetchMetadata.c)
 *     PfSnGetSectionObject @ 0x140677798 (PfSnGetSectionObject.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     NtResetEvent @ 0x140675560 (NtResetEvent.c)
 *     NtWaitForSingleObject @ 0x140707C10 (NtWaitForSingleObject.c)
 *     IopXxxControlFile @ 0x1407153F0 (IopXxxControlFile.c)
 */

__int64 __fastcall PfSnPrefetchFileMetadata(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        HANDLE EventHandle)
{
  unsigned int v6; // r10d
  unsigned int v10; // ebx
  unsigned int v11; // eax
  _DWORD *v13; // rsi
  unsigned int v14; // r14d
  void *v15; // r9
  int v16; // r13d
  int v17; // ebx
  size_t Size; // [rsp+38h] [rbp-60h]
  SIZE_T Length; // [rsp+48h] [rbp-50h]
  __int128 v20; // [rsp+60h] [rbp-38h] BYREF

  v6 = 0;
  v20 = 0LL;
  if ( a5 )
  {
    v10 = *(_DWORD *)(a3 + 4);
    if ( v10 <= a4 || v10 - a4 < a5 )
    {
      return (unsigned int)-1073741701;
    }
    else
    {
      v11 = *(_DWORD *)(a1 + 96) & 7 | (8 * (*(_DWORD *)(a1 + 100) & 7 | 8));
      if ( a4 || a5 > 0x300 )
      {
        v13 = *(_DWORD **)(a1 + 80);
        v14 = 0;
        v13[1] = 0;
        *v13 = 3;
        *((_QWORD *)v13 + 1) = v11;
        v15 = v13 + 4;
        do
        {
          v16 = 768;
          if ( a5 - v14 < 0x300 )
            v16 = a5 - v14;
          v13[1] = v16;
          memmove(v15, (const void *)(a3 + 16 + 8LL * (v14 + a4)), (unsigned int)(8 * v16));
          v17 = 8 * v13[1] + 16;
          NtResetEvent(EventHandle, 0LL);
          LODWORD(Length) = 0;
          LODWORD(Size) = v17;
          v6 = IopXxxControlFile(a2, (__int64)&v20, 590112, v13, Size, 0LL, Length, 0);
          if ( v6 == 259 )
          {
            NtWaitForSingleObject(EventHandle, 0, 0LL);
            v6 = v20;
          }
          if ( (v6 & 0xC0000000) == 0xC0000000 )
            break;
          v14 += v16;
          v15 = v13 + 4;
        }
        while ( v14 < a5 );
      }
      else
      {
        *(_QWORD *)(a3 + 8) = v11;
        *(_DWORD *)(a3 + 4) = a5;
        NtResetEvent(EventHandle, 0LL);
        LODWORD(Length) = a4 & Length;
        LODWORD(Size) = 8 * a5 + 16;
        v6 = IopXxxControlFile(a2, (__int64)&v20, 590112, (void *)a3, Size, 0LL, Length, a4);
        if ( v6 == 259 )
        {
          NtWaitForSingleObject(EventHandle, 0, 0LL);
          v6 = v20;
        }
        *(_DWORD *)(a3 + 4) = v10;
      }
    }
  }
  return v6;
}
