/*
 * XREFs of ?SetAnimationScenarioGUID@CBaseExpression@@IEAAXU_GUID@@@Z @ 0x180042EF8
 * Callers:
 *     ?TelemetrySetAnimationScenarioGUID@CBaseExpression@@IEAAJAEBU_GUID@@@Z @ 0x180042EAC (-TelemetrySetAnimationScenarioGUID@CBaseExpression@@IEAAJAEBU_GUID@@@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x180045318 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     _Init_thread_footer @ 0x180101100 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180101168 (_Init_thread_header.c)
 */

void __fastcall CBaseExpression::SetAnimationScenarioGUID(CBaseExpression *this, struct _GUID *a2)
{
  CSparseStorage *v4; // rcx
  __int64 v5; // rax

  if ( __TSS0__1__SetAnimationScenarioGUID_CBaseExpression__IEAAXU_GUID___Z_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer
                                                                                              + (unsigned int)tls_index)
                                                                                            + 4LL) )
  {
    Init_thread_header(&__TSS0__1__SetAnimationScenarioGUID_CBaseExpression__IEAAXU_GUID___Z_4HA);
    if ( __TSS0__1__SetAnimationScenarioGUID_CBaseExpression__IEAAXU_GUID___Z_4HA == -1 )
    {
      `CBaseExpression::SetAnimationScenarioGUID'::`2'::sc_defaultValue = 0LL;
      Init_thread_footer(&__TSS0__1__SetAnimationScenarioGUID_CBaseExpression__IEAAXU_GUID___Z_4HA);
    }
  }
  v4 = (CBaseExpression *)((char *)this + 328);
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&`CBaseExpression::SetAnimationScenarioGUID'::`2'::sc_defaultValue.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&`CBaseExpression::SetAnimationScenarioGUID'::`2'::sc_defaultValue.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)`CBaseExpression::SetAnimationScenarioGUID'::`2'::sc_defaultValue.Data4;
  if ( v5 )
    CSparseStorage::SetData(v4, 1u, 0x10u, a2);
  else
    *(_DWORD *)(*(_QWORD *)v4 + 4LL) &= ~0x80000000;
}
