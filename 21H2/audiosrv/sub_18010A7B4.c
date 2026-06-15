/*
 * XREFs of sub_18010A7B4 @ 0x18010A7B4
 * Callers:
 *     sub_18010BA60 @ 0x18010BA60 (sub_18010BA60.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800BB330 @ 0x1800BB330 (sub_1800BB330.c)
 *     sub_18010A200 @ 0x18010A200 (sub_18010A200.c)
 */

__int64 __fastcall sub_18010A7B4(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v10; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v11; // [rsp+54h] [rbp-Ch] BYREF
  __int64 v12; // [rsp+58h] [rbp-8h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+18h]
  unsigned int v14; // [rsp+80h] [rbp+20h] BYREF
  unsigned int v15; // [rsp+90h] [rbp+30h] BYREF
  int v16; // [rsp+98h] [rbp+38h] BYREF

  v6 = *(_QWORD *)(a1 + 16);
  if ( !v6 )
  {
    sub_1800BB330(
      (int)retaddr,
      119,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\endpointresourcepool.cpp",
      -2005139200);
    __debugbreak();
  }
  v7 = *(unsigned int *)(v6 + 20);
  v8 = *(_DWORD *)(v6 + 20) - *(_DWORD *)(v6 + 24);
  if ( (unsigned int)CallbackContext > 4 )
  {
    v10 = *(_DWORD *)(v6 + 24);
    v12 = a1;
    v14 = v8 - a2;
    v15 = v8;
    v16 = v7;
    v11 = a2;
    sub_18010A200(
      v7,
      byte_180169283,
      a3,
      a4,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v12);
  }
  if ( a2 <= v8 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL) += a2;
    return 0LL;
  }
  else
  {
    sub_18004BD84(
      (int)retaddr,
      132,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\endpointresourcepool.cpp",
      -2005139198);
    return 2289828098LL;
  }
}
