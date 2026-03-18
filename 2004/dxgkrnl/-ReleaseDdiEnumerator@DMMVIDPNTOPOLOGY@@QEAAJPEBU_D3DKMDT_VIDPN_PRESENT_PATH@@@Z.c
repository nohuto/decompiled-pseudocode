/*
 * XREFs of ?ReleaseDdiEnumerator@DMMVIDPNTOPOLOGY@@QEAAJPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C01560F8
 * Callers:
 *     ?ReleasePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0156060 (-ReleasePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D.c)
 *     ?AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C02E78A0 (-AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VID.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00027E4 (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::ReleaseDdiEnumerator(
        DMMVIDPNTOPOLOGY *this,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a2)
{
  SIZE_T *p_DataSize; // rbx
  SIZE_T v4; // r8
  char *v5; // rdx
  char *v6; // rcx
  __int64 v8; // rax
  char *v9; // rax
  __int64 v10; // rax

  if ( !a2 )
  {
    v8 = WdLogNewEntry5_WdError(this, 0LL);
    *(_QWORD *)(v8 + 24) = 0LL;
LABEL_11:
    WdLogEvent5_WdError(v8);
    return 3223192345LL;
  }
  p_DataSize = &a2[-1].GammaRamp.DataSize;
  if ( LODWORD(a2[-1].GammaRamp.DataSize) != 305419896 )
  {
    v8 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v8 + 24) = p_DataSize;
    goto LABEL_11;
  }
  v4 = p_DataSize[1];
  if ( !v4 )
    goto LABEL_8;
  v5 = (char *)this + 24;
  v6 = (char *)*((_QWORD *)this + 3);
  if ( v6 == v5 )
    goto LABEL_16;
  v6 -= 8;
  if ( !v6 )
    goto LABEL_16;
  do
  {
    if ( v6 == (char *)v4 )
      break;
    v9 = (char *)*((_QWORD *)v6 + 1);
    v6 = v9 - 8;
    if ( v9 == v5 )
      v6 = 0LL;
  }
  while ( v6 );
  if ( !v6 )
  {
LABEL_16:
    v10 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v10 + 24) = p_DataSize;
    *(_QWORD *)(v10 + 32) = this;
    WdLogEvent5_WdError(v10);
    return 3223192368LL;
  }
  else
  {
LABEL_8:
    operator delete[]((void *)p_DataSize[46]);
    operator delete(p_DataSize);
    return 0LL;
  }
}
