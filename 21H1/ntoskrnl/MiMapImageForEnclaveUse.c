/*
 * XREFs of MiMapImageForEnclaveUse @ 0x1408CF06C
 * Callers:
 *     MiInitializeVsmEnclave @ 0x1408CE748 (MiInitializeVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408CEC20 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     MiDereferenceControlAreaFile @ 0x14028244C (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140282C60 (MiReferenceControlAreaFile.c)
 *     MiSectionControlArea @ 0x1402A1930 (MiSectionControlArea.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     MiValidateSectionCreate @ 0x1406C9BB0 (MiValidateSectionCreate.c)
 *     MmMapViewOfSection @ 0x1406FA5A0 (MmMapViewOfSection.c)
 */

NTSTATUS __fastcall MiMapImageForEnclaveUse(void *a1, __int64 a2, KPROCESSOR_MODE a3, __int64 *a4, ULONG_PTR *a5)
{
  NTSTATUS result; // eax
  struct _DMA_ADAPTER *v8; // r14
  unsigned __int64 v9; // rax
  _DWORD *v10; // r9
  ULONG_PTR v11; // rsi
  int v12; // edi
  ULONG_PTR v13; // rbx
  __int64 v14; // r8
  _DWORD *v15; // r9
  PVOID Object; // [rsp+50h] [rbp-31h] BYREF
  __int64 v17; // [rsp+58h] [rbp-29h] BYREF
  _OWORD v18[3]; // [rsp+60h] [rbp-21h] BYREF

  Object = 0LL;
  memset(v18, 0, sizeof(v18));
  result = ObReferenceObjectByHandle(a1, 4u, MmSectionObjectType, a3, &Object, 0LL);
  if ( result >= 0 )
  {
    v8 = (struct _DMA_ADAPTER *)Object;
    v9 = MiSectionControlArea((__int64)Object);
    v11 = v9;
    if ( ((__int64)v8[3].DmaOperations & 0x20) != 0 )
    {
      if ( (*(_DWORD *)(v9 + 92) & 0xC0000) != 0 )
        goto LABEL_9;
      if ( (*(_QWORD *)(*(_QWORD *)(v9 + 96) + 40LL) & 0xFFFFFFFFFFFFFFF8uLL) <= 8 )
      {
        v13 = MiReferenceControlAreaFile(v9);
        v12 = MiValidateSectionCreate(v13, v11, 0xFFFFFFFF, a2, 0x40000000, 4, 0);
        MiDereferenceControlAreaFile(v11, v13);
        if ( v12 < 0 )
          goto LABEL_10;
        if ( (*(_DWORD *)(v11 + 92) & 0xC0000) != 0 )
        {
LABEL_9:
          KiStackAttachProcess((_KPROCESS *)PsSecureSystemProcess, 0LL, (__int64)v18, v10);
          v17 = 0LL;
          Object = 0LL;
          v12 = MmMapViewOfSection((__int64)v8, PsSecureSystemProcess, a4, 0LL, 0LL, &v17, (__int64 *)&Object, 1, 0, 2);
          KiUnstackDetachProcess((__int64)v18, 0LL, v14, v15);
          *a5 = v11;
          goto LABEL_10;
        }
      }
      v12 = -1073740760;
    }
    else
    {
      v12 = -1073741751;
    }
LABEL_10:
    HalPutDmaAdapter(v8);
    return v12;
  }
  return result;
}
