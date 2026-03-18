/*
 * XREFs of PiCMGenerateDeviceInstance @ 0x1408AC170
 * Callers:
 *     PiCMCreateDevice @ 0x1408AB020 (PiCMCreateDevice.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     RtlInitUnicodeStringEx @ 0x14025BB40 (RtlInitUnicodeStringEx.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     RtlStringCchLengthW @ 0x1402DF438 (RtlStringCchLengthW.c)
 *     RtlStringCchPrintfExW @ 0x1402E5EAC (RtlStringCchPrintfExW.c)
 *     RtlStringCchCopyExW @ 0x1402E6214 (RtlStringCchCopyExW.c)
 *     RtlStringCchCatExW @ 0x1403BF5CC (RtlStringCchCatExW.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     _CmValidateDeviceName @ 0x140618100 (_CmValidateDeviceName.c)
 *     RtlUpcaseUnicodeString @ 0x14064FE60 (RtlUpcaseUnicodeString.c)
 *     _CmGetDeviceStatus @ 0x1406B0C40 (_CmGetDeviceStatus.c)
 *     _CmDeleteDevice @ 0x140717C2C (_CmDeleteDevice.c)
 *     _RegRtlSetValue @ 0x140752584 (_RegRtlSetValue.c)
 *     _CmCreateDevice @ 0x14075269C (_CmCreateDevice.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiCMGenerateDeviceInstance(NTSTRSAFE_PCWSTR pszSrc, char a2, wchar_t *a3, int a4)
{
  char v4; // r12
  HANDLE v8; // rdi
  int inited; // ebx
  wchar_t v10; // cx
  NTSTRSAFE_PCWSTR v11; // rdx
  NTSTRSAFE_PWSTR *v12; // r9
  NTSTRSAFE_PWSTR *v13; // r9
  wchar_t *PoolWithTag; // rsi
  int v15; // r14d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  size_t *pcchRemaining; // [rsp+20h] [rbp-50h]
  size_t *pcchRemaininga; // [rsp+20h] [rbp-50h]
  ULONG dwFlags; // [rsp+28h] [rbp-48h]
  ULONG dwFlagsa; // [rsp+28h] [rbp-48h]
  int v29; // [rsp+40h] [rbp-30h] BYREF
  int v30; // [rsp+44h] [rbp-2Ch] BYREF
  int v31; // [rsp+48h] [rbp-28h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-20h] BYREF
  size_t pcchLength; // [rsp+58h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF
  int v35; // [rsp+C0h] [rbp+50h] BYREF
  size_t v36; // [rsp+C8h] [rbp+58h] BYREF

  LODWORD(v36) = a4;
  v4 = 0;
  *a3 = 0;
  v31 = 0;
  v30 = 0;
  v29 = 0;
  v35 = 0;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  v8 = 0LL;
  inited = RtlStringCchLengthW(pszSrc, 0xC8uLL, &pcchLength);
  if ( inited >= 0 )
  {
    v10 = *pszSrc;
    v11 = pszSrc;
    while ( v10 )
    {
      if ( (unsigned __int16)(v10 - 33) > 0x5Eu || v10 == 44 || v10 == 92 )
      {
        inited = -1073741773;
        break;
      }
      v10 = *++v11;
    }
    if ( inited >= 0 )
    {
      inited = RtlStringCchCopyExW(a3, 0xC8uLL, L"Root", 0LL, 0LL, 0x800u);
      if ( inited >= 0 )
      {
        inited = RtlInitUnicodeStringEx(&DestinationString, a3);
        if ( inited >= 0 )
        {
          inited = RtlUpcaseUnicodeString(&DestinationString, &DestinationString, 0);
          if ( inited >= 0 )
          {
            inited = RtlStringCchCatExW(a3, 0xC8uLL, L"\\", v12, pcchRemaining, dwFlags);
            if ( inited >= 0 )
            {
              inited = RtlStringCchCatExW(a3, 0xC8uLL, pszSrc, v13, pcchRemaininga, dwFlagsa);
              if ( inited >= 0 )
              {
                PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x34706E50u);
                if ( !PoolWithTag )
                  return (unsigned int)-1073741670;
                v15 = 0;
                while ( 1 )
                {
                  if ( v8 )
                  {
                    ZwClose(v8);
                    v8 = 0LL;
                    KeyHandle = 0LL;
                  }
                  inited = RtlStringCchPrintfExW(PoolWithTag, 0xC8uLL, 0LL, 0LL, 0x800u, L"%s\\%04u");
                  if ( inited < 0 )
                    break;
                  if ( (int)CmGetDeviceStatus(
                              *(__int64 *)&PiPnpRtlCtx,
                              PoolWithTag,
                              0LL,
                              &v31,
                              &v30,
                              &v29,
                              (unsigned int)a3) < 0 )
                  {
                    CurrentThread = KeGetCurrentThread();
                    --CurrentThread->KernelApcDisable;
                    ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
                    v4 = 1;
                    LOBYTE(v36) = 0;
                    inited = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)PoolWithTag, 131078, &KeyHandle, &v36, 0);
                    if ( inited < 0 )
                      goto LABEL_36;
                    if ( (_BYTE)v36 )
                    {
                      v8 = KeyHandle;
                      inited = CmValidateDeviceName(v17, PoolWithTag);
                      if ( inited < 0
                        || (inited = RtlStringCchCopyExW(a3, 0xC8uLL, PoolWithTag, 0LL, 0LL, 0x800u), inited < 0) )
                      {
                        CmDeleteDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)PoolWithTag, 0);
                      }
                      else if ( a2 )
                      {
                        v35 = 1;
                        inited = RegRtlSetValue(v8, L"Phantom", 4u, &v35, 4u);
                      }
LABEL_35:
                      if ( !v4 )
                        break;
LABEL_36:
                      ExReleaseResourceLite(&PnpRegistryDeviceResource);
                      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v21, v22, v23);
                      v8 = KeyHandle;
                      break;
                    }
                    ExReleaseResourceLite(&PnpRegistryDeviceResource);
                    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v18, v19, v20);
                    v8 = KeyHandle;
                    v4 = 0;
                  }
                  if ( (unsigned int)++v15 > 0x270F )
                  {
                    inited = -2147483622;
                    goto LABEL_35;
                  }
                  v4 = 0;
                }
                if ( v8 )
                  ZwClose(v8);
                ExFreePoolWithTag(PoolWithTag, 0x34706E50u);
              }
            }
          }
        }
      }
    }
  }
  if ( inited == -2147483643 )
    return (unsigned int)-1073741789;
  return (unsigned int)inited;
}
