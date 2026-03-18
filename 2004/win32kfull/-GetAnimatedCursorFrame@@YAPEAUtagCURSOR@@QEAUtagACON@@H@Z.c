/*
 * XREFs of ?GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z @ 0x1C0087AE0
 * Callers:
 *     ?GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C004DCD8 (-GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     _DrawIconEx @ 0x1C0063888 (_DrawIconEx.c)
 *     NtUserDrawIconEx @ 0x1C0064040 (NtUserDrawIconEx.c)
 *     zzzUpdateCursorImage @ 0x1C0087670 (zzzUpdateCursorImage.c)
 *     NtUserGetIconSize @ 0x1C0106A00 (NtUserGetIconSize.c)
 *     ?_GetCursorFrameInfo@@YAPEAUtagCURSOR@@PEAU1@HPEAKPEAH@Z @ 0x1C0154100 (-_GetCursorFrameInfo@@YAPEAUtagCURSOR@@PEAU1@HPEAKPEAH@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct tagCURSOR *__fastcall GetAnimatedCursorFrame(struct tagACON *const a1, __int64 a2)
{
  struct tagACON *v2; // r8
  __int64 v4; // rax
  __int64 v5; // rdx

  v2 = a1;
  if ( (*((_DWORD *)a1 + 20) & 0x40) != 0 )
    goto LABEL_2;
  if ( !*((_QWORD *)a1 + 13) )
    return 0LL;
  if ( !*((_QWORD *)a1 + 12) )
    return 0LL;
  if ( (int)a2 < 0 )
    return 0LL;
  if ( (int)a2 >= *((_DWORD *)a1 + 23) )
    return 0LL;
  _mm_lfence();
  v4 = *((_QWORD *)a1 + 13);
  a1 = (struct tagACON *const)(int)a2;
  v5 = *(int *)(v4 + 4LL * (int)a2);
  if ( (int)v5 < 0 || (int)v5 >= *((_DWORD *)v2 + 22) )
    return 0LL;
  _mm_lfence();
  a2 = *(_QWORD *)(*((_QWORD *)v2 + 12) + 8 * v5);
  if ( (*(_DWORD *)(a2 + 80) & 8) != 0 )
  {
LABEL_2:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
    return 0LL;
  }
  return (struct tagCURSOR *)a2;
}
