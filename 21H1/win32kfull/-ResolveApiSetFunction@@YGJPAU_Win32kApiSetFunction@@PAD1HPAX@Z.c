/*
 * XREFs of ?ResolveApiSetFunction@@YGJPAU_Win32kApiSetFunction@@PAD1HPAX@Z @ 0xF8D66
 * Callers:
 *     ?ResolveApiSetHost@@YGJPAU_Win32kApiSet@@PAX@Z @ 0xF8DBA (-ResolveApiSetHost@@YGJPAU_Win32kApiSet@@PAX@Z.c)
 * Callees:
 *     <none>
 */

int __userpurge ResolveApiSetFunction@<eax>(
        int a1@<edx>,
        _DWORD *a2@<ecx>,
        struct _Win32kApiSetFunction *a3,
        char *a4,
        char *a5,
        int a6,
        void *a7)
{
  int ExportedRoutineByName; // edi
  int v9; // ecx
  int v10; // edi
  int v11; // eax

  ExportedRoutineByName = RtlFindExportedRoutineByName(a5, a1);
  if ( ExportedRoutineByName && *(char **)RtlFindExportedRoutineByName(a5, a3) == a4 )
  {
    v9 = 0;
    if ( (int)a4 <= 0 )
      return 0;
    v10 = ExportedRoutineByName - (_DWORD)a2;
    while ( 1 )
    {
      v11 = *(_DWORD *)((char *)a2 + v10);
      *a2 = v11;
      if ( !v11 )
        break;
      ++v9;
      ++a2;
      if ( v9 >= (int)a4 )
        return 0;
    }
  }
  return -1073741772;
}
