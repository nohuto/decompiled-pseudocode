/*
 * XREFs of ?RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z @ 0x1C0122898
 * Callers:
 *     ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C01161D8 (-ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C0120340 (-ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012D1DC (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     memmove @ 0x1C003FB80 (memmove.c)
 */

void __fastcall Ndis::BindState::RemoveBindContext(Ndis::BindState *this, void *a2)
{
  unsigned __int64 m_numElements; // rax
  __int64 v3; // r9
  void **p; // r10

  m_numElements = this->m_bindContext.m_numElements;
  v3 = 0LL;
  if ( (_DWORD)m_numElements )
  {
    while ( 1 )
    {
      p = this->m_bindContext._p;
      if ( p[v3] == a2 )
        break;
      if ( ++v3 >= m_numElements )
        return;
    }
    if ( (_DWORD)m_numElements - (_DWORD)v3 != 1 )
    {
      memmove(&p[(unsigned int)v3], &p[(unsigned int)(v3 + 1)], 8LL * (unsigned int)(m_numElements - v3 - 1));
      LODWORD(m_numElements) = this->m_bindContext.m_numElements;
    }
    this->m_bindContext.m_numElements = m_numElements - 1;
  }
}
