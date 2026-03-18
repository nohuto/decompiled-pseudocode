/*
 * XREFs of PpmPerfUpdateQosDisableReasons @ 0x1403217E4
 * Callers:
 *     PpmCheckResumeStatisticsCollection @ 0x14038A1E0 (PpmCheckResumeStatisticsCollection.c)
 *     PpmCheckPausePpmEngineForSx @ 0x14038A270 (PpmCheckPausePpmEngineForSx.c)
 *     PpmPerfTelemetryWorker @ 0x1406EA8C0 (PpmPerfTelemetryWorker.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140776DEC (PpmPerfUpdateDomainPolicy.c)
 * Callees:
 *     <none>
 */

char __fastcall PpmPerfUpdateQosDisableReasons(int *a1)
{
  char v1; // dl
  __int64 v3; // r11
  __int64 v4; // r8
  unsigned int v5; // r9d
  _QWORD *v6; // rcx
  int v7; // eax

  v1 = 0;
  v3 = MEMORY[0xFFFFF78000000008];
  if ( !byte_140CFCD88 )
  {
    v4 = MEMORY[0xFFFFF78000000008] - PpmPerfQosDisableAccounting;
    qword_140CFCCD8 += MEMORY[0xFFFFF78000000008] - PpmPerfQosDisableAccounting;
    if ( PpmPerfQosEnabled )
      qword_140CFCCE8 += v4;
    v5 = 0;
    v6 = &unk_140CFCCF8;
    do
    {
      v7 = PpmPerfQosDisableReasons;
      if ( _bittest(&v7, v5) )
        *v6 += v4;
      ++v5;
      ++v6;
    }
    while ( v5 < 9 );
  }
  if ( a1 )
  {
    if ( PpmPerfQosDisableReasons != *a1 || !PpmPerfQosDisableAccounting )
      v1 = 1;
    PpmPerfQosDisableReasons = *a1;
  }
  PpmPerfQosDisableAccounting = v3;
  return v1;
}
