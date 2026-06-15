/*
 * XREFs of ?DisconnectPipesFromRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140018C70
 * Callers:
 *     <none>
 * Callees:
 *     ?DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z @ 0x140001688 (-DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z.c)
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140002B70 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B180 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSubmixImpl::DisconnectPipesFromRightSubmix(CSubmixImpl *this, struct ISubmixInternal *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  CStreamInstance *v5; // rcx
  int v6; // eax
  unsigned int v7; // edi
  _QWORD *Next; // rax
  int v10; // eax
  unsigned int v11; // ebp
  __int64 v12; // rdx
  CStreamInstance **v13; // rax
  int v14; // eax
  unsigned int v15; // edi
  int v16; // [rsp+20h] [rbp-8h]
  int v17; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  _QWORD *v19; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v19 = (_QWORD *)*((_QWORD *)this + 15);
  if ( v19 )
  {
    while ( 1 )
    {
      Next = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext((__int64)v5, &v19);
      v10 = (*(__int64 (__fastcall **)(_QWORD, struct ISubmixInternal *))(**(_QWORD **)*Next + 152LL))(
              *(_QWORD *)*Next,
              a2);
      v11 = v10;
      if ( v10 < 0 )
        break;
      if ( !v19 )
        goto LABEL_2;
    }
    v12 = 964LL;
    goto LABEL_15;
  }
LABEL_2:
  v19 = (_QWORD *)*((_QWORD *)this + 9);
  if ( v19 )
  {
    while ( 1 )
    {
      v13 = (CStreamInstance **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(
                                  (__int64)v5,
                                  &v19);
      v5 = *v13;
      if ( *((_BYTE *)*v13 + 17) )
      {
        v10 = CStreamInstance::DisconnectFromRightSubmix(v5, a2);
        v11 = v10;
        if ( v10 < 0 )
          break;
      }
      if ( !v19 )
        goto LABEL_3;
    }
    v12 = 974LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v10,
      v16);
    if ( v2 )
      LeaveCriticalSection(v2);
    return v11;
  }
LABEL_3:
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( *((_QWORD *)this + 3) && *((_BYTE *)this + 312) )
  {
    v6 = (*(__int64 (__fastcall **)(struct ISubmixInternal *))(*(_QWORD *)a2 + 48LL))(a2);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3D6,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v6,
        v16);
      return v7;
    }
    *((_BYTE *)this + 312) = 0;
  }
  if ( *((_QWORD *)this + 34)
    && *((_BYTE *)this + 296)
    && (v14 = (*(__int64 (__fastcall **)(struct ISubmixInternal *))(*(_QWORD *)a2 + 48LL))(a2), v15 = v14, v14 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13A,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v14,
      v16);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3DB,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)v15,
      v17);
    return v15;
  }
  else
  {
    *((_BYTE *)this + 296) = 0;
    return 0LL;
  }
}
