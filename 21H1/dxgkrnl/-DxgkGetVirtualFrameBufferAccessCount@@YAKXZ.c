/*
 * XREFs of ?DxgkGetVirtualFrameBufferAccessCount@@YAKXZ @ 0x1C0183D00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

__int64 __fastcall DxgkGetVirtualFrameBufferAccessCount(__int64 a1, __int64 a2)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned int *v6; // rcx
  unsigned int v7; // ebx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  Global = DXGGLOBAL::GetGlobal(a1, a2);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (struct DXGGLOBAL *)((char *)Global + 1392), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  v6 = (unsigned int *)*((_QWORD *)DXGGLOBAL::GetGlobal(v4, v3) + 173);
  if ( v6 )
    v7 = *v6;
  else
    v7 = 0;
  if ( v9[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9, v5);
  return v7;
}
