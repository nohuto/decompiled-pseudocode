/*
 * XREFs of ACPIRegDumpAcpiTables @ 0x1C00BC660
 * Callers:
 *     ACPILoadProcessRSDT @ 0x1C00BD9F8 (ACPILoadProcessRSDT.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00234AC (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     ACPIRegDumpAcpiTable @ 0x1C00BC7D4 (ACPIRegDumpAcpiTable.c)
 */

_UNKNOWN **ACPIRegDumpAcpiTables()
{
  ULONG *v0; // rsi
  ULONG *v1; // rbp
  ULONG *v2; // rdi
  ULONG *v3; // rbx
  _UNKNOWN **result; // rax
  __int64 v5; // rdi
  unsigned __int8 v6; // bl
  _DWORD *v7; // rcx
  char v8; // al
  char SourceString[8]; // [rsp+30h] [rbp-18h] BYREF

  v0 = (ULONG *)*((_QWORD *)AcpiInformation + 3);
  v1 = (ULONG *)*((_QWORD *)AcpiInformation + 2);
  v2 = (ULONG *)*((_QWORD *)AcpiInformation + 1);
  v3 = *(ULONG **)AcpiInformation;
  strcpy(SourceString, "SSD0");
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    result = (_UNKNOWN **)WPP_RECORDER_SF_(
                            (__int64)WPP_GLOBAL_Control->DeviceExtension,
                            4u,
                            0xBu,
                            0x24u,
                            (__int64)&WPP_0ff02685c5363f18e09d8afa1fc83b4b_Traceguids);
  if ( v0 )
    result = (_UNKNOWN **)ACPIRegDumpAcpiTable("DSDT", v0, v0[1]);
  if ( v1 )
    result = (_UNKNOWN **)ACPIRegDumpAcpiTable("FACS", v1, v1[1]);
  if ( v2 )
    result = (_UNKNOWN **)ACPIRegDumpAcpiTable("FADT", v2, v2[1]);
  if ( v3 )
    result = (_UNKNOWN **)ACPIRegDumpAcpiTable("RSDT", v3, v3[1]);
  v5 = AcpiDynamicDataBlockTableList;
  v6 = 0;
  while ( (__int64 *)v5 != &AcpiDynamicDataBlockTableList )
  {
    v7 = *(_DWORD **)(v5 + 24);
    if ( *v7 == 1413763923 )
    {
      if ( v6 )
      {
        if ( v6 >= 0xAu )
        {
          if ( v6 >= 0x23u )
            return result;
          v8 = v6 + 55;
        }
        else
        {
          v8 = v6 + 48;
        }
        SourceString[3] = v8;
      }
      else
      {
        SourceString[3] = 84;
      }
      ++v6;
      result = (_UNKNOWN **)ACPIRegDumpAcpiTable(SourceString, *(PVOID *)(v5 + 24), v7[1]);
    }
    v5 = *(_QWORD *)v5;
  }
  return result;
}
