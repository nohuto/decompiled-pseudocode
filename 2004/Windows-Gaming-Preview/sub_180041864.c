/*
 * XREFs of sub_180041864 @ 0x180041864
 * Callers:
 *     sub_180042D0C @ 0x180042D0C (sub_180042D0C.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180041D10 @ 0x180041D10 (sub_180041D10.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     j_??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800447FC (j_--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy @ 0x180045C83 (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180041864(__int64 a1, __int64 a2)
{
  int v4; // edi
  int v5; // edx
  void *v7; // rax
  __int64 v8; // rdx
  void *v9; // rcx
  void *v10; // rdi
  int v11; // ebx
  int v12; // edx
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  size_t Size; // [rsp+38h] [rbp+10h] BYREF
  void *Src; // [rsp+40h] [rbp+18h] BYREF

  v4 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)a2 + 72LL))(a2, &Src);
  if ( v4 < 0 )
  {
    v5 = 1181;
LABEL_3:
    sub_180003268(
      retaddr,
      v5,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      v4);
    return (unsigned int)v4;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, size_t *))(*(_QWORD *)a2 + 80LL))(a2, &Size);
  if ( v4 < 0 )
  {
    v5 = 1183;
    goto LABEL_3;
  }
  v7 = operator new((unsigned int)Size, (const struct std::nothrow_t *)&unk_18005AF88);
  v9 = *(void **)(a1 + 72);
  v10 = v7;
  if ( v7 != v9 )
  {
    if ( v9 )
      j_j__o_free(v9, v8);
    *(_QWORD *)(a1 + 72) = v10;
    v9 = v10;
  }
  if ( !v9 )
  {
    v11 = -2147024882;
    v12 = 1186;
LABEL_12:
    sub_180003268(
      retaddr,
      v12,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      v11);
    return (unsigned int)v11;
  }
  memcpy(v9, Src, (unsigned int)Size);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 72);
  *(_DWORD *)(a1 + 32) = Size;
  v11 = sub_180041D10(a1);
  if ( v11 < 0 )
  {
    v12 = 1195;
    goto LABEL_12;
  }
  return 0LL;
}
