/*
 * XREFs of IopInitializeCrashDump @ 0x14084BE78
 * Callers:
 *     IoConfigureCrashDump @ 0x140551D58 (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x14084BDD8 (IoInitializeCrashDump.c)
 *     IopInitCrashDumpRegCallback @ 0x140B219F0 (IopInitCrashDumpRegCallback.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     IopLoadCrashdumpDriver @ 0x1403B670C (IopLoadCrashdumpDriver.c)
 *     IopReadDumpRegistry @ 0x1403CF9A0 (IopReadDumpRegistry.c)
 *     IopInitializeRemovePagesArray @ 0x1403CFAC0 (IopInitializeRemovePagesArray.c)
 *     SecureDump_GetSecureDumpSettings @ 0x1403CFB04 (SecureDump_GetSecureDumpSettings.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14081C234 (FsRtlIssueFileNotificationFsctl.c)
 */

char __fastcall IopInitializeCrashDump(__int64 a1, __int128 *a2)
{
  void *v5; // rcx
  __int64 v6; // rdx
  __int128 v7; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v8[4]; // [rsp+40h] [rbp-30h] BYREF
  char v9; // [rsp+60h] [rbp-10h]
  __int16 v10; // [rsp+61h] [rbp-Fh]
  char v11; // [rsp+63h] [rbp-Dh]
  PVOID Object; // [rsp+90h] [rbp+20h] BYREF

  LODWORD(Object) = 0;
  *(_QWORD *)&v7 = 0LL;
  DWORD2(v7) = 0;
  if ( !ForceDumpDisabled && AllowCrashDump )
  {
    IopReadDumpRegistry(a1, &Object);
    if ( CrashdmpImageEntry && CrashdmpDumpBlock && CrashdmpInitialized || !(_DWORD)Object )
      return 1;
    if ( !CrashdmpImageEntry && (int)IopLoadCrashdumpDriver() < 0 )
      return 0;
    if ( (int)SecureDump_GetSecureDumpSettings((__int64)&v7) < 0 )
      return 0;
    if ( (_BYTE)v7 )
    {
      if ( !qword_140C54E38 )
        return 0;
      v8[3] = *(_QWORD *)((char *)&v7 + 4);
      v9 = BYTE1(v7);
      v8[1] = SecureDump_Get_SecureDumpHeader;
      v8[2] = SecureDump_Encrypt_DmpData;
      v8[0] = 40LL;
      v10 = 0;
      v11 = 0;
      if ( (int)qword_140C54E38(v8) < 0 )
        return 0;
    }
    v7 = *a2;
    if ( (int)((__int64 (__fastcall *)(__int64, __int64 *, __int128 *))qword_140C54DD8)(a1, &CrashdmpDumpBlock, &v7) >= 0 )
    {
      CrashdmpInitialized = 1;
      v5 = *(void **)(CrashdmpDumpBlock + 1352);
      if ( !v5 )
      {
        if ( !a1 )
        {
LABEL_16:
          if ( *(_DWORD *)(CrashdmpDumpBlock + 1336) == 6 && *(_QWORD *)(CrashdmpDumpBlock + 8) )
          {
            if ( UseRemovePagesArray )
              IopInitializeRemovePagesArray();
          }
          return 1;
        }
        v5 = (void *)a1;
      }
      Object = 0LL;
      if ( ObReferenceObjectByHandle(v5, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL) >= 0 )
      {
        FsRtlIssueFileNotificationFsctl(
          (PFILE_OBJECT)Object,
          v6,
          (__int128 *)&FILE_TYPE_NOTIFICATION_GUID_CRASHDUMP_FILE);
        ObfDereferenceObject(Object);
      }
      goto LABEL_16;
    }
    CrashdmpDumpBlock = 0LL;
  }
  return 0;
}
