/*
 * XREFs of CempGetProcessHostInfo @ 0x18003119C
 * Callers:
 *     ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000ED7C (-RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x180031088 (-RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 * Callees:
 *     CempGetTokenHostInfo @ 0x180031210 (CempGetTokenHostInfo.c)
 */

__int64 __fastcall CempGetProcessHostInfo(void *a1, void *a2)
{
  NTSTATUS TokenHostInfo; // ebx
  void *TokenHandle; // [rsp+40h] [rbp+18h] BYREF

  TokenHandle = 0LL;
  TokenHostInfo = NtOpenProcessToken(a1, 8u, &TokenHandle);
  if ( TokenHostInfo >= 0 )
    TokenHostInfo = CempGetTokenHostInfo(TokenHandle, a2);
  if ( TokenHandle )
    NtClose(TokenHandle);
  return (unsigned int)TokenHostInfo;
}
