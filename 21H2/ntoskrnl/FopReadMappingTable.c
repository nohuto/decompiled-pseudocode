/*
 * XREFs of FopReadMappingTable @ 0x140A96050
 * Callers:
 *     FopInitializeFonts @ 0x140A95F14 (FopInitializeFonts.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14039BD60 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14039C584 (BgpFwAllocateMemory.c)
 *     FioFwReadBytesAtOffset @ 0x1403B35FC (FioFwReadBytesAtOffset.c)
 *     FopFreeMappingTable @ 0x1409F4308 (FopFreeMappingTable.c)
 *     FopReadCmapTable @ 0x140A963B4 (FopReadCmapTable.c)
 */

__int64 __fastcall FopReadMappingTable(__int64 a1, __int64 a2, __int64 *a3)
{
  int v3; // edi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  _DWORD *v8; // r9
  __int64 v9; // r15
  int BytesAtOffset; // ebx
  _DWORD *v11; // rax
  unsigned int v12; // ecx
  int v13; // ecx
  int v14; // r13d
  unsigned __int16 v15; // r14
  unsigned __int16 v16; // si
  __int64 Memory; // rax
  __int64 v18; // rdi
  int v19; // eax
  unsigned int v20; // esi
  _WORD *v21; // rax
  _WORD *v22; // r14
  unsigned int v23; // esi
  _WORD *v24; // rcx
  __int64 v26; // [rsp+20h] [rbp-10h] BYREF
  int v27; // [rsp+28h] [rbp-8h]
  __int16 v28; // [rsp+2Ch] [rbp-4h]
  __int64 v30; // [rsp+88h] [rbp+58h] BYREF

  v30 = 0LL;
  v3 = a2;
  v26 = 0LL;
  v27 = 0;
  v28 = 0;
  v5 = FopReadCmapTable(a1, a2, &v30);
  v9 = v30;
  BytesAtOffset = v5;
  if ( v5 >= 0 )
  {
    v6 = *(unsigned __int16 *)(v30 + 2);
    v11 = (_DWORD *)(v30 + 4);
    v12 = 0;
    if ( !*(_WORD *)(v30 + 2) )
      goto LABEL_25;
    v7 = 1LL;
    while ( *v11 != 65539 )
    {
      ++v12;
      v11 += 2;
      if ( v12 >= (unsigned int)v6 )
        goto LABEL_25;
    }
    v13 = v11[1];
    if ( !v13 )
    {
LABEL_25:
      BytesAtOffset = -1073741275;
      goto LABEL_21;
    }
    v14 = v13 + v3;
    BytesAtOffset = FioFwReadBytesAtOffset(a1, v13 + v3, 0xEu, &v26);
    if ( BytesAtOffset < 0 )
    {
      v16 = HIWORD(v26);
      v15 = WORD1(v26);
    }
    else
    {
      if ( __ROR2__(v26, 8) != 4 )
      {
        BytesAtOffset = -1073741701;
        goto LABEL_21;
      }
      v15 = __ROR2__(WORD1(v26), 8);
      v16 = __ROR2__(HIWORD(v26), 8);
      BytesAtOffset = 0;
    }
    if ( BytesAtOffset >= 0 )
    {
      Memory = BgpFwAllocateMemory(0x38uLL);
      v18 = Memory;
      if ( Memory )
      {
        *(_OWORD *)Memory = 0LL;
        *(_OWORD *)(Memory + 16) = 0LL;
        *(_OWORD *)(Memory + 32) = 0LL;
        *(_QWORD *)(Memory + 48) = 0LL;
        v19 = v16 >> 1;
        v20 = v15 - 14;
        *(_DWORD *)v18 = v19;
        v21 = (_WORD *)BgpFwAllocateMemory(v20);
        v22 = v21;
        if ( v21 )
        {
          v23 = v20 >> 1;
          *(_QWORD *)(v18 + 8) = v21;
          BytesAtOffset = FioFwReadBytesAtOffset(a1, v14 + 14, 2 * v23, v21);
          if ( BytesAtOffset >= 0 )
          {
            if ( v23 )
            {
              v24 = v22;
              v6 = v23;
              do
              {
                *v24 = __ROR2__(*v24, 8);
                ++v24;
                --v6;
              }
              while ( v6 );
            }
            BytesAtOffset = 0;
          }
          if ( BytesAtOffset >= 0 )
          {
            v6 = (unsigned int)(2 * *(_DWORD *)v18);
            *(_QWORD *)(v18 + 24) = v22;
            *(_QWORD *)(v18 + 16) = (char *)v22 + (unsigned int)(v6 + 2);
            *(_QWORD *)(v18 + 32) = (char *)v22 + (unsigned int)(2 * v6 + 2);
            *(_QWORD *)(v18 + 40) = (char *)v22 + (unsigned int)(v6 + 2 * (v6 + 1));
            *(_QWORD *)(v18 + 48) = (char *)v22 + (unsigned int)(4 * v6 + 2);
            *a3 = v18;
            v18 = 0LL;
            BytesAtOffset = 0;
          }
        }
        else
        {
          BytesAtOffset = -1073741801;
        }
        if ( v18 )
          FopFreeMappingTable(v18, v6, v7, v8);
      }
      else
      {
        BytesAtOffset = -1073741801;
      }
    }
  }
LABEL_21:
  if ( v9 )
    BgpFwFreeMemory(v9, v6, v7, v8);
  return (unsigned int)BytesAtOffset;
}
