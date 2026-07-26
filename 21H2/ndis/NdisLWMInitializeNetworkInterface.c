/*
 * XREFs of NdisLWMInitializeNetworkInterface @ 0x1C0060A90
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006F7C (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0008B64 (WPP_RECORDER_SF_.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005EE00 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     WPP_RECORDER_SF_qq_guid_ @ 0x1C006291C (WPP_RECORDER_SF_qq_guid_.c)
 *     WPP_RECORDER_SF_qq_guid_qd @ 0x1C0062A0C (WPP_RECORDER_SF_qq_guid_qd.c)
 *     ?ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0115558 (-ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall NdisLWMInitializeNetworkInterface(
        ULONG_PTR BugCheckParameter3,
        void *a2,
        const struct _GUID *a3,
        struct _NDIS_MINIPORT_BLOCK **a4)
{
  unsigned int v8; // edi
  int v9; // edx
  int v10; // r8d
  int v11; // r9d
  int v13; // [rsp+20h] [rbp-48h]
  struct _NDIS_MINIPORT_BLOCK *v14; // [rsp+70h] [rbp+8h] BYREF

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq_guid_(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)a2, (_DWORD)a3, (_DWORD)a4);
  *a4 = 0LL;
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( *(char *)(BugCheckParameter3 + 26) >= 0 )
    ndisBugCheckEx(0x29uLL, 2uLL, BugCheckParameter3, 0LL);
  v14 = 0LL;
  v8 = ndisLWMCreateMiniport((struct _NDIS_M_DRIVER_BLOCK *)BugCheckParameter3, a3, &v14);
  if ( v8 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0x94u,
        (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids);
  }
  else
  {
    v14->MiniportAdapterContext = a2;
    *a4 = v14;
  }
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq_guid_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      v10,
      v11,
      v13,
      BugCheckParameter3,
      (char)a2,
      (__int64)a3,
      (char)*a4,
      v8);
  return v8;
}
