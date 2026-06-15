/*
 * XREFs of ?PopulateAudioHistoryForStream@CVADServer@@UEAAJ_J00@Z @ 0x1800DD2A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?attach@?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIProcessSubmixProxy@@@Z @ 0x1800D3968 (-attach@-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIProcessSub.c)
 */

__int64 __fastcall CVADServer::PopulateAudioHistoryForStream(CVADServer *this, __int64 a2, __int64 a3, __int64 a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // eax
  __int64 v16; // [rsp+48h] [rbp-30h] BYREF
  char v17; // [rsp+50h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v19; // [rsp+80h] [rbp+8h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 224);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
  if ( !*((_DWORD *)this + 46) )
  {
    v9 = -2004287487;
    v10 = 2333LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v9);
    goto LABEL_17;
  }
  v11 = *((_QWORD *)this + 24);
  if ( !v11 )
  {
    v9 = -2004287487;
    v10 = 2334LL;
    goto LABEL_7;
  }
  if ( !*((_QWORD *)this + 54) )
  {
    v9 = -2147024809;
    v10 = 2336LL;
    goto LABEL_7;
  }
  v19 = 0LL;
  v16 = 0LL;
  v17 = 1;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v11 + 8) + 128LL))(v11 + 8, &v16);
  if ( v17 )
    wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>::attach(&v19, v16);
  if ( (v9 & 0x80000000) == 0 )
  {
    v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, bool))(*(_QWORD *)v19 + 96LL))(
            v19,
            *(_QWORD *)(*((_QWORD *)this + 24) + 56LL),
            a2,
            a3,
            a4,
            *((_DWORD *)this + 138) == 3);
    v9 = v14;
    if ( v14 >= 0 )
    {
      v9 = 0;
      goto LABEL_16;
    }
    v12 = (unsigned int)v14;
    v13 = 2343LL;
  }
  else
  {
    v12 = v9;
    v13 = 2340LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)v12);
LABEL_16:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
LABEL_17:
  if ( v4 )
    LeaveCriticalSection(v4);
  return v9;
}
