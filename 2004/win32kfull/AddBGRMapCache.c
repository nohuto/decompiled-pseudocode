/*
 * XREFs of AddBGRMapCache @ 0x1C0262738
 * Callers:
 *     CreateDyesColorMappingTable @ 0x1C00D5B24 (CreateDyesColorMappingTable.c)
 * Callees:
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     TrimBGRMapCache @ 0x1C0263938 (TrimBGRMapCache.c)
 */

__int64 __fastcall AddBGRMapCache(__int64 a1, int a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // edi
  unsigned __int64 v6; // rax
  PVOID v7; // rax
  void *v8; // rbp
  PVOID v9; // rsi
  _DWORD *v10; // rdx
  __int64 v11; // rax

  v4 = 1;
  EngAcquireSemaphore(qword_1C033AF68);
  if ( dword_1C033AF88 > 5 && HIDWORD(qword_1C033AF8C) )
    TrimBGRMapCache();
  if ( dword_1C033AF88 >= (int)qword_1C033AF8C )
  {
    v5 = qword_1C033AF8C + 10;
    if ( (int)qword_1C033AF8C + 10 >= (unsigned int)qword_1C033AF8C )
    {
      v6 = 16LL * v5;
      if ( v6 <= 0xFFFFFFFF )
      {
        v7 = EngAllocMem(1u, v6, 0x30365448u);
        v8 = v7;
        if ( v7 )
        {
          v9 = Src;
          if ( Src )
          {
            memmove(v7, Src, 16LL * dword_1C033AF88);
            EngFreeMem(v9);
          }
          Src = v8;
          LODWORD(qword_1C033AF8C) = v5;
        }
      }
    }
  }
  v10 = Src;
  if ( Src && dword_1C033AF88 < (int)qword_1C033AF8C )
  {
    v11 = 2LL * dword_1C033AF88++;
    *((_QWORD *)Src + v11) = a1;
    v10[2 * v11 + 3] = a2;
    v10[2 * v11 + 2] = 1;
  }
  else
  {
    v4 = 0;
  }
  EngReleaseSemaphore(qword_1C033AF68);
  return v4;
}
