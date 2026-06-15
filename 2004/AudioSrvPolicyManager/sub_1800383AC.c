/*
 * XREFs of sub_1800383AC @ 0x1800383AC
 * Callers:
 *     sub_180037338 @ 0x180037338 (sub_180037338.c)
 * Callees:
 *     sub_1800387B0 @ 0x1800387B0 (sub_1800387B0.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800383AC(__int64 a1)
{
  HRESULT v2; // eax
  HSTRING v3; // rcx
  int v4; // edi
  __int64 v6; // [rsp+20h] [rbp-38h] BYREF
  HSTRING_HEADER v7; // [rsp+28h] [rbp-30h] BYREF
  HSTRING v8; // [rsp+40h] [rbp-18h] BYREF

  *(_QWORD *)a1 = 0LL;
  v8 = 0LL;
  v2 = WindowsCreateStringReference(L"Windows.Internal.AssignedAccess.AssignedAccessManager", 0x35u, &v7, &v8);
  if ( v2 < 0 )
  {
    sub_1800387B0((unsigned int)v2);
    JUMPOUT(0x18003849ALL);
  }
  v3 = v8;
  *(_QWORD *)a1 = 0LL;
  v4 = RoActivateInstance(v3, &v6);
  if ( v4 >= 0 )
  {
    v4 = (**(__int64 (__fastcall ***)(__int64, __int64 *, __int64))v6)(v6, &qword_180045820, a1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  *(_DWORD *)(a1 + 8) = v4;
  return a1;
}
