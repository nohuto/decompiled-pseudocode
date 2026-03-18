/*
 * XREFs of _PnpContainerRaiseDevicesChangeEvent @ 0x14074EF00
 * Callers:
 *     _PnpObjectRaiseDevicesChangeEvent @ 0x14074EEC0 (_PnpObjectRaiseDevicesChangeEvent.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PnpContainerRaiseDevicesChangeEvent(
        __int64 a1,
        __int64 a2,
        void (__fastcall *a3)(__int64, __int64, __int64))
{
  DEVPROPKEY **v6; // rbx
  __int64 v7; // rdi
  __int64 result; // rax

  a3(a1, a2, 5LL);
  v6 = off_140007B78;
  v7 = 3LL;
  do
  {
    result = ((__int64 (__fastcall *)(__int64, __int64, __int64))a3)(a1, a2, 5LL);
    ++v6;
    --v7;
  }
  while ( v7 );
  return result;
}
