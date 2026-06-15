/*
 * XREFs of ?OnLeftSubmixStopped@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140004290
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140002B70 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z @ 0x14000FBA0 (-UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B180 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSubmixImpl::OnLeftSubmixStopped(CSubmixImpl *this, struct ISubmixInternal *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  struct ISubmixInternal **v5; // rcx
  struct ISubmixInternal ***Next; // rax
  int updated; // eax
  unsigned int v8; // ebx
  __int64 v10; // rdx
  __int64 v11; // r9
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  _QWORD *v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v14 = (_QWORD *)*((_QWORD *)this + 15);
  if ( v14 )
  {
    while ( 1 )
    {
      Next = (struct ISubmixInternal ***)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(
                                           (__int64)v5,
                                           &v14);
      v5 = *Next;
      if ( **Next == a2 )
        break;
      if ( !v14 )
        goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    v5 = 0LL;
  }
  if ( v5 )
  {
    *((_BYTE *)v5 + 8) = 0;
    updated = CSubmixImpl::UpdateActiveStreamCount(this, -1);
    v8 = updated;
    if ( updated >= 0 )
    {
      v8 = 0;
      goto LABEL_6;
    }
    v11 = (unsigned int)updated;
    v10 = 1341LL;
  }
  else
  {
    v8 = -2005139430;
    v10 = 1338LL;
    v11 = 2289827866LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    (const char *)v11,
    v12);
LABEL_6:
  if ( v2 )
    LeaveCriticalSection(v2);
  return v8;
}
