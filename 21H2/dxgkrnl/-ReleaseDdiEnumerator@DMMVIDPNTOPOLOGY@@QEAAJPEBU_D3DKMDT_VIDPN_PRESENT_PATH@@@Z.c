/*
 * XREFs of ?ReleaseDdiEnumerator@DMMVIDPNTOPOLOGY@@QEAAJPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0189954
 * Callers:
 *     ?ReleasePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C01898C0 (-ReleasePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D.c)
 *     ?AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C03A6910 (-AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VID.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::ReleaseDdiEnumerator(
        DMMVIDPNTOPOLOGY *this,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a2)
{
  SIZE_T *p_DataSize; // rbx
  SIZE_T v4; // r8
  char *v5; // rdx
  char *v6; // rcx
  char *v7; // rcx
  char *v9; // rax

  if ( !a2 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223192345LL;
  }
  p_DataSize = &a2[-1].GammaRamp.DataSize;
  if ( LODWORD(a2[-1].GammaRamp.DataSize) != 305419896 )
  {
    WdLogSingleEntry1(2LL, &a2[-1].GammaRamp.DataSize);
    return 3223192345LL;
  }
  v4 = p_DataSize[1];
  if ( !v4 )
  {
LABEL_7:
    operator delete[]((void *)p_DataSize[46]);
    operator delete(p_DataSize);
    return 0LL;
  }
  v5 = (char *)this + 24;
  v6 = (char *)*((_QWORD *)this + 3);
  if ( v6 != v5 )
  {
    v7 = v6 - 8;
    if ( v7 )
    {
      while ( v7 != (char *)v4 )
      {
        v9 = (char *)*((_QWORD *)v7 + 1);
        v7 = v9 - 8;
        if ( v9 == v5 )
          v7 = 0LL;
        if ( !v7 )
          goto LABEL_12;
      }
      goto LABEL_7;
    }
  }
LABEL_12:
  WdLogSingleEntry2(2LL, p_DataSize, this);
  return 3223192368LL;
}
