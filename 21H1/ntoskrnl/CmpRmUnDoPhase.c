/*
 * XREFs of CmpRmUnDoPhase @ 0x1408712D4
 * Callers:
 *     CmpStartRMLog @ 0x14076C534 (CmpStartRMLog.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwOpenTransaction @ 0x1403F4930 (ZwOpenTransaction.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmListGetNextElement @ 0x140658FC0 (CmListGetNextElement.c)
 *     CmpTransMgrFreeVolatileData @ 0x14068E3E8 (CmpTransMgrFreeVolatileData.c)
 *     CmpTransMgrPrepare @ 0x14074D0BC (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x14074D24C (CmpTransMgrCommit.c)
 *     CmpTransMgrRollback @ 0x14075C220 (CmpTransMgrRollback.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

char *__fastcall CmpRmUnDoPhase(__int64 a1)
{
  char *result; // rax
  __int64 v3; // r8
  char *v4; // rbx
  _DWORD *v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r8
  _DWORD *v8; // r9
  int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // r8
  _DWORD *v12; // r9
  __int64 v13; // r8
  _DWORD *v14; // r9
  __int64 v15; // rcx
  char **v16; // rax
  __int64 v17; // [rsp+28h] [rbp-39h]
  char v18[4]; // [rsp+38h] [rbp-29h] BYREF
  int v19; // [rsp+3Ch] [rbp-25h] BYREF
  HANDLE TransactionHandle; // [rsp+40h] [rbp-21h] BYREF
  _QWORD *v21; // [rsp+48h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-11h] BYREF
  _OWORD v23[3]; // [rsp+80h] [rbp+1Fh] BYREF

  TransactionHandle = 0LL;
  v19 = 0;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v18[0] = 0;
  memset(v23, 0, sizeof(v23));
LABEL_2:
  v21 = 0LL;
  while ( 1 )
  {
    result = CmListGetNextElement((_QWORD **)(a1 + 16), &v21, 0);
    v4 = result;
    if ( !result )
      return result;
    if ( (*((_DWORD *)result + 12) & 2) != 0 )
    {
      CmpTransMgrRollback((__int64)result, &v19);
      CmpAttachToRegistryProcess((__int64)v23, v10, v11, v12);
      v9 = 8;
LABEL_12:
      CmpTransMgrFreeVolatileData((__int64)v4, v9);
      KiUnstackDetachProcess((__int64)v23, 0LL, v13, v14);
      v15 = *(_QWORD *)v4;
      if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 || (v16 = (char **)*((_QWORD *)v4 + 1), *v16 != v4) )
        __fastfail(3u);
      *v16 = (char *)v15;
      *(_QWORD *)(v15 + 8) = v16;
      ExFreePoolWithTag(v4, 0x72544D43u);
      goto LABEL_2;
    }
    ObjectAttributes.RootDirectory = (HANDLE)((__int64)ObjectAttributes.RootDirectory & v3);
    ObjectAttributes.ObjectName = (PUNICODE_STRING)((__int64)ObjectAttributes.ObjectName & v3);
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenTransaction(&TransactionHandle, 0x1F003Fu, &ObjectAttributes, (LPGUID)(result + 88), (HANDLE)(v3 & v17)) < 0 )
    {
      if ( (int)CmpTransMgrPrepare(a1, (__int64)v4, &v19, v18) < 0
        || (int)CmpTransMgrCommit(a1, (__int64)v4, &v19, v5) < 0 )
      {
        *((_DWORD *)v4 + 12) |= 2u;
        goto LABEL_2;
      }
      CmpAttachToRegistryProcess((__int64)v23, v6, v7, v8);
      v9 = 4;
      goto LABEL_12;
    }
    ZwClose(TransactionHandle);
  }
}
