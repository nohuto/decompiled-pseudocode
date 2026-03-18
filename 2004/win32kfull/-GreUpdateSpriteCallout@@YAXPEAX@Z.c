/*
 * XREFs of ?GreUpdateSpriteCallout@@YAXPEAX@Z @ 0x1C026E880
 * Callers:
 *     <none>
 * Callees:
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C007C1E0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 */

void __fastcall GreUpdateSpriteCallout(PVOID Parameter)
{
  void *v1; // [rsp+50h] [rbp-38h]

  LODWORD(v1) = *((_DWORD *)Parameter + 23);
  *((_DWORD *)Parameter + 26) = GreUpdateSpriteInternal(
                                  *(HDEV *)Parameter,
                                  *((HWND *)Parameter + 1),
                                  *((void **)Parameter + 2),
                                  *((HDC *)Parameter + 3),
                                  *((struct tagPOINT **)Parameter + 4),
                                  *((struct tagSIZE **)Parameter + 5),
                                  *((HDC *)Parameter + 6),
                                  *((struct _POINTL **)Parameter + 7),
                                  *((_DWORD *)Parameter + 22),
                                  *((struct _BLENDFUNCTION **)Parameter + 8),
                                  v1,
                                  *((struct tagRECT **)Parameter + 9),
                                  *((struct tagMINIWINDOWINFO **)Parameter + 10),
                                  *((_DWORD *)Parameter + 24),
                                  *((_DWORD *)Parameter + 25));
}
