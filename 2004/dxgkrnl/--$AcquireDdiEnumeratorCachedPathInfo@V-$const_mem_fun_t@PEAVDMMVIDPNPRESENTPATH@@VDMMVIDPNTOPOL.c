/*
 * XREFs of ??$AcquireDdiEnumeratorCachedPathInfo@V?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C0153A80
 * Callers:
 *     ?AcquireFirstPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0153960 (-AcquireFirstPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEA.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00027E4 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ?GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ @ 0x1C005C5FC (-GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ.c)
 *     ?IsPathSupportVirtualMode@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C012470C (-IsPathSupportVirtualMode@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::const_mem_fun_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  char *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  char *v17; // rbx
  _DWORD *v18; // rbp
  int v19; // ecx
  int v20; // eax
  __int64 v21; // rcx
  int MacroVisionTriggerBits; // eax
  __int64 v23; // rax
  __int128 v24; // xmm0
  __int64 v25; // xmm1_8
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  SIZE_T v32; // rdi
  PVOID v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  PVOID v38; // r15

  if ( !a3 )
  {
    v27 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v27);
  }
  v6 = 0;
  *a3 = 0LL;
  if ( *(_BYTE *)(a1 + 192) )
  {
    v9 = (*(__int64 (__fastcall **)(__int64))a2)(a1 + *(int *)(a2 + 8));
    if ( v9 )
    {
      v12 = (char *)operator new[](0x178uLL, 0x4E506456u, PagedPool);
      v17 = v12;
      if ( v12 )
      {
        *(_DWORD *)v12 = 305419896;
        *((_QWORD *)v12 + 1) = v9;
        memset(v12 + 16, 0, 0x168uLL);
        operator delete(0LL);
      }
      else
      {
        v17 = 0LL;
      }
      if ( v17 )
      {
        v18 = v17 + 16;
        *((_DWORD *)v17 + 7) = *(_DWORD *)(v9 + 112);
        v19 = *(_DWORD *)(v9 + 116);
        if ( (unsigned int)(v19 - 254) > 1
          && v19
          && DMMVIDPNPRESENTPATH::IsPathSupportVirtualMode((DMMVIDPNPRESENTPATH *)v9, v13) )
        {
          v20 = 1;
        }
        else
        {
          v20 = *(_DWORD *)(v9 + 116);
        }
        *((_DWORD *)v17 + 9) = v20;
        *((_DWORD *)v17 + 6) = *(_DWORD *)(v9 + 104);
        *v18 = *(_DWORD *)(*(_QWORD *)(v9 + 88) + 24LL);
        *((_DWORD *)v17 + 5) = *(_DWORD *)(*(_QWORD *)(v9 + 96) + 24LL);
        *((_DWORD *)v17 + 20) = *(_DWORD *)(v9 + 164);
        v21 = *(unsigned int *)(v9 + 172);
        *((_DWORD *)v17 + 21) = v21;
        *((_DWORD *)v17 + 87) = *(_DWORD *)(v9 + 168);
        if ( (_DWORD)v21 == 2 )
          MacroVisionTriggerBits = DMMVIDPNPRESENTPATH::GetMacroVisionTriggerBits((DMMVIDPNPRESENTPATH *)v9, v13);
        else
          MacroVisionTriggerBits = 0;
        *((_DWORD *)v17 + 22) = MacroVisionTriggerBits;
        if ( v17 == (char *)-32LL )
        {
          v30 = WdLogNewEntry5_WdAssertion(v21, v13);
          WdLogEvent5_WdAssertion(v30);
        }
        *((_DWORD *)v17 + 8) = *(_DWORD *)(v9 + 120);
        if ( v17 == (char *)-40LL )
        {
          v31 = WdLogNewEntry5_WdAssertion(v21, v13);
          WdLogEvent5_WdAssertion(v31);
        }
        *((_DWORD *)v17 + 10) = *(_DWORD *)(v9 + 124);
        v23 = *(_QWORD *)(v9 + 184);
        if ( v23 )
        {
          v24 = *(_OWORD *)(v23 + 16);
          v25 = *(_QWORD *)(v23 + 32);
        }
        else
        {
          v24 = *(_OWORD *)&g_DefaultGammaRamp.Type;
          v25 = 0LL;
        }
        *((_OWORD *)v17 + 22) = v24;
        *((_QWORD *)v17 + 46) = v25;
        if ( !*((_QWORD *)v17 + 46) )
          goto LABEL_19;
        v32 = *((_QWORD *)v17 + 45);
        v33 = operator new[](v32, 0x4E506456u, PagedPool);
        v38 = v33;
        if ( v33 )
        {
          memmove(v33, *((const void **)v17 + 46), v32);
          *((_QWORD *)v17 + 46) = v38;
LABEL_19:
          *a3 = v18;
          v17 = 0LL;
LABEL_20:
          operator delete(v17);
          return v6;
        }
        v29 = WdLogNewEntry5_WdLowResource(v35, v34, v36, v37);
        *(_QWORD *)(v29 + 24) = v32;
      }
      else
      {
        v29 = WdLogNewEntry5_WdLowResource(v14, v13, v15, v16);
        *(_QWORD *)(v29 + 24) = a1;
      }
      WdLogEvent5_WdLowResource(v29);
      v6 = -1073741801;
      goto LABEL_20;
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v8, v7, v10, v11) + 24) = a2;
    return 3223192359LL;
  }
  else
  {
    v28 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v28 + 24) = a1;
    WdLogEvent5_WdError(v28);
    return 3223192375LL;
  }
}
