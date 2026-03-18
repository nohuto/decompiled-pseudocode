/*
 * XREFs of ?GetUsedEntryCount@HMGRTABLE@@QEAAIXZ @ 0x1C004C7E4
 * Callers:
 *     ??1DXGCHANNELENDPOINTPROXY@@UEAA@XZ @ 0x1C02B1194 (--1DXGCHANNELENDPOINTPROXY@@UEAA@XZ.c)
 *     ?NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ @ 0x1C02B1F3C (-NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMGRTABLE::GetUsedEntryCount(HMGRTABLE *this, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v4; // rcx
  __int64 v5; // rax

  v2 = *((_DWORD *)this + 4);
  v4 = *((unsigned int *)this + 5);
  if ( v2 < (unsigned int)v4 )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4, a2);
    *(_QWORD *)(v5 + 24) = 152LL;
    WdLogEvent5_WdAssertion(v5);
    v2 = *((_DWORD *)this + 4);
    LODWORD(v4) = *((_DWORD *)this + 5);
  }
  return v2 - (unsigned int)v4;
}
