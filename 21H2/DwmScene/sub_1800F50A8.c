/*
 * XREFs of sub_1800F50A8 @ 0x1800F50A8
 * Callers:
 *     sub_1800A5070 @ 0x1800A5070 (sub_1800A5070.c)
 *     sub_1800A7200 @ 0x1800A7200 (sub_1800A7200.c)
 * Callees:
 *     sub_1800F1374 @ 0x1800F1374 (sub_1800F1374.c)
 *     sub_1800F1638 @ 0x1800F1638 (sub_1800F1638.c)
 *     sub_1800F2044 @ 0x1800F2044 (sub_1800F2044.c)
 *     sub_1800F27BC @ 0x1800F27BC (sub_1800F27BC.c)
 *     sub_1800F28E4 @ 0x1800F28E4 (sub_1800F28E4.c)
 *     sub_1800F2C18 @ 0x1800F2C18 (sub_1800F2C18.c)
 *     sub_1800F2CD4 @ 0x1800F2CD4 (sub_1800F2CD4.c)
 *     memmove @ 0x180123982 (memmove.c)
 */

__int64 __fastcall sub_1800F50A8(__int64 a1, __int64 a2, int a3)
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

  sub_1800F28E4(*(_QWORD *)(a1 + 16));
  try
  {
    v6 = sub_1800F2044(*(_QWORD *)(a1 + 16), a2, a3);
    v7 = *(_QWORD *)(a1 + 16);
  }
  catch ( Spectre::Utils::SpectreException *v23 )
  {
    v21 = sub_180012B84(a1 + 16);
    sub_1800F27BC(v21);
    sub_180018FB0((__int64)v24, (__int64)v23);
    throw (Spectre::Utils::SpectreException *)v24;
  }
  sub_1800F27BC(v7);
  v8 = *(_QWORD *)(a1 + 16);
  *(_BYTE *)(a1 + 148) = *(_BYTE *)(v8 + 1242);
  v9 = sub_1800F2C18(v8, v6);
  v10 = v9;
  if ( *(_DWORD *)(v9 + 36) == 8 )
  {
    sub_1800F1638((__int64 *)(a1 + 56), *(_QWORD *)(*(_QWORD *)(a1 + 16) + 104LL) + 40LL * *(unsigned int *)(v9 + 40));
  }
  else
  {
    v11 = sub_1800F2CD4(*(_QWORD *)(a1 + 16));
    v12 = 0LL;
    sub_1800F1374((__int64 *)(a1 + 32), v11);
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
