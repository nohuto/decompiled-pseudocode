/*
 * XREFs of ?GetPresentDiagHistory@DISPLAY_SOURCE@@QEAAXPEAUPRESENTHISTORYDIAGNOSTICINFO@@I@Z @ 0x1C004D100
 * Callers:
 *     ?Initialize@VIDPNSOURCEINFO@@QEAAJPEAVDXGADAPTER@@I@Z @ 0x1C02BB038 (-Initialize@VIDPNSOURCEINFO@@QEAAJPEAVDXGADAPTER@@I@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

void __fastcall DISPLAY_SOURCE::GetPresentDiagHistory(DISPLAY_SOURCE *this, struct PRESENTHISTORYDIAGNOSTICINFO *a2)
{
  DISPLAY_SOURCE *v3; // rbx
  __int64 v4; // rdx
  bool v5; // zf
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = this;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, (DISPLAY_SOURCE *)((char *)this + 3760), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
  v3 = (DISPLAY_SOURCE *)((char *)v3 + 3800);
  v5 = v6[8] == 0;
  *(_OWORD *)a2 = *(_OWORD *)v3;
  *((_OWORD *)a2 + 1) = *((_OWORD *)v3 + 1);
  *((_OWORD *)a2 + 2) = *((_OWORD *)v3 + 2);
  *((_OWORD *)a2 + 3) = *((_OWORD *)v3 + 3);
  *((_OWORD *)a2 + 4) = *((_OWORD *)v3 + 4);
  *((_OWORD *)a2 + 5) = *((_OWORD *)v3 + 5);
  *((_OWORD *)a2 + 6) = *((_OWORD *)v3 + 6);
  *((_OWORD *)a2 + 7) = *((_OWORD *)v3 + 7);
  *((_OWORD *)a2 + 8) = *((_OWORD *)v3 + 8);
  *((_OWORD *)a2 + 9) = *((_OWORD *)v3 + 9);
  if ( !v5 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v6, v4);
}
