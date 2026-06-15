/*
 * XREFs of ?GetEndpointBufferSize@CAudioDeviceGraph@@UEAAJPEAIPEAM@Z @ 0x1400496A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTail@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAAEAPEAVCConnectionInstance@@XZ @ 0x140001EF8 (-GetTail@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B400 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetEndpointBufferSize(CAudioDeviceGraph *this, unsigned int *a2, float *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  unsigned int v7; // ebx
  __int64 v8; // rdx
  _QWORD *v9; // rax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v14; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  unsigned int v16; // [rsp+60h] [rbp+30h] BYREF
  __int64 v17; // [rsp+78h] [rbp+48h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  if ( !*((_DWORD *)this + 64) )
  {
    v7 = -2005139437;
    v8 = 321LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)v7);
    goto LABEL_21;
  }
  if ( !a2 )
  {
    v8 = 325LL;
LABEL_7:
    v7 = -2147467261;
    goto LABEL_8;
  }
  if ( !a3 )
  {
    v8 = 326LL;
    goto LABEL_7;
  }
  v9 = *(_QWORD **)(*(_QWORD *)ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetTail(*((_QWORD *)this + 20) + 16LL)
                  + 32LL);
  v14 = 0LL;
  v10 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v9)(
          *v9,
          &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
          &v14);
  v7 = v10;
  if ( v10 >= 0 )
  {
    v17 = 0LL;
    v11 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v14)(
            v14,
            &GUID_5d48237d_438a_42fb_8ad8_3e90bc6c605f,
            &v17);
    v7 = v11;
    if ( v11 >= 0 )
    {
      v16 = 0;
      v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v17 + 32LL))(v17, &v16);
      v7 = v11;
      if ( v11 >= 0 )
      {
        v7 = 0;
        *a2 = v16;
        *a3 = *((float *)this + 34);
LABEL_17:
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        goto LABEL_19;
      }
      v12 = 344LL;
    }
    else
    {
      v12 = 341LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x151,
    (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
    (const char *)(unsigned int)v10);
LABEL_19:
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
LABEL_21:
  if ( v3 )
    LeaveCriticalSection(v3);
  return v7;
}
