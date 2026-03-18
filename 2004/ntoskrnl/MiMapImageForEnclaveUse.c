/*
 * XREFs of MiMapImageForEnclaveUse @ 0x1408D03BC
 * Callers:
 *     MiInitializeVsmEnclave @ 0x1408CFA98 (MiInitializeVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408CFF70 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     MiDereferenceControlAreaFile @ 0x1402293FC (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140229C10 (MiReferenceControlAreaFile.c)
 *     MiSectionControlArea @ 0x140248900 (MiSectionControlArea.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     MmMapViewOfSection @ 0x14065DF80 (MmMapViewOfSection.c)
 *     MiValidateSectionCreate @ 0x1406EAE30 (MiValidateSectionCreate.c)
 */

NTSTATUS __fastcall MiMapImageForEnclaveUse(void *a1, __int64 a2, KPROCESSOR_MODE a3, __int64 *a4, ULONG_PTR *a5)
{
  NTSTATUS result; // eax
  struct _DMA_ADAPTER *v8; // r14
  unsigned __int64 v9; // rax
  ULONG_PTR v10; // rsi
  int v11; // edi
  ULONG_PTR v12; // rbx
  PVOID Object; // [rsp+50h] [rbp-31h] BYREF
  __int64 v14; // [rsp+58h] [rbp-29h] BYREF
  _OWORD v15[3]; // [rsp+60h] [rbp-21h] BYREF

  Object = 0LL;
  memset(v15, 0, sizeof(v15));
  result = ObReferenceObjectByHandle(a1, 4u, MmSectionObjectType, a3, &Object, 0LL);
  if ( result >= 0 )
  {
    v8 = (struct _DMA_ADAPTER *)Object;
    v9 = MiSectionControlArea((__int64)Object);
    v10 = v9;
    if ( ((__int64)v8[3].DmaOperations & 0x20) != 0 )
    {
      if ( (*(_DWORD *)(v9 + 92) & 0xC0000) != 0 )
        goto LABEL_9;
      if ( (*(_QWORD *)(*(_QWORD *)(v9 + 96) + 40LL) & 0xFFFFFFFFFFFFFFF8uLL) <= 8 )
      {
        v12 = MiReferenceControlAreaFile(v9);
        v11 = MiValidateSectionCreate(v12, v10, 0xFFFFFFFF, a2, 0x40000000, 4, 0);
        MiDereferenceControlAreaFile(v10, v12);
        if ( v11 < 0 )
          goto LABEL_10;
        if ( (*(_DWORD *)(v10 + 92) & 0xC0000) != 0 )
        {
LABEL_9:
          KiStackAttachProcess((_KPROCESS *)PsSecureSystemProcess, 0LL, (__int64)v15);
          v14 = 0LL;
          Object = 0LL;
          v11 = MmMapViewOfSection((__int64)v8, PsSecureSystemProcess, a4, 0LL, 0LL, &v14, (__int64 *)&Object, 1, 0, 2);
          KiUnstackDetachProcess((__int64)v15, 0LL);
          *a5 = v10;
          goto LABEL_10;
        }
      }
      v11 = -1073740760;
    }
    else
    {
      v11 = -1073741751;
    }
LABEL_10:
    HalPutDmaAdapter(v8);
    return v11;
  }
  return result;
}
