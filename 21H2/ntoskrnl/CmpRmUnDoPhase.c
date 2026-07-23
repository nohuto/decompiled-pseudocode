/*
 * XREFs of CmpRmUnDoPhase @ 0x140875B54
 * Callers:
 *     CmpStartRMLog @ 0x14077D6A4 (CmpStartRMLog.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenTransaction @ 0x1403FCBA0 (ZwOpenTransaction.c)
 *     CmListGetNextElement @ 0x1405E17C4 (CmListGetNextElement.c)
 *     CmpTransMgrFreeVolatileData @ 0x140663F6C (CmpTransMgrFreeVolatileData.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     CmpTransMgrPrepare @ 0x140768EC4 (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x140769060 (CmpTransMgrCommit.c)
 *     CmpTransMgrRollback @ 0x140771250 (CmpTransMgrRollback.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

char *__fastcall CmpRmUnDoPhase(__int64 a1)
{
  char *result; // rax
  __int64 v3; // r8
  char *v4; // rbx
  __int64 v5; // rcx
  int v6; // edx
  __int64 v7; // rcx
  char **v8; // rax
  __int64 v9; // [rsp+28h] [rbp-39h]
  char v10[4]; // [rsp+38h] [rbp-29h] BYREF
  int v11; // [rsp+3Ch] [rbp-25h] BYREF
  HANDLE TransactionHandle; // [rsp+40h] [rbp-21h] BYREF
  _QWORD *v13; // [rsp+48h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-11h] BYREF
  _OWORD v15[3]; // [rsp+80h] [rbp+1Fh] BYREF

  TransactionHandle = 0LL;
  v11 = 0;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v10[0] = 0;
  memset(v15, 0, sizeof(v15));
LABEL_2:
  v13 = 0LL;
  while ( 1 )
  {
    result = CmListGetNextElement((_QWORD **)(a1 + 16), &v13, 0);
    v4 = result;
    if ( !result )
      return result;
    if ( (*((_DWORD *)result + 12) & 2) != 0 )
    {
      CmpTransMgrRollback((__int64)result, &v11);
      CmpAttachToRegistryProcess((__int64)v15);
      v6 = 8;
LABEL_12:
      CmpTransMgrFreeVolatileData((ULONG_PTR)v4, v6);
      KiUnstackDetachProcess((__int64)v15, 0LL);
      v7 = *(_QWORD *)v4;
      if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 || (v8 = (char **)*((_QWORD *)v4 + 1), *v8 != v4) )
        __fastfail(3u);
      *v8 = (char *)v7;
      *(_QWORD *)(v7 + 8) = v8;
      ExFreePoolWithTag(v4, 0x72544D43u);
      goto LABEL_2;
    }
    ObjectAttributes.RootDirectory = (HANDLE)((__int64)ObjectAttributes.RootDirectory & v3);
    ObjectAttributes.ObjectName = (PUNICODE_STRING)((__int64)ObjectAttributes.ObjectName & v3);
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenTransaction(&TransactionHandle, 0x1F003Fu, &ObjectAttributes, (LPGUID)(result + 88), (HANDLE)(v3 & v9)) < 0 )
    {
      if ( (int)CmpTransMgrPrepare(a1, (__int64)v4, &v11, v10) < 0 || (int)CmpTransMgrCommit(v5, (__int64)v4, &v11) < 0 )
      {
        *((_DWORD *)v4 + 12) |= 2u;
        goto LABEL_2;
      }
      CmpAttachToRegistryProcess((__int64)v15);
      v6 = 4;
      goto LABEL_12;
    }
    ZwClose(TransactionHandle);
  }
}
