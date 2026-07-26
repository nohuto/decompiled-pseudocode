/*
 * XREFs of ?ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z @ 0x1C00B2F88
 * Callers:
 *     ndisHandleUModePnPOp @ 0x1C001D644 (ndisHandleUModePnPOp.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C000DE10 (NdisReferenceWithTag.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x1C00187E4 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C001918C (WPP_RECORDER_SF_d.c)
 *     ?ndisIfFindInterfaceByInterfaceGuid@@YAPEAU_NDIS_IF_BLOCK@@PEBU_GUID@@@Z @ 0x1C00212A0 (-ndisIfFindInterfaceByInterfaceGuid@@YAPEAU_NDIS_IF_BLOCK@@PEBU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     memmove @ 0x1C003F400 (memmove.c)
 *     WPP_RECORDER_SF_ZZ @ 0x1C00B345C (WPP_RECORDER_SF_ZZ.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00FD80C (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 *     ?ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z @ 0x1C0126D8C (-ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z.c)
 */

__int64 __fastcall ndisIfAliasChange(
        const struct _UNICODE_STRING *a1,
        const struct _UNICODE_STRING *a2,
        int a3,
        int a4)
{
  unsigned __int16 v6; // ax
  NTSTATUS v7; // edi
  KIRQL v8; // bl
  struct _LIST_ENTRY *InterfaceByInterfaceGuid; // rax
  struct _LIST_ENTRY *v10; // rsi
  unsigned __int8 *v11; // r15
  unsigned __int16 Length; // ax
  struct _NDIS_REFCOUNT_BLOCK *Blink; // rcx
  KIRQL v14; // bl
  char v16[8]; // [rsp+28h] [rbp-58h]
  UNICODE_STRING GuidString; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v18[2]; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int8 *v19; // [rsp+58h] [rbp-28h]
  int v20; // [rsp+60h] [rbp-20h]
  int v21; // [rsp+64h] [rbp-1Ch]
  GUID Guid; // [rsp+68h] [rbp-18h] BYREF

  Guid = 0LL;
  *(_DWORD *)(&GuidString.MaximumLength + 1) = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)&v16[4] = HIDWORD(a1);
    WPP_RECORDER_SF_ZZ(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)a2, a3, a4);
  }
  v6 = a1->Length - ndisDeviceStr.Length;
  GuidString.Buffer = &a1->Buffer[(unsigned __int64)ndisDeviceStr.Length >> 1];
  GuidString.Length = v6;
  GuidString.MaximumLength = v6 + 2;
  v7 = RtlGUIDFromString(&GuidString, &Guid);
  if ( v7 >= 0 )
  {
    v8 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    InterfaceByInterfaceGuid = ndisIfFindInterfaceByInterfaceGuid(&Guid);
    v10 = InterfaceByInterfaceGuid;
    if ( InterfaceByInterfaceGuid )
    {
      v11 = (unsigned __int8 *)&InterfaceByInterfaceGuid[37].Flink + 4;
      Length = 512;
      if ( a2->Length <= 0x200u )
        Length = a2->Length;
      *(_WORD *)v11 = Length;
      memmove((char *)&v10[37].Flink + 6, a2->Buffer, Length);
      Blink = (struct _NDIS_REFCOUNT_BLOCK *)v10[89].Blink;
      v18[1] = 0;
      v18[0] = 0;
      v20 = 516;
      v19 = v11;
      v21 = 20;
      NdisReferenceWithTag(Blink, 0xBu);
      ++LODWORD(v10[81].Blink);
      KeReleaseSpinLock(&ndisIfListLock, v8);
      ndisIfUpdatePersistedInterfaceInfo((unsigned __int8 *)&v10[82], 0x204u, 4u, v11);
      ndisNsiNotifyClientInterfaceChange(v10, 0LL, v18);
      v14 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      IFBLOCK_DECREMENT_REF((struct _NDIS_IF_BLOCK *)v10, 0xBu);
      KeReleaseSpinLock(&ndisIfListLock, v14);
    }
    else
    {
      KeReleaseSpinLock(&ndisIfListLock, v8);
      v7 = -1073741772;
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v16 = v7;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x11u,
      (struct _GUID *)&WPP_6f7d012dac193bebbc3298f2a25f6805_Traceguids,
      *(_QWORD *)v16);
  }
  return (unsigned int)v7;
}
