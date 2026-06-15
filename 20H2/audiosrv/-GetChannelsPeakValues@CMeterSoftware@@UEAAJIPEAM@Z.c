/*
 * XREFs of ?GetChannelsPeakValues@CMeterSoftware@@UEAAJIPEAM@Z @ 0x1800BD130
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$CComPtrBase@UIAudioMeter@@@ATL@@QEAAXXZ @ 0x1800465D0 (-Release@-$CComPtrBase@UIAudioMeter@@@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005EA28 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     memset_0 @ 0x18006AD3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMeterSoftware::GetChannelsPeakValues(
        struct _RTL_CRITICAL_SECTION *this,
        unsigned int a2,
        float *a3)
{
  __int64 v3; // rdi
  float *v4; // rsi
  int v6; // ebx
  struct _RTL_CRITICAL_SECTION *v7; // r14
  ULONG_PTR SpinCount; // rcx
  int v9; // eax
  __int64 v10; // rcx
  _BYTE *v11; // rax
  float v12; // xmm0_4
  _BYTE v14[128]; // [rsp+20h] [rbp-B8h] BYREF

  v3 = a2;
  v4 = a3;
  if ( !a3 )
  {
    v6 = -2147467261;
LABEL_24:
    AudSrvTraceLoggingErrorHelper("CMeterSoftware::GetChannelsPeakValues", 688, v6);
    return (unsigned int)v6;
  }
  if ( a2 != LODWORD(this->LockSemaphore) )
  {
    v6 = -2147024809;
    goto LABEL_24;
  }
  v7 = this + 1;
  v6 = 0;
  EnterCriticalSection(this + 1);
  SpinCount = this->SpinCount;
  if ( SpinCount && LODWORD(this->LockSemaphore) <= 0x20 )
  {
    v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _BYTE *, _QWORD))(*(_QWORD *)SpinCount + 24LL))(
           SpinCount,
           v14,
           (unsigned int)v3);
    v6 = v9;
    if ( v9 < 0 )
    {
      if ( v9 == -2147417848 || v9 == -2147023174 )
      {
        if ( (_DWORD)v3 )
          memset_0(v4, 0, 4 * v3);
        ATL::CComPtrBase<IAudioMeter>::Release(&this->SpinCount);
        v6 = 0;
      }
    }
    else if ( (_DWORD)v3 )
    {
      v10 = v3;
      v11 = (_BYTE *)(v14 - (_BYTE *)v4);
      do
      {
        v12 = fminf(*(float *)((char *)v4 + (_QWORD)v11), 1.0);
        if ( v12 <= 0.0 )
          v12 = 0.0;
        *v4++ = v12;
        --v10;
      }
      while ( v10 );
    }
  }
  else if ( (_DWORD)v3 )
  {
    memset_0(v4, 0, 4 * v3);
  }
  if ( v7 )
    LeaveCriticalSection(v7);
  if ( v6 < 0 )
    goto LABEL_24;
  return (unsigned int)v6;
}
