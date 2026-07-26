/*
 * XREFs of ?AddStaticFilterBinding@BindStack@Ndis@@QEAAJAEBU_GUID@@K@Z @ 0x1C01028A8
 * Callers:
 *     _lambda_cf61730e764cafb5fbe53142b0d3259b_::operator() @ 0x1C01027F0 (_lambda_cf61730e764cafb5fbe53142b0d3259b_--operator().c)
 *     ?ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z @ 0x1C012476C (-ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z.c)
 *     ndisBuildMonitoringLwfBindings @ 0x1C0124960 (ndisBuildMonitoringLwfBindings.c)
 * Callees:
 *     ?BuildFilterLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@PEBU_GUID@@K@Z @ 0x1C010292C (-BuildFilterLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@U.c)
 *     ?reserve@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x1C0107EC4 (-reserve@-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z @ 0x1C0116624 (--_GKRefHolder@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C0122A50 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 */

__int64 __fastcall Ndis::BindStack::AddStaticFilterBinding(
        Ndis::BindStack *this,
        const struct _GUID *a2,
        unsigned int a3)
{
  NDIS_BIND_LINK_BASE *v4; // rbx
  unsigned __int64 m_bufferSize; // rdx
  unsigned __int64 v6; // rcx
  __int64 m_numElements; // rcx
  NDIS_BIND_FILTER_LINK *v8; // rdx
  wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK> > *p; // rax
  unsigned int v10; // edi
  unsigned __int64 v12; // rdx
  volatile signed __int32 *Miniport; // rcx
  NDIS_BIND_LINK_BASE *v14; // [rsp+48h] [rbp+20h] BYREF

  Ndis::BindStack::BuildFilterLink(this, &v14, a2, a3);
  v4 = v14;
  if ( !v14 )
    goto LABEL_6;
  m_bufferSize = this->Filters.m_bufferSize;
  v6 = this->Filters.m_numElements + 1;
  if ( m_bufferSize >= v6 )
    goto LABEL_3;
  if ( v6 < 4 )
    v6 = 4LL;
  v12 = ((unsigned int)m_bufferSize >> 1) + (unsigned int)m_bufferSize;
  if ( v6 >= v12 )
    v12 = v6;
  if ( (unsigned __int8)Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::reserve(
                          &this->Filters,
                          v12) )
  {
LABEL_3:
    m_numElements = this->Filters.m_numElements;
    v8 = (NDIS_BIND_FILTER_LINK *)v4;
    p = this->Filters._p;
    v4 = 0LL;
    v14 = 0LL;
    p[m_numElements].__ptr_.__value_ = v8;
    ++this->Filters.m_numElements;
    ++this->ChangeEpoch;
    v10 = 0;
  }
  else
  {
LABEL_6:
    v10 = -1073741670;
  }
  if ( v4 )
  {
    Miniport = (volatile signed __int32 *)v4[1].BindState.Miniport;
    if ( Miniport )
    {
      if ( _InterlockedExchangeAdd(Miniport + 16, 0xFFFFFFFF) == 1 )
        KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)Miniport);
      v4 = v14;
    }
    NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(v4);
    ExFreePoolWithTag(v4, 0x4C6C4642u);
  }
  return v10;
}
