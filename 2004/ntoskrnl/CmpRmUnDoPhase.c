/*
 * XREFs of CmpRmUnDoPhase @ 0x1408725B4
 * Callers:
 *     CmpStartRMLog @ 0x14076ECD4 (CmpStartRMLog.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwOpenTransaction @ 0x1403F5BC0 (ZwOpenTransaction.c)
 *     CmpAttachToRegistryProcess @ 0x1405EA8E0 (CmpAttachToRegistryProcess.c)
 *     CmpTransMgrFreeVolatileData @ 0x140642ECC (CmpTransMgrFreeVolatileData.c)
 *     CmListGetNextElement @ 0x140654660 (CmListGetNextElement.c)
 *     CmpTransMgrPrepare @ 0x14075174C (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x1407518DC (CmpTransMgrCommit.c)
 *     CmpTransMgrRollback @ 0x14075E700 (CmpTransMgrRollback.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

char *__fastcall CmpRmUnDoPhase(__int64 a1)
{
  char *result; // rax
  __int64 v3; // r8
  char *v4; // rbx
  int v5; // edx
  __int64 v6; // rcx
  char **v7; // rax
  __int64 v8; // [rsp+28h] [rbp-39h]
  char v9[4]; // [rsp+38h] [rbp-29h] BYREF
  int v10; // [rsp+3Ch] [rbp-25h] BYREF
  HANDLE TransactionHandle; // [rsp+40h] [rbp-21h] BYREF
  _QWORD *v12; // [rsp+48h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-11h] BYREF
  _OWORD v14[3]; // [rsp+80h] [rbp+1Fh] BYREF

  TransactionHandle = 0LL;
  v10 = 0;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v9[0] = 0;
  memset(v14, 0, sizeof(v14));
LABEL_2:
  v12 = 0LL;
  while ( 1 )
  {
    result = CmListGetNextElement((_QWORD **)(a1 + 16), &v12, 0);
    v4 = result;
    if ( !result )
      return result;
    if ( (*((_DWORD *)result + 12) & 2) != 0 )
    {
      CmpTransMgrRollback((__int64)result, &v10);
      CmpAttachToRegistryProcess((__int64)v14);
      v5 = 8;
LABEL_12:
      CmpTransMgrFreeVolatileData((__int64)v4, v5);
      KiUnstackDetachProcess((__int64)v14, 0LL);
      v6 = *(_QWORD *)v4;
      if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 || (v7 = (char **)*((_QWORD *)v4 + 1), *v7 != v4) )
        __fastfail(3u);
      *v7 = (char *)v6;
      *(_QWORD *)(v6 + 8) = v7;
      ExFreePoolWithTag(v4, 0x72544D43u);
      goto LABEL_2;
    }
    ObjectAttributes.RootDirectory = (HANDLE)((__int64)ObjectAttributes.RootDirectory & v3);
    ObjectAttributes.ObjectName = (PUNICODE_STRING)((__int64)ObjectAttributes.ObjectName & v3);
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenTransaction(&TransactionHandle, 0x1F003Fu, &ObjectAttributes, (LPGUID)(result + 88), (HANDLE)(v3 & v8)) < 0 )
    {
      if ( (int)CmpTransMgrPrepare(a1, (__int64)v4, &v10, v9) < 0 || (int)CmpTransMgrCommit(a1, (__int64)v4, &v10) < 0 )
      {
        *((_DWORD *)v4 + 12) |= 2u;
        goto LABEL_2;
      }
      CmpAttachToRegistryProcess((__int64)v14);
      v5 = 4;
      goto LABEL_12;
    }
    ZwClose(TransactionHandle);
  }
}
