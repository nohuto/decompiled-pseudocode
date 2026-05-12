/*
 * XREFs of RaidUnitGetCompatibleIds @ 0x1C0019DB4
 * Callers:
 *     RaUnitQueryIdIrp @ 0x1C0073CBC (RaUnitQueryIdIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0008278 (RaidAllocatePool.c)
 *     RaUnitIsSMRDisabled @ 0x1C00150F0 (RaUnitIsSMRDisabled.c)
 *     RtlStringCchPrintfExW @ 0x1C001A324 (RtlStringCchPrintfExW.c)
 *     RaidUnitGet1667DeviceRegistryValue @ 0x1C001A628 (RaidUnitGet1667DeviceRegistryValue.c)
 *     McTemplateK0zqjuuuq_EtwWriteTransfer @ 0x1C0045B34 (McTemplateK0zqjuuuq_EtwWriteTransfer.c)
 *     PortGetDeviceType @ 0x1C0072394 (PortGetDeviceType.c)
 *     RaFixupIds @ 0x1C0073EDC (RaFixupIds.c)
 */

__int64 __fastcall RaidUnitGetCompatibleIds(__int64 a1, wchar_t **a2)
{
  wchar_t *v3; // r14
  wchar_t *Pool; // rax
  int v6; // ecx
  _QWORD *DeviceType; // rax
  NTSTATUS v8; // edi
  wchar_t *v9; // rcx
  size_t v10; // rdx
  size_t v11; // r15
  wchar_t *v12; // rsi
  __int64 v13; // rdx
  __int64 result; // rax
  __int64 v15; // r9
  unsigned int v16; // eax
  NTSTATUS v17; // eax
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+98h] [rbp+48h] BYREF
  size_t pcchRemaining; // [rsp+A0h] [rbp+50h] BYREF

  v3 = 0LL;
  if ( (unsigned int)RaUnitIsSMRDisabled(a1) && (*(_DWORD *)(a1 + 1824) & 1) == 0 )
  {
    v15 = *(_QWORD *)(a1 + 24);
    if ( *(int *)(v15 + 4808) > 1 && byte_1C0068843 < 0 )
    {
      v16 = *(_DWORD *)(a1 + 96);
      McTemplateK0zqjuuuq_EtwWriteTransfer(
        v16 >> 8,
        v15 + 5192,
        HIWORD(v16),
        *(_QWORD *)(v15 + 4864),
        *(_DWORD *)(v15 + 56),
        v15 + 5192,
        v16,
        SBYTE1(v16),
        SBYTE2(v16),
        *(_DWORD *)(v15 + 4808));
    }
    v8 = -1073741637;
    goto LABEL_9;
  }
  Pool = (wchar_t *)RaidAllocatePool(PagedPool, 0x4CuLL, 0x49446152u, *(_QWORD *)(a1 + 8));
  v3 = Pool;
  if ( !Pool )
  {
    v8 = -1073741801;
    goto LABEL_9;
  }
  v6 = *(_DWORD *)(a1 + 1824);
  ppszDestEnd = Pool;
  pcchRemaining = 38LL;
  if ( (v6 & 1) != 0 )
  {
    v17 = RtlStringCchPrintfExW(Pool, 0x26uLL, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\VMLUN");
  }
  else
  {
    DeviceType = (_QWORD *)PortGetDeviceType(**(_BYTE **)(a1 + 104) & 0x1F);
    v8 = RtlStringCchPrintfExW(v3, 0x26uLL, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\%hs", *DeviceType);
    v9 = ppszDestEnd + 1;
    v10 = pcchRemaining - 1;
    ++ppszDestEnd;
    --pcchRemaining;
    if ( v8 < 0 )
      goto LABEL_9;
    v8 = RtlStringCchPrintfExW(v9, v10, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\RAW");
    v11 = pcchRemaining;
    v12 = ++ppszDestEnd;
    if ( v8 < 0 )
      goto LABEL_9;
    RaidUnitGet1667DeviceRegistryValue(a1);
    if ( !*(_BYTE *)(a1 + 128) )
      goto LABEL_7;
    v17 = RtlStringCchPrintfExW(v12, v11 - 1, &ppszDestEnd, &pcchRemaining, 0, L"%hs", "Disk1667");
  }
  v8 = v17;
  v12 = ppszDestEnd + 1;
LABEL_7:
  if ( v8 >= 0 )
  {
    *v12 = 0;
    LOBYTE(v13) = 1;
    RaFixupIds(v3, v13, 38LL);
  }
LABEL_9:
  result = (unsigned int)v8;
  *a2 = v3;
  return result;
}
