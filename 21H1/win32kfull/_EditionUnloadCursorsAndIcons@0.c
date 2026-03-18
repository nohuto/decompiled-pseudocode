/*
 * XREFs of _EditionUnloadCursorsAndIcons@0 @ 0xD301E
 * Callers:
 *     <none>
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 */

CCursorSizes *__stdcall EditionUnloadCursorsAndIcons()
{
  int *v0; // esi
  int v1; // edi
  int i; // esi
  int v3; // edi
  CCursorSizes *result; // eax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(9, 10, &WPP_fa2cb857af273f1c9fc7df7b6f9bea47_Traceguids);
  v0 = &dword_26AE54;
  do
  {
    if ( *v0 )
    {
      v1 = *v0;
      *(_DWORD *)(v1 + 12) = PsGetCurrentProcessWin32Process();
      HMAssignmentUnlock(v0);
    }
    v0 += 134;
  }
  while ( (int)v0 < (int)&Options.Flags );
  for ( i = 0; i < 2546; i += 134 )
  {
    v3 = *(_DWORD *)(i * 4 + _gasyscur[0] + 4);
    if ( v3 )
    {
      *(_DWORD *)(v3 + 12) = PsGetCurrentProcessWin32Process();
      HMAssignmentUnlock(&_gasyscur[i + 1]);
    }
  }
  result = gpCursorSizes;
  if ( gpCursorSizes )
    result = (CCursorSizes *)Win32FreePool(gpCursorSizes);
  gpCursorSizes = 0;
  return result;
}
