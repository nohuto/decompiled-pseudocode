/*
 * XREFs of GetRegistryQwordValue @ 0x1C0021B8C
 * Callers:
 *     ProcLibGlobalInit @ 0x1C003C8F0 (ProcLibGlobalInit.c)
 * Callees:
 *     memset @ 0x1C0004AC0 (memset.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C0021C74 (GetRegistryDwordValueNoDefault.c)
 */

__int64 __fastcall GetRegistryQwordValue(__int64 a1, __int64 a2, __int64 *a3)
{
  int RegistryDwordValueNoDefault; // eax
  unsigned int v5; // ecx
  __int64 result; // rax
  _QWORD v7[16]; // [rsp+38h] [rbp-29h] BYREF
  __int64 v8; // [rsp+C8h] [rbp+67h] BYREF
  unsigned int v9; // [rsp+D0h] [rbp+6Fh] BYREF
  int v10; // [rsp+D4h] [rbp+73h]

  v10 = HIDWORD(a2);
  v9 = 0;
  v8 = 4294967288LL;
  memset(v7, 0, 0x70uLL);
  LODWORD(v7[1]) = 292;
  v7[3] = &v8;
  v7[2] = L"Capabilities";
  LODWORD(v7[4]) = 184549376;
  if ( (int)RtlQueryRegistryValuesEx(
              0LL,
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
              v7,
              0LL,
              0LL) >= 0 )
  {
    result = v8;
  }
  else
  {
    RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
                                    L"Capabilities",
                                    &v9);
    v5 = v9;
    if ( RegistryDwordValueNoDefault < 0 )
      v5 = 0;
    result = v5;
  }
  *a3 = result;
  return result;
}
