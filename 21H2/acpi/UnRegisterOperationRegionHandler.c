/*
 * XREFs of UnRegisterOperationRegionHandler @ 0x1C00B1C74
 * Callers:
 *     ACPIIoctlUnRegisterOpRegionHandler @ 0x1C005836C (ACPIIoctlUnRegisterOpRegionHandler.c)
 *     ACPIEcRemoveOpRegionHandler @ 0x1C00AEB8C (ACPIEcRemoveOpRegionHandler.c)
 *     DeRegisterOpRegionHandler @ 0x1C00B1BD0 (DeRegisterOpRegionHandler.c)
 * Callees:
 *     AMLIGetNameSpaceObject @ 0x1C000B01C (AMLIGetNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C000BC6C (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000BCA0 (AMLIEvalNameSpaceObject.c)
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C0018210 (EnableDisableDeviceTreeRegionSpace.c)
 *     AMLIRegEventHandler @ 0x1C002C19C (AMLIRegEventHandler.c)
 *     memset @ 0x1C0032480 (memset.c)
 */

__int64 __fastcall UnRegisterOperationRegionHandler(__int64 *a1, __int64 *a2)
{
  __int64 *v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  unsigned int *v7; // rdi
  char v8; // si
  __int64 v9; // rax
  unsigned int v10; // edi
  __int64 v11; // r8
  __int64 **v12; // rdx
  _QWORD v14[10]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 *v15; // [rsp+98h] [rbp+10h] BYREF

  v15 = 0LL;
  ExAcquireFastMutex(&AcpiOpRegionLock);
  v4 = (__int64 *)AcpiOpRegionHandlerList;
  if ( (__int64 *)AcpiOpRegionHandlerList == &AcpiOpRegionHandlerList )
    goto LABEL_27;
  do
  {
    if ( v4 == a2 )
      break;
    v4 = (__int64 *)*v4;
  }
  while ( v4 != &AcpiOpRegionHandlerList );
  if ( v4 == &AcpiOpRegionHandlerList )
  {
LABEL_27:
    v5 = -1073741584;
    goto LABEL_28;
  }
  if ( *((_BYTE *)a2 + 40) )
  {
    v5 = -1073741738;
LABEL_28:
    ExReleaseFastMutex(&AcpiOpRegionLock);
    return v5;
  }
  v6 = a2[1];
  v7 = (unsigned int *)a2 + 9;
  v8 = 0;
  *((_BYTE *)a2 + 40) = 1;
  if ( ((__int64 *)v6 == &AcpiOpRegionHandlerList || *(_DWORD *)(v6 + 36) != *v7)
    && ((__int64 *)*a2 == &AcpiOpRegionHandlerList || *(_DWORD *)(*a2 + 36) != *v7) )
  {
    if ( *v7 < 0x1F )
    {
      AcpiRegisteredOpRegionMask &= ~(1 << *v7);
    }
    else if ( (__int64 *)AcpiOpRegionHandlerList == &AcpiOpRegionHandlerList
           || *(_DWORD *)(qword_1C0081BA8 + 36) < 0x1Fu )
    {
      AcpiRegisteredOpRegionMask &= ~0x80000000;
    }
  }
  else
  {
    v8 = 1;
  }
  ExReleaseFastMutex(&AcpiOpRegionLock);
  if ( !v8 )
  {
    if ( *v7 - 8 > 1 )
    {
      if ( a1 && (int)AMLIGetNameSpaceObject("_REG", a1, (unsigned __int64 *)&v15, 1) >= 0 )
      {
        memset(v14, 0, sizeof(v14));
        v9 = *v7;
        v14[7] = 0LL;
        WORD1(v14[0]) = 1;
        v14[2] = v9;
        WORD1(v14[5]) = 1;
        AMLIEvalNameSpaceObject(v15, 0LL, 2, v14);
        AMLIDereferenceHandleEx((__int64)v15);
      }
    }
    else
    {
      EnableDisableDeviceTreeRegionSpace(RootDeviceExtension, *v7, 0);
    }
  }
  v10 = (unsigned int)AMLIRegEventHandler(*((_DWORD *)a2 + 8), *v7, 0LL, 0LL) != 0 ? 0xC0000001 : 0;
  ExAcquireFastMutex(&AcpiOpRegionLock);
  v11 = *a2;
  if ( *(__int64 **)(*a2 + 8) != a2 || (v12 = (__int64 **)a2[1], *v12 != a2) )
    __fastfail(3u);
  *v12 = (__int64 *)v11;
  *(_QWORD *)(v11 + 8) = v12;
  a2[1] = (__int64)a2;
  *a2 = (__int64)a2;
  ExReleaseFastMutex(&AcpiOpRegionLock);
  ExFreePoolWithTag(a2, 0);
  return v10;
}
