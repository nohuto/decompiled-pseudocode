/*
 * XREFs of ?GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z @ 0x180068214
 * Callers:
 *     ?GetChannelCount@CMeterSoftware@@MEAAJPEAI@Z @ 0x1800681D0 (-GetChannelCount@CMeterSoftware@@MEAAJPEAI@Z.c)
 *     ?GetChannelCount@CMeterHardware@@MEAAJPEAI@Z @ 0x1800BD000 (-GetChannelCount@CMeterHardware@@MEAAJPEAI@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005EA28 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetPolicyConfig@@YAJPEAPEAUIPolicyConfig@@@Z @ 0x1800682C0 (-GetPolicyConfig@@YAJPEAPEAUIPolicyConfig@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMeterControlBase::GetChannelCountFromDeviceFormat(CMeterControlBase *this, unsigned int *a2)
{
  int PolicyConfig; // ebx
  void *v5; // rcx
  struct IPolicyConfig *v7; // [rsp+50h] [rbp+18h] BYREF
  LPVOID pv; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0LL;
  PolicyConfig = GetPolicyConfig(&v7);
  if ( PolicyConfig < 0 )
    goto LABEL_10;
  pv = 0LL;
  PolicyConfig = (*(__int64 (__fastcall **)(struct IPolicyConfig *, _QWORD, _QWORD, LPVOID *))(*(_QWORD *)v7 + 32LL))(
                   v7,
                   *((_QWORD *)this + 2),
                   0LL,
                   &pv);
  v5 = pv;
  if ( PolicyConfig >= 0 )
    *a2 = *((unsigned __int16 *)pv + 1);
  if ( v5 )
    CoTaskMemFree(v5);
  if ( PolicyConfig < 0 )
LABEL_10:
    AudSrvTraceLoggingErrorHelper("CMeterControlBase::GetChannelCountFromDeviceFormat", 188, PolicyConfig);
  if ( v7 )
    (*(void (__fastcall **)(struct IPolicyConfig *))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)PolicyConfig;
}
