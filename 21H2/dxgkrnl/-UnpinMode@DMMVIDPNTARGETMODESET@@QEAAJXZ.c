/*
 * XREFs of ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C0011AC8
 * Callers:
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C01A6D08 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?UnpinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@_N@Z @ 0x1C01AA9F0 (-UnpinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@_N.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C039E358 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C03A5EA8 (-UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::UnpinMode(DMMVIDPNTARGETMODESET *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v5; // [rsp+30h] [rbp+8h]

  if ( *((_BYTE *)this + 136) )
  {
    v2 = *((_QWORD *)this + 18);
    if ( v2 )
    {
      v3 = *(_QWORD *)(v2 + 92);
      if ( ((*(_DWORD *)(v2 + 120) >> 3) & 0x3F) != 0 )
      {
        LODWORD(v5) = *(_QWORD *)(v2 + 92);
        HIDWORD(v5) = ((*(_DWORD *)(v2 + 120) >> 3) & 0x3F) * HIDWORD(v3);
        v3 = v5;
      }
      *(_QWORD *)(v2 + 152) = v3;
      *(_DWORD *)(v2 + 160) = 1;
      *((_QWORD *)this + 18) = 0LL;
      return 0LL;
    }
    else
    {
      WdLogNewEntry5_WdTrace(0LL, this);
      return 1075708679LL;
    }
  }
  else
  {
    WdLogSingleEntry1(7LL, this);
    return 3223192352LL;
  }
}
