/*
 * XREFs of _LdrEnumerateLoadedModules@12 @ 0x4B2A9770
 * Callers:
 *     _RtlLockModuleSection@4 @ 0x4B2A96A0 (_RtlLockModuleSection@4.c)
 * Callees:
 *     _LdrEnumerateLoadedModules@12 @ 0x4B2A9770 (_LdrEnumerateLoadedModules@12.c)
 *     _LdrpDrainWorkQueue@4 @ 0x4B2D19AF (_LdrpDrainWorkQueue@4.c)
 *     _LdrpReleaseLoaderLock@16 @ 0x4B2D26DD (_LdrpReleaseLoaderLock@16.c)
 *     _LdrpAcquireLoaderLock@0 @ 0x4B2D2725 (_LdrpAcquireLoaderLock@0.c)
 *     _LdrpDropLastInProgressCount@0 @ 0x4B2E79C9 (_LdrpDropLastInProgressCount@0.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

NTSTATUS __cdecl LdrEnumerateLoadedModules(BOOLEAN ReservedFlag, PLDR_ENUM_CALLBACK EnumProc, PVOID Context)
{
  char v3; // bl
  int v4; // ecx
  PLDR_DATA_TABLE_ENTRY i; // esi
  NTSTATUS result; // eax
  BOOLEAN v7; // [esp+13h] [ebp-19h] BYREF
  CPPEH_RECORD ms_exc; // [esp+14h] [ebp-18h]

  if ( ReservedFlag || !EnumProc )
    return -1073741811;
  v7 = 0;
  if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
  {
    v3 = 1;
  }
  else
  {
    v3 = 0;
    LdrpDrainWorkQueue(0);
  }
  LdrpAcquireLoaderLock();
  ms_exc.registration.TryLevel = 0;
  for ( i = dword_4B3A5D8C;
        i != (PLDR_DATA_TABLE_ENTRY)&dword_4B3A5D8C;
        i = (PLDR_DATA_TABLE_ENTRY)i->InLoadOrderLinks.Flink )
  {
    ((void (__thiscall *)(PLDR_ENUM_CALLBACK, PLDR_DATA_TABLE_ENTRY, PVOID, BOOLEAN *))EnumProc)(
      EnumProc,
      i,
      Context,
      &v7);
    if ( v7 )
      break;
  }
  ms_exc.registration.TryLevel = -2;
  result = LdrpReleaseLoaderLock(0, v4);
  if ( !v3 )
  {
    LdrpDropLastInProgressCount();
    return 0;
  }
  return result;
}
