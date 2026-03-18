/*
 * XREFs of PopAdaptiveInitializeBootContext @ 0x140AF3434
 * Callers:
 *     PopInitializeAdpm @ 0x140AF33B0 (PopInitializeAdpm.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     BcdOpenObject @ 0x140812B74 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x140812D00 (BcdCloseObject.c)
 *     PopBcdClose @ 0x14081D368 (PopBcdClose.c)
 *     BcdGetElementData @ 0x14081D380 (BcdGetElementData.c)
 *     PopBcdOpen @ 0x14081D3A0 (PopBcdOpen.c)
 *     BcdDeleteElement @ 0x140A1D394 (BcdDeleteElement.c)
 *     PopDiagTraceAdaptiveBootOverride @ 0x140B52CBC (PopDiagTraceAdaptiveBootOverride.c)
 */

__int64 PopAdaptiveInitializeBootContext()
{
  int v0; // eax
  __int64 v2; // rdx
  unsigned int v3; // [rsp+50h] [rbp+8h] BYREF
  int v4; // [rsp+58h] [rbp+10h] BYREF
  __int64 v5; // [rsp+60h] [rbp+18h] BYREF
  __int64 v6; // [rsp+68h] [rbp+20h] BYREF

  v6 = -1LL;
  v5 = -1LL;
  PopAdaptiveBootContext = 0LL;
  qword_140C1F410 = 0LL;
  if ( (int)PopBcdOpen(&v6) >= 0 )
  {
    if ( (int)BcdOpenObject(v6, &GUID_CURRENT_BOOT_ENTRY.Data1, &v5) >= 0 )
    {
      v3 = 8;
      if ( (int)BcdGetElementData(v5, 0x2500015Au, (GUID *)((char *)&PopAdaptiveBootContext + 8), &v3) >= 0 )
      {
        BcdDeleteElement((void *)v5, 0x2500015Au);
        LOBYTE(v2) = (BYTE8(PopAdaptiveBootContext) & 8) != 0;
        PopDiagTraceAdaptiveBootOverride(BYTE8(PopAdaptiveBootContext) & 7, v2);
        if ( (BYTE8(PopAdaptiveBootContext) & 7) != 0 )
          LOBYTE(PopAdaptiveBootContext) = 1;
      }
    }
    if ( v5 != -1 )
      BcdCloseObject(v5);
  }
  if ( v6 != -1 )
    PopBcdClose(v6);
  v0 = 0;
  if ( (_BYTE)PopAdaptiveBootContext )
    v0 = 2;
  v4 = v0;
  return ZwUpdateWnfStateData((__int64)&WNF_PO_INITIAL_GLOBAL_USER_PRESENCE, (__int64)&v4);
}
