/*
 * XREFs of ??1BindStack@Ndis@@QEAA@XZ @ 0x1C0107C44
 * Callers:
 *     ??1_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x1C006CD20 (--1_NDIS_MINIPORT_BLOCK@@QEAA@XZ.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C0107B48 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 * Callees:
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z @ 0x1C0116664 (--_GKRefHolder@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C0116C60 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C0122A10 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 */

void __fastcall Ndis::BindStack::~BindStack(Ndis::BindStack *this)
{
  void **p; // rcx
  wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK> > *v3; // rcx
  __int64 v4; // rdi
  wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK> > *v5; // rax
  NDIS_BIND_LINK_BASE *v6; // rsi
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *v7; // rcx
  __int64 v8; // rdi
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *v9; // rax
  NDIS_BIND_LINK_BASE *v10; // rsi
  volatile signed __int32 *Miniport; // rcx
  volatile signed __int32 *v12; // rcx

  p = this->Miniport.m_bindContext._p;
  if ( p )
  {
    ExFreePoolWithTag(p, 0x7272414Bu);
    this->Miniport.m_bindContext._p = 0LL;
    this->Miniport.m_bindContext.m_numElements = 0;
    this->Miniport.m_bindContext.m_bufferSize = 0;
  }
  v3 = this->Filters._p;
  if ( v3 )
  {
    LODWORD(v4) = this->Filters.m_numElements;
    if ( (_DWORD)v4 )
    {
      do
      {
        v5 = this->Filters._p;
        v4 = (unsigned int)(v4 - 1);
        v6 = &v5[v4].__ptr_.__value_->NDIS_BIND_LINK_BASE;
        v5[v4].__ptr_.__value_ = 0LL;
        if ( v6 )
        {
          Miniport = (volatile signed __int32 *)v6[1].BindState.Miniport;
          if ( Miniport && _InterlockedExchangeAdd(Miniport + 16, 0xFFFFFFFF) == 1 )
            KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)Miniport);
          NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(v6);
          ExFreePoolWithTag(v6, 0x4C6C4642u);
        }
      }
      while ( (_DWORD)v4 );
      v3 = this->Filters._p;
    }
    ExFreePoolWithTag(v3, 0x7272414Bu);
    this->Filters._p = 0LL;
    this->Filters.m_numElements = 0;
    this->Filters.m_bufferSize = 0;
  }
  v7 = this->Protocols._p;
  if ( v7 )
  {
    LODWORD(v8) = this->Protocols.m_numElements;
    if ( (_DWORD)v8 )
    {
      do
      {
        v9 = this->Protocols._p;
        v8 = (unsigned int)(v8 - 1);
        v10 = &v9[v8].__ptr_.__value_->NDIS_BIND_LINK_BASE;
        v9[v8].__ptr_.__value_ = 0LL;
        if ( v10 )
        {
          v12 = (volatile signed __int32 *)v10[1].BindState.Miniport;
          if ( v12 )
          {
            if ( _InterlockedExchangeAdd(v12 + 12, 0xFFFFFFFF) == 1 )
              KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)v12);
          }
          NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(v10);
          ExFreePoolWithTag(v10, 0x4C745042u);
        }
      }
      while ( (_DWORD)v8 );
      v7 = this->Protocols._p;
    }
    ExFreePoolWithTag(v7, 0x7272414Bu);
    this->Protocols._p = 0LL;
    this->Protocols.m_numElements = 0;
    this->Protocols.m_bufferSize = 0;
  }
}
