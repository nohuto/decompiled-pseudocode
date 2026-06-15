/*
 * XREFs of ?GetPositionForOffload@CAudioDeviceGraph@@UEAAJPEA_K0@Z @ 0x140049B10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTail@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAAEAPEAVCConnectionInstance@@XZ @ 0x140001EF8 (-GetTail@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B400 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetPositionForOffload(
        CAudioDeviceGraph *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  unsigned int v7; // ebx
  _QWORD *v8; // rax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+58h] [rbp+20h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  if ( !*((_DWORD *)this + 64) )
  {
    v7 = -2005139437;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x180,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)0x887C0013LL);
    goto LABEL_15;
  }
  v8 = *(_QWORD **)(*(_QWORD *)ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetTail(*((_QWORD *)this + 20) + 16LL)
                  + 32LL);
  v15 = 0LL;
  v9 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v8)(
         *v8,
         &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
         &v15);
  v7 = v9;
  if ( v9 >= 0 )
  {
    v14 = 0LL;
    v10 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v15)(
            v15,
            &GUID_cd63314f_3fba_4a1b_812c_ef96358728e7,
            &v14);
    v7 = v10;
    if ( v10 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *, unsigned __int64 *))(*(_QWORD *)v14 + 32LL))(
              v14,
              a2,
              a3);
      v7 = v10;
      if ( v10 >= 0 )
      {
        v7 = 0;
LABEL_11:
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        goto LABEL_13;
      }
      v11 = 403LL;
    }
    else
    {
      v11 = 399LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_11;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x18B,
    (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
    (const char *)(unsigned int)v9);
LABEL_13:
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
LABEL_15:
  if ( v3 )
    LeaveCriticalSection(v3);
  return v7;
}
