/*
 * XREFs of ?ConsumeTipPoints@CSuperWetInkScribble@@MEAAJPEA_K00@Z @ 0x180267250
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180082FB8 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@EV-$allocator@E@std@@@std@@AEAAX_KAEBU_Val.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800D080C (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014FC08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x18015D61C (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?PopAll@CSharedCircularQueue@@QEAAXV?$span@E$0?0@gsl@@IPEAI1@Z @ 0x1801F1214 (-PopAll@CSharedCircularQueue@@QEAAXV-$span@E$0-0@gsl@@IPEAI1@Z.c)
 */

__int64 __fastcall CSuperWetInkScribble::ConsumeTipPoints(
        CSuperWetInkScribble *this,
        unsigned __int64 *a2,
        LARGE_INTEGER *a3,
        unsigned __int64 *a4)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  int v6; // r10d
  _DWORD *v9; // rdi
  unsigned int v10; // r12d
  unsigned int v11; // eax
  __int64 v12; // rdx
  int v13; // r10d
  unsigned int v14; // r8d
  int v15; // esi
  int v16; // eax
  unsigned int v17; // edi
  __int64 v18; // r8
  __int64 v19; // r9
  LARGE_INTEGER v20; // rax
  __int64 v21; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-40h] BYREF
  __int64 v24; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v25[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v26; // [rsp+50h] [rbp-20h] BYREF
  __int64 v27; // [rsp+58h] [rbp-18h]
  __int64 v28; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  unsigned int v30; // [rsp+B0h] [rbp+40h] BYREF
  unsigned __int64 *v31; // [rsp+B8h] [rbp+48h]
  LARGE_INTEGER *v32; // [rsp+C0h] [rbp+50h]

  v32 = a3;
  v31 = a2;
  v4 = *((_QWORD *)this + 5);
  v5 = 0LL;
  v28 = 0LL;
  v6 = 0;
  v26 = 0LL;
  v27 = 0LL;
  v9 = *(_DWORD **)(v4 + 24);
  v10 = v9[2];
  v11 = v10 * v9[3];
  v12 = v11;
  if ( v11 )
  {
    std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>((__int64)&v26, v11);
    v6 = v27;
    v5 = v26;
  }
  v13 = v6 - v5;
  if ( v13 < 0 || !v5 && v13 )
  {
    ((void (__fastcall *)(CSuperWetInkScribble *, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(
      this,
      v12);
    __debugbreak();
  }
  v14 = *((_DWORD *)this + 6);
  v25[0] = v13;
  v25[1] = v5;
  CSharedCircularQueue::PopAll(v9, (__int64)v25, v14, &v30, (unsigned int *)&PerformanceCount);
  v15 = 0;
  if ( v30 )
  {
    while ( 1 )
    {
      v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, unsigned __int64 *, unsigned __int64 *))(**((_QWORD **)this + 2) + 32LL))(
              *((_QWORD *)this + 2),
              v5 + v10 * (v30 - v15 - 1),
              v10,
              a4,
              v31);
      v17 = v16;
      if ( v16 < 0 )
        break;
      PerformanceCount.QuadPart = 0LL;
      QueryPerformanceCounter(&PerformanceCount);
      v20 = PerformanceCount;
      *v32 = PerformanceCount;
      if ( (unsigned int)dword_180342E48 > 4 && (qword_180342E58 & 2) != 0 && (qword_180342E60 & 2) == qword_180342E60 )
      {
        v21 = *a4;
        v25[0] = v20.QuadPart;
        v24 = v21;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          (__int64)&dword_180342E48,
          byte_1802EB4B9,
          v18,
          v19,
          (__int64)v25,
          (__int64)&v24);
      }
      if ( ++v15 >= v30 )
        goto LABEL_13;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x55,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\superwetinkscribble.cpp",
      (const char *)(unsigned int)v16);
  }
  else
  {
LABEL_13:
    v17 = 0;
  }
  std::vector<unsigned char>::_Tidy((__int64)&v26);
  return v17;
}
