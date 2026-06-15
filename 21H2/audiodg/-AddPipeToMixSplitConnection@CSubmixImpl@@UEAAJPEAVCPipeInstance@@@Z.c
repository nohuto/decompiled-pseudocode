/*
 * XREFs of ?AddPipeToMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x140007170
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTail@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAAEAPEAVCConnectionInstance@@XZ @ 0x140001EF8 (-GetTail@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140005E48 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?RemoveAll@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x14000FF90 (-RemoveAll@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@.c)
 *     ?SetHandle@CConnectionInstance@@QEAAJ_K@Z @ 0x14001777C (-SetHandle@CConnectionInstance@@QEAAJ_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B400 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14003DEFC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400447C8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x14004689C (-ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z.c)
 *     ?ResolvePendingConnections@CPipeInstance@@QEAAJ_K0W4PIPE_CONNECTION_RESOLUTION_OPTIONS@@@Z @ 0x140047BE8 (-ResolvePendingConnections@CPipeInstance@@QEAAJ_K0W4PIPE_CONNECTION_RESOLUTION_OPTIONS@@@Z.c)
 */

__int64 __fastcall CSubmixImpl::AddPipeToMixSplitConnection(CSubmixImpl *this, struct CPipeInstance *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 v5; // rcx
  _QWORD **Head; // rax
  __int64 v7; // rax
  __int64 *v8; // rdi
  unsigned __int64 v9; // r12
  CConnectionInstance *v10; // rcx
  _QWORD **v11; // r15
  __int64 *v12; // r14
  int v13; // eax
  __int64 v14; // rdx
  _QWORD *v15; // rdx
  bool v16; // zf
  __int64 v17; // rdi
  int v18; // eax
  unsigned int v19; // edi
  __int64 *v21; // rax
  __int64 v22; // r8
  int v23; // eax
  const struct CPipeInstance *v24; // rdx
  int v25; // eax
  int v26; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v5 = *((_QWORD *)this + 3);
  if ( v5 )
  {
    Head = (_QWORD **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((_QWORD *)(v5 + 64));
    v7 = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead(*Head);
    v8 = (__int64 *)*((_QWORD *)a2 + 32);
    v9 = *(_QWORD *)(*(_QWORD *)v7 + 8LL);
    while ( v8 )
    {
      v10 = (CConnectionInstance *)v8[2];
      v11 = (_QWORD **)(v8 + 1);
      v12 = v8;
      v8 = (__int64 *)v8[1];
      if ( *((_QWORD *)v10 + 1) == -1LL )
      {
        v13 = CConnectionInstance::SetHandle(v10, v9);
        if ( v13 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x11C5,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
            (const char *)(unsigned int)v13,
            v26);
        v14 = *v12;
        if ( v12 == *((__int64 **)a2 + 31) )
          *((_QWORD *)a2 + 31) = v14;
        else
          **v11 = v14;
        v15 = *v11;
        if ( v12 == *((__int64 **)a2 + 32) )
          *((_QWORD *)a2 + 32) = v15;
        else
          *(_QWORD *)(*v12 + 8) = v15;
        *v12 = *((_QWORD *)a2 + 35);
        v16 = (*((_QWORD *)a2 + 33))-- == 1LL;
        *((_QWORD *)a2 + 35) = v12;
        if ( v16 )
          ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::RemoveAll();
      }
    }
    v17 = *((_QWORD *)this + 3);
    if ( *(_QWORD *)(*(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((_QWORD *)(v17 + 64))
                   + 16LL) == 2LL )
    {
      v21 = (__int64 *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((_QWORD *)(v17 + 64));
      v22 = *(_QWORD *)ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetTail(*v21);
      if ( v22 )
      {
        v23 = CPipeInstance::ResolvePendingConnections(a2, -2LL, *(_QWORD *)(v22 + 8), 1LL);
        v19 = v23;
        if ( v23 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4D1,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
            (const char *)(unsigned int)v23,
            v26);
          goto LABEL_16;
        }
      }
    }
  }
  else
  {
    v24 = (const struct CPipeInstance *)*((_QWORD *)this + 34);
    if ( v24 )
    {
      v25 = CPipeInstance::ConnectToRightPipe(a2, v24);
      v19 = v25;
      if ( v25 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4D6,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
          (const char *)(unsigned int)v25,
          v26);
        goto LABEL_16;
      }
    }
  }
  v18 = (*(__int64 (__fastcall **)(CSubmixImpl *, struct CPipeInstance *))(*(_QWORD *)this + 40LL))(this, a2);
  v19 = v18;
  if ( v18 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4D9,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v18,
      v26);
  else
    v19 = 0;
LABEL_16:
  if ( v2 )
    LeaveCriticalSection(v2);
  return v19;
}
