/*
 * XREFs of RtlAssert @ 0x1405834A0
 * Callers:
 *     KsepGetShimCallbacksForDriver @ 0x140742CA0 (KsepGetShimCallbacksForDriver.c)
 *     KseShimDatabaseClose @ 0x1407433D8 (KseShimDatabaseClose.c)
 *     KsepStringDuplicate @ 0x1407457E0 (KsepStringDuplicate.c)
 *     KsepStringConcatenate @ 0x140745890 (KsepStringConcatenate.c)
 *     KsepRegistryOpenKey @ 0x1407459D0 (KsepRegistryOpenKey.c)
 *     KsepStringFree @ 0x140745D6C (KsepStringFree.c)
 *     KsepStringDuplicateUnicode @ 0x140745DA0 (KsepStringDuplicateUnicode.c)
 *     KsepStringTransform @ 0x140749E98 (KsepStringTransform.c)
 *     KseDriverUnloadImage @ 0x140760764 (KseDriverUnloadImage.c)
 *     KsepRegistryQueryDWORD @ 0x1407AC788 (KsepRegistryQueryDWORD.c)
 *     KsepRegistryQuerySZ @ 0x1407AC870 (KsepRegistryQuerySZ.c)
 *     KsepStringSplitMultiString @ 0x1408BD904 (KsepStringSplitMultiString.c)
 *     KsepRegistryCreateKey @ 0x1408BDCA8 (KsepRegistryCreateKey.c)
 *     KsepRegistryQueryValue @ 0x1408BE0AC (KsepRegistryQueryValue.c)
 *     KsepEngineInitialize @ 0x140A65A58 (KsepEngineInitialize.c)
 *     KsepEngineReadFlags @ 0x140A65D6C (KsepEngineReadFlags.c)
 *     KseShimDatabaseBootInitialize @ 0x140A6E9D4 (KseShimDatabaseBootInitialize.c)
 *     KsepEngineUninitialize @ 0x140A8F668 (KsepEngineUninitialize.c)
 * Callees:
 *     DbgPrintEx @ 0x14037D2B0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwTerminateThread @ 0x1403F4020 (ZwTerminateThread.c)
 *     RtlCaptureContext @ 0x1403FF110 (RtlCaptureContext.c)
 *     DbgPrompt @ 0x140580200 (DbgPrompt.c)
 *     RtlpTerminateCurrentProcess @ 0x140911B70 (RtlpTerminateCurrentProcess.c)
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
