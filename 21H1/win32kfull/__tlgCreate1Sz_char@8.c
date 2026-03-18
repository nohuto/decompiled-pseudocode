/*
 * XREFs of __tlgCreate1Sz_char@8 @ 0x24BE8B
 * Callers:
 *     _MicrosoftTelemetryAssertTriggeredWorker@24 @ 0x24B8ED (_MicrosoftTelemetryAssertTriggeredWorker@24.c)
 * Callees:
 *     <none>
 */

char __fastcall _tlgCreate1Sz_char(const char **a1, const char *a2)
{
  char result; // al
  unsigned int v3; // esi

  if ( a2 )
  {
    v3 = strlen(a2) + 1;
  }
  else
  {
    a2 = byte_FC858;
    v3 = 1;
  }
  a1[1] = 0;
  a1[3] = 0;
  a1[2] = (const char *)v3;
  *a1 = a2;
  return result;
}
