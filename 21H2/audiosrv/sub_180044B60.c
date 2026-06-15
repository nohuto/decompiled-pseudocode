/*
 * XREFs of sub_180044B60 @ 0x180044B60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180044B60(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // edi
  int v4; // ecx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 40LL))(*(_QWORD *)(a1 + 40));
  v3 = v2;
  if ( v2 < 0 )
  {
    sub_18004BD84(
      retaddr,
      2651LL,
      "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (unsigned int)v2);
    return v3;
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 120);
    *(_DWORD *)(a1 + 120) = v4 + 1;
    if ( !v4 )
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 192) + 328LL))(*(_QWORD *)(a1 + 192), a1);
    return 0LL;
  }
}
