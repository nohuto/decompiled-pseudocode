/*
 * XREFs of ExpGetSystemFirmwareTableInformation @ 0x1406D8DBC
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405E5DF0 (ExpQuerySystemInformation.c)
 *     ExpGetSystemFlushInformation @ 0x1406D8C90 (ExpGetSystemFlushInformation.c)
 *     ExpGetSystemPlatformBinary @ 0x1407BA264 (ExpGetSystemPlatformBinary.c)
 *     ExGetSystemFirmwareTable @ 0x1407BB3D0 (ExGetSystemFirmwareTable.c)
 *     ExEnumerateSystemFirmwareTables @ 0x140945640 (ExEnumerateSystemFirmwareTables.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1402421D0 (ExAllocatePoolWithQuotaTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402D5DD4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402D5F54 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     PsIsProcessAppContainer @ 0x1406D8FA4 (PsIsProcessAppContainer.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x14094BAD0 (ExpFirmwareAccessAppContainerCheck.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  _DWORD *PoolWithQuotaTag; // rax
  int v22; // [rsp+30h] [rbp-88h] BYREF
  _DWORD *v23; // [rsp+38h] [rbp-80h]
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+40h] [rbp-78h] BYREF
  int *v25; // [rsp+60h] [rbp-58h]
  int v26; // [rsp+68h] [rbp-50h]
  int v27; // [rsp+6Ch] [rbp-4Ch]

  v7 = 0;
  v8 = 0LL;
  v23 = 0LL;
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
  v23 = PoolWithQuotaTag;
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v15, v16, v17);
    if ( v12 )
    {
      if ( a2 )
      {
        if ( v7 >= 0 )
          memmove(Src + 16, v8 + 4, (unsigned int)v8[3]);
        if ( (int)(v7 + 0x80000000) < 0 || v7 == -1073741789 )
          *((_DWORD *)Src + 3) = v8[3];
        v18 = v8[3];
      }
      else
      {
        v18 = v9[3];
      }
      *a4 = v18 + 16;
    }
    else
    {
      v7 = -1073741822;
    }
  }
  else
  {
    v7 = -1073741790;
    if ( (unsigned int)dword_140C04490 > 5 && tlgKeywordOn((__int64)&dword_140C04490, 0x200000000000LL) )
    {
      v22 = *v8;
      v25 = &v22;
      v26 = 4;
      v27 = 0;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C04490,
        (unsigned __int8 *)byte_14002C745,
        0LL,
        0LL,
        3u,
        &v24);
    }
  }
LABEL_14:
  if ( v8 )
    ExFreePoolWithTag(v8, 0x54465241u);
  return (unsigned int)v7;
}
