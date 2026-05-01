/*
 * XREFs of sub_180042470 @ 0x180042470
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_18004176C @ 0x18004176C (sub_18004176C.c)
 *     sub_180041D10 @ 0x180041D10 (sub_180041D10.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180042470(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  int v5; // edi
  int v6; // edx
  void *v7; // rax
  __int64 v8; // r14
  int v9; // edx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rax
  int v13; // eax
  int v14; // r9d
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v19; // [rsp+58h] [rbp+10h] BYREF
  __int64 v20; // [rsp+60h] [rbp+18h]

  v4 = 0LL;
  if ( !a2 )
  {
    v5 = -2147467261;
    v6 = 1501;
LABEL_19:
    v14 = v5;
    goto LABEL_20;
  }
  *a2 = 0LL;
  if ( !*(_DWORD *)(a1 + 24) )
  {
    v5 = 1;
    goto LABEL_22;
  }
  v4 = 0LL;
  v20 = 0LL;
  v7 = operator new(0x50uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  if ( !v7 )
  {
    v5 = -2147024882;
LABEL_14:
    v6 = 1510;
    goto LABEL_19;
  }
  v8 = sub_18004176C((__int64)v7);
  v9 = *(_DWORD *)(a1 + 24);
  v10 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v8 + 16) = v10;
  *(_QWORD *)(v8 + 24) = v10;
  *(_DWORD *)(v8 + 32) = v9;
  v11 = sub_180041D10(v8);
  v5 = v11;
  if ( v11 >= 0 )
    v5 = 0;
  else
    sub_180003268(
      retaddr,
      1171,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      v11);
  v12 = *(_QWORD *)v8;
  if ( v5 >= 0 )
  {
    (*(void (__fastcall **)(__int64))(v12 + 8))(v8);
    v4 = v8;
    v20 = v8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    v5 = 0;
  }
  else
  {
    (*(void (__fastcall **)(__int64))(v12 + 16))(v8);
    v8 = 0LL;
  }
  if ( v5 < 0 )
    goto LABEL_14;
  v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v4 + 80LL))(v4, &v19);
  v5 = v13;
  if ( v13 < 0 )
  {
    v14 = v13;
    v6 = 1512;
LABEL_20:
    sub_180003268(
      retaddr,
      v6,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      v14);
    goto LABEL_22;
  }
  v15 = *(_DWORD *)(a1 + 24);
  v16 = v19;
  if ( v19 > v15 )
  {
    v5 = -2147024883;
    v6 = 1514;
    goto LABEL_19;
  }
  *(_DWORD *)(a1 + 24) = v15 - v19;
  *(_QWORD *)(a1 + 16) += v16;
  v4 = 0LL;
  *a2 = v8;
  v5 = 0;
LABEL_22:
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)v5;
}
