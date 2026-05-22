/*
 * XREFs of ?OutputIoctl@PnpDevice@@QEAAJK_KPEAXPEA_K@Z @ 0x1800A0AA4
 * Callers:
 *     ?Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800A3310 (-Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180067514 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?GetAsyncIoResult@PnpDevice@@QEAAJKPEAU_OVERLAPPED@@PEA_K@Z @ 0x1800A0800 (-GetAsyncIoResult@PnpDevice@@QEAAJKPEAU_OVERLAPPED@@PEA_K@Z.c)
 */

__int64 __fastcall PnpDevice::OutputIoctl(PnpDevice *this, __int64 a2, __int64 a3, void *a4, unsigned __int64 *a5)
{
  const char *v7; // r9
  int LastError; // eax
  void *v9; // rcx
  DWORD v10; // edx
  bool v11; // sf
  unsigned int v12; // ebx
  struct _OVERLAPPED Overlapped; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *a5 = 0LL;
  Overlapped.hEvent = CreateEventW(0LL, 1, 0, 0LL);
  if ( !Overlapped.hEvent )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x1A2,
                  (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevice.cpp",
                  v7);
    goto LABEL_11;
  }
  v9 = (void *)*((_QWORD *)this + 5);
  memset(&Overlapped, 0, 24);
  if ( DeviceIoControl(v9, 0xB01A0u, 0LL, 0, a4, 4u, 0LL, &Overlapped)
    || (LastError = GetLastError()) == 0
    || LastError == 997 )
  {
    LastError = 0;
    goto LABEL_9;
  }
  v11 = LastError < 0;
  if ( LastError > 0 )
  {
    LastError = (unsigned __int16)LastError | 0x80070000;
LABEL_9:
    v11 = LastError < 0;
  }
  if ( !v11 )
  {
    LastError = PnpDevice::GetAsyncIoResult((HANDLE *)this, v10, &Overlapped, a5);
    if ( LastError >= 0 )
    {
      v12 = 0;
      goto LABEL_14;
    }
  }
LABEL_11:
  v12 = LastError;
LABEL_14:
  CloseHandle(Overlapped.hEvent);
  return v12;
}
