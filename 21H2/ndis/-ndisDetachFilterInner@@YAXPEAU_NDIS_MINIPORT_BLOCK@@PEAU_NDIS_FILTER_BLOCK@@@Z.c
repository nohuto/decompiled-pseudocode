/*
 * XREFs of ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C01372DC
 * Callers:
 *     ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C0116218 (-ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006D8C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006F7C (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0008B64 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     NdisMSleep @ 0x1C00174F0 (NdisMSleep.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0018F40 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C0019058 (-ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1C001A398 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     ?ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C001B924 (-ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisCloseRef@@YAEPEAU_REFERENCE_EX@@@Z @ 0x1C00256EC (-ndisCloseRef@@YAEPEAU_REFERENCE_EX@@@Z.c)
 *     ?ndisHandleFilterHandlersChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0026974 (-ndisHandleFilterHandlersChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     PktMonClientComponentUnregister @ 0x1C0026AE8 (PktMonClientComponentUnregister.c)
 *     WPP_RECORDER_SF_qqZZ @ 0x1C00298D0 (WPP_RECORDER_SF_qqZZ.c)
 *     ??$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@Z @ 0x1C003DB58 (--$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@.c)
 *     ?NDIS_RELEASE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@E@Z @ 0x1C003DBE8 (-NDIS_RELEASE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@E@Z.c)
 *     ?FILTER_CLEAR_ALL_STATE_FLAGS@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C003E314 (-FILTER_CLEAR_ALL_STATE_FLAGS@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     memmove @ 0x1C0040100 (memmove.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C0060398 (McTemplateK0qqq_EtwWriteTransfer.c)
 *     McTemplateK0juqjzzz_EtwWriteTransfer @ 0x1C0065C60 (McTemplateK0juqjzzz_EtwWriteTransfer.c)
 *     ?ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z @ 0x1C0067AD4 (-ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z.c)
 *     ?ndisFNotifyDetach@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0068464 (-ndisFNotifyDetach@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00686E0 (-ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisReferenceFilterByHandle@@YAEPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z @ 0x1C0069730 (-ndisReferenceFilterByHandle@@YAEPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x1C00FB5E0 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ?ndisFilterWaitForPnPComplete@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0116354 (-ndisFilterWaitForPnPComplete@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisFInvokeDetach@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C01166DC (-ndisFInvokeDetach@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
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
  KIRQL v12; // dl
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rax
  KIRQL v16; // dl
  struct _NDIS_FILTER_BLOCK *v17; // rcx
  struct NDISWATCHDOG__ *v18; // [rsp+50h] [rbp-20h] BYREF
  struct NDISWATCHDOG__ *v19; // [rsp+58h] [rbp-18h] BYREF
  void (__fastcall *v20)(struct NDISWATCHDOG__ *); // [rsp+60h] [rbp-10h] BYREF
  unsigned __int8 v21; // [rsp+B0h] [rbp+40h] BYREF
  PVOID WnodeEventItem; // [rsp+B8h] [rbp+48h] BYREF

  v2 = 0;
  v4 = 0;
  v21 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x22u,
      (struct _GUID *)&WPP_c229d34f9dad36469b52bf5a53ae9d53_Traceguids,
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
              (struct _GUID *)&WPP_c229d34f9dad36469b52bf5a53ae9d53_Traceguids);
          if ( (byte_1C00E6181 & 1) != 0 )
            McTemplateK0qqq_EtwWriteTransfer(v10, &FilterRemovalIndicationFailed, (const GUID *)P + 42, v11, 1, 0);
          ExFreePoolWithTag(v8, 0);
        }
      }
      NDIS_ACQUIRE_FILTER_SPIN_LOCK((struct _NDIS_FILTER_BLOCK *)P, &v21);
      v12 = v21;
      *((_DWORD *)P + 14) |= 0x100u;
      NDIS_RELEASE_FILTER_SPIN_LOCK((struct _NDIS_FILTER_BLOCK *)P, v12);
      *((_BYTE *)P + 64) = 6;
      if ( (byte_1C00E6183 & 1) != 0 )
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
      ndisFilterWaitForPnPComplete((struct _NDIS_FILTER_BLOCK *)P);
      PktMonClientComponentUnregister((__int64 *)P + 99);
      ndisMakeWatchdog(&v18, P, 20, *(void **)(*((_QWORD *)P + 2) + 184LL), 0x41EB0u, 0LL);
      ndisFInvokeDetach((struct _NDIS_FILTER_BLOCK *)P);
      if ( v18 != (struct NDISWATCHDOG__ *)-1LL )
      {
        v19 = v18;
        v20 = ndisFreeWatchdog;
        wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>((__int64 (__fastcall **)(_QWORD))&v20, &v19);
      }
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqZZ(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v13,
          v14,
          0x24u,
          (struct _GUID *)&WPP_c229d34f9dad36469b52bf5a53ae9d53_Traceguids,
          (char)a1,
          (char)P,
          (unsigned __int16 *)(*((_QWORD *)P + 2) + 112LL),
          &a1->pAdapterInstanceName->Length);
      while ( *((_BYTE *)P + 288) )
        NdisMSleep(0x3E8u);
      if ( (*((_DWORD *)P + 14) & 0x8000) != 0 )
      {
        v15 = *((_QWORD *)P + 14);
        if ( v15 )
        {
          a1->MediaType = *(_DWORD *)(v15 + 336);
          a1->PhysicalMediumType = *(_DWORD *)(*((_QWORD *)P + 14) + 340LL);
        }
        else
        {
          a1->MediaType = a1->MiniportMediaType;
          a1->PhysicalMediumType = a1->MiniportPhysicalMediumType;
        }
      }
      NDIS_ACQUIRE_FILTER_SPIN_LOCK((struct _NDIS_FILTER_BLOCK *)P, &v21);
      *((_DWORD *)P + 14) &= ~0x100u;
      FILTER_CLEAR_ALL_STATE_FLAGS((struct _NDIS_FILTER_BLOCK *)P);
      v16 = v21;
      *((_DWORD *)P + 14) |= 8u;
      NDIS_RELEASE_FILTER_SPIN_LOCK(v17, v16);
      *((_BYTE *)P + 64) = 0;
      if ( (byte_1C00E6183 & 1) != 0 )
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
      (struct _GUID *)&WPP_c229d34f9dad36469b52bf5a53ae9d53_Traceguids,
      P);
}
