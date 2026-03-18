/*
 * XREFs of ?GreUpdateSpriteCallout@@YGXPAX@Z @ 0xCC288
 * Callers:
 *     <none>
 * Callees:
 *     ?GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_BLENDFUNCTION@@KPAUtagRECT@@PAUtagMINIWINDOWINFO@@HH@Z @ 0x603A0 (-GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_.c)
 */

void __stdcall GreUpdateSpriteCallout(PVOID Parameter)
{
  int v1; // [esp+0h] [ebp-4h]
  int savedregs; // [esp+4h] [ebp+0h]

  *((_DWORD *)Parameter + 15) = GreUpdateSpriteInternal(
                                  *((_DWORD *)Parameter + 1),
                                  *(HDEV *)Parameter,
                                  *((HDEV *)Parameter + 2),
                                  *((HWND *)Parameter + 3),
                                  *((void **)Parameter + 4),
                                  *((HDC *)Parameter + 5),
                                  *((struct tagPOINT **)Parameter + 6),
                                  *((struct tagSIZE **)Parameter + 7),
                                  *((HDC *)Parameter + 11),
                                  *((struct tagPOINT **)Parameter + 8),
                                  *((_DWORD *)Parameter + 12),
                                  *((struct _BLENDFUNCTION **)Parameter + 9),
                                  *((_DWORD *)Parameter + 10),
                                  *((struct tagRECT **)Parameter + 13),
                                  *((struct tagRECT **)Parameter + 14),
                                  v1,
                                  savedregs);
}
