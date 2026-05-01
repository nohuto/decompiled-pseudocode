/*
 * XREFs of ?GetAsyncKeyState@ICoreWindow@Core@UI@Windows@@UE$AAA?AW4CoreVirtualKeyStates@234@W4VirtualKey@System@4@@Z @ 0x180310C28
 * Callers:
 *     _lambda_fac65b3379140ccb2da51a4d302d8ccb_::operator() @ 0x18030FDE4 (_lambda_fac65b3379140ccb2da51a4d302d8ccb_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802EBB30 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall Windows::UI::Core::ICoreWindow::GetAsyncKeyState(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // eax
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v5 = 0;
  v3 = (*(__int64 (__fastcall **)(__int64 *, __int64, unsigned int *))(v2 + 160))(a1, a2, &v5);
  if ( v3 < 0 )
  {
    __abi_WinRTraiseException(v3);
    __debugbreak();
  }
  return v5;
}
