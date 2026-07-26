/*
 * XREFs of ??1NDIS_RESTART_INFORMATION@@QEAA@XZ @ 0x1C0104CFC
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C0104684 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall NDIS_RESTART_INFORMATION::~NDIS_RESTART_INFORMATION(NDIS_RESTART_INFORMATION *this)
{
  unsigned int *SupportedOidList; // rcx
  unsigned __int8 *p; // rcx

  SupportedOidList = this->General.SupportedOidList;
  if ( SupportedOidList )
    ExFreePoolWithTag(SupportedOidList, 0);
  p = this->FilterInstanceBuffer._p;
  if ( p )
  {
    ExFreePoolWithTag(p, 0x7272414Bu);
    this->FilterInstanceBuffer._p = 0LL;
    this->FilterInstanceBuffer.m_numElements = 0;
    this->FilterInstanceBuffer.m_bufferSize = 0;
  }
}
