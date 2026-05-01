/*
 * XREFs of ?IsCortanaApp@DefaultLaunchPositionOverride@@AEAA_NPEAUIApplicationView@@@Z @ 0x18003E0F8
 * Callers:
 *     ?TryGetLaunchPosition@DefaultLaunchPositionOverride@@UEAAJPEAUIApplicationView@@PEAV?$optional@UtagRECT@@@std@@@Z @ 0x18003E010 (-TryGetLaunchPosition@DefaultLaunchPositionOverride@@UEAAJPEAUIApplicationView@@PEAV-$optional@U.c)
 * Callees:
 *     ?TryGetCortanaAumid@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x18003E2A4 (-TryGetCortanaAumid@CortanaExperienceHelpers@@YA-AUhstring@winrt@@XZ.c)
 *     WINRT_WindowsGetStringRawBuffer @ 0x18008DD62 (WINRT_WindowsGetStringRawBuffer.c)
 *     WindowsDeleteString_0 @ 0x18008E3E2 (WindowsDeleteString_0.c)
 *     WINRT_WindowsCreateString @ 0x18008E4C1 (WINRT_WindowsCreateString.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1801B21D8 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall DefaultLaunchPositionOverride::IsCortanaApp(
        DefaultLaunchPositionOverride *this,
        struct IApplicationView *a2)
{
  int (__fastcall *v3)(struct IApplicationView *, PCWSTR, DefaultLaunchPositionOverride **); // rbx
  HSTRING *CortanaAumid; // rax
  char v5; // si
  char v6; // r14
  PCWSTR StringRawBuffer; // rax
  int (__fastcall *v8)(struct IApplicationView *, PCWSTR, DefaultLaunchPositionOverride **); // r15
  HRESULT v9; // eax
  HSTRING v10; // rbx
  PCWSTR v11; // rax
  HSTRING v13[7]; // [rsp+20h] [rbp-38h] BYREF
  DefaultLaunchPositionOverride *v14; // [rsp+60h] [rbp+8h] BYREF
  int v15; // [rsp+68h] [rbp+10h]
  HSTRING string; // [rsp+70h] [rbp+18h] BYREF
  HSTRING v17; // [rsp+78h] [rbp+20h]

  v14 = this;
  v15 = 0;
  v3 = *(int (__fastcall **)(struct IApplicationView *, PCWSTR, DefaultLaunchPositionOverride **))(*(_QWORD *)a2 + 152LL);
  CortanaAumid = (HSTRING *)CortanaExperienceHelpers::TryGetCortanaAumid(v13);
  v5 = 1;
  v6 = 1;
  v15 = 1;
  StringRawBuffer = WINRT_WindowsGetStringRawBuffer(*CortanaAumid, 0LL);
  if ( v3(a2, StringRawBuffer, &v14) >= 0 && (_DWORD)v14 )
  {
    v10 = v17;
  }
  else
  {
    v8 = *(int (__fastcall **)(struct IApplicationView *, PCWSTR, DefaultLaunchPositionOverride **))(*(_QWORD *)a2 + 152LL);
    string = 0LL;
    v9 = WINRT_WindowsCreateString(L"3242f7d9-db60-4380-a379-4205ea768bfc_zs4v8rx04ex0m!App", 0x36u, &string);
    if ( v9 < 0 )
      winrt::throw_hresult((unsigned int)v9);
    v10 = string;
    v17 = string;
    v6 = 7;
    v15 = 7;
    v11 = WINRT_WindowsGetStringRawBuffer(string, 0LL);
    if ( v8(a2, v11, &v14) < 0 || !(_DWORD)v14 )
      v5 = 0;
  }
  if ( (v6 & 2) != 0 && v10 )
    WindowsDeleteString_0(v10);
  if ( v13[0] )
    WindowsDeleteString_0(v13[0]);
  return v5;
}
