/*
 * XREFs of RtlPcToFileName @ 0x1403CBC60
 * Callers:
 *     KitLogFeatureUsage @ 0x1405B7C00 (KitLogFeatureUsage.c)
 *     PoRegisterPowerSettingCallback @ 0x14071D950 (PoRegisterPowerSettingCallback.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14020D870 (RtlCopyUnicodeString.c)
 *     MmUnlockLoadedModuleListShared @ 0x140297044 (MmUnlockLoadedModuleListShared.c)
 *     MmLockLoadedModuleListShared @ 0x140297178 (MmLockLoadedModuleListShared.c)
 */

__int64 __fastcall RtlPcToFileName(unsigned __int64 a1, UNICODE_STRING *a2)
{
  unsigned int v3; // ebx
  PVOID *v5; // r8
  PVOID *v6; // rdx
  PVOID v7; // rcx
  unsigned __int8 v9; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  v9 = 0;
  MmLockLoadedModuleListShared(&v9);
  v5 = (PVOID *)PsLoadedModuleList;
  if ( PsLoadedModuleList )
  {
    while ( v5 != &PsLoadedModuleList )
    {
      v6 = v5;
      v5 = (PVOID *)*v5;
      v7 = v6[6];
      if ( a1 >= (unsigned __int64)v7 && a1 < (unsigned __int64)v7 + *((unsigned int *)v6 + 16) )
      {
        RtlCopyUnicodeString(a2, (PCUNICODE_STRING)(v6 + 11));
        goto LABEL_6;
      }
    }
  }
  v3 = -1073741275;
LABEL_6:
  MmUnlockLoadedModuleListShared(v9);
  return v3;
}
