/*
 * XREFs of ndisHandleLegacyBindIoctl @ 0x1C0117A04
 * Callers:
 *     ndisHandleUModePnPOp @ 0x1C001D644 (ndisHandleUModePnPOp.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006C9C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0008A74 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C002A504 (WPP_RECORDER_SF_Zq.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FB73C (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00FD314 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00FDCB0 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C012A010 (-ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_R.c)
 */

void __fastcall ndisHandleLegacyBindIoctl(struct _UNICODE_STRING *a1, int a2, const UNICODE_STRING *a3)
{
  struct _NDIS_MINIPORT_BLOCK *v6; // rdi
  struct _NDIS_MINIPORT_BLOCK *v7; // rdx
  __int64 m_numElements; // r14
  unsigned __int64 i; // rbx
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *p; // rsi
  Ndis::BindState *p_BindState; // rcx
  NDIS_BIND_PROTOCOL_LINK *value; // rax
  _NDIS_MINIPORT_BLOCK *Miniport; // rcx
  unsigned __int16 v14; // r9
  NDIS_BIND_PROTOCOL_LINK *v15; // rax
  struct _NDIS_MINIPORT_BLOCK *v16; // [rsp+88h] [rbp+20h] BYREF

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0xDu,
      (struct _GUID *)&WPP_8b0ab799cd8539b5ce5df5ce3671a55c_Traceguids);
  v16 = 0LL;
  ndisReferenceMiniportByName(a1, &v16, 0, MPREF_PT_UNBINDNOTIFY);
  v6 = v16;
  if ( v16 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&v6->BindEngine.m_lock, 0LL);
    m_numElements = v6->Bindings.Protocols.m_numElements;
    for ( i = 0LL; ; ++i )
    {
      if ( i == m_numElements )
      {
        Ndis::BindEngine::EndPolicyUpdates(&v6->BindEngine, v7);
        Ndis::BindEngine::ApplyBindChanges(&v6->BindEngine, RunSynchronous, 0);
        ndisDereferenceMiniport(v6, 0x30u);
        return;
      }
      if ( i >= v6->Bindings.Protocols.m_numElements )
        __fastfail(5u);
      p = v6->Bindings.Protocols._p;
      if ( RtlEqualUnicodeString(&p[i].__ptr_.__value_->BindDriver._p->_t.Name.__ptr_.__value_->_UNICODE_STRING, a3, 1u) )
      {
        p_BindState = &p[i].__ptr_.__value_->BindState;
        if ( a2 == 1 )
        {
          if ( Ndis::BindState::SetBinding(p_BindState, BindingEnabled, Reason_DisabledByLegacyIoctl)
            && (unsigned __int8)byte_1C00E434B >= 4u )
          {
            value = p[i].__ptr_.__value_;
            Miniport = value->BindState.Miniport;
            v7 = (struct _NDIS_MINIPORT_BLOCK *)value->BindDriver._p->_t.Name.__ptr_.__value_;
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v14 = 14;
LABEL_17:
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                (int)v7,
                0x1Cu,
                v14,
                (struct _GUID *)&WPP_8b0ab799cd8539b5ce5df5ce3671a55c_Traceguids,
                (unsigned __int16 *)&v7->Header.Type,
                Miniport);
              continue;
            }
          }
        }
        else if ( Ndis::BindState::SetBinding(p_BindState, BindingDisabled, Reason_DisabledByLegacyIoctl)
               && (unsigned __int8)byte_1C00E434B >= 4u )
        {
          v15 = p[i].__ptr_.__value_;
          Miniport = v15->BindState.Miniport;
          v7 = (struct _NDIS_MINIPORT_BLOCK *)v15->BindDriver._p->_t.Name.__ptr_.__value_;
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v14 = 15;
            goto LABEL_17;
          }
        }
      }
    }
  }
}
