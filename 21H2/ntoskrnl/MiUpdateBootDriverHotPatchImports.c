/*
 * XREFs of MiUpdateBootDriverHotPatchImports @ 0x140B09F98
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x140B09D6C (MiInitializeLoadedModuleList.c)
 * Callees:
 *     MiFreeLoadedImportList @ 0x1406EB3D4 (MiFreeLoadedImportList.c)
 *     MiAddEntryToImportList @ 0x140978260 (MiAddEntryToImportList.c)
 */

__int64 MiUpdateBootDriverHotPatchImports()
{
  PVOID *v0; // rbx
  unsigned int v1; // edi
  __int64 v2; // rdx
  PVOID v4; // rsi
  _QWORD *v5; // rax

  v0 = (PVOID *)PsLoadedModuleList;
  v1 = 0;
  while ( v0 != &PsLoadedModuleList )
  {
    if ( (*((_DWORD *)v0 + 49) & 0x20) == 0 )
    {
      v2 = (__int64)v0[35];
      if ( v2 )
      {
        v4 = v0[17];
        if ( v4 != (PVOID)1 )
        {
          v5 = MiAddEntryToImportList((__int64 *)v0[17], v2);
          if ( !v5 )
            return (unsigned int)-1073741670;
          v0[17] = v5;
          MiFreeLoadedImportList(v4);
        }
      }
    }
    v0 = (PVOID *)*v0;
  }
  return v1;
}
