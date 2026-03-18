/*
 * XREFs of ?GetHitTestAttributes@CWheelEvent@CMouseProcessor@@UEBA?AW4DIT_HITTESTATTRIBUTES@@XZ @ 0x1C01BA750
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

int __fastcall CMouseProcessor::CWheelEvent::GetHitTestAttributes(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  int v6; // edi
  unsigned int v7; // edx
  int result; // eax

  v4 = *(_QWORD *)(a1 + 8);
  v6 = *(__int16 *)(v4 + 30);
  if ( !*(_WORD *)(v4 + 30) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v7 = (((v6 >> 15) & 0xFFFFFFFE) + 3) | 4;
  if ( *(_DWORD *)(a1 + 28) != 1 )
    v7 = ((v6 >> 15) & 0xFFFFFFFE) + 3;
  result = v7 | 0x100;
  if ( (BYTE4(gafAsyncKeyState) & 4) == 0 )
    return v7;
  return result;
}
