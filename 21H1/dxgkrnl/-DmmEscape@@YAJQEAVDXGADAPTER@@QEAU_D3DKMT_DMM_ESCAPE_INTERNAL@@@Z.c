/*
 * XREFs of ?DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z @ 0x1C02D7D60
 * Callers:
 *     DxgkEscape @ 0x1C00FB2D0 (DxgkEscape.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000BEAC (--3@YAXPEAX@Z.c)
 *     ?IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ @ 0x1C0209CDC (-IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C02D5D34 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?MapEscapeCodeToDiagInfoType@VIDPN_MGR@@SA?AW4DIAGINFO_TYPE@1@W4_D3DKMT_DMMESCAPETYPE@@@Z @ 0x1C02DABE8 (-MapEscapeCodeToDiagInfoType@VIDPN_MGR@@SA-AW4DIAGINFO_TYPE@1@W4_D3DKMT_DMMESCAPETYPE@@@Z.c)
 */

__int64 __fastcall DmmEscape(struct DXGADAPTER *const this, struct _D3DKMT_DMM_ESCAPE_INTERNAL *const a2)
{
  struct _LUID *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v10; // rbp
  __int64 v11; // rax
  int v12; // eax
  char *v13; // rbx
  char *v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  unsigned int v20; // edi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdi
  int v28; // eax
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5, v4);
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = *((_QWORD *)this + 334);
  if ( !v7 )
  {
    v8 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v8 + 24) = this;
    WdLogEvent5_WdError(v8);
    return 3223191554LL;
  }
  v10 = *(_QWORD *)(v7 + 88);
  if ( !v10 )
  {
    v11 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v11 + 24) = this;
    WdLogEvent5_WdError(v11);
    return 3223192373LL;
  }
  v12 = *(_DWORD *)a2;
  v13 = 0LL;
  if ( *(int *)a2 > 0 && (v12 <= 9 || (unsigned int)(v12 - 12) <= 2) )
  {
    v14 = (char *)a2 + 24;
    goto LABEL_19;
  }
  v13 = (char *)operator new[](0x2CuLL, 0x4E506456u, PagedPool);
  if ( v13 )
  {
    operator delete(0LL);
    if ( *(_DWORD *)a2 == 10 )
    {
      v14 = (char *)a2 + 24;
      *(_DWORD *)v13 = *((_DWORD *)a2 + 6);
    }
    else
    {
      if ( *(_DWORD *)a2 != 11 )
      {
        v21 = WdLogNewEntry5_WdError((unsigned int)(*(_DWORD *)a2 - 10), v4);
        *(_QWORD *)(v21 + 24) = *(int *)a2;
        WdLogEvent5_WdError(v21);
        v20 = -1073741811;
        goto LABEL_25;
      }
      v14 = (char *)a2 + 24;
      *(_DWORD *)v13 = *((_DWORD *)a2 + 6);
      *(_OWORD *)(v13 + 4) = *(_OWORD *)((char *)a2 + 28);
      *(_OWORD *)(v13 + 20) = *(_OWORD *)((char *)a2 + 44);
      *(_QWORD *)(v13 + 36) = *(_QWORD *)((char *)a2 + 60);
    }
LABEL_19:
    if ( DXGADAPTER::IsDiagnosticAllowed(this, v4) )
    {
      v28 = VIDPN_MGR::MapEscapeCodeToDiagInfoType(*(unsigned int *)a2);
      v29 = VIDPN_MGR::AcquireDiagInfo(v10, v14, *((_QWORD *)a2 + 1), v28, (int *)v13, (size_t *)a2 + 2);
      v20 = v29;
      if ( v29 == -2147483643 )
      {
        v34 = WdLogNewEntry5_WdWarning(v31, v30, v32);
        *(_QWORD *)(v34 + 24) = *((_QWORD *)a2 + 1);
        *(_QWORD *)(v34 + 32) = *(int *)a2;
        WdLogEvent5_WdWarning(v34);
        v20 = 1075707914;
      }
      else if ( v29 >= 0 )
      {
        v35 = WdLogNewEntry5_WdTrace(v31, v30, v32, v33);
        v20 = 0;
        *(_QWORD *)(v35 + 24) = *((_QWORD *)a2 + 1);
        *(_QWORD *)(v35 + 32) = *(int *)a2;
      }
    }
    else
    {
      v25 = WdLogNewEntry5_WdWarning(v23, v22, v24);
      v26 = *(int *)a2;
      v27 = v25;
      *(_QWORD *)(v25 + 24) = v26;
      *(_QWORD *)(v25 + 32) = (unsigned int)PsGetCurrentProcessSessionId(v26);
      WdLogEvent5_WdWarning(v27);
      v20 = -1073741790;
    }
    goto LABEL_25;
  }
  v19 = WdLogNewEntry5_WdLowResource(v16, v15, v17, v18);
  *(_QWORD *)(v19 + 24) = 44LL;
  WdLogEvent5_WdLowResource(v19);
  v20 = -1073741801;
LABEL_25:
  operator delete(v13);
  return v20;
}
