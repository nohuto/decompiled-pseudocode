/*
 * XREFs of sub_180042318 @ 0x180042318
 * Callers:
 *     sub_18003FC80 @ 0x18003FC80 (sub_18003FC80.c)
 *     sub_180040654 @ 0x180040654 (sub_180040654.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180042318(_QWORD *a1, __int64 a2, int a3)
{
  unsigned int v3; // edi
  unsigned int v7; // ebx
  int v8; // edx
  _DWORD *v9; // rax
  _DWORD *v10; // rbx
  __int64 v11; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v3 = 0;
  if ( !a1 )
  {
    v7 = -2147467261;
    v8 = 1468;
LABEL_10:
    sub_180003268(
      retaddr,
      v8,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      v7);
    return v7;
  }
  if ( !a2 )
  {
    v7 = -2147467261;
    v8 = 1469;
    goto LABEL_10;
  }
  v9 = operator new(0x20uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  v10 = v9;
  if ( !v9 )
  {
    v7 = -2147024882;
    v8 = 1471;
    goto LABEL_10;
  }
  v11 = qword_18005ADB0;
  *(_QWORD *)v9 = &off_180048EE8;
  *(_QWORD *)v9 = off_18004DD20;
  v9[3] = 1;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  *(_QWORD *)v10 = off_18004DD48;
  *((_QWORD *)v10 + 2) = a2;
  v10[6] = a3;
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 8LL))(v10);
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 16LL))(v10);
  *a1 = v10;
  return v3;
}
