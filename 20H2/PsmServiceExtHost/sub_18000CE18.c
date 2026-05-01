/*
 * XREFs of sub_18000CE18 @ 0x18000CE18
 * Callers:
 *     sub_18000CC4C @ 0x18000CC4C (sub_18000CC4C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000CE18(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  int v4; // ebx
  void *v5; // rcx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 - 16);
  v7 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, void **))(*(_QWORD *)(v2 + 40) + 112LL))(*(_QWORD *)(a1 + 1136), &v7);
  if ( v4 < 0 )
  {
    v5 = v7;
  }
  else
  {
    v5 = 0LL;
    *a2 = v7;
    v4 = 0;
    v7 = 0LL;
  }
  if ( v5 )
    NtClose(v5);
  return (unsigned int)v4;
}
