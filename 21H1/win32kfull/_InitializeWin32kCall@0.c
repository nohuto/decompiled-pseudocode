/*
 * XREFs of _InitializeWin32kCall@0 @ 0xF8EA8
 * Callers:
 *     _EditionBaseDriverEntryInitialize@0 @ 0xECAA0 (_EditionBaseDriverEntryInitialize@0.c)
 * Callees:
 *     ?ResolveApiSetHost@@YGJPAU_Win32kApiSet@@PAX@Z @ 0xF8DBA (-ResolveApiSetHost@@YGJPAU_Win32kApiSet@@PAX@Z.c)
 *     ?SetWin32kSilo@@YGPAU_EJOB@@AAPAX@Z @ 0xF8E50 (-SetWin32kSilo@@YGPAU_EJOB@@AAPAX@Z.c)
 */

int __stdcall InitializeWin32kCall()
{
  int v0; // ebx
  int CurrentProcess; // eax
  int v2; // esi
  struct _EJOB *v3; // edi
  int v4; // eax
  int v6; // [esp+Ch] [ebp-4h] BYREF

  v0 = 0;
  CurrentProcess = PsGetCurrentProcess();
  v6 = *(_DWORD *)(PsGetProcessPeb(CurrentProcess) + 56);
  v2 = 0;
  v3 = SetWin32kSilo(&v6);
  if ( off_266244 )
  {
    v4 = 0;
    do
    {
      v0 = ResolveApiSetHost(&(&Win32kApiSetTable)[v4]);
      if ( v0 < 0 )
        break;
      ++v2;
      v4 = 2 * v2;
    }
    while ( (&off_266244)[2 * v2] );
  }
  if ( v3 )
    PsDetachSiloFromCurrentThread(v3);
  return v0;
}
