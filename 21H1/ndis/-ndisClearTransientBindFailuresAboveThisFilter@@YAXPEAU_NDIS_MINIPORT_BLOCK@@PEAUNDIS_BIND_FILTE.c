/*
 * XREFs of ?ndisClearTransientBindFailuresAboveThisFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00FFC48
 * Callers:
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00FFB10 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C01161C8 (-ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Dd @ 0x1C0016EF0 (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C002A504 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01230B0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall ndisClearTransientBindFailuresAboveThisFilter(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_BIND_FILTER_LINK *a2)
{
  __int64 m_numElements; // r15
  bool v3; // bp
  unsigned __int64 i; // rbx
  wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK> > *p; // rdi
  NDIS_BIND_FILTER_LINK *value; // r14
  unsigned int m_unbindReasons; // r8d
  __int64 v10; // rbp
  unsigned __int64 j; // rbx
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *v12; // r14
  NDIS_BIND_PROTOCOL_LINK *v13; // rdi
  unsigned int v14; // r8d
  int v15; // edx
  bool v16; // cf
  char v17[8]; // [rsp+30h] [rbp-E8h]
  char v18[160]; // [rsp+40h] [rbp-D8h] BYREF

  m_numElements = a1->Bindings.Filters.m_numElements;
  v3 = 0;
  for ( i = 0LL; i != m_numElements; ++i )
  {
    if ( i >= a1->Bindings.Filters.m_numElements )
LABEL_30:
      __fastfail(5u);
    p = a1->Bindings.Filters._p;
    if ( v3 )
    {
      value = p[i].__ptr_.__value_;
      m_unbindReasons = value->BindState.m_unbindReasons;
      value->BindState.m_unbindReasons = m_unbindReasons & 0xFFFBFFE3;
      if ( (m_unbindReasons != 0) != ((m_unbindReasons & 0xFFFBFFE3) != 0) || !value->BindState.Miniport )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v17 = m_unbindReasons & 0xFFFBFFE3;
          WPP_RECORDER_SF_Dd(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_059f2550fb64352c12bb44eb1234267b_Traceguids,
            m_unbindReasons,
            *(_QWORD *)v17);
        }
        value->BindState.Miniport->BindEngine.m_isDirty = 1;
        memset(v18, 0, sizeof(v18));
        if ( (unsigned __int8)byte_1C00E434B >= 4u )
        {
          ndisGetBindLinkNameForTracing(p[i].__ptr_.__value_, (struct NDIS_PNPTRACE_LOCALS *)v18);
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v15,
              0x1Cu,
              0x16u,
              (struct _GUID *)&WPP_3188c4384181338fe0d477b94428bcd6_Traceguids,
              *(unsigned __int16 **)&v18[8],
              *(_QWORD *)v18);
        }
      }
    }
    else
    {
      v3 = p[i].__ptr_.__value_ == a2;
    }
  }
  v10 = a1->Bindings.Protocols.m_numElements;
  for ( j = 0LL; j != v10; ++j )
  {
    if ( j >= a1->Bindings.Protocols.m_numElements )
      goto LABEL_30;
    v12 = a1->Bindings.Protocols._p;
    v13 = v12[j].__ptr_.__value_;
    v14 = v13->BindState.m_unbindReasons;
    v13->BindState.m_unbindReasons = v14 & 0xFFFBFFE3;
    if ( (v14 != 0) != ((v14 & 0xFFFBFFE3) != 0) || !v13->BindState.Miniport )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        *(_DWORD *)v17 = v14 & 0xFFFBFFE3;
        WPP_RECORDER_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0x1Cu,
          0xEu,
          (struct _GUID *)&WPP_059f2550fb64352c12bb44eb1234267b_Traceguids,
          v14,
          *(_QWORD *)v17);
      }
      v16 = (unsigned __int8)byte_1C00E434B < 4u;
      v13->BindState.Miniport->BindEngine.m_isDirty = 1;
      if ( !v16 && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)v12[j].__ptr_.__value_->BindDriver._p->_t.Name.__ptr_.__value_,
          0x1Cu,
          0x17u,
          (struct _GUID *)&WPP_3188c4384181338fe0d477b94428bcd6_Traceguids,
          &v12[j].__ptr_.__value_->BindDriver._p->_t.Name.__ptr_.__value_->Length,
          v12[j].__ptr_.__value_->BindState.Miniport);
    }
  }
}
