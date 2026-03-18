/*
 * XREFs of ?RtlUnicodeStringCchCatStringN@@YAJPEAU_UNICODE_STRING@@PEBG_K@Z @ 0x1C00400A0
 * Callers:
 *     ?VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z @ 0x1C0247E58 (-VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker_0 @ 0x1C00401A4 (RtlUnicodeStringValidateDestWorker_0.c)
 *     RtlWideCharArrayCopyStringWorker @ 0x1C004025C (RtlWideCharArrayCopyStringWorker.c)
 */

NTSTATUS __fastcall RtlUnicodeStringCchCatStringN(struct _UNICODE_STRING *a1, const unsigned __int16 *a2)
{
  NTSTATUS result; // eax
  __int16 v5; // bx
  size_t cchToCopy; // [rsp+20h] [rbp-20h]
  ULONG v7; // [rsp+28h] [rbp-18h]
  wchar_t *ppszDest; // [rsp+30h] [rbp-10h] BYREF
  size_t pcchNewDestLength; // [rsp+38h] [rbp-8h] BYREF
  size_t pcchDest; // [rsp+70h] [rbp+30h] BYREF
  size_t pcchDestLength; // [rsp+78h] [rbp+38h] BYREF

  ppszDest = 0LL;
  pcchDest = 0LL;
  pcchDestLength = 0LL;
  result = RtlUnicodeStringValidateDestWorker_0(a1, &ppszDest, &pcchDest, &pcchDestLength, cchToCopy, v7);
  if ( result >= 0 )
  {
    pcchNewDestLength = 0LL;
    v5 = pcchDestLength;
    result = RtlWideCharArrayCopyStringWorker(
               &ppszDest[pcchDestLength],
               pcchDest - pcchDestLength,
               &pcchNewDestLength,
               a2,
               1uLL);
    a1->Length = 2 * (pcchNewDestLength + v5);
  }
  return result;
}
