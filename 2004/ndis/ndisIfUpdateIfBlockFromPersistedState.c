/*
 * XREFs of ndisIfUpdateIfBlockFromPersistedState @ 0x1C0126ADC
 * Callers:
 *     ?ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z @ 0x1C00B2014 (-ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z.c)
 * Callees:
 *     ?ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C0009800 (-ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG.c)
 *     ?ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C000F050 (-ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@.c)
 *     ?ndisMUpdateHiddenFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z @ 0x1C00212B0 (-ndisMUpdateHiddenFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z.c)
 *     ?ndisIfReadNetworkGuidFromKey@@YAJAEAVKRegKey@@PEAU_GUID@@@Z @ 0x1C0026AA0 (-ndisIfReadNetworkGuidFromKey@@YAJAEAVKRegKey@@PEAU_GUID@@@Z.c)
 *     ndisIfUpdateInterfaceFromPersistentStore @ 0x1C002ECC0 (ndisIfUpdateInterfaceFromPersistentStore.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1C0031E50 (WPP_RECORDER_SF__guid_.c)
 *     ??1NdisNetworkInterfacePersistedState@@QEAA@XZ @ 0x1C0038F6C (--1NdisNetworkInterfacePersistedState@@QEAA@XZ.c)
 *     ??0NdisNetworkInterfacePersistedState@@QEAA@XZ @ 0x1C0039414 (--0NdisNetworkInterfacePersistedState@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 *     ??$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@Z @ 0x1C003D7F8 (--$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C00B1F68 (-ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     WPP_RECORDER_SF__guid_L @ 0x1C00B2294 (WPP_RECORDER_SF__guid_L.c)
 *     WPP_RECORDER_SF__guid__guid__guid_ @ 0x1C00B2368 (WPP_RECORDER_SF__guid__guid__guid_.c)
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0100DE4 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x1C010115C (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 *     ?ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z @ 0x1C01069FC (-ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z.c)
 *     ndisIfReadHiddenFlag @ 0x1C0106BAC (ndisIfReadHiddenFlag.c)
 *     ndisIfUpdateStringIfNeeded @ 0x1C0126E18 (ndisIfUpdateStringIfNeeded.c)
 */

void __fastcall ndisIfUpdateIfBlockFromPersistedState(struct _NDIS_IF_BLOCK *a1, struct KRegKey *this)
{
  struct NdisNetworkInterfacePersistedState *v4; // r9
  __int64 v5; // r8
  __int64 v6; // r9
  struct _NDIS_MINIPORT_BLOCK *v7; // rax
  struct _NDIS_MINIPORT_BLOCK *v8; // rdi
  _DEVICE_OBJECT *PhysicalDeviceObject; // rdx
  struct _NDIS_MINIPORT_BLOCK *v10; // rdx
  NTSTATUS v11; // esi
  int v12; // r8d
  _GUID *p_InterfaceGuid; // rbx
  int updated; // eax
  int v15; // r8d
  PVOID v16; // rcx
  PVOID v17; // rcx
  int v18; // [rsp+20h] [rbp-E0h]
  char v19[8]; // [rsp+30h] [rbp-D0h]
  bool v20; // [rsp+40h] [rbp-C0h] BYREF
  struct KRegKey *v21; // [rsp+48h] [rbp-B8h] BYREF
  struct KRegKey v22; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P; // [rsp+58h] [rbp-A8h] BYREF
  PVOID v24; // [rsp+60h] [rbp-A0h] BYREF
  struct KRegKey v25; // [rsp+70h] [rbp-90h] BYREF
  __int64 v26; // [rsp+78h] [rbp-88h]
  struct _GUID v27; // [rsp+94h] [rbp-6Ch] BYREF

  NdisNetworkInterfacePersistedState::NdisNetworkInterfacePersistedState((NdisNetworkInterfacePersistedState *)&v25);
  v22.m_ptr = 0LL;
  Ndis::BindRegistry::ReadNetworkInterfaceV2(this, &v22, &v25, v4);
  v24 = 0LL;
  v21 = this;
  if ( (int)NetSetupPropertyBag::ReadString(
              (NetSetupPropertyBag *)&v21,
              (const struct _NETSETUPPROPKEY *)&unk_1C00D37C8,
              &v24) >= 0 )
  {
    v18 = 20;
    ndisIfUpdateStringIfNeeded(a1, v25.m_ptr, &a1->ifAlias, 0LL);
  }
  P = 0LL;
  if ( (int)NetSetupPropertyBag::ReadString(
              (NetSetupPropertyBag *)&v21,
              (const struct _NETSETUPPROPKEY *)&unk_1C00D37B0,
              &P) >= 0 )
  {
    v18 = 4;
    ndisIfUpdateStringIfNeeded(a1, v26, &a1->ifDescr, 2LL);
  }
  if ( (int)ndisIfReadNetworkGuidFromKey(this, &v27) >= 0
    && (int)ndisIfUpdateInterfaceIsolationNetworkId(a1, &v27, 0) < 0
    && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF__guid__guid__guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)&v27,
      v5,
      v6,
      v18,
      (__int64)&a1->InterfaceGuid,
      (__int64)a1->Network + 32,
      (__int64)&v27);
  }
  v20 = 0;
  v7 = ndisIfReferenceMiniport(a1, 0x15u);
  v8 = v7;
  if ( v7 )
    PhysicalDeviceObject = v7->PhysicalDeviceObject;
  else
    PhysicalDeviceObject = 0LL;
  v11 = ndisIfReadHiddenFlag((void ***)&v21, PhysicalDeviceObject, &v20);
  if ( v11 >= 0 )
  {
    ndisIfUpdateInterfaceHiddenFlag(a1, v20);
    if ( !v8 )
      goto LABEL_17;
    ndisMUpdateHiddenFlag(v8, v20);
  }
  if ( v8 )
    ndisIfDereferenceMiniport(a1, v10, 0x15u);
LABEL_17:
  if ( v11 >= 0 )
  {
    p_InterfaceGuid = &a1->InterfaceGuid;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF__guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x16u,
        0x14u,
        (struct _GUID *)&WPP_6ddb316d784933c58b4801ad2d08aa04_Traceguids,
        (__int64)p_InterfaceGuid);
    updated = ndisIfUpdateInterfaceFromPersistentStore((__int64)&v25, (int)v10, v12);
    if ( updated < 0 && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v19 = updated;
      WPP_RECORDER_SF__guid_L(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        v15,
        0x15u,
        (struct _GUID *)&WPP_6ddb316d784933c58b4801ad2d08aa04_Traceguids,
        (__int64)p_InterfaceGuid,
        *(_QWORD *)v19);
    }
  }
  v16 = P;
  P = 0LL;
  if ( v16 )
    ExFreePoolWithTag(v16, 0x7274534Bu);
  v17 = v24;
  v24 = 0LL;
  if ( v17 )
    ExFreePoolWithTag(v17, 0x7274534Bu);
  if ( v22.m_ptr )
  {
    v21 = (struct KRegKey *)ZwClose;
    wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>((__int64 (__fastcall **)(_QWORD))&v21, &v22);
  }
  NdisNetworkInterfacePersistedState::~NdisNetworkInterfacePersistedState((NdisNetworkInterfacePersistedState *)&v25);
}
