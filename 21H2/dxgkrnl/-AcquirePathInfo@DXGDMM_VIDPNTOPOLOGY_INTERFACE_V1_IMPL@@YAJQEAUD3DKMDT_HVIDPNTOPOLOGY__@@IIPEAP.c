/*
 * XREFs of ?AcquirePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C01896D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@G@Z @ 0x1C000C610 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PA.c)
 *     ??1DMMVIDPNPRESENTPATH@@UEAA@XZ @ 0x1C000CADC (--1DMMVIDPNPRESENTPATH@@UEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C0189510 (--$AcquireDdiEnumeratorCachedPathInfo@V-$binder2nd@V-$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AcquirePathInfo(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v8; // rcx
  _QWORD *v9; // r8
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  unsigned int v14; // esi
  unsigned int v15; // ebx
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // [rsp+30h] [rbp-D0h] BYREF
  int v23; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+40h] [rbp-C0h]
  char v25; // [rsp+48h] [rbp-B8h]
  struct DMMVIDPNPRESENTPATH *(__fastcall *v26)(DMMVIDPNTOPOLOGY *, const struct DMMVIDPNPRESENTPATH *const); // [rsp+50h] [rbp-B0h] BYREF
  int v27; // [rsp+58h] [rbp-A8h]
  _BYTE *v28; // [rsp+60h] [rbp-A0h]
  _BYTE *v29; // [rsp+80h] [rbp-80h]
  _BYTE v30[80]; // [rsp+90h] [rbp-70h] BYREF
  int v31; // [rsp+E0h] [rbp-20h]

  v23 = -1;
  v5 = (unsigned int)a3;
  v6 = (unsigned int)a2;
  v24 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v25 = 1;
    v23 = 6021;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 6021);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v23, 6021);
  if ( !a4 )
  {
    WdLogSingleEntry4(2LL, 0LL, v6, v5, this);
    v15 = -1073741811;
    goto LABEL_21;
  }
  *a4 = 0LL;
  if ( !this || *((_DWORD *)this + 46) != 1833173002 )
  {
    WdLogSingleEntry1(2LL, this);
    v15 = -1071774976;
    goto LABEL_21;
  }
  v8 = *((_QWORD *)this + 21);
  v22 = 0LL;
  if ( !v8 )
  {
    WdLogSingleEntry0(1LL);
    v8 = *((_QWORD *)this + 21);
  }
  v9 = (_QWORD *)(*(_QWORD *)(v8 + 304) + 24LL);
  if ( (_QWORD *)*v9 == v9 || (v10 = *v9 - 8LL, *v9 == 8LL) )
  {
LABEL_33:
    WdLogSingleEntry1(2LL, v6);
    v15 = -1071774972;
    goto LABEL_21;
  }
  while ( *(_DWORD *)(v10 + 24) != (_DWORD)v6 )
  {
    v21 = *(_QWORD **)(v10 + 8);
    v10 = (__int64)(v21 - 1);
    if ( v21 == v9 )
      v10 = 0LL;
    if ( !v10 )
      goto LABEL_33;
  }
  v11 = (_QWORD *)(*(_QWORD *)(v8 + 312) + 24LL);
  if ( (_QWORD *)*v11 == v11 || (v12 = *v11 - 8LL, *v11 == 8LL) )
  {
LABEL_38:
    WdLogSingleEntry1(2LL, v5);
    v15 = -1071774971;
    goto LABEL_21;
  }
  while ( *(_DWORD *)(v12 + 24) != (_DWORD)v5 )
  {
    v20 = *(_QWORD **)(v12 + 8);
    v12 = (__int64)(v20 - 1);
    if ( v20 == v11 )
      v12 = 0LL;
    if ( !v12 )
      goto LABEL_38;
  }
  DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(
    (DMMVIDPNPRESENTPATH *)v30,
    (struct DMMVIDPNSOURCE *)v10,
    (struct DMMVIDPNTARGET *)v12,
    (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
    0xFFFFu);
  if ( v31 != 2 )
    WdLogSingleEntry0(1LL);
  v27 = 0;
  v26 = DMMVIDPNTOPOLOGY::FindByValue;
  v29 = v30;
  v28 = v30;
  v13 = DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
          (__int64)this,
          (__int64)&v26,
          &v22,
          0);
  v14 = v13;
  v15 = -1071774937;
  if ( v13 == -1071774937 )
  {
    WdLogSingleEntry3(3LL, v6, v5, this);
    if ( v22 )
      WdLogSingleEntry0(1LL);
    goto LABEL_37;
  }
  if ( v13 < 0 )
  {
    WdLogSingleEntry4(7LL, v6, v5, this, v13);
    v15 = v14;
LABEL_37:
    DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v30);
    goto LABEL_21;
  }
  v16 = v22;
  if ( !v22 )
    WdLogSingleEntry0(1LL);
  DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v30);
  *a4 = v16;
  v15 = 0;
LABEL_21:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( v25 )
  {
    LOBYTE(v17) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v23);
  }
  return v15;
}
