/*
 * XREFs of _RtlpWow64ThunkEnvironment64To32@0 @ 0x4B2DAFBF
 * Callers:
 *     _RtlpInitEnvironmentBlock@0 @ 0x4B2DAF42 (_RtlpInitEnvironmentBlock@0.c)
 * Callees:
 *     _RtlQueryEnvironmentVariable_U@12 @ 0x4B2DB100 (_RtlQueryEnvironmentVariable_U@12.c)
 *     _RtlSetEnvironmentVariable@12 @ 0x4B2DB170 (_RtlSetEnvironmentVariable@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

NTSTATUS __stdcall RtlpWow64ThunkEnvironment64To32()
{
  unsigned int i; // esi
  NTSTATUS result; // eax
  bool v2; // bl
  _UNICODE_STRING Value; // [esp+10h] [ebp-238h] BYREF
  _UNICODE_STRING v4; // [esp+18h] [ebp-230h] BYREF
  _UNICODE_STRING DestinationString; // [esp+20h] [ebp-228h] BYREF
  _UNICODE_STRING v6; // [esp+28h] [ebp-220h] BYREF
  _UNICODE_STRING Name; // [esp+30h] [ebp-218h] BYREF
  _BYTE v8[524]; // [esp+38h] [ebp-210h] BYREF

  for ( i = 0; i < 15; i += 5 )
  {
    RtlInitUnicodeString(&DestinationString, (PCWSTR)Wow64EnvironmentThunkTable[i]);
    RtlInitUnicodeString(&v6, (PCWSTR)off_4B281828[i]);
    if ( byte_4B281830[i * 4] )
    {
      RtlInitUnicodeString(&Name, (PCWSTR)off_4B281824[i]);
      *(_DWORD *)&Value.Length = 34078720;
      Value.Buffer = (wchar_t *)v8;
      result = RtlQueryEnvironmentVariable_U(0, &Name, &Value);
      if ( result >= 0 )
        result = RtlSetEnvironmentVariable(0, &DestinationString, &Value);
    }
    else
    {
      *(_DWORD *)&v4.Length = 34078720;
      v4.Buffer = (wchar_t *)v8;
      v2 = RtlQueryEnvironmentVariable_U(0, &v6, &v4) < 0;
      RtlInitUnicodeString(&Value, (PCWSTR)off_4B281824[i]);
      result = RtlQueryEnvironmentVariable_U(0, &DestinationString, &v4);
      if ( result >= 0 )
      {
        result = RtlSetEnvironmentVariable(0, &DestinationString, &Value);
        if ( result >= 0 && v2 )
          result = RtlSetEnvironmentVariable(0, &v6, &v4);
      }
    }
  }
  return result;
}
