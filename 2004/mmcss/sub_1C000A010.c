/*
 * XREFs of sub_1C000A010 @ 0x1C000A010
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003170 (_guard_dispatch_icall_nop.c)
 *     sub_1C0004474 @ 0x1C0004474 (sub_1C0004474.c)
 */

__int64 __fastcall sub_1C000A010(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  __int64 v4; // rbx
  PFILE_OBJECT FileObject; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = 0LL;
  FileObject = CurrentStackLocation->FileObject;
  do
  {
    if ( !RtlCompareUnicodeString(&FileObject->FileName, (PCUNICODE_STRING)((char *)&unk_1C0006A00 + 24 * v4), 0) )
      return (*((__int64 (__fastcall **)(IRP *, struct _IO_STACK_LOCATION *))&unk_1C0006A00 + 3 * v4 + 2))(
               a2,
               CurrentStackLocation);
    v4 = (unsigned int)(v4 + 1);
  }
  while ( (unsigned int)v4 < 3 );
  if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 2u )
    sub_1C0004474((__int64)off_1C0007000->AttachedDevice, v6, v7, &FileObject->FileName.Length);
  a2->IoStatus.Status = -1073741275;
  a2->IoStatus.Information = 0LL;
  IofCompleteRequest(a2, 0);
  return 3221226021LL;
}
