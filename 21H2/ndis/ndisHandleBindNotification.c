/*
 * XREFs of ndisHandleBindNotification @ 0x1C01178E8
 * Callers:
 *     ndisHandleUModePnPOp @ 0x1C001D96C (ndisHandleUModePnPOp.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006D8C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_Z @ 0x1C0012F18 (WPP_RECORDER_SF_Z.c)
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     ?ndisReferenceMiniportByGuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0073C78 (-ndisReferenceMiniportByGuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C0107B48 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C012A010 (-ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_R.c)
 */

__int64 __fastcall ndisHandleBindNotification(struct _UNICODE_STRING *a1)
{
  NTSTATUS v1; // esi
  enum Ndis::ReadBindingsOptions::Flags v3; // r8d
  struct _NDIS_MINIPORT_BLOCK *v4; // rbx
  unsigned __int16 Length; // cx
  wchar_t *Buffer; // rax
  UNICODE_STRING GuidString; // [rsp+30h] [rbp-48h] BYREF
  GUID Guid; // [rsp+40h] [rbp-38h] BYREF

  v1 = 0;
  *(_QWORD *)&GuidString.Length = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x10u,
      (struct _GUID *)&WPP_bbdcc3e07db038fba9e8451214a04481_Traceguids,
      &a1->Length);
  ndisReferenceMiniportByName(a1, (struct _NDIS_MINIPORT_BLOCK **)&GuidString, 0, MPREF_PT_BINDNOTIFY);
  v4 = *(struct _NDIS_MINIPORT_BLOCK **)&GuidString.Length;
  if ( *(_QWORD *)&GuidString.Length )
    goto LABEL_8;
  Length = a1->Length;
  if ( a1->Length <= 0x10u )
    goto LABEL_7;
  Buffer = a1->Buffer;
  *(_DWORD *)(&GuidString.MaximumLength + 1) = 0;
  GuidString.Buffer = Buffer + 8;
  LOWORD(Buffer) = a1->MaximumLength - 16;
  GuidString.Length = Length - 16;
  GuidString.MaximumLength = (unsigned __int16)Buffer;
  Guid = 0LL;
  v1 = RtlGUIDFromString(&GuidString, &Guid);
  if ( v1 < 0 )
    goto LABEL_7;
  v4 = ndisReferenceMiniportByGuid(&Guid, 0x2Fu);
  if ( v4 )
  {
LABEL_8:
    Ndis::BindRegistry::Reload((Ndis::BindRegistry *)v4, 0LL, v3);
    if ( v4 )
      ndisDereferenceMiniport(v4, 0x2Fu);
  }
  else
  {
LABEL_7:
    v1 = -1073741772;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x11u,
      (struct _GUID *)&WPP_bbdcc3e07db038fba9e8451214a04481_Traceguids,
      &a1->Length);
  return (unsigned int)v1;
}
