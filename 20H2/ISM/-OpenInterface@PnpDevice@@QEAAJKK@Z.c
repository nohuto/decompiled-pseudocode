/*
 * XREFs of ?OpenInterface@PnpDevice@@QEAAJKK@Z @ 0x1800A042C
 * Callers:
 *     ?OpenInterface@PnpDevice@@QEAAJXZ @ 0x1800A04FC (-OpenInterface@PnpDevice@@QEAAJXZ.c)
 *     ?Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800A2DB0 (-Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180066E74 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall PnpDevice::OpenInterface(PnpDevice *this, DWORD a2, DWORD a3)
{
  const WCHAR *StringRawBuffer; // rax
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *((_DWORD *)this + 29) == 2 && *((_QWORD *)this + 4) )
  {
    if ( *((_QWORD *)this + 5) == -1LL
      && (StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 4), 0LL),
          _InterlockedExchange64(
            (volatile __int64 *)this + 5,
            (__int64)CreateFileW(StringRawBuffer, a2, a3, 0LL, 3u, 0x60000000u, 0LL)),
          *((_QWORD *)this + 5) == -1LL) )
    {
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x18C,
               (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevice.cpp",
               v7);
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevice.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
}
