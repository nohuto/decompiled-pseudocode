/*
 * XREFs of _RtlpCopyXStateChunk@20 @ 0x4B35C23D
 * Callers:
 *     _RtlCopyContext@12 @ 0x4B35B5F0 (_RtlCopyContext@12.c)
 *     _RtlpCopyExtendedContext@24 @ 0x4B35BC77 (_RtlpCopyExtendedContext@24.c)
 * Callees:
 *     __allshl @ 0x4B2F65F0 (__allshl.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __fastcall RtlpCopyXStateChunk(int a1, int a2, int a3, int a4, int a5)
{
  unsigned int v5; // edi
  unsigned int *v6; // esi
  _DWORD *v7; // ebx
  int v8; // edx
  unsigned int v9; // ecx
  int v10; // ebx
  unsigned int v11; // eax
  int v12; // esi
  __int64 v13; // rax
  __int64 v14; // kr00_8
  unsigned int v15; // esi
  int v16; // ecx
  int v17; // ecx
  int v18; // eax
  size_t v20; // [esp-4h] [ebp-4Ch]
  size_t v21; // [esp-4h] [ebp-4Ch]
  unsigned int *v22; // [esp+10h] [ebp-38h]
  unsigned int v23; // [esp+14h] [ebp-34h]
  unsigned int v24; // [esp+18h] [ebp-30h]
  _DWORD *v25; // [esp+1Ch] [ebp-2Ch]
  int v26; // [esp+20h] [ebp-28h]
  int v27; // [esp+24h] [ebp-24h]
  unsigned int v28; // [esp+28h] [ebp-20h]
  char v29; // [esp+2Ch] [ebp-1Ch]
  unsigned int v30; // [esp+30h] [ebp-18h]
  int v31; // [esp+38h] [ebp-10h]
  int v32; // [esp+3Ch] [ebp-Ch]
  int v33; // [esp+40h] [ebp-8h]
  unsigned int v34; // [esp+44h] [ebp-4h]

  v5 = 64;
  v24 = *(_DWORD *)(a3 + 20);
  v33 = 64;
  if ( v24 >= 0x40 )
  {
    v23 = *(_DWORD *)(a5 + 20);
    if ( v23 >= 0x40 )
    {
      v6 = (unsigned int *)(a2 + *(_DWORD *)(a3 + 16));
      v7 = (_DWORD *)(a4 + *(_DWORD *)(a5 + 16));
      LODWORD(v20) = 64;
      v25 = v7;
      v22 = v6;
      v29 = 0;
      memset(v6, 0, v20);
      v8 = v7[1] & (MEMORY[0x7FFE070C] | MEMORY[0x7FFE03DC]);
      v9 = *v7 & (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & 0xFFFFFFFC;
      *v6 = v9;
      v6[1] = v8;
      v32 = v8;
      v34 = v9;
      if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      {
        v10 = v7[2] & (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8] | 3);
        v11 = v25[3] & (MEMORY[0x7FFE070C] | MEMORY[0x7FFE03DC]) | 0x80000000;
        v27 = MEMORY[0x7FFE05F8];
        v26 = MEMORY[0x7FFE05FC];
        v29 = 1;
        v28 = v11;
      }
      else
      {
        v10 = 0;
        v28 = 0;
        v11 = 0;
        v27 = 0;
        v26 = 0;
      }
      v6[2] = v10;
      v6[3] = v11;
      v12 = 2;
      v31 = 2;
      v30 = 2147354124;
      while ( 1 )
      {
        if ( !__PAIR64__(v9, v8) )
          return 0;
        v13 = 1LL << v12;
        v14 = 1LL << v12;
        if ( v29 )
        {
          if ( !(v28 & HIDWORD(v13) | v10 & (unsigned int)v13) )
          {
            v15 = v33;
            goto LABEL_16;
          }
          v33 = v5;
          v15 = v5;
          if ( v26 & HIDWORD(v13) | v27 & (unsigned int)v13 )
          {
            v15 = (v5 + 63) & 0xFFFFFFC0;
            v33 = v15;
          }
          v5 = v15 + *(_DWORD *)v30;
        }
        else
        {
          v16 = *(_DWORD *)(8 * v12 + 0x7FFE03F0);
          v15 = v16 - 512;
          v33 = v16 - 512;
          v5 = v16 + *(_DWORD *)(8 * v31 + 0x7FFE03F4) - 512;
        }
        LODWORD(v13) = v14;
LABEL_16:
        v17 = v13;
        v18 = HIDWORD(v13);
        v8 = v32;
        if ( v32 & v18 | v34 & v17 )
        {
          if ( v5 > v24 || v5 > v23 )
            return -2147483643;
          LODWORD(v21) = v5 - v15;
          memcpy((char *)v22 + v15, (char *)v25 + v15, v21);
          v9 = ~(_DWORD)v14 & v34;
          v8 = ~HIDWORD(v14) & v32;
          v34 = v9;
          v32 = v8;
        }
        else
        {
          v9 = v34;
        }
        ++v31;
        v30 += 4;
        v12 = v31;
        if ( v30 >= 0x7FFE0704 )
          return 0;
      }
    }
  }
  return -2147483643;
}
