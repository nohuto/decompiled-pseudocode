/*
 * XREFs of sub_18008B58C @ 0x18008B58C
 * Callers:
 *     sub_18008B6D4 @ 0x18008B6D4 (sub_18008B6D4.c)
 *     unknown_libname_6 @ 0x18008F320 (unknown_libname_6.c)
 * Callees:
 *     sub_1800258BC @ 0x1800258BC (sub_1800258BC.c)
 *     sub_1800671C0 @ 0x1800671C0 (sub_1800671C0.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_18008A4A0 @ 0x18008A4A0 (sub_18008A4A0.c)
 *     sub_18008B3B8 @ 0x18008B3B8 (sub_18008B3B8.c)
 *     sub_18011C1A0 @ 0x18011C1A0 (sub_18011C1A0.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18008B58C(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  volatile signed __int32 *v4; // rcx

  sub_1800258BC((__int64 *)(a1 + 200), a1 + 200);
  sub_18011C1A0(a1 + 184);
  sub_18008B3B8((_QWORD *)(a1 + 120));
  sub_18008A4A0((__int64 *)(a1 + 88), a1 + 88);
  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 80) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  sub_1800671C0((__int64 *)(a1 + 48));
  if ( *(_BYTE *)(a1 + 32) )
    sub_180067304(*(_QWORD *)(a1 + 24));
  result = sub_18011C1A0(a1 + 16);
  v4 = *(volatile signed __int32 **)(a1 + 8);
  if ( v4 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
  }
  return result;
}
