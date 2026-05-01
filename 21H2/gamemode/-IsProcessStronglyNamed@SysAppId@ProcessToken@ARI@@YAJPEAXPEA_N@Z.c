/*
 * XREFs of ?IsProcessStronglyNamed@SysAppId@ProcessToken@ARI@@YAJPEAXPEA_N@Z @ 0x18000593C
 * Callers:
 *     ReleaseExclusiveCpuSets @ 0x180004F90 (ReleaseExclusiveCpuSets.c)
 * Callees:
 *     ?IsStronglyNamed@SysAppId@ProcessToken@ARI@@YAJPEAXPEA_N@Z @ 0x1800057C0 (-IsStronglyNamed@SysAppId@ProcessToken@ARI@@YAJPEAXPEA_N@Z.c)
 */

__int64 __fastcall ARI::ProcessToken::SysAppId::IsProcessStronglyNamed(HANDLE ProcessHandle, _BYTE *a2, bool *a3)
{
  bool *v5; // r8
  DWORD LastError; // ebx
  void *TokenHandle; // [rsp+30h] [rbp+8h] BYREF

  if ( ProcessHandle == GetCurrentProcess() )
  {
    TokenHandle = (void *)-4LL;
    goto LABEL_5;
  }
  if ( OpenProcessToken(ProcessHandle, 8u, &TokenHandle) )
  {
LABEL_5:
    LastError = 0;
    goto LABEL_6;
  }
  LastError = GetLastError();
LABEL_6:
  if ( !LastError )
  {
    LastError = ARI::ProcessToken::SysAppId::IsStronglyNamed(TokenHandle, a2, v5);
    if ( TokenHandle != (void *)-4LL )
      CloseHandle(TokenHandle);
  }
  return LastError;
}
