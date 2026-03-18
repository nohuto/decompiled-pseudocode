/*
 * XREFs of PiSwIrpInterfaceRegister @ 0x140746F1C
 * Callers:
 *     PiSwDispatch @ 0x140746A60 (PiSwDispatch.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x14023FDE8 (RtlStringCbCopyW.c)
 *     IofCompleteRequest @ 0x140292560 (IofCompleteRequest.c)
 *     PiSwInterfaceFree @ 0x140730A54 (PiSwInterfaceFree.c)
 *     IopRegisterDeviceInterface @ 0x140744474 (IopRegisterDeviceInterface.c)
 *     PiSwDeviceInterfaceSetState @ 0x140746504 (PiSwDeviceInterfaceSetState.c)
 *     PiSwInterfaceCreate @ 0x1407465D8 (PiSwInterfaceCreate.c)
 *     PiSwUnlock @ 0x140747234 (PiSwUnlock.c)
 *     PiSwLock @ 0x140747260 (PiSwLock.c)
 *     PiSwValidatePropertyArray @ 0x140747B40 (PiSwValidatePropertyArray.c)
 *     PiSwPropertySet @ 0x14076851C (PiSwPropertySet.c)
 *     PiSwDeviceOperationsAllowed @ 0x14076D9B8 (PiSwDeviceOperationsAllowed.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x14076E18C (PiSwDeviceFindInterfaceEntry.c)
 *     PiSwUpdateArrayProperties @ 0x1407869B4 (PiSwUpdateArrayProperties.c)
 *     MIDL_user_free @ 0x140982C00 (MIDL_user_free.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwIrpInterfaceRegister(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  __int64 FsContext2; // r14
  _QWORD *v4; // rsi
  char v5; // r12
  struct _IRP *MasterIrp; // rcx
  NTSTATUS updated; // edi
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 InterfaceEntry; // rax
  _QWORD *v11; // rcx
  __int64 v12; // r8
  NTSTRSAFE_PCWSTR v13; // r14
  __int64 v14; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // [rsp+30h] [rbp-68h] BYREF
  NTSTRSAFE_PCWSTR pszSrc; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v20[11]; // [rsp+40h] [rbp-58h] BYREF
  int v21; // [rsp+B0h] [rbp+18h] BYREF
  void *v22; // [rsp+B8h] [rbp+20h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v20[1] = CurrentStackLocation;
  FsContext2 = (__int64)CurrentStackLocation->FileObject->FsContext2;
  v20[2] = FsContext2;
  v20[0] = 0LL;
  v22 = 0LL;
  v4 = 0LL;
  v18 = 0LL;
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
    NdrMesTypeDecode3(v20[0], "TP 3\a", &off_1409862C8, &off_140C01A60, 2, &v22);
    if ( v22
      && *(_QWORD *)v22
      && ((v8 = *((_QWORD *)v22 + 3)) != 0 || !*((_DWORD *)v22 + 4))
      && (*((_DWORD *)v22 + 4) || !v8) )
    {
      updated = PiSwValidatePropertyArray(*((_QWORD *)v22 + 3));
      if ( updated >= 0 )
      {
        PiSwLock();
        if ( !(unsigned __int8)PiSwDeviceOperationsAllowed(FsContext2) || (*(_DWORD *)(FsContext2 + 64) & 8) != 0 )
        {
          updated = -1073741637;
        }
        else
        {
          updated = IopRegisterDeviceInterface(
                      *(_QWORD *)(FsContext2 + 80),
                      *(int **)v22,
                      *((_QWORD *)v22 + 1),
                      1,
                      (PVOID *)&pszSrc,
                      &v21);
          if ( updated >= 0 )
          {
            v9 = *(_QWORD *)(FsContext2 + 120);
            if ( v9 )
              *(_DWORD *)(v9 + 48) |= v21;
            InterfaceEntry = PiSwDeviceFindInterfaceEntry(FsContext2, pszSrc);
            v4 = (_QWORD *)InterfaceEntry;
            v18 = (_QWORD *)InterfaceEntry;
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
                updated = PiSwPropertySet(v4[2], 3LL, v12, *((unsigned int *)v22 + 4));
              if ( updated < 0 )
                goto LABEL_36;
              PiSwLock();
              updated = PiSwDeviceInterfaceSetState(FsContext2, (__int64)v4, *((_BYTE *)v22 + 32));
              goto LABEL_22;
            }
            updated = PiSwInterfaceCreate(pszSrc, *((_QWORD *)v22 + 3), *((_DWORD *)v22 + 4), (PVOID *)&v18);
            if ( updated >= 0 )
            {
              v5 = 1;
              v11 = *(_QWORD **)(FsContext2 + 192);
              if ( *v11 != FsContext2 + 184 )
                goto LABEL_48;
              v4 = v18;
              *v18 = FsContext2 + 184;
              v4[1] = v11;
              *v11 = v4;
              *(_QWORD *)(FsContext2 + 192) = v4;
              goto LABEL_17;
            }
            v4 = v18;
          }
        }
LABEL_22:
        PiSwUnlock();
        if ( updated < 0 )
          goto LABEL_36;
        v13 = pszSrc;
        updated = RtlStringCbCopyW(
                    (NTSTRSAFE_PWSTR)Irp->AssociatedIrp.MasterIrp,
                    CurrentStackLocation->Parameters.Read.Length,
                    pszSrc);
        if ( updated >= 0 )
        {
          v14 = -1LL;
          do
            ++v14;
          while ( v13[v14] );
          Irp->IoStatus.Information = 2 * v14 + 2;
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
    v16 = *v4;
    v17 = (_QWORD *)v4[1];
    if ( *(_QWORD **)(*v4 + 8LL) == v4 && (_QWORD *)*v17 == v4 )
    {
      *v17 = v16;
      *(_QWORD *)(v16 + 8) = v17;
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
