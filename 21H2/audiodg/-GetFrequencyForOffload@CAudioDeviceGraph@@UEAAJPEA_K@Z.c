/*
 * XREFs of ?GetFrequencyForOffload@CAudioDeviceGraph@@UEAAJPEA_K@Z @ 0x140049990
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTail@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAAEAPEAVCConnectionInstance@@XZ @ 0x140001EF8 (-GetTail@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B400 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetFrequencyForOffload(CAudioDeviceGraph *this, unsigned __int64 *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  unsigned int v5; // ebx
  _QWORD *v6; // rax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  if ( !*((_DWORD *)this + 64) )
  {
    v5 = -2005139437;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B7,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)0x887C0013LL);
    goto LABEL_15;
  }
  v6 = *(_QWORD **)(*(_QWORD *)ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetTail(*((_QWORD *)this + 20) + 16LL)
                  + 32LL);
  v13 = 0LL;
  v7 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v6)(
         *v6,
         &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
         &v13);
  v5 = v7;
  if ( v7 >= 0 )
  {
    v12 = 0LL;
    v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v13)(
           v13,
           &GUID_cd63314f_3fba_4a1b_812c_ef96358728e7,
           &v12);
    v5 = v8;
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v12 + 24LL))(v12, a2);
      v5 = v8;
      if ( v8 >= 0 )
      {
        v5 = 0;
LABEL_11:
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        goto LABEL_13;
      }
      v9 = 458LL;
    }
    else
    {
      v9 = 454LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_11;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1C2,
    (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
    (const char *)(unsigned int)v7);
LABEL_13:
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
LABEL_15:
  if ( v2 )
    LeaveCriticalSection(v2);
  return v5;
}
