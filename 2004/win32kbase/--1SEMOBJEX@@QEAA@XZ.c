/*
 * XREFs of ??1SEMOBJEX@@QEAA@XZ @ 0x1C00CAECC
 * Callers:
 *     HDXDrvEscape @ 0x1C00CAD90 (HDXDrvEscape.c)
 *     GreDrvConnect @ 0x1C01432D0 (GreDrvConnect.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C001EDA0 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall SEMOBJEX::~SEMOBJEX(SEMOBJEX *this, __int64 a2, int a3)
{
  __int64 v3; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  struct _ERESOURCE *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  struct _ERESOURCE *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  struct _ERESOURCE *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  struct _ERESOURCE *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  struct _ERESOURCE *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  struct _ERESOURCE *v22; // rcx
  __int64 v23; // rcx
  struct _ERESOURCE *v24; // rcx
  __int64 v25; // rcx

  v3 = *((_QWORD *)this + 7);
  if ( v3 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem8", v3, a3);
    v22 = (struct _ERESOURCE *)*((_QWORD *)this + 7);
    if ( v22 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v22);
      PsLeavePriorityRegion(v23);
    }
  }
  v5 = *((_QWORD *)this + 6);
  if ( v5 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem7", v5, a3);
    v24 = (struct _ERESOURCE *)*((_QWORD *)this + 6);
    if ( v24 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v24);
      PsLeavePriorityRegion(v25);
    }
  }
  v6 = *((_QWORD *)this + 5);
  if ( v6 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem6", v6, a3);
    v7 = (struct _ERESOURCE *)*((_QWORD *)this + 5);
    if ( v7 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v7);
      PsLeavePriorityRegion(v8);
    }
  }
  v9 = *((_QWORD *)this + 4);
  if ( v9 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem5", v9, a3);
    v10 = (struct _ERESOURCE *)*((_QWORD *)this + 4);
    if ( v10 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v10);
      PsLeavePriorityRegion(v11);
    }
  }
  v12 = *((_QWORD *)this + 3);
  if ( v12 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem4", v12, a3);
    v13 = (struct _ERESOURCE *)*((_QWORD *)this + 3);
    if ( v13 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v13);
      PsLeavePriorityRegion(v14);
    }
  }
  v15 = *((_QWORD *)this + 2);
  if ( v15 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem3", v15, a3);
    v16 = (struct _ERESOURCE *)*((_QWORD *)this + 2);
    if ( v16 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v16);
      PsLeavePriorityRegion(v17);
    }
  }
  v18 = *((_QWORD *)this + 1);
  if ( v18 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem2", v18, a3);
    v19 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
    if ( v19 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v19);
      PsLeavePriorityRegion(v20);
    }
  }
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem1", *(_QWORD *)this, a3);
    if ( *(_QWORD *)this )
    {
      ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)this);
      PsLeavePriorityRegion(v21);
    }
  }
}
