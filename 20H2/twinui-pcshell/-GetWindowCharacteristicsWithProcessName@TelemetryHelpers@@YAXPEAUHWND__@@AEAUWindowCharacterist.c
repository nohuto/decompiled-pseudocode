/*
 * XREFs of ?GetWindowCharacteristicsWithProcessName@TelemetryHelpers@@YAXPEAUHWND__@@AEAUWindowCharacteristics@1@@Z @ 0x180291704
 * Callers:
 *     _lambda_49c0b2fb711056d9762ca69f307c87f4_::operator() @ 0x18026A5A4 (_lambda_49c0b2fb711056d9762ca69f307c87f4_--operator().c)
 * Callees:
 *     ??$K32GetModuleFileNameExW@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0IA@@wil@@YAJPEAXPEAUHINSTANCE__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@@Z @ 0x1802914A0 (--$K32GetModuleFileNameExW@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1.c)
 *     ?GetWindowCharacteristicsPartial@TelemetryHelpers@@YAXPEAUHWND__@@AEAUWindowCharacteristics@1@@Z @ 0x18029162C (-GetWindowCharacteristicsPartial@TelemetryHelpers@@YAXPEAUHWND__@@AEAUWindowCharacteristics@1@@Z.c)
 */

void __fastcall TelemetryHelpers::GetWindowCharacteristicsWithProcessName(
        HWND hWnd,
        void **a2,
        struct TelemetryHelpers::WindowCharacteristics *a3)
{
  __int64 v5; // rdx
  char *v6; // rbx
  DWORD dwProcessId; // [rsp+40h] [rbp+18h] BYREF

  TelemetryHelpers::GetWindowCharacteristicsPartial(hWnd, (HWND)a2, a3);
  dwProcessId = 0;
  GetWindowThreadProcessId(hWnd, &dwProcessId);
  v6 = (char *)OpenProcess(0x1000u, 0, dwProcessId);
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    wil::K32GetModuleFileNameExW<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,128>(
      v6,
      v5,
      a2 + 69);
    CloseHandle(v6);
  }
}
