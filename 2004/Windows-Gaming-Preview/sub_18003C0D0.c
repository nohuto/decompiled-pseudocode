/*
 * XREFs of sub_18003C0D0 @ 0x18003C0D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180026130 @ 0x180026130 (sub_180026130.c)
 *     sub_18003BCD8 @ 0x18003BCD8 (sub_18003BCD8.c)
 *     sub_18003C67C @ 0x18003C67C (sub_18003C67C.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003C0D0(int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  void *v9; // rax
  __int64 v10; // rax
  signed __int32 v11; // eax
  int v12; // edi
  int v13; // eax

  v6 = 0LL;
  v9 = operator new(0x98uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  if ( v9 )
  {
    v10 = sub_18003BCD8((__int64)v9);
    v6 = v10;
    if ( v10 )
    {
      v11 = _InterlockedIncrement((volatile signed __int32 *)(v10 + 68));
      if ( (*(_BYTE *)(v6 + 88) & 4) == 0 && v11 == 2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 8LL))(qword_18005ADB0);
    }
    if ( v6 )
      sub_180026130(v6);
    v12 = sub_18003C67C(v6, a3, a4);
    if ( v12 >= 0 )
    {
      v13 = *a1;
      if ( (*a1 & 4) == 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 68));
        v13 = *a1;
      }
      *(_DWORD *)(v6 + 88) = v13;
      *(_QWORD *)(v6 + 80) = a2;
      v6 = 0LL;
      v12 = 0;
    }
  }
  else
  {
    v12 = -2147024882;
  }
  if ( v6 )
    sub_180026130(v6);
  return (unsigned int)v12;
}
