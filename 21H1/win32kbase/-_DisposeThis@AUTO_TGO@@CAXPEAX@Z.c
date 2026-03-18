/*
 * XREFs of ?_DisposeThis@AUTO_TGO@@CAXPEAX@Z @ 0x1C01501C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall AUTO_TGO::_DisposeThis(_DWORD *a1)
{
  void (__fastcall **v1)(_DWORD *, _QWORD); // rax

  v1 = *(void (__fastcall ***)(_DWORD *, _QWORD))a1;
  a1[2] = 0;
  (*v1)(a1, 0LL);
}
