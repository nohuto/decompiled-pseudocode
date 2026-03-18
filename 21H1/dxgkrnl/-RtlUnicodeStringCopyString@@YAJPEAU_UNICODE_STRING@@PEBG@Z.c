/*
 * XREFs of ?RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C003F2BC
 * Callers:
 *     ?VmBusGetRegistryKeys@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023DDA0 (-VmBusGetRegistryKeys@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?ReadNextPath@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C025F700 (-ReadNextPath@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker_0 @ 0x1C003F338 (RtlUnicodeStringValidateDestWorker_0.c)
 *     RtlWideCharArrayCopyStringWorker @ 0x1C003F3F0 (RtlWideCharArrayCopyStringWorker.c)
 */

__int64 __fastcall RtlUnicodeStringCopyString(struct _UNICODE_STRING *a1, const unsigned __int16 *a2)
{
  NTSTATUS v4; // r8d
  size_t cchToCopy; // [rsp+20h] [rbp-28h]
  ULONG v7; // [rsp+28h] [rbp-20h]
  size_t pcchNewDestLength[3]; // [rsp+30h] [rbp-18h] BYREF
  size_t cchDest; // [rsp+60h] [rbp+18h] BYREF
  wchar_t *pszDest; // [rsp+68h] [rbp+20h] BYREF

  pszDest = 0LL;
  cchDest = 0LL;
  v4 = RtlUnicodeStringValidateDestWorker_0(a1, &pszDest, &cchDest, 0LL, cchToCopy, v7);
  if ( v4 >= 0 )
  {
    pcchNewDestLength[0] = 0LL;
    v4 = RtlWideCharArrayCopyStringWorker(pszDest, cchDest, pcchNewDestLength, a2, 0x7FFFuLL);
    a1->Length = 2 * LOWORD(pcchNewDestLength[0]);
  }
  return (unsigned int)v4;
}
