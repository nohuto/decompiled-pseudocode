/*
 * XREFs of ?SetMouseKeys@@YGHPAU_UNICODE_STRING@@PAUtagMOUSEKEYS@@@Z @ 0x145652
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPAGIPBGZZ @ 0x7F16E (-RtlStringCchPrintfW@@YAJPAGIPBGZZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall SetMouseKeys(int a1, _DWORD *a2)
{
  int v4; // edi
  int v5; // edi
  unsigned __int16 v8[40]; // [esp+10h] [ebp-54h] BYREF

  RtlStringCchPrintfW(v8, 0x28u, L"%d", a2[1]);
  v4 = FastWriteProfileStringW(a1, 16, L"Flags", v8);
  RtlStringCchPrintfW(v8, 0x28u, L"%d", a2[2]);
  v5 = FastWriteProfileStringW(a1, 16, L"MaximumSpeed", v8) & v4;
  RtlStringCchPrintfW(v8, 0x28u, L"%d", a2[3]);
  return v5 & FastWriteProfileStringW(a1, 16, L"TimeToMaximumSpeed", v8);
}
