/*
 * XREFs of MiAllocateFastLargePagesForMdl @ 0x140533F24
 * Callers:
 *     MiFindPagesForMdl @ 0x14029542C (MiFindPagesForMdl.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiAllocateLargeZeroPages @ 0x14055DC9C (MiAllocateLargeZeroPages.c)
 *     MiEndDpcGang @ 0x1405606D8 (MiEndDpcGang.c)
 *     MiInitializeDpcGang @ 0x140560790 (MiInitializeDpcGang.c)
 *     MiInsertDpcGang @ 0x14056085C (MiInsertDpcGang.c)
 *     MiStartDpcGang @ 0x1405608EC (MiStartDpcGang.c)
 */

__int64 __fastcall MiAllocateFastLargePagesForMdl(__int64 a1, unsigned int a2, char a3)
{
  int v6; // eax
  __int64 v7; // rdi
  __int64 v8; // r14
  int v9; // r8d
  int v10; // r13d
  unsigned __int64 v11; // r12
  int v12; // ecx
  __int64 result; // rax
  int v14; // r15d
  unsigned __int8 CurrentIrql; // cl
  __int64 v16; // r11
  _QWORD *v17; // rsi
  _QWORD *v18; // r8
  unsigned __int64 v19; // r12
  _QWORD *v20; // rbx
  unsigned int v21; // ecx
  __int64 v22; // rax
  _OWORD v23[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v24[48]; // [rsp+60h] [rbp-A0h] BYREF

  memset(v24, 0, sizeof(v24));
  v6 = *(_DWORD *)(a1 + 60);
  v7 = *(_QWORD *)(a1 + 64);
  v8 = 4LL;
  memset(v23, 0, sizeof(v23));
  if ( v6 )
  {
    if ( v6 == 2 )
    {
      v9 = 28;
    }
    else
    {
      v9 = 4;
      if ( v6 == 3 )
        v9 = 0;
    }
  }
  else
  {
    v9 = 12;
  }
  v10 = a3 & 1;
  v11 = (unsigned __int64)*(unsigned int *)(v7 + 40) >> 12;
  v12 = (2 * v10 + 1) | 4;
  if ( *(_QWORD *)(a1 + 16) != 0x100000LL )
    v12 = 2 * v10 + 1;
  result = MiAllocateLargeZeroPages(
             *(_QWORD *)a1,
             (unsigned int)*(_QWORD *)(a1 + 40) - (unsigned int)v11,
             *(_QWORD *)(a1 + 32),
             a2,
             v9,
             (__int64)v23,
             v12);
  v14 = result;
  if ( result )
  {
    CurrentIrql = KeGetCurrentIrql();
    MiInitializeDpcGang(v24, a2, CurrentIrql < 2u ? 0 : 2);
    LODWORD(v24[23]) |= 0x40u;
    v16 = 0LL;
    *(_QWORD *)(a1 + 72) = KeGetCurrentThread()->ApcState.Process;
    v24[0] = a1;
    v17 = (_QWORD *)(v7 + 48 + 8 * v11);
    do
    {
      v18 = *(_QWORD **)((char *)v23 + v16 * 8);
      v19 = MiLargePageSizes[v16];
      if ( v18 )
      {
        do
        {
          v20 = (_QWORD *)*v18;
          v21 = 0;
          if ( v19 )
          {
            v22 = 0LL;
            do
            {
              ++v21;
              *v17++ = (__int64)(v18 + 0xB000000000LL) / 48 + v22;
              v22 = v21;
            }
            while ( v21 < v19 );
          }
          MiInsertDpcGang(v24, v18);
          v18 = v20;
        }
        while ( v20 );
      }
      ++v16;
      --v8;
    }
    while ( v8 );
    *(_DWORD *)(v7 + 40) += v14 << 12;
    MiStartDpcGang(v24);
    MiEndDpcGang(v24);
    *(_QWORD *)(v7 + 16) = 0LL;
    result = 2LL;
    *(_WORD *)(v7 + 10) |= 2u;
    if ( v10 )
      *(_QWORD *)(v7 + 24) = 1LL;
  }
  return result;
}
