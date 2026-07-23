/*
 * XREFs of FopReadMappingTable @ 0x140A97050
 * Callers:
 *     FopInitializeFonts @ 0x140A96F14 (FopInitializeFonts.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14039BEB0 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14039C6D4 (BgpFwAllocateMemory.c)
 *     FioFwReadBytesAtOffset @ 0x1403B376C (FioFwReadBytesAtOffset.c)
 *     FopFreeMappingTable @ 0x1409F5308 (FopFreeMappingTable.c)
 *     FopReadCmapTable @ 0x140A973B4 (FopReadCmapTable.c)
 */

__int64 __fastcall FopReadMappingTable(__int64 a1, __int64 a2, __int64 *a3)
{
  int v3; // edi
  int v5; // eax
  __int64 v6; // r15
  int BytesAtOffset; // ebx
  _DWORD *v8; // rax
  unsigned int v9; // ecx
  int v10; // ecx
  int v11; // r13d
  unsigned __int16 v12; // r14
  unsigned __int16 v13; // si
  __int64 Memory; // rax
  __int64 v15; // rdi
  int v16; // eax
  unsigned int v17; // esi
  _WORD *v18; // rax
  _WORD *v19; // r14
  unsigned int v20; // esi
  _WORD *v21; // rcx
  __int64 v22; // rdx
  int v23; // edx
  __int64 v25; // [rsp+20h] [rbp-10h] BYREF
  int v26; // [rsp+28h] [rbp-8h]
  __int16 v27; // [rsp+2Ch] [rbp-4h]
  __int64 v29; // [rsp+88h] [rbp+58h] BYREF

  v29 = 0LL;
  v3 = a2;
  v25 = 0LL;
  v26 = 0;
  v27 = 0;
  v5 = FopReadCmapTable(a1, a2, &v29);
  v6 = v29;
  BytesAtOffset = v5;
  if ( v5 >= 0 )
  {
    v8 = (_DWORD *)(v29 + 4);
    v9 = 0;
    if ( !*(_WORD *)(v29 + 2) )
      goto LABEL_24;
    while ( *v8 != 65539 )
    {
      ++v9;
      v8 += 2;
      if ( v9 >= *(unsigned __int16 *)(v29 + 2) )
        goto LABEL_24;
    }
    v10 = v8[1];
    if ( !v10 )
    {
LABEL_24:
      BytesAtOffset = -1073741275;
      goto LABEL_20;
    }
    v11 = v10 + v3;
    BytesAtOffset = FioFwReadBytesAtOffset(a1, v10 + v3, 0xEu, &v25);
    if ( BytesAtOffset < 0 )
    {
      v13 = HIWORD(v25);
      v12 = WORD1(v25);
    }
    else
    {
      if ( __ROR2__(v25, 8) != 4 )
      {
        BytesAtOffset = -1073741701;
        goto LABEL_20;
      }
      v12 = __ROR2__(WORD1(v25), 8);
      v13 = __ROR2__(HIWORD(v25), 8);
      BytesAtOffset = 0;
    }
    if ( BytesAtOffset >= 0 )
    {
      Memory = BgpFwAllocateMemory(0x38uLL);
      v15 = Memory;
      if ( Memory )
      {
        *(_OWORD *)Memory = 0LL;
        *(_OWORD *)(Memory + 16) = 0LL;
        *(_OWORD *)(Memory + 32) = 0LL;
        *(_QWORD *)(Memory + 48) = 0LL;
        v16 = v13 >> 1;
        v17 = v12 - 14;
        *(_DWORD *)v15 = v16;
        v18 = (_WORD *)BgpFwAllocateMemory(v17);
        v19 = v18;
        if ( v18 )
        {
          v20 = v17 >> 1;
          *(_QWORD *)(v15 + 8) = v18;
          BytesAtOffset = FioFwReadBytesAtOffset(a1, v11 + 14, 2 * v20, v18);
          if ( BytesAtOffset >= 0 )
          {
            if ( v20 )
            {
              v21 = v19;
              v22 = v20;
              do
              {
                *v21 = __ROR2__(*v21, 8);
                ++v21;
                --v22;
              }
              while ( v22 );
            }
            BytesAtOffset = 0;
          }
          if ( BytesAtOffset >= 0 )
          {
            v23 = 2 * *(_DWORD *)v15;
            *(_QWORD *)(v15 + 24) = v19;
            *(_QWORD *)(v15 + 16) = (char *)v19 + (unsigned int)(v23 + 2);
            *(_QWORD *)(v15 + 32) = (char *)v19 + (unsigned int)(2 * v23 + 2);
            *(_QWORD *)(v15 + 40) = (char *)v19 + (unsigned int)(v23 + 2 * (v23 + 1));
            *(_QWORD *)(v15 + 48) = (char *)v19 + (unsigned int)(4 * v23 + 2);
            *a3 = v15;
            v15 = 0LL;
            BytesAtOffset = 0;
          }
        }
        else
        {
          BytesAtOffset = -1073741801;
        }
        if ( v15 )
          FopFreeMappingTable(v15);
      }
      else
      {
        BytesAtOffset = -1073741801;
      }
    }
  }
LABEL_20:
  if ( v6 )
    BgpFwFreeMemory(v6);
  return (unsigned int)BytesAtOffset;
}
