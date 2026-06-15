/*
 * XREFs of sub_18010BA60 @ 0x18010BA60
 * Callers:
 *     sub_180106DAC @ 0x180106DAC (sub_180106DAC.c)
 *     sub_180108588 @ 0x180108588 (sub_180108588.c)
 *     sub_18010B238 @ 0x18010B238 (sub_18010B238.c)
 *     sub_18010B7C4 @ 0x18010B7C4 (sub_18010B7C4.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18010A130 @ 0x18010A130 (sub_18010A130.c)
 *     sub_18010A7B4 @ 0x18010A7B4 (sub_18010A7B4.c)
 *     sub_18010ABD4 @ 0x18010ABD4 (sub_18010ABD4.c)
 *     sub_18010B558 @ 0x18010B558 (sub_18010B558.c)
 *     sub_18010B6C0 @ 0x18010B6C0 (sub_18010B6C0.c)
 */

__int64 __fastcall sub_18010BA60(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rsi
  bool v7; // zf
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // r14d
  unsigned int v13; // ecx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // edi
  int v19; // [rsp+60h] [rbp-20h] BYREF
  __int64 v20; // [rsp+68h] [rbp-18h] BYREF
  __int64 v21; // [rsp+70h] [rbp-10h] BYREF
  __int64 v22; // [rsp+78h] [rbp-8h] BYREF
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+28h]
  int v24; // [rsp+B0h] [rbp+30h] BYREF
  int v25; // [rsp+B8h] [rbp+38h] BYREF
  int v26; // [rsp+C8h] [rbp+48h] BYREF

  v6 = a3;
  sub_18010A130("Sarm::CStreamResource::SetDynamicObjects", 300, a3, a4);
  v7 = a2 == *(_DWORD *)(a1 + 80);
  if ( a2 < *(_DWORD *)(a1 + 80) )
  {
    if ( !v6 )
    {
      sub_18004BD84(
        (int)retaddr,
        304,
        (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
        -2005139194);
      return 2289828102LL;
    }
    v7 = a2 == *(_DWORD *)(a1 + 80);
  }
  if ( v7 )
  {
    v6 = 0LL;
  }
  else
  {
    v9 = sub_18010B558((_QWORD *)a1, a2, v6);
    v12 = v9;
    if ( v9 < 0 )
    {
      sub_18004BD84(
        (int)retaddr,
        313,
        (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
        v9);
      return v12;
    }
    v13 = *(_DWORD *)(a1 + 80);
    if ( a2 >= v13 )
    {
      sub_18010A7B4(*(_QWORD *)(a1 + 8), a2 - v13, v10, v11);
      v13 = *(_DWORD *)(a1 + 80);
    }
    else
    {
      *(_DWORD *)(a1 + 84) = v13 - a2;
    }
    *(_DWORD *)(a1 + 76) = v13;
    *(_DWORD *)(a1 + 80) = a2;
  }
  v14 = sub_18010B6C0((_QWORD *)a1, a2, v6);
  v18 = v14;
  if ( v14 >= 0 )
  {
    if ( (unsigned int)CallbackContext > 5 )
    {
      v25 = *(_DWORD *)(a1 + 52);
      v24 = *(_DWORD *)(a1 + 80);
      v26 = *(_DWORD *)(a1 + 76);
      v19 = *(_DWORD *)(a1 + 84);
      v21 = a1 + 16;
      v22 = *(_QWORD *)(a1 + 40);
      v20 = v6;
      sub_18010ABD4(
        v15,
        byte_180169481,
        v16,
        v17,
        (__int64)&v22,
        &v21,
        (__int64)&v19,
        (__int64)&v26,
        (__int64)&v24,
        (__int64)&v20,
        (__int64)&v25);
    }
    return 0LL;
  }
  else
  {
    sub_18004BD84(
      (int)retaddr,
      332,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      v14);
    return v18;
  }
}
