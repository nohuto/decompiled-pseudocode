/*
 * XREFs of MiInitializeProcessBottomUpEntropy @ 0x1406C0150
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x1406BFB24 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     ExGenRandom @ 0x1402D1110 (ExGenRandom.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

__int64 __fastcall MiInitializeProcessBottomUpEntropy(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // esi
  __int64 v3; // rbp
  char v5; // r14
  unsigned __int64 v6; // r15
  int v7; // ecx
  __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 result; // rax
  __int64 v15; // [rsp+20h] [rbp-48h]
  __int64 v16; // [rsp+28h] [rbp-40h]
  __int64 v17; // [rsp+30h] [rbp-38h]

  v1 = *(_DWORD *)(a1 + 2512);
  v2 = 0;
  v3 = *(_QWORD *)(a1 + 1680);
  v17 = 0LL;
  v5 = 0;
  v16 = 1LL;
  v6 = 2LL;
  if ( (v1 & 0x40) != 0 )
    goto LABEL_20;
  v7 = ExGenRandom(1);
  v8 = (unsigned __int8)v7;
  if ( !(_DWORD)InitializationPhase )
    *(_DWORD *)(a1 + 2512) |= 0x20u;
  if ( *(_QWORD *)(a1 + 1496) > 0x100000000uLL && (*(_DWORD *)(a1 + 2512) & 0x20) != 0 )
  {
    v9 = *(_QWORD *)&v7 & 0xFFFFFFLL;
    v8 = 0x10000LL;
    v5 = 1;
    if ( v9 > 0x10000 )
      v8 = v9;
  }
  if ( !v8 )
    v8 = 1LL;
  v16 = v8;
  if ( !v5 )
  {
LABEL_20:
    _InterlockedAnd((volatile signed __int32 *)(a1 + 2512), 0xFFFFFFDF);
    v8 = v16;
  }
  if ( v5 == 1 )
    v15 = v8 + (ExGenRandom(1) & 0xFFFFFF) + 0x1000000;
  else
    v15 = v8;
  if ( *(_QWORD *)(a1 + 1496) <= 0x100000000uLL )
  {
    v6 = 3LL;
    v17 = (ExGenRandom(1) & 0xFFFFFF) + 0x10000;
  }
  *(_QWORD *)(v3 + 264) = v6;
  v10 = 0LL;
  do
  {
    v11 = 9 * v10;
    v12 = *(_QWORD *)(a1 + 1496) - 1LL;
    if ( v2 == 2 )
      v12 = 0x7FFFFFFEFFFFLL;
    ++v2;
    *(_QWORD *)(v3 + 72 * v10 + 88) = v12 >> 16;
    v13 = *(&v15 + v10);
    *(_QWORD *)(v3 + 72 * v10 + 112) = v13;
    result = v13 << 16;
    v10 = v2;
    *(_QWORD *)(v3 + 8 * v11 + 104) = result;
  }
  while ( v2 < v6 );
  return result;
}
