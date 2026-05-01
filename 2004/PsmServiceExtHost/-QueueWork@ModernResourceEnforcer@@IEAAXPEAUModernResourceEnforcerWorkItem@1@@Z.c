/*
 * XREFs of ?QueueWork@ModernResourceEnforcer@@IEAAXPEAUModernResourceEnforcerWorkItem@1@@Z @ 0x1800313B4
 * Callers:
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x180031238 (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046540 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ModernResourceEnforcer::QueueWork(
        ModernResourceEnforcer *this,
        struct ModernResourceEnforcer::ModernResourceEnforcerWorkItem *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  ModernResourceEnforcer *v5; // rbx
  ModernResourceEnforcer **v6; // rcx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 224);
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)((char *)this + 224));
  v5 = (struct ModernResourceEnforcer::ModernResourceEnforcerWorkItem *)((char *)a2 + 136);
  v6 = (ModernResourceEnforcer **)*((_QWORD *)this + 35);
  if ( *v6 != (ModernResourceEnforcer *)((char *)this + 272) )
    __fastfail(3u);
  *(_QWORD *)v5 = (char *)this + 272;
  *((_QWORD *)v5 + 1) = v6;
  *v6 = v5;
  *((_QWORD *)this + 35) = v5;
  if ( (*((_BYTE *)this + 296) & 1) == 0 )
  {
    (*(void (__fastcall **)(ModernResourceEnforcer *))(*(_QWORD *)this + 8LL))(this);
    TpPostWork(*((_QWORD *)this + 33));
    *((_DWORD *)this + 74) |= 1u;
  }
  RtlLeaveCriticalSection(v2);
}
