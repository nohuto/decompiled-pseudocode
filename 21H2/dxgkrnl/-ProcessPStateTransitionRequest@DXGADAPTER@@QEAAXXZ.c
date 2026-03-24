/*
 * XREFs of ?ProcessPStateTransitionRequest@DXGADAPTER@@QEAAXXZ @ 0x1C0038C28
 * Callers:
 *     ?DxgkpProcessPowerPStateWork@@YAXPEAX@Z @ 0x1C0221860 (-DxgkpProcessPowerPStateWork@@YAXPEAX@Z.c)
 * Callees:
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C003A3D8 (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     ?DdiSetPowerPState@DXGADAPTER@@QEAAJKK@Z @ 0x1C021DEA4 (-DdiSetPowerPState@DXGADAPTER@@QEAAJKK@Z.c)
 */

void __fastcall DXGADAPTER::ProcessPStateTransitionRequest(DXGADAPTER *this, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v5; // rcx
  unsigned __int32 v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax

  v3 = 0;
  _InterlockedExchange((volatile __int32 *)this + 1053, 0);
  if ( *((_DWORD *)this + 1002) )
  {
    do
    {
      v5 = 248LL * v3;
      v6 = _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 500) + v5 + 244), -1);
      if ( v6 != -1 )
      {
        v7 = *((_QWORD *)this + 500);
        v8 = *(unsigned int *)(v7 + v5 + 144);
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          McTemplateK0pqqq_EtwWriteTransfer(
            v5,
            (unsigned int)&Dxgk_SetPowerPState,
            a3,
            (_DWORD)this,
            v8,
            *(_DWORD *)(v7 + v5 + 192),
            v6);
        if ( (int)DXGADAPTER::DdiSetPowerPState(this, v8, v6) < 0 )
        {
          v11 = WdLogNewEntry5_WdWarning(v10, v9, a3);
          *(_QWORD *)(v11 + 32) = v6;
          *(_QWORD *)(v11 + 24) = v8;
          WdLogEvent5_WdWarning(v11);
        }
      }
      ++v3;
    }
    while ( v3 < *((_DWORD *)this + 1002) );
  }
}
