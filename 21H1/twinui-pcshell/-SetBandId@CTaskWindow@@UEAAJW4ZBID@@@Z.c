/*
 * XREFs of ?SetBandId@CTaskWindow@@UEAAJW4ZBID@@@Z @ 0x180074F20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTaskWindow::SetBandId(__int64 a1, unsigned int a2)
{
  HWND v4; // rax
  HANDLE PropW; // r10
  HWND v6; // rax
  HANDLE v7; // r10
  __int64 v8; // rcx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  (***(void (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 48))(
    *(_QWORD *)(a1 + 48),
    &GUID_6d043cea_6cdf_43a3_b9d0_d755297c11d2,
    &v10);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 40LL))(v10, a2);
  v4 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  PropW = GetPropW(v4, L"{1CADE38A-8C26-4D73-A0D7-3ADE69F02A94}");
  if ( PropW )
    (*(void (__fastcall **)(PVOID, HANDLE, _QWORD, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr
                                                          + 32LL))(
      CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
      PropW,
      0LL,
      a2);
  v6 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  v7 = GetPropW(v6, L"{A086F28F-D579-49B1-9117-F2A3AC324349}");
  if ( v7 )
    (*(void (__fastcall **)(PVOID, HANDLE, _QWORD, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr
                                                          + 32LL))(
      CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
      v7,
      0LL,
      a2);
  *(_DWORD *)(a1 + 44) = a2 - 8;
  v8 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return 0LL;
}
