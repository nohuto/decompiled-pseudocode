/*
 * XREFs of PiSwIrpInterfaceRegister @ 0x14076308C
 * Callers:
 *     PiSwDispatch @ 0x140764DB0 (PiSwDispatch.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     RtlStringCbCopyW @ 0x1402E0978 (RtlStringCbCopyW.c)
 *     McTemplateK0zz_EtwWriteTransfer @ 0x14056370C (McTemplateK0zz_EtwWriteTransfer.c)
 *     McTemplateK0zzd_EtwWriteTransfer @ 0x1405637DC (McTemplateK0zzd_EtwWriteTransfer.c)
 *     McTemplateK0zzz_EtwWriteTransfer @ 0x140563B98 (McTemplateK0zzz_EtwWriteTransfer.c)
 *     PiSwUpdateArrayProperties @ 0x140762E04 (PiSwUpdateArrayProperties.c)
 *     PiSwDeviceOperationsAllowed @ 0x140763000 (PiSwDeviceOperationsAllowed.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x14076302C (PiSwDeviceFindInterfaceEntry.c)
 *     PiSwDeviceInterfaceSetState @ 0x14076341C (PiSwDeviceInterfaceSetState.c)
 *     PiSwInterfaceCreate @ 0x140763500 (PiSwInterfaceCreate.c)
 *     IopRegisterDeviceInterface @ 0x140769C24 (IopRegisterDeviceInterface.c)
 *     PiSwValidatePropertyArray @ 0x14076E6B4 (PiSwValidatePropertyArray.c)
 *     PiSwPropertySet @ 0x14076E714 (PiSwPropertySet.c)
 *     PiSwInterfaceFree @ 0x1409536B0 (PiSwInterfaceFree.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwIrpInterfaceRegister(PIRP Irp, __int64 a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  __int64 FsContext2; // rsi
  char v6; // r12
  struct _IRP *MasterIrp; // rcx
  int updated; // edi
  __int64 v9; // r8
  struct _KTHREAD *CurrentThread; // rax
  int v11; // r9d
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 *InterfaceEntry; // rax
  _QWORD *v16; // rdx
  __int64 v17; // r8
  struct _KTHREAD *v18; // rax
  __int64 v19; // r8
  __int64 v20; // r11
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  struct _KTHREAD *v25; // rax
  __int64 v26; // rcx
  __int64 **v27; // rax
  __int64 *v28; // [rsp+30h] [rbp-68h]
  NTSTRSAFE_PCWSTR pszSrc; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v30[11]; // [rsp+40h] [rbp-58h] BYREF
  int v31; // [rsp+B0h] [rbp+18h] BYREF
  PVOID P; // [rsp+B8h] [rbp+20h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v30[1] = CurrentStackLocation;
  FsContext2 = (__int64)CurrentStackLocation->FileObject->FsContext2;
  v30[2] = FsContext2;
  v30[0] = 0LL;
  P = 0LL;
  v28 = 0LL;
  pszSrc = 0LL;
  v31 = 0;
  v6 = 0;
  if ( (byte_140C0DD4C & 2) != 0 )
    McTemplateK0zz_EtwWriteTransfer(
      (__int64)Irp,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_RegisterInterface_Start,
      a3,
      *(const wchar_t **)(FsContext2 + 8),
      *(const wchar_t **)(FsContext2 + 16));
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( !MasterIrp )
  {
    updated = -1073741811;
    goto LABEL_42;
  }
  updated = MesDecodeBufferHandleCreate(MasterIrp, CurrentStackLocation->Parameters.Create.Options, v30);
  if ( updated >= 0 )
  {
    NdrMesTypeDecode3(v30[0], "TP 3\a", &off_140A380F0, &off_140C02FC0, 2, &P, 0LL);
    if ( P && *(_QWORD *)P && ((v9 = *((_QWORD *)P + 3)) != 0 || !*((_DWORD *)P + 4)) && (*((_DWORD *)P + 4) || !v9) )
    {
      updated = PiSwValidatePropertyArray(*((_QWORD *)P + 3));
      if ( updated >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
        if ( !PiSwDeviceOperationsAllowed(FsContext2) || (*(_DWORD *)(FsContext2 + 64) & 8) != 0 )
        {
          updated = -1073741637;
        }
        else
        {
          LOBYTE(v11) = 1;
          updated = IopRegisterDeviceInterface(
                      *(_QWORD *)(FsContext2 + 80),
                      *(_QWORD *)P,
                      *((_QWORD *)P + 1),
                      v11,
                      (__int64)&pszSrc,
                      (__int64)&v31);
          if ( updated >= 0 )
          {
            if ( (byte_140C0DD4C & 2) != 0 )
              McTemplateK0zzz_EtwWriteTransfer(
                v12,
                (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_InterfaceRegistered,
                v13,
                *(const wchar_t **)(FsContext2 + 8),
                *(const wchar_t **)(FsContext2 + 16),
                pszSrc);
            v14 = *(_QWORD *)(FsContext2 + 120);
            if ( v14 )
              *(_DWORD *)(v14 + 48) |= v31;
            InterfaceEntry = PiSwDeviceFindInterfaceEntry(FsContext2, pszSrc);
            v28 = InterfaceEntry;
            if ( InterfaceEntry )
            {
              updated = PiSwUpdateArrayProperties(
                          InterfaceEntry[3],
                          *((_DWORD *)InterfaceEntry + 8),
                          *((_QWORD *)P + 3),
                          *((_DWORD *)P + 4));
LABEL_21:
              ExReleaseResourceLite(&PiSwLockObj);
              KeLeaveCriticalRegion();
              if ( updated < 0 )
                goto LABEL_42;
              v17 = *((_QWORD *)P + 3);
              if ( v17 )
                updated = PiSwPropertySet(v28[2], 3LL, v17, *((unsigned int *)P + 4));
              if ( updated < 0 )
                goto LABEL_42;
              v18 = KeGetCurrentThread();
              --v18->KernelApcDisable;
              ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
              LOBYTE(v19) = *((_BYTE *)P + 32);
              updated = PiSwDeviceInterfaceSetState(FsContext2, v28, v19);
              goto LABEL_26;
            }
            updated = PiSwInterfaceCreate(pszSrc);
            if ( updated >= 0 )
            {
              v6 = 1;
              v16 = *(_QWORD **)(FsContext2 + 192);
              if ( *v16 != FsContext2 + 184 )
                goto LABEL_54;
              MEMORY[0] = FsContext2 + 184;
              MEMORY[8] = v16;
              *v16 = 0LL;
              *(_QWORD *)(FsContext2 + 192) = 0LL;
              goto LABEL_21;
            }
          }
        }
LABEL_26:
        ExReleaseResourceLite(&PiSwLockObj);
        KeLeaveCriticalRegion();
        if ( updated < 0 )
          goto LABEL_42;
        updated = RtlStringCbCopyW(
                    (NTSTRSAFE_PWSTR)Irp->AssociatedIrp.MasterIrp,
                    CurrentStackLocation->Parameters.Read.Length,
                    pszSrc);
        if ( updated >= 0 )
        {
          v21 = -1LL;
          do
            ++v21;
          while ( *(_WORD *)(v20 + 2 * v21) );
          Irp->IoStatus.Information = 2 * v21 + 2;
        }
      }
    }
    else
    {
      updated = -1073741811;
    }
  }
  if ( updated >= 0 )
    goto LABEL_32;
LABEL_42:
  if ( v28 && v6 )
  {
    v25 = KeGetCurrentThread();
    --v25->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    v26 = *v28;
    v27 = (__int64 **)v28[1];
    if ( *(__int64 **)(*v28 + 8) == v28 && *v27 == v28 )
    {
      *v27 = (__int64 *)v26;
      *(_QWORD *)(v26 + 8) = v27;
      ExReleaseResourceLite(&PiSwLockObj);
      KeLeaveCriticalRegion();
      PiSwInterfaceFree(v28);
      goto LABEL_32;
    }
LABEL_54:
    __fastfail(3u);
  }
LABEL_32:
  if ( P )
    ExFreePoolWithTag(P, 0x6370726Bu);
  if ( pszSrc )
    ExFreePoolWithTag((PVOID)pszSrc, 0);
  if ( v30[0] )
    MesHandleFree();
  Irp->IoStatus.Status = updated;
  IofCompleteRequest(Irp, 0);
  if ( (byte_140C0DD4C & 2) != 0 )
    McTemplateK0zzd_EtwWriteTransfer(
      v22,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_RegisterInterface_Stop,
      v23,
      *(const wchar_t **)(FsContext2 + 8),
      *(const wchar_t **)(FsContext2 + 16),
      updated);
  return (unsigned int)updated;
}
