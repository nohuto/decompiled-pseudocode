/*
 * XREFs of ?UpdateLoopbackConstrictionLevel@CAudioDeviceGraph@@QEAAJW4EAudioConstriction@@@Z @ 0x14003FA00
 * Callers:
 *     ?RequestPolicyChange@CProtectedOutputController@@UEAAJPEAVCVirtualProtectedOutput@@W4EAudioConstriction@@@Z @ 0x14003E250 (-RequestPolicyChange@CProtectedOutputController@@UEAAJPEAVCVirtualProtectedOutput@@W4EAudioConst.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140002B70 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?SetLoopbackConstriction@CPipeInstance@@QEAAJW4EAudioConstriction@@@Z @ 0x14003D4B4 (-SetLoopbackConstriction@CPipeInstance@@QEAAJW4EAudioConstriction@@@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400432DC (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioDeviceGraph::UpdateLoopbackConstrictionLevel(CAudioDeviceGraph *this, unsigned int a2)
{
  int v4; // ebx
  int v5; // r14d
  struct _RTL_CRITICAL_SECTION *v6; // rbp
  __int64 v7; // rcx
  CPipeInstance **Next; // rax
  CPipeInstance **v9; // rax
  _QWORD *v11; // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+60h] [rbp+18h]
  char *v13; // [rsp+68h] [rbp+20h]

  v4 = 0;
  v5 = 0;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  v12 = v6;
  if ( !*((_DWORD *)this + 64) )
  {
    v4 = -2005139437;
LABEL_17:
    AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::UpdateLoopbackConstrictionLevel", 0x51Au, v4);
    goto LABEL_18;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
  v13 = (char *)this + 216;
  v11 = (_QWORD *)*((_QWORD *)this + 21);
  if ( !v11 )
    goto LABEL_13;
  do
  {
    Next = (CPipeInstance **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v7, &v11);
    v4 = CPipeInstance::SetLoopbackConstriction(*Next, a2);
    if ( v4 >= 0 )
      v5 = 1;
  }
  while ( v11 );
  if ( v4 < 0 )
  {
    if ( v5 )
    {
      v11 = (_QWORD *)*((_QWORD *)this + 21);
      while ( v11 )
      {
        v9 = (CPipeInstance **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v7, &v11);
        CPipeInstance::SetLoopbackConstriction(*v9, *((unsigned int *)this + 28));
      }
    }
    if ( this != (CAudioDeviceGraph *)-216LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
  }
  else
  {
LABEL_13:
    if ( this != (CAudioDeviceGraph *)-216LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
    *((_DWORD *)this + 28) = a2;
  }
  if ( v4 < 0 )
    goto LABEL_17;
LABEL_18:
  if ( v6 )
    LeaveCriticalSection(v6);
  return (unsigned int)v4;
}
