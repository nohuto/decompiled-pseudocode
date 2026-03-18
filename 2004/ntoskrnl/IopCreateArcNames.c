/*
 * XREFs of IopCreateArcNames @ 0x140A67348
 * Callers:
 *     IopInitializeBootDrivers @ 0x140A4E080 (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1402770E0 (RtlInitAnsiString.c)
 *     IopVerifierExAllocatePool_0 @ 0x14027C6F4 (IopVerifierExAllocatePool_0.c)
 *     RtlStringCchPrintfA @ 0x1403C4CDC (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     RtlAnsiStringToUnicodeString @ 0x14063D070 (RtlAnsiStringToUnicodeString.c)
 *     IopCreateArcNamesDisk @ 0x140A67484 (IopCreateArcNamesDisk.c)
 *     IopCreateArcNamesCd @ 0x140A675EC (IopCreateArcNamesCd.c)
 */

__int64 __fastcall IopCreateArcNames(__int64 a1)
{
  const char *v1; // r9
  __int64 v3; // rbx
  PVOID Pool_0; // rax
  __int64 result; // rax
  STRING DestinationString; // [rsp+20h] [rbp-B8h] BYREF
  STRING v7; // [rsp+30h] [rbp-A8h] BYREF
  char pszDest[128]; // [rsp+40h] [rbp-98h] BYREF

  v1 = *(const char **)(a1 + 192);
  DestinationString = 0LL;
  v7 = 0LL;
  RtlStringCchPrintfA(pszDest, 0x80uLL, "\\ArcName\\%s", v1);
  RtlInitAnsiString(&DestinationString, pszDest);
  RtlAnsiStringToUnicodeString(&IoArcHalDeviceName, &DestinationString, 1u);
  RtlStringCchPrintfA(pszDest, 0x80uLL, "\\ArcName\\%s", *(const char **)(a1 + 184));
  RtlInitAnsiString(&DestinationString, pszDest);
  RtlAnsiStringToUnicodeString(&IoArcBootDeviceName, &DestinationString, 1u);
  v3 = -1LL;
  do
    ++v3;
  while ( *(_BYTE *)(*(_QWORD *)(a1 + 184) + v3) );
  Pool_0 = IopVerifierExAllocatePool_0(PagedPool, v3 + 1);
  IoLoaderArcBootDeviceName = (__int64)Pool_0;
  if ( Pool_0 )
    memmove(Pool_0, *(const void **)(a1 + 184), v3 + 1);
  RtlInitAnsiString(&v7, *(PCSZ *)(a1 + 192));
  result = IopCreateArcNamesDisk();
  if ( (int)result >= 0 )
    return IopCreateArcNamesCd(a1);
  return result;
}
