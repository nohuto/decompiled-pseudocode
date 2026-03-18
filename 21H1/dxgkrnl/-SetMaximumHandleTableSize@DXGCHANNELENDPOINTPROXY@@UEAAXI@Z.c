/*
 * XREFs of ?SetMaximumHandleTableSize@DXGCHANNELENDPOINTPROXY@@UEAAXI@Z @ 0x1C015B730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DXGCHANNELENDPOINTPROXY::SetMaximumHandleTableSize(DXGCHANNELENDPOINTPROXY *this, int a2)
{
  *((_DWORD *)this + 28) = a2;
}
