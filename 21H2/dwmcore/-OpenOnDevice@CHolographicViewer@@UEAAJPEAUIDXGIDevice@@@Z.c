/*
 * XREFs of ?OpenOnDevice@CHolographicViewer@@UEAAJPEAUIDXGIDevice@@@Z @ 0x18029C9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1801000AC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CHolographicViewer::OpenOnDevice(CHolographicViewer *this, struct IDXGIDevice *a2)
{
  char v4; // r15
  HRESULT v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r9
  void *v9; // rbx
  __int64 (__fastcall *v10)(void *, struct IDXGIDevice *, _QWORD, _QWORD, int, int, char *); // rbp
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  void *ppFactory; // [rsp+70h] [rbp+8h] BYREF

  ppFactory = 0LL;
  v4 = 1;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppFactory);
  v5 = CreateDXGIFactory2(0, &GUID_b14887d9_f537_4af5_b379_7d33031be773, &ppFactory);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x88,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\holographic\\holographicviewer.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_11;
  }
  AcquireSRWLockExclusive((PSRWLOCK)this + 14);
  if ( *((_DWORD *)this + 26) == 3 )
  {
    v6 = -2005270490;
    v7 = 144LL;
    v8 = 2289696806LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\holographic\\holographicviewer.cpp",
      (const char *)v8);
    ReleaseSRWLockExclusive((PSRWLOCK)this + 14);
    goto LABEL_11;
  }
  if ( *((_DWORD *)this + 26) != 1 )
  {
    v6 = -2147483635;
    v7 = 147LL;
    v8 = 2147483661LL;
    goto LABEL_9;
  }
  v9 = ppFactory;
  v10 = *(__int64 (__fastcall **)(void *, struct IDXGIDevice *, _QWORD, _QWORD, int, int, char *))(*(_QWORD *)ppFactory
                                                                                                 + 32LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 10);
  v11 = v10(v9, a2, *((_QWORD *)this + 9), 0LL, 5, 0x10000000, (char *)this + 80);
  v6 = v11;
  if ( v11 < 0 )
  {
    v8 = (unsigned int)v11;
    v7 = 155LL;
    goto LABEL_9;
  }
  *((_QWORD *)this + 9) = 0LL;
  _InterlockedExchange((volatile __int32 *)this + 26, 2);
  v4 = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)this + 14);
  v6 = 0;
LABEL_11:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppFactory);
  if ( v4 )
  {
    CloseHandle(*((HANDLE *)this + 9));
    *((_QWORD *)this + 9) = 0LL;
  }
  return v6;
}
