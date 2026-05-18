/*
 * XREFs of sub_1800EF7D8 @ 0x1800EF7D8
 * Callers:
 *     sub_18009F7A0 @ 0x18009F7A0 (sub_18009F7A0.c)
 *     sub_1800A1930 @ 0x1800A1930 (sub_1800A1930.c)
 * Callees:
 *     sub_1800EBAA4 @ 0x1800EBAA4 (sub_1800EBAA4.c)
 *     sub_1800EBD68 @ 0x1800EBD68 (sub_1800EBD68.c)
 *     sub_1800EC774 @ 0x1800EC774 (sub_1800EC774.c)
 *     sub_1800ECEEC @ 0x1800ECEEC (sub_1800ECEEC.c)
 *     sub_1800ED014 @ 0x1800ED014 (sub_1800ED014.c)
 *     sub_1800ED348 @ 0x1800ED348 (sub_1800ED348.c)
 *     sub_1800ED404 @ 0x1800ED404 (sub_1800ED404.c)
 *     memmove @ 0x18011E0B2 (memmove.c)
 */

__int64 __fastcall sub_1800EF7D8(__int64 a1, __int64 a2, int a3)
{
  unsigned __int16 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned int v11; // eax
  size_t v12; // rbx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  __int64 v21; // rax
  Spectre::Utils::SpectreException *v23; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v24[104]; // [rsp+40h] [rbp-68h] BYREF

  sub_1800ED014(*(_QWORD *)(a1 + 16));
  try
  {
    v6 = sub_1800EC774(*(_QWORD *)(a1 + 16), a2, a3);
    v7 = *(_QWORD *)(a1 + 16);
  }
  catch ( Spectre::Utils::SpectreException *v23 )
  {
    v21 = sub_180012AA4(a1 + 16);
    sub_1800ECEEC(v21);
    sub_180018900((__int64)v24, (__int64)v23);
    throw (Spectre::Utils::SpectreException *)v24;
  }
  sub_1800ECEEC(v7);
  v8 = *(_QWORD *)(a1 + 16);
  *(_BYTE *)(a1 + 148) = *(_BYTE *)(v8 + 1242);
  v9 = sub_1800ED348(v8, v6);
  v10 = v9;
  if ( *(_DWORD *)(v9 + 36) == 8 )
  {
    sub_1800EBD68((__int64 *)(a1 + 56), *(_QWORD *)(*(_QWORD *)(a1 + 16) + 104LL) + 40LL * *(unsigned int *)(v9 + 40));
  }
  else
  {
    v11 = sub_1800ED404(*(_QWORD *)(a1 + 16));
    v12 = 0LL;
    sub_1800EBAA4((__int64 *)(a1 + 32), v11);
    v13 = *(_DWORD *)(v10 + 36);
    if ( v13 && (v14 = v13 - 1) != 0 && (v15 = v14 - 1) != 0 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          v18 = v17 - 1;
          if ( v18 && (v19 = v18 - 1) != 0 )
          {
            if ( v19 == 1 )
              v12 = 64LL;
          }
          else
          {
            v12 = 16LL;
          }
        }
        else
        {
          v12 = 12LL;
        }
      }
      else
      {
        v12 = 8LL;
      }
    }
    else
    {
      v12 = 4LL;
    }
    memmove(
      (void *)(*(_QWORD *)(a1 + 32) + 4LL * *(unsigned int *)(v10 + 40)),
      (const void *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 80LL) + 4LL * *(unsigned int *)(v10 + 40)),
      v12);
    ++*(_DWORD *)(a1 + 80);
  }
  return v6;
}
