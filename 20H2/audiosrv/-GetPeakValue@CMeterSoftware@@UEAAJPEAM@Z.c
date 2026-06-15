/*
 * XREFs of ?GetPeakValue@CMeterSoftware@@UEAAJPEAM@Z @ 0x1800BD440
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$CComPtrBase@UIAudioMeter@@@ATL@@QEAAXXZ @ 0x1800465D0 (-Release@-$CComPtrBase@UIAudioMeter@@@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005EA28 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMeterSoftware::GetPeakValue(struct _RTL_CRITICAL_SECTION *this, float *a2)
{
  int v2; // ebx
  float v5; // xmm6_4
  struct _RTL_CRITICAL_SECTION *v7; // rdi
  ULONG_PTR SpinCount; // rcx
  int v9; // eax
  __int64 LockSemaphore_low; // rcx
  float *v11; // rax
  float v12; // xmm0_4
  float v13; // xmm6_4
  _BYTE v14[128]; // [rsp+20h] [rbp-B8h] BYREF

  v2 = 0;
  v5 = 0.0;
  if ( !a2 )
    return 2147500035LL;
  v7 = this + 1;
  EnterCriticalSection(this + 1);
  SpinCount = this->SpinCount;
  if ( !SpinCount )
    goto LABEL_9;
  if ( LODWORD(this->LockSemaphore) <= 0x20 )
  {
    v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _BYTE *))(*(_QWORD *)SpinCount + 24LL))(SpinCount, v14);
    v2 = v9;
    if ( v9 < 0 )
    {
      if ( v9 == -2147417848 || v9 == -2147023174 )
      {
        ATL::CComPtrBase<IAudioMeter>::Release(&this->SpinCount);
        v2 = 0;
      }
    }
    else if ( LODWORD(this->LockSemaphore) )
    {
      LockSemaphore_low = LODWORD(this->LockSemaphore);
      v11 = (float *)v14;
      do
      {
        v12 = *v11++;
        v5 = fmaxf(v12, v5);
        --LockSemaphore_low;
      }
      while ( LockSemaphore_low );
    }
LABEL_9:
    if ( v7 )
      LeaveCriticalSection(v7);
    v13 = fminf(v5, 1.0);
    if ( v13 <= 0.0 )
      v13 = 0.0;
    *a2 = v13;
    if ( v2 < 0 )
      AudSrvTraceLoggingErrorHelper("CMeterSoftware::GetPeakValue", 607, v2);
    return (unsigned int)v2;
  }
  if ( v7 )
    LeaveCriticalSection(v7);
  return 2147942487LL;
}
