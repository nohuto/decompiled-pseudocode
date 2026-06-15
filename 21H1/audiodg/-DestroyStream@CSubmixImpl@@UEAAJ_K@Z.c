/*
 * XREFs of ?DestroyStream@CSubmixImpl@@UEAAJ_K@Z @ 0x140004990
 * Callers:
 *     ?DestroyStream@CProcessSubmix@@UEAAJ_K@Z @ 0x1400015E0 (-DestroyStream@CProcessSubmix@@UEAAJ_K@Z.c)
 *     ?DestroyStream@CStreamGroup@@UEAAJ_K@Z @ 0x1400338F0 (-DestroyStream@CStreamGroup@@UEAAJ_K@Z.c)
 * Callees:
 *     ?RemoveAt@?$CAtlList@PEAVCChildSubmixInstance@@V?$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14000162C (-RemoveAt@-$CAtlList@PEAVCChildSubmixInstance@@V-$CElementTraits@PEAVCChildSubmixInstance@@@ATL@.c)
 *     ?DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z @ 0x140001688 (-DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z.c)
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140002B70 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000F1F0 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ??1CPipeInstance@@QEAA@XZ @ 0x14000FEEC (--1CPipeInstance@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B180 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C938 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSubmixImpl::DestroyStream(CSubmixImpl *this, __int64 a2)
{
  int v2; // r14d
  struct _RTL_CRITICAL_SECTION *v3; // rbp
  __int64 v6; // rcx
  _QWORD *Next; // rax
  __int64 v8; // rbx
  __int64 *v9; // rdx
  unsigned int v10; // r15d
  void (__fastcall ***v11)(_QWORD, GUID *, struct ISubmixInternal **); // rcx
  struct ISubmixInternal *v12; // rdx
  char *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  void *v16; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct ISubmixInternal *v19; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v20; // [rsp+60h] [rbp+18h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v20 = (_QWORD *)*((_QWORD *)this + 9);
  if ( !v20 )
    goto LABEL_27;
  while ( 1 )
  {
    Next = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v6, &v20);
    v8 = *Next;
    if ( *(_QWORD *)(*Next + 8LL) == a2 )
      break;
    if ( !v20 )
      goto LABEL_27;
  }
  if ( v8 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    v9 = (__int64 *)*((_QWORD *)this + 9);
    v10 = 0;
    if ( v9 )
    {
      while ( v9[2] != v8 )
      {
        v9 = (__int64 *)*v9;
        if ( !v9 )
          goto LABEL_29;
      }
    }
    else
    {
LABEL_29:
      v9 = 0LL;
    }
    ATL::CAtlList<CChildSubmixInstance *,ATL::CElementTraits<CChildSubmixInstance *>>::RemoveAt(
      (__int64 **)this + 9,
      v9);
    if ( this != (CSubmixImpl *)-32LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    v11 = (void (__fastcall ***)(_QWORD, GUID *, struct ISubmixInternal **))*((_QWORD *)this + 38);
    if ( v11 )
    {
      (**v11)(v11, &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, &v19);
      v12 = v19;
    }
    else
    {
      v12 = 0LL;
      v19 = 0LL;
    }
    if ( *(_BYTE *)(v8 + 17) && v12 )
      CStreamInstance::DisconnectFromRightSubmix((CStreamInstance *)v8, v12);
    DeleteCriticalSection((LPCRITICAL_SECTION)(v8 + 48));
    v13 = *(char **)(v8 + 40);
    if ( (unsigned __int64)(v13 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v13);
    v14 = *(_QWORD *)(v8 + 32);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    v15 = *(_QWORD *)(v8 + 24);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    v16 = *(void **)v8;
    if ( *(_QWORD *)v8 )
    {
      CPipeInstance::~CPipeInstance(*(CPipeInstance **)v8);
      operator delete(v16);
    }
    *(_QWORD *)v8 = 0LL;
    operator delete((void *)v8);
    PublishDeviceGraphWnfState();
    if ( v19 )
      (*(void (__fastcall **)(struct ISubmixInternal *))(*(_QWORD *)v19 + 16LL))(v19);
  }
  else
  {
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29D,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x887C001ALL,
      v2);
    v10 = -2005139430;
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return v10;
}
