/*
 * XREFs of sub_180016980 @ 0x180016980
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800077B0 @ 0x1800077B0 (sub_1800077B0.c)
 *     sub_18000F8F4 @ 0x18000F8F4 (sub_18000F8F4.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

bool sub_180016980()
{
  int v0; // eax
  bool v1; // bl
  __int64 v3; // [rsp+20h] [rbp-48h] BYREF
  __int64 v4; // [rsp+28h] [rbp-40h] BYREF
  HSTRING string; // [rsp+30h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-30h] BYREF
  __int64 retaddr; // [rsp+68h] [rbp+0h]

  v4 = 0LL;
  if ( WindowsCreateStringReference(L"Windows.Graphics.Holographic.HolographicDisplay", 0x2Fu, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  if ( (int)RoGetActivationFactory(string, &unk_1800433A0, &v4) < 0 )
    goto LABEL_9;
  v3 = 0LL;
  v0 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 64LL))(v4, &v3);
  if ( v0 < 0 )
    sub_18000F8F4(
      retaddr,
      4297,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
      v0);
  if ( v3 )
  {
    v1 = (unsigned int)sub_1800077B0(qword_18004FE68) == 0;
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  else
  {
LABEL_9:
    v1 = 0;
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v1;
}
