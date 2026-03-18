/*
 * XREFs of PiSwIrpInterfaceRegister @ 0x140752F94
 * Callers:
 *     PiSwDispatch @ 0x140753730 (PiSwDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x140248710 (IofCompleteRequest.c)
 *     RtlStringCbCopyW @ 0x1402DF118 (RtlStringCbCopyW.c)
 *     PiSwInterfaceFree @ 0x140720A84 (PiSwInterfaceFree.c)
 *     PiSwUnlock @ 0x14072C6C0 (PiSwUnlock.c)
 *     PiSwLock @ 0x14072C754 (PiSwLock.c)
 *     PiSwPropertySet @ 0x14072D9E8 (PiSwPropertySet.c)
 *     IopRegisterDeviceInterface @ 0x14072DB00 (IopRegisterDeviceInterface.c)
 *     PiSwDeviceInterfaceSetState @ 0x1407532AC (PiSwDeviceInterfaceSetState.c)
 *     PiSwInterfaceCreate @ 0x140753380 (PiSwInterfaceCreate.c)
 *     PiSwValidatePropertyArray @ 0x14075449C (PiSwValidatePropertyArray.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x1407544FC (PiSwDeviceFindInterfaceEntry.c)
 *     PiSwDeviceOperationsAllowed @ 0x14075461C (PiSwDeviceOperationsAllowed.c)
 *     PiSwUpdateArrayProperties @ 0x140775FA4 (PiSwUpdateArrayProperties.c)
 *     MIDL_user_free @ 0x14097BA90 (MIDL_user_free.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwIrpInterfaceRegister(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  _QWORD *FsContext2; // r14
  const WCHAR **v4; // rsi
  char v5; // r12
  struct _IRP *MasterIrp; // rcx
  NTSTATUS updated; // edi
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 InterfaceEntry; // rax
  PVOID *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r8
  NTSTRSAFE_PCWSTR v14; // r14
  __int64 v15; // rax
  const WCHAR *v17; // rcx
  void **v18; // rax
  NTSTRSAFE_PCWSTR pszSrc; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v20[11]; // [rsp+40h] [rbp-58h] BYREF
  int v21; // [rsp+B0h] [rbp+18h] BYREF
  void *v22; // [rsp+B8h] [rbp+20h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v20[1] = CurrentStackLocation;
  FsContext2 = CurrentStackLocation->FileObject->FsContext2;
  v20[2] = FsContext2;
  v20[0] = 0LL;
  v22 = 0LL;
  v4 = 0LL;
  pszSrc = 0LL;
  v21 = 0;
  v5 = 0;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( !MasterIrp )
  {
    updated = -1073741811;
    goto LABEL_36;
  }
  updated = MesDecodeBufferHandleCreate(MasterIrp, CurrentStackLocation->Parameters.Create.Options, v20);
  if ( updated >= 0 )
  {
    NdrMesTypeDecode3(v20[0], "TP 3\a", &off_14097F158, &off_140C01A60, 2, &v22);
    if ( v22
      && *(_QWORD *)v22
      && ((v8 = *((_QWORD *)v22 + 3)) != 0 || !*((_DWORD *)v22 + 4))
      && (*((_DWORD *)v22 + 4) || !v8) )
    {
      updated = PiSwValidatePropertyArray(*((_QWORD *)v22 + 3));
      if ( updated >= 0 )
      {
        PiSwLock();
        if ( !(unsigned __int8)PiSwDeviceOperationsAllowed(FsContext2) || (FsContext2[8] & 8) != 0 )
        {
          updated = -1073741637;
        }
        else
        {
          updated = IopRegisterDeviceInterface(
                      FsContext2[10],
                      *(int **)v22,
                      *((_QWORD *)v22 + 1),
                      1,
                      (PVOID *)&pszSrc,
                      &v21);
          if ( updated >= 0 )
          {
            v9 = FsContext2[15];
            if ( v9 )
              *(_DWORD *)(v9 + 48) |= v21;
            InterfaceEntry = PiSwDeviceFindInterfaceEntry(FsContext2, pszSrc);
            v4 = (const WCHAR **)InterfaceEntry;
            if ( InterfaceEntry )
            {
              updated = PiSwUpdateArrayProperties(
                          *(_QWORD *)(InterfaceEntry + 24),
                          *(unsigned int *)(InterfaceEntry + 32),
                          *((_QWORD *)v22 + 3),
                          *((unsigned int *)v22 + 4));
LABEL_17:
              PiSwUnlock();
              if ( updated < 0 )
                goto LABEL_36;
              v12 = *((_QWORD *)v22 + 3);
              if ( v12 )
                updated = PiSwPropertySet(v4[2], 3u, v12, *((_DWORD *)v22 + 4));
              if ( updated < 0 )
                goto LABEL_36;
              PiSwLock();
              LOBYTE(v13) = *((_BYTE *)v22 + 32);
              updated = PiSwDeviceInterfaceSetState(FsContext2, v4, v13);
              goto LABEL_22;
            }
            updated = PiSwInterfaceCreate(pszSrc);
            if ( updated >= 0 )
            {
              v5 = 1;
              v11 = (PVOID *)FsContext2[24];
              if ( *v11 != FsContext2 + 23 )
                goto LABEL_48;
              v4 = 0LL;
              MEMORY[0] = FsContext2 + 23;
              MEMORY[8] = v11;
              *v11 = 0LL;
              FsContext2[24] = 0LL;
              goto LABEL_17;
            }
            v4 = 0LL;
          }
        }
LABEL_22:
        PiSwUnlock();
        if ( updated < 0 )
          goto LABEL_36;
        v14 = pszSrc;
        updated = RtlStringCbCopyW(
                    (NTSTRSAFE_PWSTR)Irp->AssociatedIrp.MasterIrp,
                    CurrentStackLocation->Parameters.Read.Length,
                    pszSrc);
        if ( updated >= 0 )
        {
          v15 = -1LL;
          do
            ++v15;
          while ( v14[v15] );
          Irp->IoStatus.Information = 2 * v15 + 2;
        }
      }
    }
    else
    {
      updated = -1073741811;
    }
  }
  if ( updated >= 0 )
    goto LABEL_28;
LABEL_36:
  if ( v4 && v5 )
  {
    PiSwLock();
    v17 = *v4;
    v18 = (void **)v4[1];
    if ( *((const WCHAR ***)*v4 + 1) == v4 && *v18 == v4 )
    {
      *v18 = (void *)v17;
      *((_QWORD *)v17 + 1) = v18;
      PiSwUnlock();
      PiSwInterfaceFree(v4);
      goto LABEL_28;
    }
LABEL_48:
    __fastfail(3u);
  }
LABEL_28:
  if ( v22 )
    MIDL_user_free(v22);
  if ( pszSrc )
    ExFreePoolWithTag((PVOID)pszSrc, 0);
  if ( v20[0] )
    MesHandleFree();
  Irp->IoStatus.Status = updated;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)updated;
}
