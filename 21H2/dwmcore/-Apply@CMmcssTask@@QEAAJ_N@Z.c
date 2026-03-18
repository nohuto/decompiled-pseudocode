/*
 * XREFs of ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x1800F4DA0
 * Callers:
 *     ?UpdateMMCSSTask@CKst@@EEAAJXZ @ 0x18002A880 (-UpdateMMCSSTask@CKst@@EEAAJXZ.c)
 *     ?Run@CGlobalMit@@MEAAKXZ @ 0x18002B940 (-Run@CGlobalMit@@MEAAKXZ.c)
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x18003D624 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     ?ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x18003D7DC (-ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 *     ?ProcessRenderingStatus@CComposition@@QEAAXJ@Z @ 0x18007CDB8 (-ProcessRenderingStatus@CComposition@@QEAAXJ@Z.c)
 *     _lambda_08f8e6791065478e4a38815f49fd4aba_::_lambda_invoker_cdecl_ @ 0x1800F7560 (_lambda_08f8e6791065478e4a38815f49fd4aba_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CMmcssTask::Apply(struct _RTL_CRITICAL_SECTION *this, char a2)
{
  char v2; // di
  signed int v3; // ebx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rax
  PRTL_CRITICAL_SECTION_DEBUG v7; // rax
  __int64 v9; // rax
  signed int v10; // eax
  signed int LastError; // eax
  __int64 v12; // rcx
  unsigned int v13; // [rsp+20h] [rbp-18h]
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v14 = this;
  v3 = 0;
  EnterCriticalSection(this);
  DebugInfo = this[1].DebugInfo;
  if ( DebugInfo )
  {
    if ( a2 )
    {
      DebugInfo[2].EntryCount = 0;
      DebugInfo = this[1].DebugInfo;
    }
    if ( DebugInfo->Type && !*(_QWORD *)&DebugInfo[2].Flags )
    {
      SetLastError(0);
      v9 = ((__int64 (__fastcall *)(PRTL_CRITICAL_SECTION_DEBUG, DWORD *))this[1].OwningThread)(
             this[1].DebugInfo,
             &this[1].DebugInfo[2].EntryCount);
      *(_QWORD *)&this[1].DebugInfo[2].Flags = v9;
      if ( v9 )
      {
        SetLastError(0);
        if ( ((unsigned int (__fastcall *)(_QWORD, _QWORD))this[1].SpinCount)(
               *(_QWORD *)&this[1].DebugInfo[2].Flags,
               this[1].DebugInfo[2].ContentionCount) )
        {
          goto LABEL_2;
        }
        LastError = GetLastError();
        v3 = LastError;
        if ( LastError > 0 )
          v3 = (unsigned __int16)LastError | 0x80070000;
        v13 = 269;
      }
      else
      {
        v10 = GetLastError();
        v3 = v10;
        if ( v10 > 0 )
          v3 = (unsigned __int16)v10 | 0x80070000;
        v13 = 265;
      }
      if ( v3 >= 0 )
        v3 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v3, v13);
    }
  }
LABEL_2:
  v7 = this[1].DebugInfo;
  if ( v7 && *(_QWORD *)&v7[2].Flags )
    v2 = 1;
  LOBYTE(this[2].DebugInfo) = v2;
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v14);
  return (unsigned int)v3;
}
