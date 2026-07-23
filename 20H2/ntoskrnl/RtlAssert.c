/*
 * XREFs of RtlAssert @ 0x140586E00
 * Callers:
 *     KsepGetShimCallbacksForDriver @ 0x140751880 (KsepGetShimCallbacksForDriver.c)
 *     KseShimDatabaseClose @ 0x140751FB8 (KseShimDatabaseClose.c)
 *     KsepStringDuplicate @ 0x1407543C0 (KsepStringDuplicate.c)
 *     KsepStringConcatenate @ 0x140754470 (KsepStringConcatenate.c)
 *     KsepRegistryOpenKey @ 0x1407545B0 (KsepRegistryOpenKey.c)
 *     KsepStringFree @ 0x14075494C (KsepStringFree.c)
 *     KsepStringDuplicateUnicode @ 0x140754980 (KsepStringDuplicateUnicode.c)
 *     KsepStringTransform @ 0x140758A78 (KsepStringTransform.c)
 *     KseDriverUnloadImage @ 0x14076ED74 (KseDriverUnloadImage.c)
 *     KsepRegistryQueryDWORD @ 0x1407BA6C8 (KsepRegistryQueryDWORD.c)
 *     KsepRegistryQuerySZ @ 0x1407BA7B0 (KsepRegistryQuerySZ.c)
 *     KsepStringSplitMultiString @ 0x1408C3664 (KsepStringSplitMultiString.c)
 *     KsepRegistryCreateKey @ 0x1408C3A08 (KsepRegistryCreateKey.c)
 *     KsepRegistryQueryValue @ 0x1408C3E0C (KsepRegistryQueryValue.c)
 *     KsepEngineInitialize @ 0x140A6CD28 (KsepEngineInitialize.c)
 *     KsepEngineReadFlags @ 0x140A6D03C (KsepEngineReadFlags.c)
 *     KseShimDatabaseBootInitialize @ 0x140A751B4 (KseShimDatabaseBootInitialize.c)
 *     KsepEngineUninitialize @ 0x140A95368 (KsepEngineUninitialize.c)
 * Callees:
 *     DbgPrintEx @ 0x14037EFE0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwTerminateThread @ 0x1403F8BD0 (ZwTerminateThread.c)
 *     RtlCaptureContext @ 0x1404053E0 (RtlCaptureContext.c)
 *     DbgPrompt @ 0x140583B60 (DbgPrompt.c)
 *     RtlpTerminateCurrentProcess @ 0x1409176B0 (RtlpTerminateCurrentProcess.c)
 */

void __stdcall RtlAssert(PVOID VoidFailedAssertion, PVOID VoidFileName, ULONG LineNumber, PSTR MutableMessage)
{
  PSTR v8; // r9
  bool v9; // zf
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // [rsp+30h] [rbp-528h]
  CHAR Response[16]; // [rsp+40h] [rbp-518h] BYREF
  _CONTEXT ContextRecord; // [rsp+50h] [rbp-508h] BYREF

  RtlCaptureContext(&ContextRecord);
  while ( 1 )
  {
    LODWORD(v13) = LineNumber;
    v8 = (PSTR)&Src;
    if ( MutableMessage )
      v8 = MutableMessage;
    DbgPrintEx(
      0x65u,
      0,
      "\n*** Assertion failed: %s%s\n***   Source File: %s, line %ld\n\n",
      v8,
      VoidFailedAssertion,
      VoidFileName,
      v13);
    if ( (MEMORY[0xFFFFF780000002D4] & 3) != 3 )
      break;
    if ( !DbgPrompt(
            "Break repeatedly, break Once, Ignore, terminate Process, or terminate Thread (boipt)? ",
            Response,
            2u) )
    {
      __debugbreak();
LABEL_18:
      RtlpTerminateCurrentProcess();
      return;
    }
    if ( Response[0] > 98 )
    {
      v10 = Response[0] - 105;
      v9 = Response[0] == 105;
    }
    else
    {
      if ( Response[0] == 98 || Response[0] == 66 )
        goto LABEL_16;
      v10 = Response[0] - 73;
      v9 = Response[0] == 73;
    }
    if ( v9 )
      return;
    v11 = v10 - 6;
    if ( !v11 )
    {
LABEL_16:
      DbgPrintEx(0x65u, 0, "Execute '.cxr %p' to dump context\n", &ContextRecord);
      __debugbreak();
    }
    v12 = v11 - 1;
    if ( !v12 )
      goto LABEL_18;
    if ( v12 == 4 )
      ZwTerminateThread((HANDLE)0xFFFFFFFFFFFFFFFELL, -1073741823);
  }
}
