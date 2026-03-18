/*
 * XREFs of ?FilterResourceRequirements@FxPkgPnp@@IEAAJPEAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@@Z @ 0x1C001D430
 * Callers:
 *     ?_PnpFilterResourceRequirements@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C001D230 (-_PnpFilterResourceRequirements@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C001D298 (-PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     ?FilterResourceRequirements@FxInterrupt@@QEAAXPEAU_IO_RESOURCE_DESCRIPTOR@@@Z @ 0x1C001D550 (-FilterResourceRequirements@FxInterrupt@@QEAAXPEAU_IO_RESOURCE_DESCRIPTOR@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::FilterResourceRequirements(FxPkgPnp *this, _IO_RESOURCE_REQUIREMENTS_LIST **IoList)
{
  __int64 v2; // rdi
  _LIST_ENTRY *p_m_InterruptListHead; // rbx
  unsigned int v5; // r13d
  __int64 v6; // rsi
  char v7; // r15
  unsigned int v8; // ebp
  _LIST_ENTRY *v9; // r12
  _LIST_ENTRY *Flink; // r14
  __int64 v11; // rdx
  char v12; // cl
  FxInterrupt *p_Blink; // rcx
  const void *_a1; // rax
  unsigned __int16 v15; // r9
  unsigned int i; // [rsp+78h] [rbp+10h]
  __int64 v18; // [rsp+80h] [rbp+18h]

  v2 = (__int64)*IoList;
  v18 = (__int64)*IoList;
  if ( *IoList )
  {
    p_m_InterruptListHead = &this->m_InterruptListHead;
    if ( p_m_InterruptListHead->Flink != p_m_InterruptListHead )
    {
      v5 = 0;
      v6 = v2 + 32;
      for ( i = 0; v5 < *(_DWORD *)(v2 + 28); i = v5 )
      {
        v7 = 0;
        v8 = 0;
        v9 = p_m_InterruptListHead;
        Flink = p_m_InterruptListHead;
        if ( !*(_DWORD *)(v6 + 4) )
          goto LABEL_9;
        do
        {
          v11 = 32LL * v8 + v6 + 8;
          if ( *(_BYTE *)(v11 + 1) != 2 )
            goto LABEL_7;
          v12 = *(_BYTE *)v11 & 8;
          if ( (*(_BYTE *)(v11 + 4) & 2) != 0 )
          {
            v7 = 1;
            if ( !v12 )
              v9 = v9->Flink;
            if ( v9 != p_m_InterruptListHead )
            {
              p_Blink = (FxInterrupt *)&v9[-28].Blink;
LABEL_16:
              FxInterrupt::FilterResourceRequirements(p_Blink, (_IO_RESOURCE_DESCRIPTOR *)v11);
              goto LABEL_7;
            }
            _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
            v15 = 10;
          }
          else
          {
            if ( !v12 )
              Flink = Flink->Flink;
            if ( v7 )
              Flink = p_m_InterruptListHead->Flink;
            v7 = 0;
            if ( Flink != p_m_InterruptListHead )
            {
              p_Blink = (FxInterrupt *)&Flink[-28].Blink;
              goto LABEL_16;
            }
            _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
            v15 = 11;
          }
          WPP_IFR_SF_q(this->m_Globals, 3u, 0xCu, v15, WPP_FxPkgPnpKM_cpp_Traceguids, _a1);
LABEL_7:
          ++v8;
        }
        while ( v8 < *(_DWORD *)(v6 + 4) );
        v2 = v18;
        v5 = i;
LABEL_9:
        ++v5;
        v6 += 32LL * v8 + 8;
      }
    }
  }
  return 0LL;
}
