/*
 * XREFs of ?StartStream@CSubmixImpl@@UEAAJ_K@Z @ 0x140004830
 * Callers:
 *     ?StartStream@CProcessSubmix@@UEAAJ_K@Z @ 0x140004340 (-StartStream@CProcessSubmix@@UEAAJ_K@Z.c)
 *     ?StartStream@CStreamGroup@@UEAAJ_K@Z @ 0x140034090 (-StartStream@CStreamGroup@@UEAAJ_K@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140002B70 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z @ 0x14000FBA0 (-UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B180 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSubmixImpl::StartStream(CSubmixImpl *this, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v5; // rcx
  __int64 *Next; // rax
  int updated; // eax
  unsigned int v8; // ebx
  __int64 v10; // rdx
  __int64 v11; // r9
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  _QWORD *v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v14 = (_QWORD *)*((_QWORD *)this + 9);
  if ( v14 )
  {
    while ( 1 )
    {
      Next = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v5, &v14);
      v5 = *Next;
      if ( *(_QWORD *)(*Next + 8) == a2 )
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
    *(_BYTE *)(v5 + 16) = 1;
    updated = CSubmixImpl::UpdateActiveStreamCount(this, 1);
    v8 = updated;
    if ( updated >= 0 )
    {
      v8 = 0;
      goto LABEL_6;
    }
    v11 = (unsigned int)updated;
    v10 = 718LL;
  }
  else
  {
    v8 = -2005139430;
    v10 = 712LL;
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
