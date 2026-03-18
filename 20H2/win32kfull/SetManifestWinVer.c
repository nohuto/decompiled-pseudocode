/*
 * XREFs of SetManifestWinVer @ 0x1C00F4540
 * Callers:
 *     <none>
 * Callees:
 *     SbGetProcessSwitchContext @ 0x1C00F4610 (SbGetProcessSwitchContext.c)
 *     SbGetContextDetailsByGuid @ 0x1C00F4668 (SbGetContextDetailsByGuid.c)
 */

__int64 SetManifestWinVer()
{
  unsigned __int16 v0; // bx
  _QWORD *v1; // rcx
  __int64 ProcessWow64Process; // rax
  __int64 v3; // rcx
  __int64 ProcessSwitchContext; // rax
  __int64 result; // rax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h]

  v7 = gptiCurrent;
  v0 = -26368;
  v1 = *(_QWORD **)(gptiCurrent + 424LL);
  if ( v1 )
  {
    v6 = 0LL;
    ProcessWow64Process = PsGetProcessWow64Process(*v1);
    if ( ProcessWow64Process )
      v3 = *(unsigned int *)(ProcessWow64Process + 488);
    else
      v3 = *(_QWORD *)(PsGetProcessPeb(**(_QWORD **)(gptiCurrent + 424LL)) + 728);
    ProcessSwitchContext = SbGetProcessSwitchContext(v3);
    if ( ProcessSwitchContext && (unsigned int)SbGetContextDetailsByGuid(ProcessSwitchContext + 48, &v6) )
      v0 = *(_WORD *)(v6 + 22) | (*(_WORD *)(v6 + 20) << 8);
  }
  result = v0;
  *(_DWORD *)(gptiCurrent + 636LL) = v0;
  return result;
}
