/*
 * XREFs of _MakeSystemRelativePath@12 @ 0x2495C3
 * Callers:
 *     ?LoadModuleWorkHorse@@YGPAXPAGH@Z @ 0x1E888C (-LoadModuleWorkHorse@@YGPAXPAGH@Z.c)
 *     ?EngCreateFile@@YGPAXPBG@Z @ 0x1FCA70 (-EngCreateFile@@YGPAXPBG@Z.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 */

int __fastcall MakeSystemRelativePath(PCWSTR Source, PUNICODE_STRING Destination, int a3)
{
  const WCHAR *v3; // edi
  PCWSTR v5; // esi
  PCWSTR v6; // ecx
  int v8; // esi
  int v9; // ecx
  WCHAR *v10; // eax
  const wchar_t *i; // esi

  v3 = Source;
  v5 = Source;
  v6 = Source + 1;
  while ( *v5++ )
    ;
  v8 = v5 - v6;
  Destination->Length = 0;
  v9 = 2 * v8 + 44;
  Destination->MaximumLength = v9;
  v10 = (WCHAR *)PALLOCMEM2(v9, 1818838599, 0);
  Destination->Buffer = v10;
  if ( !v10 )
    return 0;
  for ( i = &v3[v8 - 10]; i >= v3; --i )
  {
    if ( !__wcsnicmp(i, L"\\system32\\", 0xAu) )
    {
      v3 = i + 10;
      break;
    }
  }
  RtlAppendUnicodeToString(Destination, L"\\SystemRoot\\System32\\");
  RtlAppendUnicodeToString(Destination, v3);
  return 1;
}
