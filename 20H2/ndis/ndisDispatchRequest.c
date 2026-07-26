/*
 * XREFs of ndisDispatchRequest @ 0x1C001D340
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006C9C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006E8C (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C001B714 (-ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisCheckAccess@@YAEPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAX@Z @ 0x1C001D4EC (-ndisCheckAccess@@YAEPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAX@Z.c)
 *     ?ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z @ 0x1C0020614 (-ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z.c)
 *     ndisDriverSystemDispatch @ 0x1C00320D0 (ndisDriverSystemDispatch.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C003B908 (WPP_RECORDER_SF_qdL.c)
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1C005A150 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C005C2C8 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0xqqq_EtwWriteTransfer @ 0x1C005DFE8 (McTemplateK0xqqq_EtwWriteTransfer.c)
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C012BDB8 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 */

__int64 __fastcall ndisDispatchRequest(__int64 a1, _IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  unsigned int v4; // ebx
  unsigned int v6; // eax
  char *FsContext; // rdi
  struct _NDIS_MINIPORT_BLOCK *v9; // rbp
  void *v10; // rcx
  _OWORD *PoolWithTag; // rdi
  struct _NDIS_MINIPORT_AOAC *AoAc; // r14
  KIRQL v13; // al
  KIRQL v14; // r12
  char **v15; // rdx
  void **v16; // rcx
  int v17; // edx
  int v18; // ecx

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
LABEL_7:
        a2->IoStatus.Status = v4;
        IofCompleteRequest(a2, 2);
        goto LABEL_8;
      case 0xEu:
        v6 = ndisHandlePnPRequest(a2);
        break;
      case 0xFu:
        goto LABEL_7;
      case 0x12u:
        FsContext = (char *)CurrentStackLocation->FileObject->FsContext;
        v9 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)FsContext + 4);
        if ( *((_DWORD *)FsContext + 6)
          && v9
          && ndisReferenceMiniportByHandle(*((struct _NDIS_MINIPORT_BLOCK **)FsContext + 4), 0, 3u) )
        {
          AoAc = v9->AoAc;
          v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
          v14 = v13;
          if ( *((_QWORD *)FsContext + 4) )
          {
            v15 = (char **)*((_QWORD *)FsContext + 1);
            if ( v15[1] != FsContext + 8 || (v16 = (void **)*((_QWORD *)FsContext + 2), *v16 != FsContext + 8) )
              __fastfail(3u);
            *v16 = v15;
            v15[1] = (char *)v16;
            --*((_DWORD *)AoAc + 6);
            if ( *((int *)FsContext + 7) > 0 )
            {
              ndisAoAcActiveRefSubtract(AoAc, *((unsigned int *)FsContext + 6));
              if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_qdL(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v17,
                  14,
                  47,
                  (struct _GUID *)WPP_dafd92df180233d1e8f46c99921014e6_Traceguids,
                  (char)v9,
                  *((_DWORD *)FsContext + 6),
                  *((_DWORD *)AoAc + 13));
              if ( (byte_1C00E61C3 & 4) != 0 )
                McTemplateK0xqqq_EtwWriteTransfer(
                  v18,
                  (unsigned int)&NicActiveReleased,
                  (_DWORD)v9 + 4008,
                  v9->NetLuid.Value,
                  *((_DWORD *)FsContext + 6),
                  0,
                  *((_DWORD *)AoAc + 13));
            }
            KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v14);
            ndisNicQuietCheckRef(v9);
          }
          else
          {
            KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v13);
          }
          ndisDereferenceMiniport(v9, 3u);
        }
        v10 = (void *)*((_QWORD *)FsContext + 6);
        if ( v10 )
        {
          ndisIfDereferenceCompartmentForUser(v10);
          *((_QWORD *)FsContext + 6) = 0LL;
        }
        CurrentStackLocation->FileObject->FsContext = 0LL;
        ExFreePoolWithTag(FsContext, 0);
        _InterlockedDecrement(&dword_1C00E60DC);
        goto LABEL_7;
      case 0x17u:
        v6 = ndisDriverSystemDispatch(a1, a2);
        break;
      default:
        v4 = -1073741822;
        goto LABEL_7;
    }
    v4 = v6;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x636F444Eu);
    if ( !PoolWithTag )
    {
      v4 = -1073741670;
      goto LABEL_7;
    }
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    *((_QWORD *)PoolWithTag + 6) = 0LL;
    *(_BYTE *)PoolWithTag = ndisCheckAccess(a2, CurrentStackLocation, ndisSecurityDescriptor);
    *((_BYTE *)PoolWithTag + 1) = ndisCheckAccess(a2, CurrentStackLocation, &unk_1C00E5E48);
    CurrentStackLocation->FileObject->FsContext = PoolWithTag;
    _InterlockedIncrement(&dword_1C00E60DC);
  }
  if ( v4 != 259 )
    goto LABEL_7;
LABEL_8:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  return v4;
}
