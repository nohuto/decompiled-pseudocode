/*
 * XREFs of LdrGetDllHandleByMapping @ 0x180074710
 * Callers:
 *     <none>
 * Callees:
 *     LdrpIncrementModuleLoadCount @ 0x18001F544 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x1800302E4 (LdrpDereferenceModule.c)
 *     RtlImageNtHeaderEx @ 0x180032AD0 (RtlImageNtHeaderEx.c)
 *     LdrpFindLoadedDllByMapping @ 0x1800747C4 (LdrpFindLoadedDllByMapping.c)
 *     LdrpFatalExceptionFilter @ 0x1800D5700 (LdrpFatalExceptionFilter.c)
 */

NTSTATUS __cdecl LdrGetDllHandleByMapping(PVOID BaseAddress, PVOID *DllHandle)
{
  NTSTATUS LoadedDllByMapping; // ebx
  char *v5; // rdi
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+28h] [rbp-10h] BYREF
  int v8; // [rsp+50h] [rbp+18h]
  PVOID BaseAddressa; // [rsp+58h] [rbp+20h]

  LoadedDllByMapping = RtlImageNtHeaderEx(1u, BaseAddress, 0LL, &OutHeaders);
  if ( LoadedDllByMapping >= 0 )
  {
    LoadedDllByMapping = LdrpFindLoadedDllByMapping(BaseAddress, OutHeaders);
    if ( LoadedDllByMapping >= 0 )
    {
      if ( v8 < 7 )
      {
        LoadedDllByMapping = -1073741515;
        v5 = (char *)BaseAddressa;
      }
      else
      {
        v5 = (char *)BaseAddressa;
        LoadedDllByMapping = LdrpIncrementModuleLoadCount((__int64)BaseAddressa);
        if ( LoadedDllByMapping >= 0 )
          *DllHandle = (PVOID)*((_QWORD *)BaseAddressa + 6);
      }
      LdrpDereferenceModule(v5);
    }
  }
  return LoadedDllByMapping;
}
