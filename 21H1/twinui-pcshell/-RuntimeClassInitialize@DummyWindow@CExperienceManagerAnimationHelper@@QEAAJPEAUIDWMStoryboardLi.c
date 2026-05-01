/*
 * XREFs of ?RuntimeClassInitialize@DummyWindow@CExperienceManagerAnimationHelper@@QEAAJPEAUIDWMStoryboardListener@@@Z @ 0x1804528D8
 * Callers:
 *     ??$MakeAndInitialize@VDummyWindow@CExperienceManagerAnimationHelper@@V12@AEAPEAUIDWMStoryboardListener@@@Details@WRL@Microsoft@@YAJPEAPEAVDummyWindow@CExperienceManagerAnimationHelper@@AEAPEAUIDWMStoryboardListener@@@Z @ 0x180452550 (--$MakeAndInitialize@VDummyWindow@CExperienceManagerAnimationHelper@@V12@AEAPEAUIDWMStoryboardLi.c)
 * Callees:
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180066D30 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18008D658 (memset_0.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180116F18 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$AsWeak@UIDWMStoryboardListener@@@WRL@Microsoft@@YAJPEAUIDWMStoryboardListener@@PEAVWeakRef@01@@Z @ 0x18017FEE0 (--$AsWeak@UIDWMStoryboardListener@@@WRL@Microsoft@@YAJPEAUIDWMStoryboardListener@@PEAVWeakRef@01.c)
 */

__int64 __fastcall CExperienceManagerAnimationHelper::DummyWindow::RuntimeClassInitialize(
        HWND *this,
        struct IDWMStoryboardListener *a2)
{
  __int64 *v4; // rax
  int v5; // ebx
  __int64 v6; // rdx
  HCURSOR CursorW; // rax
  const char *v9; // r9
  HWND v10; // rcx
  WNDCLASSEXW v11; // [rsp+60h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  int pvAttribute; // [rsp+D0h] [rbp+67h] BYREF
  __int64 *v14; // [rsp+E0h] [rbp+77h] BYREF

  v14 = (__int64 *)(this + 4);
  v4 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v14);
  v5 = Microsoft::WRL::AsWeak<IDWMStoryboardListener>((__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2, v4);
  if ( v5 < 0 )
  {
    v6 = 13LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanageranimationhelper.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  memset_0(&v11, 0, sizeof(v11));
  v11.cbSize = 80;
  v11.lpfnWndProc = (WNDPROC)CWRLImpWndProc<CExperienceManagerAnimationHelper::DummyWindow>::s_WndProcBase;
  v11.hInstance = &_ImageBase;
  CursorW = LoadCursorW(0LL, (LPCWSTR)0x7F00);
  v11.cbWndExtra = 8;
  v11.hCursor = CursorW;
  v11.lpszClassName = L"DummyDWMListenerWindow";
  RegisterClassExW(&v11);
  CreateWindowExW(0x8200080u, L"DummyDWMListenerWindow", 0LL, 0x80000000, 0, 0, 0, 0, 0LL, 0LL, &_ImageBase, this);
  v10 = this[3];
  if ( !v10 )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x26,
             (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanageranimationhelper.cpp",
             v9);
  pvAttribute = 1;
  v5 = DwmSetWindowAttribute(v10, 0xDu, &pvAttribute, 4u);
  if ( v5 < 0 )
  {
    v6 = 41LL;
    goto LABEL_3;
  }
  ShowWindow(this[3], 8);
  return 0LL;
}
