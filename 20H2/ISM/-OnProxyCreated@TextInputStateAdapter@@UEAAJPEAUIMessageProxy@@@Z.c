/*
 * XREFs of ?OnProxyCreated@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@@Z @ 0x1801A2B90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x1801489BC (-FailFastWithHR@@YAXJ_K0@Z.c)
 */

__int64 __fastcall TextInputStateAdapter::OnProxyCreated(TextInputStateAdapter *this, struct IMessageProxy *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]

  v2 = (**(__int64 (__fastcall ***)(struct IMessageProxy *, GUID *, char *))a2)(
         a2,
         &GUID_cf1538c5_01ef_4a39_acb7_1b68f01b7ef4,
         (char *)this + 40);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( v2 == -2147024882 )
      FailFastWithHR(-2147024882, retaddr, 0x3BuLL);
    FailFastWithHR(v3, retaddr, 0x3BuLL);
  }
  return v3;
}
