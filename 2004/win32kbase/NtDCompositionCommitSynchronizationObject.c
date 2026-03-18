/*
 * XREFs of NtDCompositionCommitSynchronizationObject @ 0x1C01CE6E0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C009D410 (UserIsCurrentProcessDwm.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C009DB60 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C009E0F4 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C01D0104 (-ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 */

__int64 __fastcall NtDCompositionCommitSynchronizationObject(void *a1, __int64 a2)
{
  int v2; // ebx
  __int64 v4; // rcx
  struct DirectComposition::CConnection *DefaultConnection; // rax
  PERESOURCE *v6; // rdi
  struct _ERESOURCE *v7; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  char v10; // [rsp+48h] [rbp+10h] BYREF
  struct DirectComposition::SynchronizationObject *v11; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  v11 = 0LL;
  if ( !UserIsCurrentProcessDwm((__int64)a1, a2) )
  {
    v10 = 0;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"shellExperienceComposer");
    v2 = RtlCapabilityCheck(0LL, &DestinationString, &v10);
    if ( v2 < 0 || !v10 )
      v2 = -1073741790;
  }
  KeEnterCriticalRegion();
  if ( v2 >= 0 )
  {
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(v4);
    v6 = (PERESOURCE *)DefaultConnection;
    if ( DefaultConnection )
    {
      v7 = (struct _ERESOURCE *)*((_QWORD *)DefaultConnection + 1);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v7, 1u);
      v2 = DirectComposition::SynchronizationObject::ResolveHandle(a1, 2u, 1, &v11);
      if ( v2 >= 0 )
        *((_BYTE *)v11 + 33) = 1;
      ExReleaseResourceLite(v6[1]);
      KeLeaveCriticalRegion();
      DirectComposition::CConnection::Release((DirectComposition::CConnection *)v6);
    }
    else
    {
      v2 = -1073741790;
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v2;
}
