/*
 * XREFs of sub_1C000B440 @ 0x1C000B440
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0001B60 @ 0x1C0001B60 (sub_1C0001B60.c)
 *     sub_1C000B4C0 @ 0x1C000B4C0 (sub_1C000B4C0.c)
 *     sub_1C000B720 @ 0x1C000B720 (sub_1C000B720.c)
 */

__int64 __fastcall sub_1C000B440(__int64 a1, IRP *a2)
{
  PFILE_OBJECT FileObject; // rcx
  _QWORD *FsContext; // rsi
  volatile signed __int64 *v5; // rcx

  FileObject = a2->Tail.Overlay.CurrentStackLocation->FileObject;
  FsContext = FileObject->FsContext;
  if ( FsContext )
  {
    if ( *(_DWORD *)FsContext == 1 )
    {
      ExAcquirePushLockExclusiveEx(FsContext + 2, 0LL);
      FsContext[1] = 0LL;
      FsContext[3] = 0LL;
      ExReleasePushLockExclusiveEx(FsContext + 2, 0LL);
      sub_1C000B720(FsContext);
    }
    else
    {
      v5 = (volatile signed __int64 *)FileObject->FsContext;
      if ( *(_DWORD *)FsContext )
        sub_1C0001B60(v5);
      else
        sub_1C000B4C0(v5);
    }
  }
  a2->IoStatus.Status = 0;
  a2->IoStatus.Information = 0LL;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
