/*
 * XREFs of ?DeviceIoControlOverlapped@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEAXK0KPEAU_OVERLAPPED@@@Z @ 0x18015B5D4
 * Callers:
 *     ?StartIo@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXXZ @ 0x1801647C8 (-StartIo@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800A7DEC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??$HolographicDriverHandleWrapper_DeviceIoControlFailed@AEAKAEAKPEAVHolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEBU_GUID@@@HolographicDriverClientContinuousTrace@@SAXAEAK0$$QEAPEAVHolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEBU_GUID@@@Z @ 0x18014ED88 (--$HolographicDriverHandleWrapper_DeviceIoControlFailed@AEAKAEAKPEAVHolographicDriverHandleWrapp.c)
 */

__int64 __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlOverlapped(
        Windows::Internal::Holographic::HolographicDriverHandleWrapper *this,
        DWORD a2,
        void *a3,
        DWORD a4,
        void *lpOutBuffer,
        DWORD a6,
        struct _OVERLAPPED *lpOverlapped)
{
  signed int v11; // ebx
  RTL_SRWLOCK *v12; // rsi
  const char *nOutBufferSize; // [rsp+28h] [rbp-50h]
  const void *v15; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  DWORD LastError; // [rsp+80h] [rbp+8h] BYREF
  DWORD v18; // [rsp+88h] [rbp+10h] BYREF

  v18 = a2;
  if ( *((_QWORD *)this + 6) )
  {
    v12 = (RTL_SRWLOCK *)((char *)this + 120);
    AcquireSRWLockShared((PSRWLOCK)this + 15);
    v11 = *((_DWORD *)this + 32);
    if ( v11 >= 0 )
    {
      if ( DeviceIoControl(*((HANDLE *)this + 17), a2, a3, a4, lpOutBuffer, a6, 0LL, lpOverlapped) )
      {
        v11 = 0;
      }
      else
      {
        LastError = GetLastError();
        v11 = LastError;
        if ( LastError != 997 )
        {
          v15 = this;
          HolographicDriverClientContinuousTrace::HolographicDriverHandleWrapper_DeviceIoControlFailed<unsigned long &,unsigned long &,Windows::Internal::Holographic::HolographicDriverHandleWrapper *,_GUID const &>(
            &LastError,
            &v18,
            &v15,
            (const struct _GUID *)((char *)this + 12));
        }
        if ( v11 > 0 )
          v11 = (unsigned __int16)v11 | 0x80070000;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x118,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\HolographicDriverHandleWrapper.h",
        (const char *)(unsigned int)v11);
    }
    if ( v12 )
      ReleaseSRWLockShared(v12);
  }
  else
  {
    v11 = -2147483634;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      277LL,
      (unsigned int)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\HolographicDriverHandleWrapper.h",
      (const char *)0x8000000ELL,
      (int)"this driver handle is not associated with a completion port, so DeviceIoControlHelper must be used",
      nOutBufferSize);
  }
  return (unsigned int)v11;
}
