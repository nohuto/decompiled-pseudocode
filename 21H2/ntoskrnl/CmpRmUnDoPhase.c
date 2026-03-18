/*
 * XREFs of CmpRmUnDoPhase @ 0x14091C5C4
 * Callers:
 *     CmpStartRMLog @ 0x14080C884 (CmpStartRMLog.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenTransaction @ 0x14041DE40 (ZwOpenTransaction.c)
 *     CmpTransMgrRollback @ 0x1406E2798 (CmpTransMgrRollback.c)
 *     CmpTransMgrFreeVolatileData @ 0x14071BC94 (CmpTransMgrFreeVolatileData.c)
 *     CmpTransMgrPrepare @ 0x1407424F0 (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x1407426B8 (CmpTransMgrCommit.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     CmListGetNextElement @ 0x140AB4218 (CmListGetNextElement.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AB4580 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmpRmUnDoPhase(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r8
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  int v6; // edx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // [rsp+28h] [rbp-39h]
  _BYTE v10[4]; // [rsp+38h] [rbp-29h] BYREF
  _DWORD v11[3]; // [rsp+3Ch] [rbp-25h] BYREF
  __int64 v12; // [rsp+48h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-11h] BYREF
  _OWORD v14[3]; // [rsp+80h] [rbp+1Fh] BYREF

  memset(v11, 0, sizeof(v11));
  memset(&ObjectAttributes, 0, 44);
  v10[0] = 0;
  memset(v14, 0, sizeof(v14));
LABEL_2:
  v12 = 0LL;
  while ( 1 )
  {
    result = CmListGetNextElement(a1 + 16, &v12, 0LL);
    v4 = (_QWORD *)result;
    if ( !result )
      return result;
    if ( (*(_DWORD *)(result + 48) & 2) != 0 )
    {
      CmpTransMgrRollback(result, v11);
      CmpAttachToRegistryProcess(v14);
      v6 = 8;
LABEL_12:
      CmpTransMgrFreeVolatileData((ULONG_PTR)v4, v6);
      CmpDetachFromRegistryProcess(v14);
      v7 = *v4;
      if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v8 = (_QWORD *)v4[1], (_QWORD *)*v8 != v4) )
        __fastfail(3u);
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      ExFreePoolWithTag(v4, 0x72544D43u);
      goto LABEL_2;
    }
    ObjectAttributes.RootDirectory = (HANDLE)((__int64)ObjectAttributes.RootDirectory & v3);
    ObjectAttributes.ObjectName = (PUNICODE_STRING)((__int64)ObjectAttributes.ObjectName & v3);
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenTransaction((PHANDLE)&v11[1], 0x1F003Fu, &ObjectAttributes, (LPGUID)(result + 88), (HANDLE)(v3 & v9)) < 0 )
    {
      if ( (int)CmpTransMgrPrepare(a1, (__int64)v4, v11, v10) < 0 || (int)CmpTransMgrCommit(v5, (__int64)v4, v11) < 0 )
      {
        *((_DWORD *)v4 + 12) |= 2u;
        goto LABEL_2;
      }
      CmpAttachToRegistryProcess(v14);
      v6 = 4;
      goto LABEL_12;
    }
    ZwClose(*(HANDLE *)&v11[1]);
  }
}
