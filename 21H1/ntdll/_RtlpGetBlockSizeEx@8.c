/*
 * XREFs of _RtlpGetBlockSizeEx@8 @ 0x4B2DB9E7
 * Callers:
 *     _RtlCreateProcessParametersInternal@48 @ 0x4B2A8307 (_RtlCreateProcessParametersInternal@48.c)
 *     _RtlCreateEnvironmentEx@12 @ 0x4B2DACF0 (_RtlCreateEnvironmentEx@12.c)
 *     _RtlpInitEnvironmentBlock@0 @ 0x4B2DAF42 (_RtlpInitEnvironmentBlock@0.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpGetBlockSizeEx(const char *a1, int a2)
{
  bool v3; // zf
  const char *v4; // edx
  int v5; // edx
  const char *v7; // ecx

  v3 = a2 == 0;
  v4 = a1;
  if ( v3 )
  {
    do
    {
      v7 = &v4[strlen(v4) + 1];
      v4 = v7;
    }
    while ( *v7 );
    v5 = v7 - a1 + 1;
  }
  else
  {
    do
      v4 += 2 * wcslen((const unsigned __int16 *)v4) + 2;
    while ( *(_WORD *)v4 );
    v5 = (v4 - a1 + 2) >> 1;
  }
  return 2 * v5;
}
