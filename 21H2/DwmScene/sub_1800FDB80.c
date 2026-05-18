/*
 * XREFs of sub_1800FDB80 @ 0x1800FDB80
 * Callers:
 *     sub_1800FC984 @ 0x1800FC984 (sub_1800FC984.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800FDB80(__int64 *a1)
{
  int v1; // eax
  __int64 v3; // rax
  void (*v4)(void); // rax
  __int64 result; // rax

  v1 = *((_DWORD *)a1 + 459);
  *((_DWORD *)a1 + 475) = 0;
  *((_DWORD *)a1 + 454) = 0;
  *((_DWORD *)a1 + 473) = 0;
  *((_DWORD *)a1 + 468) = v1;
  *((_DWORD *)a1 + 469) = *((_DWORD *)a1 + 460);
  *((_DWORD *)a1 + 461) = 1065353216;
  *((_DWORD *)a1 + 462) = 1065353216;
  *((_DWORD *)a1 + 453) = 1065353216;
  v3 = *a1;
  *((_DWORD *)a1 + 455) = -1078806334;
  *((_DWORD *)a1 + 456) = 1068677314;
  *((_DWORD *)a1 + 467) = 2;
  v4 = *(void (**)(void))(v3 + 248);
  *((_WORD *)a1 + 948) = 256;
  v4();
  result = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 256))(a1);
  *((_BYTE *)a1 + 1864) = 0;
  return result;
}
