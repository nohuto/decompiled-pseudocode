/*
 * XREFs of ?GetAppChromeData@@YA?AV?$optional@UAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@std@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18015A930
 * Callers:
 *     ?_HandleUniversalFrameChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180156AE8 (-_HandleUniversalFrameChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerIntero.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002753C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetAppChromeData(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 (__fastcall *v5)(__int64, PVOID, __int64 *); // rbx
  HSTRING_HEADER *v6; // rax
  int v7; // eax
  unsigned int v8; // edx
  __int64 v10; // [rsp+20h] [rbp-38h] BYREF
  HSTRING_HEADER v11; // [rsp+28h] [rbp-30h] BYREF

  v5 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)a2 + 408LL);
  v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v11, (const WCHAR **)&off_180497CB0, a3);
  v7 = v5(a2, v6[1].Reserved.Reserved1, &v10);
  v8 = 0;
  if ( v7 < 0 )
  {
    *(_QWORD *)a1 = 0LL;
    *(_DWORD *)(a1 + 8) = 0;
  }
  else
  {
    if ( (_DWORD)v10 == 1 )
      v8 = 129;
    v10 = v8 | 0x8000000000LL;
    *(_QWORD *)a1 = v10;
    *(_BYTE *)(a1 + 8) = 1;
  }
  return a1;
}
