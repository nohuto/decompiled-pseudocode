/*
 * XREFs of ?AddRef@DXGCHANNELENDPOINTPROXY@@UEAAJXZ @ 0x1C016F6B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGCHANNELENDPOINTPROXY::AddRef(DXGCHANNELENDPOINTPROXY *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 8);
}
