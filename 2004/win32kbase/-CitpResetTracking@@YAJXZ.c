/*
 * XREFs of ?CitpResetTracking@@YAJXZ @ 0x1C01FA47C
 * Callers:
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C01F8ED0 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 * Callees:
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0035044 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00354AC (-CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpCleanup@@YAXXZ @ 0x1C003571C (-CitpCleanup@@YAXXZ.c)
 *     ?CitpContextTrackingDataCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C003590C (-CitpContextTrackingDataCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1C0036060 (-CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 *     ?CitpInvalidateAllWeakReferences@@YAXXZ @ 0x1C01F9B14 (-CitpInvalidateAllWeakReferences@@YAXXZ.c)
 */

__int64 CitpResetTracking(void)
{
  struct _CIT_IMPACT_CONTEXT *v0; // rbx
  int v1; // ebx
  char IsStateSeparationEnabled; // al
  const WCHAR *v4; // rdx
  const char *v5; // rdx

  v0 = xmmword_1C02504A0;
  if ( !xmmword_1C02504A0 )
    goto LABEL_2;
  CitpContextFlush(xmmword_1C02504A0, (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  CitpInvalidateAllWeakReferences();
  CitpContextTrackingDataCleanup(v0);
  WORD2(qword_1C0250494) = 0;
  IsStateSeparationEnabled = RtlIsStateSeparationEnabled();
  v4 = L"\\Registry\\Machine\\OSDATA\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT";
  if ( !IsStateSeparationEnabled )
    v4 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT";
  CitpParametersLoad((struct _CIT_PARAMETERS *)&xmmword_1C0250474, v4);
  if ( BYTE4(qword_1C0250494) )
  {
    v1 = CitpContextTrackingDataStart(v0, v5);
    if ( v1 >= 0 )
      return 0;
  }
  else
  {
LABEL_2:
    v1 = -1073741637;
  }
  CitpCleanup();
  return (unsigned int)v1;
}
