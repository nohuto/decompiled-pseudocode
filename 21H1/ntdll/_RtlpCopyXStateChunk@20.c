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
  unsigned int *v20; // [esp+10h] [ebp-38h]
  unsigned int v21; // [esp+14h] [ebp-34h]
  unsigned int v22; // [esp+18h] [ebp-30h]
  _DWORD *v23; // [esp+1Ch] [ebp-2Ch]
  int v24; // [esp+20h] [ebp-28h]
  int v25; // [esp+24h] [ebp-24h]
  unsigned int v26; // [esp+28h] [ebp-20h]
  char v27; // [esp+2Ch] [ebp-1Ch]
  unsigned int v28; // [esp+30h] [ebp-18h]
  int v29; // [esp+38h] [ebp-10h]
  int v30; // [esp+3Ch] [ebp-Ch]
  int v31; // [esp+40h] [ebp-8h]
  unsigned int v32; // [esp+44h] [ebp-4h]

  v5 = 64;
  v22 = *(_DWORD *)(a3 + 20);
  v31 = 64;
  if ( v22 >= 0x40 )
  {
    v21 = *(_DWORD *)(a5 + 20);
    if ( v21 >= 0x40 )
    {
      v6 = (unsigned int *)(a2 + *(_DWORD *)(a3 + 16));
      v7 = (_DWORD *)(a4 + *(_DWORD *)(a5 + 16));
      v23 = v7;
      v20 = v6;
      v27 = 0;
      memset(v6, 0, 0x40u);
      v8 = v7[1] & (MEMORY[0x7FFE070C] | MEMORY[0x7FFE03DC]);
      v9 = *v7 & (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & 0xFFFFFFFC;
      *v6 = v9;
      v6[1] = v8;
      v30 = v8;
      v32 = v9;
      if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      {
        v10 = v7[2] & (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8] | 3);
        v11 = v23[3] & (MEMORY[0x7FFE070C] | MEMORY[0x7FFE03DC]) | 0x80000000;
        v25 = MEMORY[0x7FFE05F8];
        v24 = MEMORY[0x7FFE05FC];
        v27 = 1;
        v26 = v11;
      }
      else
      {
        v10 = 0;
        v26 = 0;
        v11 = 0;
        v25 = 0;
        v24 = 0;
      }
      v6[2] = v10;
      v6[3] = v11;
      v12 = 2;
      v29 = 2;
      v28 = 2147354124;
      while ( 1 )
      {
        if ( !__PAIR64__(v9, v8) )
          return 0;
        v13 = 1LL << v12;
        v14 = 1LL << v12;
        if ( v27 )
        {
          if ( !(v26 & HIDWORD(v13) | v10 & (unsigned int)v13) )
          {
            v15 = v31;
            goto LABEL_16;
          }
          v31 = v5;
          v15 = v5;
          if ( v24 & HIDWORD(v13) | v25 & (unsigned int)v13 )
          {
            v15 = (v5 + 63) & 0xFFFFFFC0;
            v31 = v15;
          }
          v5 = v15 + *(_DWORD *)v28;
        }
        else
        {
          v16 = *(_DWORD *)(8 * v12 + 0x7FFE03F0);
          v15 = v16 - 512;
          v31 = v16 - 512;
          v5 = v16 + *(_DWORD *)(8 * v29 + 0x7FFE03F4) - 512;
        }
        LODWORD(v13) = v14;
LABEL_16:
        v17 = v13;
        v18 = HIDWORD(v13);
        v8 = v30;
        if ( v30 & v18 | v32 & v17 )
        {
          if ( v5 > v22 || v5 > v21 )
            return -2147483643;
          memcpy((char *)v20 + v15, (char *)v23 + v15, v5 - v15);
          v9 = ~(_DWORD)v14 & v32;
          v8 = ~HIDWORD(v14) & v30;
          v32 = v9;
          v30 = v8;
        }
        else
        {
          v9 = v32;
        }
        ++v29;
        v28 += 4;
        v12 = v29;
        if ( v28 >= 0x7FFE0704 )
          return 0;
      }
    }
  }
  return -2147483643;
}
