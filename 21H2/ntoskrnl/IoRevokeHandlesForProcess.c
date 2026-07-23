/*
 * XREFs of IoRevokeHandlesForProcess @ 0x140507150
 * Callers:
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x14026A8D0 (PsGetCurrentSilo.c)
 *     IopGetDevicePDO @ 0x1402717B8 (IopGetDevicePDO.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x140414300 (memset.c)
 *     PnpDisableUserModeNotifications @ 0x14050DD9C (PnpDisableUserModeNotifications.c)
 *     ExEnumHandleTable @ 0x1405E3DF0 (ExEnumHandleTable.c)
 *     ObDereferenceProcessHandleTable @ 0x1405FB710 (ObDereferenceProcessHandleTable.c)
 *     PsIsProcessAppContainer @ 0x14060BF44 (PsIsProcessAppContainer.c)
 *     ObOpenObjectByNameEx @ 0x14064AAF0 (ObOpenObjectByNameEx.c)
 *     ObReferenceProcessHandleTable @ 0x1406E4F14 (ObReferenceProcessHandleTable.c)
 */

__int64 __fastcall IoRevokeHandlesForProcess(__int64 a1, void *a2)
{
  __int64 v5; // rsi
  unsigned int v6; // edi
  _DWORD *DevicePDO; // rax
  void *v8; // rsi
  PVOID Object[2]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v10[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v11; // [rsp+58h] [rbp-A8h]
  __int64 v12; // [rsp+60h] [rbp-A0h]
  int v13; // [rsp+68h] [rbp-98h]
  int v14; // [rsp+6Ch] [rbp-94h]
  __int128 v15; // [rsp+70h] [rbp-90h]
  _OWORD v16[14]; // [rsp+80h] [rbp-80h] BYREF
  char v17; // [rsp+190h] [rbp+90h] BYREF

  v10[1] = 0;
  v14 = 0;
  if ( !(unsigned __int8)PsIsProcessAppContainer(a2) )
    return 0LL;
  v5 = ObReferenceProcessHandleTable(a2);
  if ( !v5 )
    return 3221225485LL;
  memset(v16, 0, sizeof(v16));
  v11 = 0LL;
  v10[0] = 48;
  memset(&v16[10], 0, 32);
  v13 = 576;
  v12 = a1;
  LOWORD(v16[10]) = 40;
  v15 = 0LL;
  LODWORD(v16[0]) = 14680072;
  LODWORD(v16[2]) = 1;
  *(_QWORD *)&v16[12] = 1LL;
  *(_QWORD *)&v16[12] = PsGetCurrentSilo();
  v6 = ObOpenObjectByNameEx(v10, IoFileObjectType, 0LL, 0LL, 0, v16, *(_QWORD *)&v16[12], &v17);
  if ( LODWORD(v16[2]) == -1096154543 )
  {
    v6 = v16[1];
    if ( SLODWORD(v16[1]) >= 0 )
    {
      Object[0] = *((PVOID *)&v16[2] + 1);
      Object[1] = a2;
      ExEnumHandleTable(v5, IopCheckHandleForRevocation, Object, 0LL);
      DevicePDO = IopGetDevicePDO((__int64)Object[0]);
      v8 = DevicePDO;
      if ( DevicePDO )
      {
        PnpDisableUserModeNotifications(DevicePDO, a2);
        ObfDereferenceObjectWithTag(v8, 0x746C6644u);
      }
      ObfDereferenceObjectWithTag(Object[0], 0x746C6644u);
    }
  }
  ObDereferenceProcessHandleTable(a2);
  return v6;
}
