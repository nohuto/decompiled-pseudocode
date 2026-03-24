/*
 * XREFs of FopReadNamingTable @ 0x140A96730
 * Callers:
 *     FopValidateFontNameTable @ 0x140A96228 (FopValidateFontNameTable.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14039BD60 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14039C584 (BgpFwAllocateMemory.c)
 *     FioFwReadBytesAtOffset @ 0x1403B35FC (FioFwReadBytesAtOffset.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     FopReadNameRecord @ 0x140A96858 (FopReadNameRecord.c)
 */

__int64 __fastcall FopReadNamingTable(__int64 a1, unsigned int a2, __int64 *a3)
{
  int NameRecord; // ebx
  __int16 v7; // bp
  unsigned __int64 v8; // rcx
  unsigned int v9; // esi
  unsigned int v10; // eax
  __int64 Memory; // rdi
  unsigned int v12; // r14d
  unsigned int v13; // ebp
  __int64 v14; // rdx
  __int64 v15; // r8
  _DWORD *v16; // r9
  __int128 v18; // [rsp+20h] [rbp-58h] BYREF
  __int16 v19; // [rsp+30h] [rbp-48h]

  v19 = 0;
  v18 = 0LL;
  NameRecord = FioFwReadBytesAtOffset(a1, a2, 6u, &v18);
  if ( NameRecord >= 0 )
  {
    LOWORD(v18) = __ROR2__(v18, 8);
    v7 = __ROR2__(WORD2(v18), 8);
    WORD1(v18) = __ROR2__(WORD1(v18), 8);
    v8 = 18LL;
    v9 = WORD1(v18);
    if ( WORD1(v18) )
    {
      v10 = 12 * WORD1(v18) + 18;
      if ( v10 < 0x12 )
        return (unsigned int)-1073741675;
      v8 = v10;
      NameRecord = 0;
    }
    Memory = BgpFwAllocateMemory(v8);
    if ( Memory )
    {
      v12 = a2 + 6;
      *(_DWORD *)Memory = v18;
      *(_WORD *)(Memory + 4) = v7;
      v13 = 0;
      if ( v9 )
      {
        while ( 1 )
        {
          NameRecord = FopReadNameRecord(a1, v12, Memory + 12LL * v13 + 6);
          if ( NameRecord < 0 )
            break;
          ++v13;
          v12 += 12;
          if ( v13 >= v9 )
            goto LABEL_9;
        }
        BgpFwFreeMemory(Memory, v14, v15, v16);
      }
      else
      {
LABEL_9:
        *a3 = Memory;
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)NameRecord;
}
