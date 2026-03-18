/*
 * XREFs of ??$AcquireDdiEnumeratorCachedPathInfo@V?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C01100C0
 * Callers:
 *     ?AcquireNextPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEBU3@@Z @ 0x1C010FF00 (-AcquireNextPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU.c)
 *     ?AcquirePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C01102A0 (-AcquirePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAP.c)
 *     ?AcquirePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C02E2FD0 (-AcquirePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEB.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000BEAC (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ @ 0x1C005B57C (-GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ.c)
 *     ?GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ @ 0x1C00E274C (-GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        int a4)
{
  unsigned int v4; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // r8
  __int64 v13; // r9
  char *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  char *v20; // rbx
  __int64 v21; // rdx
  _DWORD *v22; // rsi
  int ContentRotationHw; // eax
  __int64 v24; // rcx
  int MacroVisionTriggerBits; // eax
  __int64 v26; // rax
  __int128 v27; // xmm0
  __int64 v28; // xmm1_8
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  SIZE_T v34; // rbp
  PVOID v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  PVOID v40; // r14

  v4 = 0;
  if ( !a3 )
  {
    v29 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v29);
  }
  *a3 = 0LL;
  if ( *(_BYTE *)(a1 + 192) )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))a2)(a1 + *(int *)(a2 + 8), *(_QWORD *)(a2 + 16));
    if ( !v11 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9, v12, v13) + 24) = a2;
      return 3223192359LL;
    }
    v15 = (char *)operator new[](0x178uLL, 0x4E506456u, PagedPool);
    v20 = v15;
    if ( v15 )
    {
      *(_DWORD *)v15 = 305419896;
      *((_QWORD *)v15 + 1) = v11;
      memset(v15 + 16, 0, 0x168uLL);
    }
    else
    {
      v20 = 0LL;
    }
    if ( v20 )
    {
      operator delete(0LL);
      v22 = v20 + 16;
      *((_DWORD *)v20 + 7) = *(_DWORD *)(v11 + 112);
      if ( a4 )
        ContentRotationHw = DMMVIDPNPRESENTPATH::GetContentRotationHw((DMMVIDPNPRESENTPATH *)v11);
      else
        ContentRotationHw = *(_DWORD *)(v11 + 116);
      *((_DWORD *)v20 + 9) = ContentRotationHw;
      *((_DWORD *)v20 + 6) = *(_DWORD *)(v11 + 104);
      *v22 = *(_DWORD *)(*(_QWORD *)(v11 + 88) + 24LL);
      *((_DWORD *)v20 + 5) = *(_DWORD *)(*(_QWORD *)(v11 + 96) + 24LL);
      *((_DWORD *)v20 + 20) = *(_DWORD *)(v11 + 164);
      v24 = *(unsigned int *)(v11 + 172);
      *((_DWORD *)v20 + 21) = v24;
      *((_DWORD *)v20 + 87) = *(_DWORD *)(v11 + 168);
      if ( (_DWORD)v24 == 2 )
        MacroVisionTriggerBits = DMMVIDPNPRESENTPATH::GetMacroVisionTriggerBits((DMMVIDPNPRESENTPATH *)v11, v21);
      else
        MacroVisionTriggerBits = 0;
      *((_DWORD *)v20 + 22) = MacroVisionTriggerBits;
      if ( v20 == (char *)-32LL )
      {
        v32 = WdLogNewEntry5_WdAssertion(v24, v21);
        WdLogEvent5_WdAssertion(v32);
      }
      *((_DWORD *)v20 + 8) = *(_DWORD *)(v11 + 120);
      if ( v20 == (char *)-40LL )
      {
        v33 = WdLogNewEntry5_WdAssertion(v24, v21);
        WdLogEvent5_WdAssertion(v33);
      }
      *((_DWORD *)v20 + 10) = *(_DWORD *)(v11 + 124);
      v26 = *(_QWORD *)(v11 + 184);
      if ( v26 )
      {
        v27 = *(_OWORD *)(v26 + 16);
        v28 = *(_QWORD *)(v26 + 32);
      }
      else
      {
        v27 = *(_OWORD *)&g_DefaultGammaRamp.Type;
        v28 = 0LL;
      }
      *((_OWORD *)v20 + 22) = v27;
      *((_QWORD *)v20 + 46) = v28;
      if ( !*((_QWORD *)v20 + 46) )
        goto LABEL_20;
      v34 = *((_QWORD *)v20 + 45);
      v35 = operator new[](v34, 0x4E506456u, PagedPool);
      v40 = v35;
      if ( v35 )
      {
        memmove(v35, *((const void **)v20 + 46), v34);
        *((_QWORD *)v20 + 46) = v40;
LABEL_20:
        *a3 = v22;
        v20 = 0LL;
LABEL_21:
        operator delete(v20);
        return v4;
      }
      v31 = WdLogNewEntry5_WdLowResource(v37, v36, v38, v39);
      *(_QWORD *)(v31 + 24) = v34;
    }
    else
    {
      v31 = WdLogNewEntry5_WdLowResource(v17, v16, v18, v19);
      *(_QWORD *)(v31 + 24) = a1;
    }
    WdLogEvent5_WdLowResource(v31);
    v4 = -1073741801;
    goto LABEL_21;
  }
  v30 = WdLogNewEntry5_WdError(a1, a2);
  *(_QWORD *)(v30 + 24) = a1;
  WdLogEvent5_WdError(v30);
  return 3223192375LL;
}
