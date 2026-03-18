/*
 * XREFs of ?EndProcessingBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAXXZ @ 0x1C02681C0
 * Callers:
 *     DxgkProcessDisplayCalloutBatch @ 0x1C0296D10 (DxgkProcessDisplayCalloutBatch.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

void __fastcall DXGDISPLAYCALLOUTQUEUE::EndProcessingBatch(DXGDISPLAYCALLOUTQUEUE *this)
{
  __int64 v2; // rdx
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v3, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v3);
  *((_QWORD *)this + 7) = 0LL;
  if ( v3[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v3, v2);
}
