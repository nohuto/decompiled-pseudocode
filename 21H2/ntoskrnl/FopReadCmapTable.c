/*
 * XREFs of FopReadCmapTable @ 0x140A963B4
 * Callers:
 *     FopReadMappingTable @ 0x140A96050 (FopReadMappingTable.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14039BD60 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14039C584 (BgpFwAllocateMemory.c)
 *     FioFwReadBytesAtOffset @ 0x1403B35FC (FioFwReadBytesAtOffset.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 */

__int64 __fastcall FopReadCmapTable(__int64 a1, unsigned int a2, _QWORD *a3)
{
  int BytesAtOffset; // ebx
  unsigned __int16 v6; // di
  unsigned __int64 v7; // rcx
  unsigned int v8; // eax
  _DWORD *Memory; // rsi
  unsigned int v10; // r14d
  unsigned int v11; // r12d
  unsigned int v12; // ebp
  unsigned int *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  _DWORD *v16; // r9
  __int64 v19; // [rsp+28h] [rbp-50h] BYREF
  int v20; // [rsp+30h] [rbp-48h]

  v19 = 0LL;
  v20 = 0;
  BytesAtOffset = FioFwReadBytesAtOffset(a1, a2, 4u, &v19);
  if ( BytesAtOffset >= 0 )
  {
    v6 = __ROR2__(WORD1(v19), 8);
    LOWORD(v19) = __ROR2__(v19, 8);
    WORD1(v19) = v6;
    if ( (_WORD)v19 )
    {
      return (unsigned int)-1073741701;
    }
    else
    {
      v7 = 12LL;
      if ( v6 )
      {
        v8 = 8 * v6 + 4;
        if ( v8 < 0xC )
          return (unsigned int)-1073741675;
        v7 = v8;
        BytesAtOffset = 0;
      }
      Memory = (_DWORD *)BgpFwAllocateMemory(v7);
      if ( Memory )
      {
        v10 = a2 + 4;
        v11 = v6;
        v12 = 0;
        *Memory = v19;
        if ( v6 )
        {
          v13 = Memory + 2;
          while ( 1 )
          {
            BytesAtOffset = FioFwReadBytesAtOffset(a1, v10, 8u, v13 - 1);
            if ( BytesAtOffset >= 0 )
            {
              *((_WORD *)v13 - 2) = __ROR2__(*((_WORD *)v13 - 2), 8);
              *((_WORD *)v13 - 1) = __ROR2__(*((_WORD *)v13 - 1), 8);
              BytesAtOffset = 0;
              *v13 = _byteswap_ulong(*v13);
            }
            if ( BytesAtOffset < 0 )
              break;
            ++v12;
            v13 += 2;
            v10 += 8;
            if ( v12 >= v11 )
              goto LABEL_13;
          }
          BgpFwFreeMemory((__int64)Memory, v14, v15, v16);
        }
        else
        {
LABEL_13:
          *a3 = Memory;
        }
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return (unsigned int)BytesAtOffset;
}
