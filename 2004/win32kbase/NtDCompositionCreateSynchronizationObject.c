/*
 * XREFs of NtDCompositionCreateSynchronizationObject @ 0x1C01CE820
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C009DB60 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C009E0F4 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C00A7DA0 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     DCompositionCreateSynchronizationObject @ 0x1C01CE420 (DCompositionCreateSynchronizationObject.c)
 */

__int64 __fastcall NtDCompositionCreateSynchronizationObject(_QWORD *a1)
{
  __int64 v2; // rcx
  struct DirectComposition::CConnection *DefaultConnection; // rax
  PERESOURCE *v4; // rdi
  int v5; // ebx
  struct _ERESOURCE *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF
  CompositionObject *v11; // [rsp+50h] [rbp+18h] BYREF
  struct DirectComposition::CConnection *v12; // [rsp+58h] [rbp+20h]

  KeEnterCriticalRegion();
  v11 = 0LL;
  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(v2);
  v4 = (PERESOURCE *)DefaultConnection;
  v12 = DefaultConnection;
  if ( DefaultConnection )
  {
    v6 = (struct _ERESOURCE *)*((_QWORD *)DefaultConnection + 1);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v6, 1u);
    v5 = DCompositionCreateSynchronizationObject(&v11);
    if ( v5 >= 0 )
    {
      Handle = 0LL;
      v5 = CompositionObject::OpenDwmHandle(v11, &Handle, v7, v8);
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
