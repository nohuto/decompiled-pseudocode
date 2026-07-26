/*
 * XREFs of ndisDispatchRequest @ 0x1C001D550
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006D8C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006F7C (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C001B924 (-ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisCheckAccess@@YAEPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAX@Z @ 0x1C001D854 (-ndisCheckAccess@@YAEPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAX@Z.c)
 *     ?ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z @ 0x1C0020974 (-ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z.c)
 *     ndisDriverSystemDispatch @ 0x1C0032430 (ndisDriverSystemDispatch.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C003BC68 (WPP_RECORDER_SF_qdL.c)
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1C005A3E4 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C005C558 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0xqqq_EtwWriteTransfer @ 0x1C005E278 (McTemplateK0xqqq_EtwWriteTransfer.c)
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C012BDB8 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 */

__int64 __fastcall ndisDispatchRequest(__int64 a1, struct _IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  unsigned int v4; // ebx
  unsigned int v6; // eax
  char *v7; // rdi
  struct _NDIS_MINIPORT_BLOCK *v8; // rsi
  struct _NDIS_MINIPORT_AOAC *AoAc; // r14
  KIRQL v10; // al
  KIRQL v11; // r15
  char **v12; // rcx
  void **v13; // rdx
  int v14; // edx
  int v15; // ecx
  void *v16; // rcx
  _FILE_OBJECT *FileObject; // rax
  void *FsContext; // rcx
  _OWORD *PoolWithTag; // rsi

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = 0;
  a2->IoStatus.Information = 0LL;
  a2->IoStatus.Status = 259;
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( CurrentStackLocation->MajorFunction )
  {
    switch ( CurrentStackLocation->MajorFunction )
    {
      case 2u:
        FileObject = CurrentStackLocation->FileObject;
        FsContext = FileObject->FsContext;
        FileObject->FsContext = 0LL;
        if ( FsContext )
          ExFreePoolWithTag(FsContext, 0);
        _InterlockedDecrement(&dword_1C00E609C);
        goto LABEL_35;
      case 0xEu:
        v6 = ndisHandlePnPRequest(a2);
        break;
      case 0xFu:
LABEL_35:
        a2->IoStatus.Status = v4;
        IofCompleteRequest(a2, 2);
        goto LABEL_36;
      case 0x12u:
        v7 = (char *)CurrentStackLocation->FileObject->FsContext;
        v8 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)v7 + 4);
        if ( *((_DWORD *)v7 + 6)
          && v8
          && ndisReferenceMiniportByHandle(*((struct _NDIS_MINIPORT_BLOCK **)v7 + 4), 0, 3u) )
        {
          AoAc = v8->AoAc;
          v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
          v11 = v10;
          if ( *((_QWORD *)v7 + 4) )
          {
            v12 = (char **)*((_QWORD *)v7 + 1);
            if ( v12[1] != v7 + 8 || (v13 = (void **)*((_QWORD *)v7 + 2), *v13 != v7 + 8) )
              __fastfail(3u);
            *v13 = v12;
            v12[1] = (char *)v13;
            --*((_DWORD *)AoAc + 6);
            if ( *((int *)v7 + 7) > 0 )
            {
              ndisAoAcActiveRefSubtract(AoAc, *((unsigned int *)v7 + 6));
              if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_qdL(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v14,
                  14,
                  47,
                  (struct _GUID *)WPP_dafd92df180233d1e8f46c99921014e6_Traceguids,
                  (char)v8,
                  *((_DWORD *)v7 + 6),
                  *((_DWORD *)AoAc + 13));
              if ( (byte_1C00E6183 & 4) != 0 )
                McTemplateK0xqqq_EtwWriteTransfer(
                  v15,
                  (unsigned int)&NicActiveReleased,
                  (_DWORD)v8 + 4008,
                  v8->NetLuid.Value,
                  *((_DWORD *)v7 + 6),
                  0,
                  *((_DWORD *)AoAc + 13));
            }
            KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v11);
            ndisNicQuietCheckRef(v8);
          }
          else
          {
            KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v10);
          }
          ndisDereferenceMiniport(v8, 3u);
        }
        v16 = (void *)*((_QWORD *)v7 + 6);
        if ( v16 )
        {
          ndisIfDereferenceCompartmentForUser(v16);
          *((_QWORD *)v7 + 6) = 0LL;
        }
        goto LABEL_35;
      case 0x17u:
        v6 = ndisDriverSystemDispatch(a1, a2);
        break;
      default:
        v4 = -1073741822;
        goto LABEL_35;
    }
    v4 = v6;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x636F444Eu);
    if ( !PoolWithTag )
    {
      v4 = -1073741670;
      goto LABEL_35;
    }
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    *((_QWORD *)PoolWithTag + 6) = 0LL;
    *(_BYTE *)PoolWithTag = ndisCheckAccess(a2, CurrentStackLocation, ndisSecurityDescriptor);
    *((_BYTE *)PoolWithTag + 1) = ndisCheckAccess(a2, CurrentStackLocation, &unk_1C00E5E08);
    CurrentStackLocation->FileObject->FsContext = PoolWithTag;
    _InterlockedIncrement(&dword_1C00E609C);
  }
  if ( v4 != 259 )
    goto LABEL_35;
LABEL_36:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  return v4;
}
