/*
 * XREFs of sub_180074464 @ 0x180074464
 * Callers:
 *     sub_180017A10 @ 0x180017A10 (sub_180017A10.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_180073F88 @ 0x180073F88 (sub_180073F88.c)
 *     sub_1800743A8 @ 0x1800743A8 (sub_1800743A8.c)
 */

void __fastcall sub_180074464(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // [rsp+60h] [rbp+8h] BYREF
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  if ( (*(_BYTE *)(v1 + 2712) & 1) == 0 )
  {
    v3 = v1 + 48;
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)(v1 + 40) + 88LL))(
           a1 + 552,
           *(unsigned int *)(a1 + 620),
           a1 + 88,
           *(unsigned int *)(a1 + 624),
           *(_QWORD *)(a1 + 32),
           &v10);
    v5 = v10;
    if ( v4 < 0 )
      v5 = 0LL;
    *(_QWORD *)(a1 + 1216) = v5;
    v10 = v5;
    ++*(_DWORD *)(v3 + 32);
    if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
    {
      v11 = v10;
      v12 = *(_QWORD *)(a1 + 32);
      v9 = v8;
      sub_180073F88(v6, byte_18009DCBC, v7, v8, (__int64)&v12, (__int64)&v11, (__int64)&v9);
    }
    if ( (*(_BYTE *)(v3 + 44) & 1) == 0 )
      sub_1800743A8(v3);
  }
}
