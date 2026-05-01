/*
 * XREFs of ?IsDeviceDomainJoined@@YA_NXZ @ 0x1800971BC
 * Callers:
 *     ?GetWindowsSearchBoxWidth@@YAH_N0@Z @ 0x180096E98 (-GetWindowsSearchBoxWidth@@YAH_N0@Z.c)
 *     ?GetWindowsSearchBoxWidthWithMonParamConsidered@@YAH_N00@Z @ 0x180096F54 (-GetWindowsSearchBoxWidthWithMonParamConsidered@@YAH_N00@Z.c)
 * Callees:
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180196A8C (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

bool IsDeviceDomainJoined(void)
{
  DWORD JoinInformation; // eax
  bool v1; // bl
  unsigned int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v5; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Buffer; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  Buffer = 0LL;
  JoinInformation = NetGetJoinInformation(0LL, (LPWSTR *)&Buffer, (PNETSETUP_JOIN_STATUS)&v5);
  if ( JoinInformation )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      (void *)0x94,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\CortanaHelp.h",
      (const char *)JoinInformation,
      v3);
  v1 = v5 == 3;
  if ( Buffer )
    NetApiBufferFree(Buffer);
  return v1;
}
