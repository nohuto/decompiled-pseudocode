/*
 * XREFs of ?SetWin32kSilo@@YGPAU_EJOB@@AAPAX@Z @ 0xF8E50
 * Callers:
 *     _InitializeWin32kCall@0 @ 0xF8EA8 (_InitializeWin32kCall@0.c)
 *     _UnloadWin32kCall@0 @ 0xF8F1A (_UnloadWin32kCall@0.c)
 * Callees:
 *     <none>
 */

struct _EJOB *__thiscall SetWin32kSilo(_DWORD *this)
{
  int v2; // esi
  int HostSilo; // eax
  _DWORD JobInformation[6]; // [esp+10h] [ebp-18h] BYREF

  v2 = 0;
  if ( (unsigned __int8)PsIsCurrentThreadInServerSilo() )
  {
    memset(JobInformation, 0, sizeof(JobInformation));
    if ( ZwQueryInformationJobObject(0, JobObjectEndOfJobTimeInformation|0x20, JobInformation, 0x18u, 0) >= 0 )
    {
      if ( LOBYTE(JobInformation[3]) )
      {
        HostSilo = PsGetHostSilo();
        v2 = PsAttachSiloToCurrentThread(HostSilo);
        *this = JobInformation[5];
      }
    }
  }
  return (struct _EJOB *)v2;
}
