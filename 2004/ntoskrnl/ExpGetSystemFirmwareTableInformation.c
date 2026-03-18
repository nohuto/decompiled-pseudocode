/*
 * XREFs of ExpGetSystemFirmwareTableInformation @ 0x1406FC96C
 * Callers:
 *     ExpQuerySystemInformation @ 0x14068F290 (ExpQuerySystemInformation.c)
 *     ExpGetSystemFlushInformation @ 0x1406FC840 (ExpGetSystemFlushInformation.c)
 *     ExpGetSystemPlatformBinary @ 0x1407BD3D4 (ExpGetSystemPlatformBinary.c)
 *     ExGetSystemFirmwareTable @ 0x1407BE540 (ExGetSystemFirmwareTable.c)
 *     ExEnumerateSystemFirmwareTables @ 0x1409468E0 (ExEnumerateSystemFirmwareTables.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402090B0 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14026C434 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14026C5B4 (_tlgKeywordOn.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140297DA0 (ExAllocatePoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     PsIsProcessAppContainer @ 0x1406FCB54 (PsIsProcessAppContainer.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x14094CE70 (ExpFirmwareAccessAppContainerCheck.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpGetSystemFirmwareTableInformation(char *Src, char a2, unsigned int a3, _DWORD *a4)
{
  int v7; // edi
  _DWORD *v8; // rbx
  _DWORD *v9; // rsi
  unsigned int v10; // r14d
  struct _KTHREAD *CurrentThread; // rax
  __int64 (__fastcall *v12)(_DWORD *); // r14
  __int64 v13; // rcx
  __int64 *v14; // rax
  int v15; // eax
  _DWORD *PoolWithQuotaTag; // rax
  int v19; // [rsp+30h] [rbp-88h] BYREF
  _DWORD *v20; // [rsp+38h] [rbp-80h]
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+40h] [rbp-78h] BYREF
  int *v22; // [rsp+60h] [rbp-58h]
  int v23; // [rsp+68h] [rbp-50h]
  int v24; // [rsp+6Ch] [rbp-4Ch]

  v7 = 0;
  v8 = 0LL;
  v20 = 0LL;
  if ( a3 < 0x10 )
  {
    *a4 = 16;
    v7 = -1073741820;
    goto LABEL_14;
  }
  v9 = Src;
  v10 = a3 - 16;
  if ( !a2 )
    goto LABEL_3;
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, a3, 0x54465241u);
  v8 = PoolWithQuotaTag;
  v20 = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
  {
    v7 = -1073741670;
    goto LABEL_14;
  }
  memmove(PoolWithQuotaTag, Src, a3);
  v9 = v8;
  if ( !(unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process)
    || *v8 == 1381190978 && (unsigned __int8)ExpFirmwareAccessAppContainerCheck(0LL) )
  {
LABEL_3:
    v9[3] = v10;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&ExpFirmwareTableResource, 1u);
    v12 = 0LL;
    v13 = ExpFirmwareTableProviderListHead - 24;
    if ( &ExpFirmwareTableProviderListHead != (__int64 *)ExpFirmwareTableProviderListHead )
    {
      while ( *(_DWORD *)v13 != *v9 )
      {
        v14 = *(__int64 **)(v13 + 24);
        v13 = (__int64)(v14 - 3);
        if ( &ExpFirmwareTableProviderListHead == v14 )
          goto LABEL_8;
      }
      v12 = *(__int64 (__fastcall **)(_DWORD *))(v13 + 8);
    }
LABEL_8:
    if ( v12 )
      v7 = v12(v9);
    ExReleaseResourceLite(&ExpFirmwareTableResource);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v12 )
    {
      if ( a2 )
      {
        if ( v7 >= 0 )
          memmove(Src + 16, v8 + 4, (unsigned int)v8[3]);
        if ( (int)(v7 + 0x80000000) < 0 || v7 == -1073741789 )
          *((_DWORD *)Src + 3) = v8[3];
        v15 = v8[3];
      }
      else
      {
        v15 = v9[3];
      }
      *a4 = v15 + 16;
    }
    else
    {
      v7 = -1073741822;
    }
  }
  else
  {
    v7 = -1073741790;
    if ( (unsigned int)dword_140C044D0 > 5 && tlgKeywordOn((__int64)&dword_140C044D0, 0x200000000000LL) )
    {
      v19 = *v8;
      v22 = &v19;
      v23 = 4;
      v24 = 0;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C044D0,
        (unsigned __int8 *)byte_14002C845,
        0LL,
        0LL,
        3u,
        &v21);
    }
  }
LABEL_14:
  if ( v8 )
    ExFreePoolWithTag(v8, 0x54465241u);
  return (unsigned int)v7;
}
