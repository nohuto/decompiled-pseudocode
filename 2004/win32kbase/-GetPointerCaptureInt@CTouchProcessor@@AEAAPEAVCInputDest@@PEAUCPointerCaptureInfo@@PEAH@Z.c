/*
 * XREFs of ?GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z @ 0x1C0190E2C
 * Callers:
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C0190CD4 (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?GetPointerCapture@CTouchProcessor@@QEAAX_KHPEAPEAXPEAH@Z @ 0x1C0190D70 (-GetPointerCapture@CTouchProcessor@@QEAAX_KHPEAPEAXPEAH@Z.c)
 * Callees:
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C006939C (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     ?ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z @ 0x1C019904C (-ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z.c)
 */

struct CInputDest *__fastcall CTouchProcessor::GetPointerCaptureInt(
        CTouchProcessor *this,
        struct CPointerCaptureInfo *a2,
        int *a3)
{
  CInputDest *v3; // r11
  int v5; // r10d
  CInputDest *v8; // r11

  v3 = (struct CPointerCaptureInfo *)((char *)a2 + 8);
  v5 = *((_DWORD *)a2 + 2);
  if ( v5 && (CInputDest::TestWindowFlag(v3, 1152) || CInputDest::TestWindowFlag(v8, 896)) )
  {
    if ( ExIsResourceAcquiredExclusiveLite(gpresUser) == 1 )
      CTouchProcessor::ReleasePointerCaptureInt(this, a2);
    if ( a3 )
      *a3 = 0;
    return 0LL;
  }
  else
  {
    if ( a3 )
    {
      *a3 = *((_DWORD *)a2 + 32);
      v5 = *(_DWORD *)v3;
    }
    return (struct CInputDest *)((unsigned __int64)v3 & -(__int64)(v5 != 0));
  }
}
