/*
 * XREFs of ?Attach@CCrossProcessBaseMemory@@UEAAJPEAUSTANDARD_CROSSPROCESS_MEMORY@@@Z @ 0x1400522B0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140014AD8 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B180 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CCrossProcessBaseMemory::Attach(void **this, void **a2)
{
  void *v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *a2;
  if ( (((unsigned __int64)v3 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      this + 2,
      v3);
    *a2 = 0LL;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA,
      (__int64)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpbasememory.cpp",
      (const char *)0x80070006LL);
    return 2147942406LL;
  }
}
