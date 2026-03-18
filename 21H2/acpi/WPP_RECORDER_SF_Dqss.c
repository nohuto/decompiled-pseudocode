/*
 * XREFs of WPP_RECORDER_SF_dqss @ 0x1C004DEE0
 * Callers:
 *     ACPIInitStartDevice @ 0x1C00050B0 (ACPIInitStartDevice.c)
 *     ACPIInitDosDeviceName @ 0x1C0022B6C (ACPIInitDosDeviceName.c)
 *     ACPICMButtonNotify @ 0x1C004D608 (ACPICMButtonNotify.c)
 *     ACPICMExperienceButtonHandleEvent @ 0x1C004D9FC (ACPICMExperienceButtonHandleEvent.c)
 *     ACPIFanFSTCallback @ 0x1C0054AC0 (ACPIFanFSTCallback.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C0062CD8 (ACPIWakeEnableDisableAsync.c)
 *     ACPIFanPrepareImpactZoneSupport @ 0x1C0090490 (ACPIFanPrepareImpactZoneSupport.c)
 *     ACPIFanValidateImpactZoneSupport @ 0x1C00AE6D4 (ACPIFanValidateImpactZoneSupport.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_dqss(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        char a7,
        const char *a8,
        const char *a9)
{
  __int64 v9; // rdi
  __int64 v10; // rsi
  unsigned __int64 v12; // r14
  unsigned int v13; // r15d
  unsigned int v14; // r12d
  __int64 v15; // rbx
  int v16; // eax
  unsigned __int8 v17; // cf
  __int64 v18; // r8
  __int64 v19; // r8
  const char *v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rdx
  const char *v23; // rcx
  __int64 v24; // rax
  int v26; // [rsp+20h] [rbp-78h]
  __int64 v27; // [rsp+A0h] [rbp+8h]

  v27 = a1;
  v9 = (__int64)a9;
  v10 = (__int64)a8;
  v12 = (unsigned __int64)a3 >> 16;
  v13 = a2;
  v14 = a4;
  v15 = -1LL;
  v16 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v12 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  v17 = _bittest(&v16, (a3 - 1) & 0x1F);
  v18 = 5LL;
  if ( v17 && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v12 + 1) >= a2 )
  {
    if ( a9 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( a9[v19] );
      v18 = v19 + 1;
    }
    v20 = a9;
    if ( !a9 )
      v20 = "NULL";
    if ( a8 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a8[v21] );
      v22 = v21 + 1;
    }
    else
    {
      v22 = 5LL;
    }
    v23 = a8;
    if ( !a8 )
      v23 = "NULL";
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v12),
      43LL,
      a5,
      v14,
      &a6,
      4LL,
      &a7,
      8LL,
      v23,
      v22,
      v20,
      v18,
      0LL);
    a1 = v27;
  }
  if ( v9 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( *(_BYTE *)(v9 + v24) );
  }
  if ( v10 )
  {
    do
      ++v15;
    while ( *(_BYTE *)(v10 + v15) );
  }
  LOWORD(v26) = v14;
  return WppAutoLogTrace(a1, v13, a3, a5, v26, &a6);
}
