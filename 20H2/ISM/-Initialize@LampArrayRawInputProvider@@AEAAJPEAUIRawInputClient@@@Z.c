/*
 * XREFs of ?Initialize@LampArrayRawInputProvider@@AEAAJPEAUIRawInputClient@@@Z @ 0x180034350
 * Callers:
 *     ?Create@LampArrayRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x1800342A0 (-Create@LampArrayRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ?Release@LampArrayRawInputProvider@@UEAAKXZ @ 0x180010790 (-Release@LampArrayRawInputProvider@@UEAAKXZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180028070 (-IsEdition@@YA_N_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180066E74 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?CreateAndInitialize@ConsumerControlManager@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAV1@@Z @ 0x18009F944 (-CreateAndInitialize@ConsumerControlManager@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAP.c)
 */

__int64 __fastcall LampArrayRawInputProvider::Initialize(ULONG_PTR dwData, struct IRawInputClient *a2)
{
  HMODULE *v4; // rsi
  const char *v5; // r9
  int v7; // eax
  unsigned int v8; // ebx
  signed int LastError; // eax
  int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( IsEdition(6176LL) )
  {
    v7 = ConsumerControlManager::CreateAndInitialize(
           a2,
           (struct IRawInputProvider *)dwData,
           (struct ConsumerControlManager **)(dwData + 248));
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x36,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
        (const char *)(unsigned int)v7,
        v10);
      return v8;
    }
  }
  v4 = (HMODULE *)(dwData + 96);
  if ( GetModuleHandleExW(4u, (LPCWSTR)LampArrayRawInputProvider::WorkerThreadProcThunk, (HMODULE *)(dwData + 96)) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(dwData + 24));
    _InterlockedExchange64(
      (volatile __int64 *)(dwData + 104),
      (__int64)CreateThread(0LL, 0LL, LampArrayRawInputProvider::WorkerThreadProcThunk, (LPVOID)dwData, 0, 0LL));
    if ( *(_QWORD *)(dwData + 104) )
      return 0LL;
    LastError = GetLastError();
    v8 = LastError;
    if ( LastError > 0 )
      v8 = (unsigned __int16)LastError | 0x80070000;
    FreeLibrary(*v4);
    *v4 = 0LL;
    LampArrayRawInputProvider::Release(dwData);
    return v8;
  }
  return wil::details::in1diag3::Return_GetLastError(
           retaddr,
           (void *)0x3F,
           (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
           v5);
}
