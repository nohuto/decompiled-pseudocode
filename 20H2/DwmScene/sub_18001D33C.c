/*
 * XREFs of sub_18001D33C @ 0x18001D33C
 * Callers:
 *     sub_18001D3DC @ 0x18001D3DC (sub_18001D3DC.c)
 * Callees:
 *     sub_180015290 @ 0x180015290 (sub_180015290.c)
 *     sub_180015920 @ 0x180015920 (sub_180015920.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18011E748 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001D33C(__int64 *a1, _QWORD *a2)
{
  void *v4; // rax
  int v5; // edi
  __int64 v6; // rbx

  *a1 = 0LL;
  v4 = operator new(0x30uLL, (const struct std::nothrow_t *)&unk_1801D7CD8);
  if ( v4 )
  {
    v6 = sub_180015290((__int64)v4);
    v5 = sub_180015920(v6, a2);
    if ( v5 >= 0 )
    {
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      *a1 = v6;
      v5 = 0;
    }
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
