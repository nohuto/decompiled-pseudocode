/*
 * XREFs of HalpMcExportAndChargeNeededData @ 0x140792DE8
 * Callers:
 *     HalMcFinishMicrocode @ 0x1403A9100 (HalMcFinishMicrocode.c)
 * Callees:
 *     MmObtainChargesToLockPagedPool @ 0x140792E70 (MmObtainChargesToLockPagedPool.c)
 *     HalpMcExportAllData @ 0x140792EB0 (HalpMcExportAllData.c)
 *     HalpUnloadMicrocode @ 0x140866330 (HalpUnloadMicrocode.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpMcExportAndChargeNeededData(__int64 a1)
{
  __int64 v2; // rax
  void *v3; // rbx
  unsigned int v4; // edi
  __int64 result; // rax
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  v2 = HalpMcExportAllData(&v6, a1, 1LL);
  v3 = (void *)v2;
  if ( v2 )
  {
    v4 = v6;
    result = MmObtainChargesToLockPagedPool(v2, v6);
    HalpMcUpdateDataCharged = (_DWORD)result != 0;
    if ( (_DWORD)result )
    {
LABEL_3:
      HalpMcUpdateData = v3;
      LODWORD(HalpMcUpdateDataSize) = v4;
      return result;
    }
    ExFreePoolWithTag(v3, 0x206C6148u);
    result = HalpMcExportAllData(&v6, a1, 512LL);
    v3 = (void *)result;
    if ( result )
    {
      v4 = v6;
      goto LABEL_3;
    }
  }
  return HalpUnloadMicrocode();
}
