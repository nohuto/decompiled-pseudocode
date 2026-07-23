/*
 * XREFs of PiDevCfgParseVariableName @ 0x140393FBC
 * Callers:
 *     PiDevCfgQueryResolveValue @ 0x14050E6E4 (PiDevCfgQueryResolveValue.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140767B64 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgCopyDeviceKey @ 0x140769FCC (PiDevCfgCopyDeviceKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 */

bool __fastcall PiDevCfgParseVariableName(_WORD *a1, UNICODE_STRING *a2, _DWORD *a3)
{
  const WCHAR *i; // rbx
  int v5; // edi
  WCHAR v6; // ax
  int v8; // eax

  i = 0LL;
  v5 = 0;
  if ( *a1 == 36 )
  {
    for ( i = a1 + 1; ; ++i )
    {
      v6 = *i;
      if ( !*i )
        break;
      if ( v6 == 63 )
      {
        v8 = 0x10000;
      }
      else if ( v6 == 33 )
      {
        v8 = 0x20000;
      }
      else if ( v6 == 43 )
      {
        v8 = 0x40000;
      }
      else
      {
        if ( v6 != 45 )
        {
          if ( v6 == 36 )
            ++i;
          break;
        }
        v8 = 0x80000;
      }
      v5 |= v8;
    }
  }
  RtlInitUnicodeString(a2, i);
  *a3 = v5;
  return i != 0LL;
}
