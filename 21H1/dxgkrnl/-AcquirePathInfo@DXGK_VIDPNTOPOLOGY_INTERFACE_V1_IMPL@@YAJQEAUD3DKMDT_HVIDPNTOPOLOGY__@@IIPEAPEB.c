/*
 * XREFs of ?AcquirePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C02E2FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@G@Z @ 0x1C000B044 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PA.c)
 *     ??1DMMVIDPNPRESENTPATH@@UEAA@XZ @ 0x1C000B244 (--1DMMVIDPNPRESENTPATH@@UEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000E1C8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000F360 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0018388 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C01100C0 (--$AcquireDdiEnumeratorCachedPathInfo@V-$binder2nd@V-$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AcquirePathInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v5; // r13
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  _QWORD *v16; // rax
  __int64 v17; // rdx
  unsigned int v18; // ebx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 Container; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r10
  __int64 v28; // rax
  struct DMMVIDPNTARGET *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct DMMVIDPNSOURCE *v32; // r11
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r15
  _QWORD *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v52; // [rsp+30h] [rbp-D0h] BYREF
  int v53; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v54; // [rsp+40h] [rbp-C0h]
  char v55; // [rsp+48h] [rbp-B8h]
  struct DMMVIDPNPRESENTPATH *(__fastcall *v56)(DMMVIDPNTOPOLOGY *, const struct DMMVIDPNPRESENTPATH *const); // [rsp+50h] [rbp-B0h] BYREF
  int v57; // [rsp+58h] [rbp-A8h]
  _BYTE *v58; // [rsp+60h] [rbp-A0h]
  _BYTE *v59; // [rsp+80h] [rbp-80h]
  _BYTE v60[80]; // [rsp+90h] [rbp-70h] BYREF
  int v61; // [rsp+E0h] [rbp-20h]

  v53 = -1;
  v5 = (unsigned int)a3;
  v7 = (unsigned int)a2;
  v54 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v55 = 1;
    v53 = 7035;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 7035);
  }
  else
  {
    v55 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v53, 7035LL);
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
  v15 = v7;
  v12[3] = v7;
  v12[4] = v5;
  v12[5] = this;
  v12[6] = a4;
  if ( !a4 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
    v16[3] = 0LL;
    v16[4] = v7;
    v16[5] = v5;
    v16[6] = this;
    WdLogEvent5_WdError(v16);
    v18 = -1073741811;
    goto LABEL_24;
  }
  *a4 = 0LL;
  v19 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
  v22 = v19;
  if ( !v19 )
  {
    v23 = WdLogNewEntry5_WdError(v21, v20);
    *(_QWORD *)(v23 + 24) = this;
    WdLogEvent5_WdError(v23);
    v18 = -1071774976;
    goto LABEL_24;
  }
  v52 = 0LL;
  Container = ContainedBy<DMMVIDPN>::GetContainer(v19 + 160, v20);
  if ( !IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(*(_QWORD *)(Container + 304), v7) )
  {
    v28 = WdLogNewEntry5_WdError(v26, v25);
    *(_QWORD *)(v28 + 24) = v7;
    WdLogEvent5_WdError(v28);
    v18 = -1071774972;
    goto LABEL_24;
  }
  v29 = (struct DMMVIDPNTARGET *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(*(_QWORD *)(v27 + 312), v5);
  if ( !v29 )
  {
    v33 = WdLogNewEntry5_WdError(v31, v30);
    *(_QWORD *)(v33 + 24) = v5;
    WdLogEvent5_WdError(v33);
    v18 = -1071774971;
    goto LABEL_24;
  }
  DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(
    (DMMVIDPNPRESENTPATH *)v60,
    v32,
    v29,
    (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
    0xFFFFu);
  if ( v61 != 2 )
  {
    v36 = WdLogNewEntry5_WdAssertion(v35, v34);
    WdLogEvent5_WdAssertion(v36);
  }
  v57 = 0;
  v56 = DMMVIDPNTOPOLOGY::FindByValue;
  v59 = v60;
  v58 = v60;
  v37 = DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
          v22,
          (__int64)&v56,
          &v52,
          1);
  v41 = v37;
  v18 = -1071774937;
  if ( v37 == -1071774937 )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v38, v40);
    v42[3] = v15;
    v42[4] = v5;
    v42[5] = v22;
    WdLogEvent5_WdWarning(v42);
    if ( v52 )
    {
      v45 = WdLogNewEntry5_WdAssertion(v44, v43);
      WdLogEvent5_WdAssertion(v45);
    }
    goto LABEL_20;
  }
  if ( v37 < 0 )
  {
    v46 = (_QWORD *)WdLogNewEntry5_WdError(v39, v38);
    v46[3] = v15;
    v46[4] = v5;
    v46[5] = v22;
    v46[6] = v41;
    WdLogEvent5_WdError(v46);
    v18 = v41;
LABEL_20:
    DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v60);
    goto LABEL_24;
  }
  v47 = v52;
  if ( !v52 )
  {
    v48 = WdLogNewEntry5_WdAssertion(v39, v38);
    WdLogEvent5_WdAssertion(v48);
  }
  DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v60);
  *a4 = v47;
  v18 = 0;
LABEL_24:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53, v17);
  if ( v55 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v49, &EventProfilerExit, v50, v53);
  return v18;
}
