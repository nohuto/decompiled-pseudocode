/*
 * XREFs of IoRevokeHandlesForProcess @ 0x140501D80
 * Callers:
 *     NtSetInformationProcess @ 0x1406A02E0 (NtSetInformationProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     IopGetDevicePDO @ 0x140277508 (IopGetDevicePDO.c)
 *     PsGetCurrentSilo @ 0x140299370 (PsGetCurrentSilo.c)
 *     memset @ 0x14040A280 (memset.c)
 *     PnpDisableUserModeNotifications @ 0x1405086FC (PnpDisableUserModeNotifications.c)
 *     ObReferenceProcessHandleTable @ 0x1405E9CC4 (ObReferenceProcessHandleTable.c)
 *     ObOpenObjectByNameEx @ 0x140694650 (ObOpenObjectByNameEx.c)
 *     ExEnumHandleTable @ 0x1406D7420 (ExEnumHandleTable.c)
 *     ObDereferenceProcessHandleTable @ 0x1406ED7E0 (ObDereferenceProcessHandleTable.c)
 *     PsIsProcessAppContainer @ 0x1406FCB54 (PsIsProcessAppContainer.c)
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
  memset(v16, 0, 0xD8uLL);
  v11 = 0LL;
  v10[0] = 48;
  memset(&v16[10], 0, 32);
  v13 = 576;
  v12 = a1;
  LOWORD(v16[10]) = 40;
  v15 = 0LL;
  LODWORD(v16[0]) = 14155784;
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
