/*
 * XREFs of IoRevokeHandlesForProcess @ 0x140558960
 * Callers:
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     IopGetDevicePDO @ 0x1402A4000 (IopGetDevicePDO.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PsGetCurrentSilo @ 0x140347D50 (PsGetCurrentSilo.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PnpDisableUserModeNotifications @ 0x1405610D0 (PnpDisableUserModeNotifications.c)
 *     ExEnumHandleTable @ 0x14066A8E0 (ExEnumHandleTable.c)
 *     ObReferenceProcessHandleTable @ 0x14066B3D8 (ObReferenceProcessHandleTable.c)
 *     ObDereferenceProcessHandleTable @ 0x1406BBE50 (ObDereferenceProcessHandleTable.c)
 *     PsIsProcessAppContainer @ 0x1406C9928 (PsIsProcessAppContainer.c)
 *     ObOpenObjectByNameEx @ 0x1407CAF90 (ObOpenObjectByNameEx.c)
 */

__int64 __fastcall IoRevokeHandlesForProcess(__int64 a1, void *a2)
{
  __int64 v5; // rdi
  unsigned int v6; // esi
  _DWORD *DevicePDO; // rax
  void *v8; // rdi
  PVOID Object[2]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v10[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v11; // [rsp+58h] [rbp-A8h]
  __int64 v12; // [rsp+60h] [rbp-A0h]
  int v13; // [rsp+68h] [rbp-98h]
  int v14; // [rsp+6Ch] [rbp-94h]
  __int128 v15; // [rsp+70h] [rbp-90h]
  _OWORD v16[14]; // [rsp+80h] [rbp-80h] BYREF
  char v17; // [rsp+190h] [rbp+90h] BYREF

  v14 = 0;
  v10[1] = 0;
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
        ObfDereferenceObject(v8);
      }
      ObfDereferenceObject(Object[0]);
    }
  }
  ObDereferenceProcessHandleTable(a2);
  return v6;
}
