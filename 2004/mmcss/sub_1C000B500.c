/*
 * XREFs of sub_1C000B500 @ 0x1C000B500
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000B570 @ 0x1C000B570 (sub_1C000B570.c)
 */

__int64 __fastcall sub_1C000B500(__int64 a1, IRP *a2)
{
  _QWORD *FsContext; // rax

  FsContext = a2->Tail.Overlay.CurrentStackLocation->FileObject->FsContext;
  if ( FsContext )
  {
    if ( *(_DWORD *)FsContext )
    {
      if ( *(_DWORD *)FsContext != 1 )
        FsContext[1] = 0LL;
    }
    else
    {
      sub_1C000B570(FsContext);
    }
  }
  a2->IoStatus.Status = 0;
  a2->IoStatus.Information = 0LL;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
