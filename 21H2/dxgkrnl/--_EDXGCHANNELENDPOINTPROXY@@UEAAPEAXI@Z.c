/*
 * XREFs of ??_EDXGCHANNELENDPOINTPROXY@@UEAAPEAXI@Z @ 0x1C02B28A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002824 (--3@YAXPEAX@Z.c)
 *     ??1DXGCHANNELENDPOINTPROXY@@UEAA@XZ @ 0x1C02B2684 (--1DXGCHANNELENDPOINTPROXY@@UEAA@XZ.c)
 */

DXGCHANNELENDPOINTPROXY *__fastcall DXGCHANNELENDPOINTPROXY::`vector deleting destructor'(
        DXGCHANNELENDPOINTPROXY *this,
        __int64 a2)
{
  char v2; // bl

  v2 = a2;
  DXGCHANNELENDPOINTPROXY::~DXGCHANNELENDPOINTPROXY(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
