/*
 * XREFs of ?RemoveVidPnOwnership@DXGDEVICE@@QEAAXI@Z @ 0x1C016195C
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C012FAC4 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGDEVICE::RemoveVidPnOwnership(DXGDEVICE *this, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rax

  v2 = *((_DWORD *)this + 465);
  v4 = (unsigned int)a2;
  if ( (unsigned int)a2 > v2 )
  {
    v6 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v6 + 24) = v4;
    *(_QWORD *)(v6 + 32) = *((unsigned int *)this + 465);
    WdLogEvent5_WdError(v6);
    v5 = 0;
  }
  else
  {
    v5 = v2 - a2;
  }
  *((_DWORD *)this + 465) = v5;
}
