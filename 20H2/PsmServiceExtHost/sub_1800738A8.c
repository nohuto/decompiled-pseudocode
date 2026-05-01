/*
 * XREFs of sub_1800738A8 @ 0x1800738A8
 * Callers:
 *     sub_180016100 @ 0x180016100 (sub_180016100.c)
 *     sub_180073850 @ 0x180073850 (sub_180073850.c)
 *     sub_180073964 @ 0x180073964 (sub_180073964.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800460F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     sub_180063424 @ 0x180063424 (sub_180063424.c)
 */

char __fastcall sub_1800738A8(__int64 a1, int a2)
{
  __int64 v3; // rbx
  _DWORD *v5; // rax
  _QWORD *v6; // rcx
  char result; // al
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  int v12; // [rsp+48h] [rbp+10h] BYREF

  v3 = a1 + 1312;
  v5 = operator new(0x18uLL, (const struct std::nothrow_t *)&unk_1800967D8);
  if ( v5 )
  {
    v5[4] = a2;
    v6 = *(_QWORD **)(v3 + 8);
    *((_QWORD *)v5 + 1) = v6;
    *(_QWORD *)v5 = v3;
    *v6 = v5;
    *(_QWORD *)(v3 + 8) = v5;
    ++*(_QWORD *)(v3 + 16);
  }
  result = SetEvent(*(HANDLE *)(a1 + 1304));
  if ( (unsigned int)dword_1800B31E0 > 4 )
  {
    result = sub_180010470((__int64)&dword_1800B31E0, 1LL);
    if ( result )
    {
      v11 = a1;
      v12 = a2;
      return sub_180063424(v8, byte_18009D89D, v9, v10, (__int64)&v12, (__int64)&v11);
    }
  }
  return result;
}
