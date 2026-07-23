/*
 * XREFs of FsRtlGetMarkHandleInfo @ 0x1404F0158
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x14035EA70 (FsRtlCheckOplockEx2.c)
 * Callees:
 *     IoIs32bitProcess @ 0x140252580 (IoIs32bitProcess.c)
 */

__int64 __fastcall FsRtlGetMarkHandleInfo(IRP *a1)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int Options; // edi
  struct _IRP *v4; // rcx
  struct _IRP *MasterIrp; // rax
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  v8 = 0LL;
  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  v7 = 0LL;
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( !IoIs32bitProcess(a1) )
  {
    if ( Options >= 0x18 )
    {
      MasterIrp = a1->AssociatedIrp.MasterIrp;
      return MasterIrp->Flags;
    }
    return 0LL;
  }
  if ( Options < 0xC )
    return 0LL;
  v4 = a1->AssociatedIrp.MasterIrp;
  LODWORD(v8) = v4->MdlAddress;
  LODWORD(v7) = *(_DWORD *)&v4->Type;
  *((_QWORD *)&v7 + 1) = *(int *)(&v4->Size + 1);
  MasterIrp = (struct _IRP *)&v7;
  return MasterIrp->Flags;
}
