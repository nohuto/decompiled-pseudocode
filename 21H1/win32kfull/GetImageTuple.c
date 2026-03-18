/*
 * XREFs of GetImageTuple @ 0x24B88D
 * Callers:
 *     _MicrosoftTelemetryAssertTriggeredWorker@24 @ 0x24B8ED (_MicrosoftTelemetryAssertTriggeredWorker@24.c)
 * Callees:
 *     <none>
 */

int __fastcall GetImageTuple(int a1, _DWORD *a2, _DWORD *a3)
{
  __int16 v3; // cx
  int v4; // ecx
  int v5; // eax

  v3 = *(_WORD *)(MEMORY[0x1003C] + 65560);
  if ( v3 == 267 || v3 == 523 )
  {
    v4 = *(_DWORD *)(MEMORY[0x1003C] + 65616);
    v5 = *(_DWORD *)(MEMORY[0x1003C] + 65544);
  }
  else
  {
    v4 = 0;
    v5 = 0;
  }
  *a2 = v5;
  *a3 = v4;
  return 1;
}
