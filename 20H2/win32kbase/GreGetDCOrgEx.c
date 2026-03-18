/*
 * XREFs of GreGetDCOrgEx @ 0x1C00608A0
 * Callers:
 *     GetMonitorDC @ 0x1C004D710 (GetMonitorDC.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C004BA04 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C004BB94 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     GreGetDCPoint @ 0x1C0060930 (GreGetDCPoint.c)
 */

__int64 __fastcall GreGetDCOrgEx(HDC a1, __int64 a2, _OWORD *a3)
{
  __int64 v5; // rdi
  unsigned int DCPoint; // ebx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v8, a1);
  v5 = v8[0];
  if ( v8[0] )
  {
    *a3 = *(_OWORD *)(v8[0] + 1032LL);
    DCPoint = GreGetDCPoint(a1);
  }
  else
  {
    DCPoint = 0;
  }
  if ( v5 )
    XDCOBJ::vAltUnlockFast((XDCOBJ *)v8);
  return DCPoint;
}
