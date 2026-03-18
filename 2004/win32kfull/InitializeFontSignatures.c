/*
 * XREFs of InitializeFontSignatures @ 0x1C0395D4C
 * Callers:
 *     vInitMapper @ 0x1C0395D30 (vInitMapper.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00D8F8C (PALLOCMEM2.c)
 */

int InitializeFontSignatures()
{
  unsigned int *v0; // rax
  __int64 v1; // r8
  __int64 Context; // [rsp+30h] [rbp-49h] BYREF
  unsigned int *v4; // [rsp+38h] [rbp-41h]
  __int128 v5; // [rsp+40h] [rbp-39h]
  __int64 v6; // [rsp+50h] [rbp-29h]
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+60h] [rbp-19h] BYREF
  __int64 v8; // [rsp+98h] [rbp+1Fh]
  int v9; // [rsp+A0h] [rbp+27h]
  __int64 v10; // [rsp+A8h] [rbp+2Fh]
  USHORT AnsiCodePage; // [rsp+E0h] [rbp+67h] BYREF
  USHORT OemCodePage; // [rsp+E8h] [rbp+6Fh] BYREF

  QueryTable.Flags = 4;
  v6 = 0LL;
  memset(&QueryTable.Name, 0, 20);
  QueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)DefaultFontQueryRoutine;
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v5 = 0LL;
  v8 = 0LL;
  v9 = 0;
  v10 = 0LL;
  Context = 0LL;
  v4 = 0LL;
  MAPPER::SignatureTable = 0LL;
  MAPPER::FaceNameTable = 0LL;
  LODWORD(v0) = RtlQueryRegistryValues(3u, L"FontMapper", &QueryTable, &Context, 0LL);
  if ( (int)v0 >= 0 )
  {
    v0 = (unsigned int *)PALLOCMEM2((unsigned int)(HIDWORD(Context) + 4 * Context), 1885433159LL, 1);
    MAPPER::SignatureTable = v0;
    if ( v0 )
    {
      v1 = (unsigned int)Context;
      v4 = v0;
      LODWORD(Context) = 0;
      *(_QWORD *)&v5 = &v0[v1];
      *((_QWORD *)&v5 + 1) = v5;
      if ( RtlQueryRegistryValues(3u, L"FontMapper", &QueryTable, &Context, 0LL) < 0 )
      {
        LODWORD(v0) = Win32FreePool(MAPPER::SignatureTable);
        MAPPER::SignatureTable = 0LL;
      }
      else
      {
        MAPPER::FaceNameTable = (unsigned __int16 *)v5;
        MAPPER::DefaultCharset = v6;
        AnsiCodePage = 0;
        OemCodePage = 0;
        RtlGetDefaultCodePage(&AnsiCodePage, &OemCodePage);
        LODWORD(v0) = 65001;
        if ( AnsiCodePage == 0xFDE9 )
          MAPPER::DefaultCharset = -2;
      }
    }
  }
  return (int)v0;
}
