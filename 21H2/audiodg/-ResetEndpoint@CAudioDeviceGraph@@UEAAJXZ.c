/*
 * XREFs of ?ResetEndpoint@CAudioDeviceGraph@@UEAAJXZ @ 0x14004A020
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTail@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAAEAPEAVCConnectionInstance@@XZ @ 0x140001EF8 (-GetTail@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B400 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioDeviceGraph::ResetEndpoint(CAudioDeviceGraph *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rsi
  unsigned int v3; // ebx
  _QWORD *v4; // rax
  int v5; // eax
  int v6; // eax
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  if ( !*((_DWORD *)this + 64) )
  {
    v3 = -2005139437;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1EB,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)0x887C0013LL);
    goto LABEL_15;
  }
  v4 = *(_QWORD **)(*(_QWORD *)ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetTail(*((_QWORD *)this + 20) + 16LL)
                  + 32LL);
  v11 = 0LL;
  v5 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v4)(
         *v4,
         &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
         &v11);
  v3 = v5;
  if ( v5 >= 0 )
  {
    v10 = 0LL;
    v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v11)(
           v11,
           &GUID_c684b72a_6df4_4774_bdf9_76b77509b653,
           &v10);
    v3 = v6;
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10);
      v3 = v6;
      if ( v6 >= 0 )
      {
        (*(void (__fastcall **)(CAudioDeviceGraph *))(*(_QWORD *)this + 152LL))(this);
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 80LL))(*((_QWORD *)this + 19));
        v3 = 0;
LABEL_11:
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        goto LABEL_13;
      }
      v7 = 511LL;
    }
    else
    {
      v7 = 506LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_11;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1F6,
    (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
    (const char *)(unsigned int)v5);
LABEL_13:
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
LABEL_15:
  if ( v1 )
    LeaveCriticalSection(v1);
  return v3;
}
