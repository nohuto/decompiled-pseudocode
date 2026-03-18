/*
 * XREFs of ?ClearCaches@CInternalMilCmdConnection@@UEAA_NK@Z @ 0x1800C4440
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeBatchPool@CInternalMilCmdConnection@@AEAAXXZ @ 0x180098FC8 (-FreeBatchPool@CInternalMilCmdConnection@@AEAAXXZ.c)
 */

char __fastcall CInternalMilCmdConnection::ClearCaches(CInternalMilCmdConnection *this, DWORD a2)
{
  if ( !*((_BYTE *)this + 212) )
    return 1;
  if ( GetTickCount() - *((_DWORD *)this + 52) >= a2 )
  {
    CInternalMilCmdConnection::FreeBatchPool((union _SLIST_HEADER *)this);
    *((_BYTE *)this + 212) = 0;
    return 1;
  }
  return 0;
}
