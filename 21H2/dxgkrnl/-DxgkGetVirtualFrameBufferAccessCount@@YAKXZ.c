/*
 * XREFs of ?DxgkGetVirtualFrameBufferAccessCount@@YAKXZ @ 0x1C02DD3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

__int64 DxgkGetVirtualFrameBufferAccessCount(void)
{
  struct DXGGLOBAL *Global; // rax
  unsigned int *v1; // rcx
  unsigned int v2; // ebx
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  Global = DXGGLOBAL_GetGlobal();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v4, (struct DXGGLOBAL *)((char *)Global + 1664), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v4);
  v1 = (unsigned int *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 207);
  if ( v1 )
    v2 = *v1;
  else
    v2 = 0;
  if ( v4[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v4);
  return v2;
}
