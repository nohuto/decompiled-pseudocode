/*
 * XREFs of DpiFdoDispatchCleanupAndClose @ 0x1C02C8970
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C00E20CC (DpiEnableD3Requests.c)
 */

NTSTATUS __fastcall DpiFdoDispatchCleanupAndClose(__int64 a1, IRP *a2)
{
  __int64 v2; // rbx
  PIRP v5; // rax

  v2 = *(_QWORD *)(a1 + 64);
  if ( !*(_BYTE *)(v2 + 1159) )
  {
    if ( *(_BYTE *)(v2 + 1158) )
    {
      ++a2->CurrentLocation;
      ++a2->Tail.Overlay.CurrentStackLocation;
      return IofCallDriver(*(PDEVICE_OBJECT *)(v2 + 160), a2);
    }
    if ( *(_BYTE *)(v2 + 57) && a2->Tail.Overlay.CurrentStackLocation->MajorFunction == 2 )
    {
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v2 + 484) )
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 64LL) + 4080LL));
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v2 + 168), 1u);
      if ( !_InterlockedDecrement((volatile signed __int32 *)(v2 + 5712)) )
      {
        while ( 1 )
        {
          v5 = IoCsqRemoveNextIrp((PIO_CSQ)(v2 + 5328), 0LL);
          if ( !v5 )
            break;
          v5->IoStatus.Information = 0LL;
          v5->IoStatus.Status = -1073741536;
          IofCompleteRequest(v5, 0);
        }
        *(_BYTE *)(v2 + 5444) = 0;
        *(_BYTE *)(v2 + 5476) = 0;
      }
      if ( *(_BYTE *)(v2 + 484) )
        DpiEnableD3Requests(*(_QWORD *)(v2 + 24));
      ExReleaseResourceLite(*(PERESOURCE *)(v2 + 168));
      KeLeaveCriticalRegion();
    }
  }
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 0;
}
