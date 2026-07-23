/*
 * XREFs of RtlpCopyXStateChunk @ 0x18005350C
 * Callers:
 *     RtlCopyContext @ 0x180051F70 (RtlCopyContext.c)
 *     RtlpCopyExtendedContext @ 0x1800F5DC4 (RtlpCopyExtendedContext.c)
 * Callees:
 *     memmove @ 0x1800A4480 (memmove.c)
 *     memset @ 0x1800A4740 (memset.c)
 */

__int64 __fastcall RtlpCopyXStateChunk(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // edi
  unsigned int v6; // esi
  unsigned int v7; // r13d
  unsigned __int64 *v8; // r14
  _QWORD *v9; // r12
  unsigned int v10; // r15d
  unsigned __int64 v11; // rbp
  char v12; // r8
  unsigned __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // r14
  __int64 v18; // rdx
  int v19; // ecx
  _QWORD *v20; // [rsp+20h] [rbp-48h]
  unsigned __int64 *v21; // [rsp+28h] [rbp-40h]
  char v22; // [rsp+70h] [rbp+8h]
  unsigned int v23; // [rsp+80h] [rbp+18h]
  __int64 v24; // [rsp+90h] [rbp+28h]

  v23 = *(_DWORD *)(a3 + 20);
  v5 = 64;
  v6 = 64;
  if ( v23 < 0x40 )
    return 2147483653LL;
  v7 = *(_DWORD *)(a5 + 20);
  if ( v7 < 0x40 )
    return 2147483653LL;
  v8 = (unsigned __int64 *)(a2 + *(int *)(a3 + 16));
  v9 = (_QWORD *)(a4 + *(int *)(a5 + 16));
  v21 = v8;
  v20 = v9;
  memset(v8, 0, 0x40uLL);
  v10 = 2;
  v11 = *v9 & (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & 0xFFFFFFFFFFFFFFFCuLL;
  *v8 = v11;
  if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
  {
    v12 = 1;
    v13 = v9[1] & (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8] | 3LL) | 0x8000000000000000uLL;
    v14 = MEMORY[0x7FFE05F8];
  }
  else
  {
    v12 = 0;
    v13 = 0LL;
    v14 = 0LL;
  }
  v8[1] = v13;
  v15 = 2147354124LL;
  v16 = 2147353604LL;
  v24 = v14;
  v22 = v12;
  do
  {
    if ( !v11 )
      break;
    v18 = 1LL << v10;
    if ( v12 )
    {
      if ( (v18 & v13) != 0 )
      {
        v6 = v5;
        if ( (v18 & v14) != 0 )
          v6 = (v5 + 63) & 0xFFFFFFC0;
        v5 = v6 + *(_DWORD *)v15;
      }
    }
    else
    {
      v19 = *(_DWORD *)(v16 - 4);
      v5 = v19 + *(_DWORD *)v16 - 512;
      v6 = v19 - 512;
    }
    if ( (v18 & v11) != 0 )
    {
      if ( v5 > v23 || v5 > v7 )
        return 2147483653LL;
      memmove((char *)v21 + v6, (char *)v20 + v6, v5 - v6);
      v12 = v22;
      _bittestandreset64((__int64 *)&v11, v10);
    }
    v14 = v24;
    ++v10;
    v15 += 4LL;
    v16 += 8LL;
  }
  while ( v10 < 0x40 );
  return 0LL;
}
