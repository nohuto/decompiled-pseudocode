/*
 * XREFs of NtDCompositionCreateSynchronizationObject @ 0x1C01D47A0
 * Callers:
 *     <none>
 * Callees:
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C00B43C0 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00BA790 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C00BAD24 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     DCompositionCreateSynchronizationObject @ 0x1C01D43A0 (DCompositionCreateSynchronizationObject.c)
 */

__int64 __fastcall NtDCompositionCreateSynchronizationObject(_QWORD *a1)
{
  __int64 v2; // rcx
  struct DirectComposition::CConnection *DefaultConnection; // rax
  PERESOURCE *v4; // rdi
  int v5; // ebx
  struct _ERESOURCE *v6; // rbx
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF
  CompositionObject *v9; // [rsp+50h] [rbp+18h] BYREF
  struct DirectComposition::CConnection *v10; // [rsp+58h] [rbp+20h]

  KeEnterCriticalRegion();
  v9 = 0LL;
  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(v2);
  v4 = (PERESOURCE *)DefaultConnection;
  v10 = DefaultConnection;
  if ( DefaultConnection )
  {
    v6 = (struct _ERESOURCE *)*((_QWORD *)DefaultConnection + 1);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v6, 1u);
    v5 = DCompositionCreateSynchronizationObject(&v9);
    if ( v5 >= 0 )
    {
      Handle = 0LL;
      v5 = CompositionObject::OpenDwmHandle(v9, &Handle);
      if ( v5 >= 0 )
      {
        if ( (unsigned __int64)a1 >= MmUserProbeAddress )
          a1 = (_QWORD *)MmUserProbeAddress;
        *a1 = Handle;
      }
    }
  }
  else
  {
    v5 = -1073741790;
  }
  if ( v4 )
  {
    ExReleaseResourceLite(v4[1]);
    KeLeaveCriticalRegion();
    DirectComposition::CConnection::Release((DirectComposition::CConnection *)v4);
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
