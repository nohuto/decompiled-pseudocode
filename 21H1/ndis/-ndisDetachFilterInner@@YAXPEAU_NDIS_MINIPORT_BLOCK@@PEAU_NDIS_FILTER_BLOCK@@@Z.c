/*
 * XREFs of ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C013747C
 * Callers:
 *     ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C01161C8 (-ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006C9C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006E8C (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0008A74 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     NdisMSleep @ 0x1C0017320 (NdisMSleep.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0018D70 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C0018E88 (-ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1C001A1C8 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     ?ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C001B754 (-ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisCloseRef@@YAEPEAU_REFERENCE_EX@@@Z @ 0x1C0025250 (-ndisCloseRef@@YAEPEAU_REFERENCE_EX@@@Z.c)
 *     ?ndisHandleFilterHandlersChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0026650 (-ndisHandleFilterHandlersChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     PktMonClientComponentUnregister @ 0x1C00267C4 (PktMonClientComponentUnregister.c)
 *     WPP_RECORDER_SF_qqZZ @ 0x1C0029330 (WPP_RECORDER_SF_qqZZ.c)
 *     ??$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@Z @ 0x1C003D5B8 (--$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@.c)
 *     memmove @ 0x1C003F400 (memmove.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C005FA88 (McTemplateK0qqq_EtwWriteTransfer.c)
 *     McTemplateK0juqjzzz_EtwWriteTransfer @ 0x1C0065310 (McTemplateK0juqjzzz_EtwWriteTransfer.c)
 *     ?ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z @ 0x1C0067184 (-ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z.c)
 *     ?ndisFNotifyDetach@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0067B14 (-ndisFNotifyDetach@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0067D70 (-ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisReferenceFilterByHandle@@YAEPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z @ 0x1C0068DC0 (-ndisReferenceFilterByHandle@@YAEPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x1C00FB430 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ?ndisFilterWaitForPnPComplete@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0116304 (-ndisFilterWaitForPnPComplete@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisFInvokeDetach@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C011668C (-ndisFInvokeDetach@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 */

void __fastcall ndisDetachFilterInner(struct _NDIS_MINIPORT_BLOCK *a1, PVOID P)
{
  char v2; // r15
  char v4; // r12
  enum _NDIS_LWF_REFTAG v6; // dl
  _NDIS_BIND_PATHS *BindPaths; // rax
  PVOID v8; // r14
  char *v9; // rbx
  __int64 v10; // rcx
  NTSTATUS v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  KIRQL v15; // dl
  struct NDISWATCHDOG__ *v16; // [rsp+50h] [rbp-20h] BYREF
  struct NDISWATCHDOG__ *v17; // [rsp+58h] [rbp-18h] BYREF
  void (__fastcall *v18)(struct NDISWATCHDOG__ *); // [rsp+60h] [rbp-10h] BYREF
  KIRQL NewIrql; // [rsp+B0h] [rbp+40h] BYREF
  PVOID WnodeEventItem; // [rsp+B8h] [rbp+48h] BYREF

  v2 = 0;
  v4 = 0;
  NewIrql = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x22u,
      (struct _GUID *)&WPP_3188c4384181338fe0d477b94428bcd6_Traceguids,
      P);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( ndisReferenceFilterByHandle((struct _NDIS_FILTER_BLOCK *)P, v6) )
  {
    v2 = 1;
    if ( ndisReferenceMiniportByHandle(a1, 0, 0x29u) )
    {
      v4 = 1;
      ndisFNotifyDetach((struct _NDIS_FILTER_BLOCK *)P);
      ndisCloseRef((PKSPIN_LOCK)P + 39);
      BindPaths = a1->BindPaths;
      WnodeEventItem = 0LL;
      ndisSetupWmiNode(
        a1,
        *((const struct _UNICODE_STRING **)P + 6),
        BindPaths->Paths[0].Length + 4 + *(unsigned __int16 *)(*((_QWORD *)P + 2) + 128LL),
        (__int128 *)&GUID_NDIS_NOTIFY_FILTER_REMOVAL,
        (struct tagWNODE_SINGLE_INSTANCE **)&WnodeEventItem);
      v8 = WnodeEventItem;
      if ( WnodeEventItem )
      {
        v9 = (char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14);
        memmove(v9, *(const void **)(*((_QWORD *)P + 2) + 136LL), *(unsigned __int16 *)(*((_QWORD *)P + 2) + 128LL));
        memmove(
          &v9[*(unsigned __int16 *)(*((_QWORD *)P + 2) + 128LL) + 2],
          a1->BindPaths->Paths[0].Buffer,
          a1->BindPaths->Paths[0].Length);
        v11 = IoWMIWriteEvent(v8);
        if ( v11 < 0 )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              1u,
              0x23u,
              (struct _GUID *)&WPP_3188c4384181338fe0d477b94428bcd6_Traceguids);
          if ( (byte_1C00E6081 & 1) != 0 )
            McTemplateK0qqq_EtwWriteTransfer(v10, &FilterRemovalIndicationFailed, (const GUID *)P + 42, v11, 1, 0);
          ExFreePoolWithTag(v8, 0);
        }
      }
      *((_BYTE *)P + 64) = 6;
      if ( (byte_1C00E6083 & 1) != 0 )
        McTemplateK0juqjzzz_EtwWriteTransfer(
          *((_QWORD *)P + 4) + 4008LL,
          *((_QWORD *)P + 5),
          (const GUID *)P + 42,
          (__int64)P + 672,
          6,
          8,
          *((_QWORD *)P + 4) + 4008LL,
          *(const wchar_t **)(*(_QWORD *)(*((_QWORD *)P + 4) + 3856LL) + 8LL),
          *(const wchar_t **)(*((_QWORD *)P + 5) + 8LL),
          *(const wchar_t **)(*((_QWORD *)P + 6) + 8LL));
      PktMonClientComponentUnregister((_QWORD *)P + 99);
      ndisFilterWaitForPnPComplete((struct _NDIS_FILTER_BLOCK *)P);
      ndisMakeWatchdog(&v16, P, 20, *(void **)(*((_QWORD *)P + 2) + 184LL), 0x41EB0u, 0LL);
      ndisFInvokeDetach((struct _NDIS_FILTER_BLOCK *)P);
      if ( v16 != (struct NDISWATCHDOG__ *)-1LL )
      {
        v17 = v16;
        v18 = ndisFreeWatchdog;
        wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>((__int64 (__fastcall **)(_QWORD))&v18, &v17);
      }
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqZZ(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v12,
          v13,
          0x24u,
          (struct _GUID *)&WPP_3188c4384181338fe0d477b94428bcd6_Traceguids,
          (char)a1,
          (char)P,
          (unsigned __int16 *)(*((_QWORD *)P + 2) + 112LL),
          &a1->pAdapterInstanceName->Length);
      while ( *((_BYTE *)P + 288) )
        NdisMSleep(0x3E8u);
      if ( (*((_DWORD *)P + 14) & 0x8000) != 0 )
      {
        v14 = *((_QWORD *)P + 14);
        if ( v14 )
        {
          a1->MediaType = *(_DWORD *)(v14 + 336);
          a1->PhysicalMediumType = *(_DWORD *)(*((_QWORD *)P + 14) + 340LL);
        }
        else
        {
          a1->MediaType = a1->MiniportMediaType;
          a1->PhysicalMediumType = a1->MiniportPhysicalMediumType;
        }
      }
      NDIS_ACQUIRE_FILTER_SPIN_LOCK((struct _NDIS_FILTER_BLOCK *)P, &NewIrql);
      *((_DWORD *)P + 14) &= ~0x100u;
      v15 = NewIrql;
      *((_QWORD *)P + 19) = 0LL;
      *((_BYTE *)P + 56) = 0;
      *((_DWORD *)P + 14) |= 8u;
      KeReleaseSpinLock((PKSPIN_LOCK)P + 18, v15);
      *((_BYTE *)P + 64) = 0;
      if ( (byte_1C00E6083 & 1) != 0 )
        McTemplateK0juqjzzz_EtwWriteTransfer(
          *((_QWORD *)P + 4) + 4008LL,
          *((_QWORD *)P + 5),
          (const GUID *)P + 42,
          (__int64)P + 672,
          0,
          9,
          *((_QWORD *)P + 4) + 4008LL,
          *(const wchar_t **)(*(_QWORD *)(*((_QWORD *)P + 4) + 3856LL) + 8LL),
          *(const wchar_t **)(*((_QWORD *)P + 5) + 8LL),
          *(const wchar_t **)(*((_QWORD *)P + 6) + 8LL));
      if ( (*((_DWORD *)P + 14) & 0x8000) != 0 )
        --a1->MediaChangeFilters;
      ndisFilterAttachCleanUp(P, a1, 1);
      ndisDereferenceMiniport(a1, 0x28u);
    }
  }
  ndisHandleFilterHandlersChange(a1);
  if ( v2 )
  {
    *((_QWORD *)P + 4) = 0LL;
    ndisDereferenceFilter((char *)P, 0);
  }
  if ( v4 )
    ndisDereferenceMiniport(a1, 0x29u);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x25u,
      (struct _GUID *)&WPP_3188c4384181338fe0d477b94428bcd6_Traceguids,
      P);
}
