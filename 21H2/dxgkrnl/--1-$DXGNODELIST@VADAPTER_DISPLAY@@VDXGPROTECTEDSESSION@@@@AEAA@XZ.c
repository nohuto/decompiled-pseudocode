/*
 * XREFs of ??1?$DXGNODELIST@VADAPTER_DISPLAY@@VDXGPROTECTEDSESSION@@@@AEAA@XZ @ 0x1C0045604
 * Callers:
 *     ??_G?$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@AEAAPEAXI@Z @ 0x1C00536FC (--_G-$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@AEAAPEAXI@Z.c)
 *     ??1ADAPTER_DISPLAY@@QEAA@XZ @ 0x1C02BED0C (--1ADAPTER_DISPLAY@@QEAA@XZ.c)
 *     ??1ADAPTER_RENDER@@QEAA@XZ @ 0x1C02C2FA8 (--1ADAPTER_RENDER@@QEAA@XZ.c)
 *     ??1DXGGLOBAL@@EEAA@XZ @ 0x1C0308FE4 (--1DXGGLOBAL@@EEAA@XZ.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

char __fastcall DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>(
        _QWORD *a1)
{
  char result; // al
  int v2; // edx
  int v3; // r8d

  if ( (_QWORD *)*a1 != a1 )
  {
    result = WdLogSingleEntry1(1LL, 764LL);
    if ( bTracingEnabled )
    {
      result = BYTE3(Microsoft_Windows_DxgKrnlEnableBits);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        return McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                 0,
                 v2,
                 v3,
                 0,
                 2,
                 -1,
                 (__int64)L"IsEmpty()",
                 764LL,
                 0LL,
                 0LL,
                 0LL,
                 0LL);
    }
  }
  return result;
}
