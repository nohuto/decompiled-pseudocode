/*
 * XREFs of ?GetChannelsPeakValues@CMeterHardware@@UEAAJIPEAM@Z @ 0x1800BDBF0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F0C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     memset_0 @ 0x18006B59C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMeterHardware::GetChannelsPeakValues(CMeterHardware *this, unsigned int a2, float *a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rdi
  __int64 v7; // rcx
  float v8; // xmm0_4
  float v10; // [rsp+40h] [rbp+18h] BYREF

  if ( !a3 )
  {
    v5 = -2147467261;
LABEL_14:
    AudSrvTraceLoggingErrorHelper("CMeterHardware::GetChannelsPeakValues", 492, v5);
    return v5;
  }
  if ( a2 != *((_DWORD *)this + 6) )
  {
    v5 = -2147024809;
    goto LABEL_14;
  }
  v5 = 0;
  if ( *((_QWORD *)this + 5) )
  {
    v6 = 0LL;
    if ( !*((_DWORD *)this + 6) )
      return v5;
    do
    {
      v7 = *((_QWORD *)this + 5);
      v10 = 0.0;
      v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, float *))(*(_QWORD *)v7 + 32LL))(v7, (unsigned int)v6, &v10);
      v8 = fminf(v10, 1.0);
      if ( v8 <= 0.0 )
        v8 = 0.0;
      a3[v6] = v8;
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 < *((_DWORD *)this + 6) );
  }
  else
  {
    if ( !a2 )
      return v5;
    memset_0(a3, 0, 4LL * a2);
  }
  if ( (v5 & 0x80000000) != 0 )
    goto LABEL_14;
  return v5;
}
