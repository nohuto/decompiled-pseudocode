/*
 * XREFs of ?SetSoundSentry@@YGHPAU_UNICODE_STRING@@PAUtagSOUNDSENTRYW@@@Z @ 0x1456F9
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPAGIPBGZZ @ 0x7F16E (-RtlStringCchPrintfW@@YAJPAGIPBGZZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall SetSoundSentry(int a1, _DWORD *a2)
{
  int v4; // edi
  int v5; // edi
  unsigned __int16 v8[40]; // [esp+10h] [ebp-54h] BYREF

  RtlStringCchPrintfW(v8, 0x28u, L"%d", a2[1]);
  v4 = FastWriteProfileStringW(a1, 19, L"Flags", v8);
  RtlStringCchPrintfW(v8, 0x28u, L"%d", a2[2]);
  v5 = FastWriteProfileStringW(a1, 19, L"TextEffect", v8) & v4;
  RtlStringCchPrintfW(v8, 0x28u, L"%d", a2[8]);
  return v5 & FastWriteProfileStringW(a1, 19, L"WindowsEffect", v8);
}
