/*
 * XREFs of sub_1800341F0 @ 0x1800341F0
 * Callers:
 *     sub_1800345D4 @ 0x1800345D4 (sub_1800345D4.c)
 * Callees:
 *     sub_18002F66C @ 0x18002F66C (sub_18002F66C.c)
 */

__int64 __fastcall sub_1800341F0(__int64 a1, __int64 a2, int a3)
{
  int v3; // esi
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  unsigned int v10; // eax
  int v11; // ecx
  unsigned int v12; // eax
  int v13; // ecx
  _DWORD *v14; // rax
  int v15; // eax
  int v16; // ecx
  _DWORD v18[6]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  v7 = *(_DWORD *)(a2 + 16);
  if ( (unsigned int)(v7 - 23) <= 1 )
    v8 = 2;
  else
    v8 = (*(_BYTE *)(a2 + 20) & 8) != 0;
  v9 = sub_18002F66C(v7, v8);
  if ( v9 == 45 )
  {
    v9 = 44;
  }
  else if ( v9 == 40 )
  {
    v9 = 39;
  }
  *(_DWORD *)(a1 + 16) = v9;
  if ( (*(_DWORD *)(a2 + 20) & 0x10) != 0 )
  {
    *(_DWORD *)(a1 + 40) |= 4u;
    *(_DWORD *)(a1 + 12) = 6;
  }
  else
  {
    *(_DWORD *)(a1 + 12) = 1;
  }
  if ( (*(_DWORD *)(a2 + 20) & 0x20) != 0 )
  {
    v10 = *(_DWORD *)(a1 + 4);
    v11 = 0;
    if ( *(_DWORD *)a1 >= v10 )
      v10 = *(_DWORD *)a1;
    while ( v10 > 1 )
    {
      v10 >>= 1;
      ++v11;
    }
    v12 = v11 + 1;
    v13 = 15;
    if ( v12 < 0xF )
      v13 = v12;
    *(_DWORD *)(a1 + 40) |= 1u;
    *(_DWORD *)(a1 + 32) |= 0x28u;
    *(_DWORD *)(a1 + 8) = v13;
  }
  else
  {
    *(_DWORD *)(a1 + 8) = a3;
  }
  v14 = v18;
  do
    *v14++ = v3++;
  while ( v3 < 4 );
  *(_DWORD *)(a1 + 28) = v18[*(unsigned int *)(a2 + 24)];
  v15 = *(_DWORD *)(a2 + 24);
  if ( v15 == 2 || v15 == 3 )
  {
    *(_DWORD *)(a1 + 36) |= 0x10000u;
    if ( *(_DWORD *)(a2 + 24) == 3 )
      *(_DWORD *)(a1 + 36) |= 0x20000u;
  }
  if ( (*(_BYTE *)(a2 + 20) & 1) != 0 )
    *(_DWORD *)(a1 + 32) |= 8u;
  v16 = *(_DWORD *)(a2 + 20);
  if ( (v16 & 2) != 0 )
  {
    *(_DWORD *)(a1 + 32) |= 0x20u;
    v16 = *(_DWORD *)(a2 + 20);
  }
  if ( (v16 & 4) != 0 )
    *(_DWORD *)(a1 + 32) |= 0x40u;
  return a1;
}
