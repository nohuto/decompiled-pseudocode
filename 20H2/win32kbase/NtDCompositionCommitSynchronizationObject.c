/*
 * XREFs of NtDCompositionCommitSynchronizationObject @ 0x1C01CC360
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C0060F80 (UserIsCurrentProcessDwm.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00619C0 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0061F54 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C01CDD84 (-ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 */

__int64 __fastcall NtDCompositionCommitSynchronizationObject(void *a1, __int64 a2)
{
  int v2; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DirectComposition::CConnection *DefaultConnection; // rax
  PERESOURCE *v9; // rdi
  struct _ERESOURCE *v10; // rbx
  unsigned int v11; // edx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  char v14; // [rsp+48h] [rbp+10h] BYREF
  struct DirectComposition::SynchronizationObject *v15; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  v15 = 0LL;
  if ( !UserIsCurrentProcessDwm((__int64)a1, a2) )
  {
    v14 = 0;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"shellExperienceComposer");
    v2 = RtlCapabilityCheck(0LL, &DestinationString, &v14);
    if ( v2 < 0 || !v14 )
      v2 = -1073741790;
  }
  KeEnterCriticalRegion();
  if ( v2 >= 0 )
  {
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(v5, v4, v6, v7);
    v9 = (PERESOURCE *)DefaultConnection;
    if ( DefaultConnection )
    {
      v10 = (struct _ERESOURCE *)*((_QWORD *)DefaultConnection + 1);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v10, 1u);
      v2 = DirectComposition::SynchronizationObject::ResolveHandle(a1, 2u, 1, &v15);
      if ( v2 >= 0 )
        *((_BYTE *)v15 + 33) = 1;
      ExReleaseResourceLite(v9[1]);
      KeLeaveCriticalRegion();
      DirectComposition::CConnection::Release((DirectComposition::CConnection *)v9, v11);
    }
    else
    {
      v2 = -1073741790;
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v2;
}
