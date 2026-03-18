/*
 * XREFs of ?GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z @ 0x1C00CD540
 * Callers:
 *     ?GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C002B388 (-GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     _DrawIconEx @ 0x1C0091C78 (_DrawIconEx.c)
 *     NtUserDrawIconEx @ 0x1C0092430 (NtUserDrawIconEx.c)
 *     zzzUpdateCursorImage @ 0x1C00CD0D0 (zzzUpdateCursorImage.c)
 *     NtUserGetIconSize @ 0x1C0106C90 (NtUserGetIconSize.c)
 *     ?_GetCursorFrameInfo@@YAPEAUtagCURSOR@@PEAU1@HPEAKPEAH@Z @ 0x1C0156A30 (-_GetCursorFrameInfo@@YAPEAUtagCURSOR@@PEAU1@HPEAKPEAH@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct tagCURSOR *__fastcall GetAnimatedCursorFrame(struct tagACON *const a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct tagACON *v4; // r8
  __int64 v6; // rax
  __int64 v7; // rdx

  v4 = a1;
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
  v6 = *((_QWORD *)a1 + 13);
  a1 = (struct tagACON *const)(int)a2;
  v7 = *(int *)(v6 + 4LL * (int)a2);
  if ( (int)v7 < 0 || (int)v7 >= *((_DWORD *)v4 + 22) )
    return 0LL;
  _mm_lfence();
  a2 = *(_QWORD *)(*((_QWORD *)v4 + 12) + 8 * v7);
  if ( (*(_DWORD *)(a2 + 80) & 8) != 0 )
  {
LABEL_2:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, v4, a4);
    return 0LL;
  }
  return (struct tagCURSOR *)a2;
}
