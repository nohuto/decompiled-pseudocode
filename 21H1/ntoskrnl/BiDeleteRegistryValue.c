/*
 * XREFs of BiDeleteRegistryValue @ 0x14076D9F4
 * Callers:
 *     BiSetFirmwareModified @ 0x140397F78 (BiSetFirmwareModified.c)
 *     BiMarkTreatAsSystemStore @ 0x14076D730 (BiMarkTreatAsSystemStore.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     CmSiCloseSection @ 0x140318BA0 (CmSiCloseSection.c)
 *     BiSanitizeHandle @ 0x140322838 (BiSanitizeHandle.c)
 *     BiZwDeleteValueKey @ 0x140398128 (BiZwDeleteValueKey.c)
 *     BiOpenKey @ 0x14076FC14 (BiOpenKey.c)
 */

__int64 __fastcall BiDeleteRegistryValue(__int64 a1, const WCHAR *a2, __int64 a3)
{
  unsigned __int64 v5; // rax
  void *v6; // rsi
  int v7; // eax
  void *v8; // rbx
  unsigned int v9; // edi
  UNICODE_STRING v11; // [rsp+20h] [rbp-18h] BYREF
  void *v12; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  RtlInitUnicodeString(&v11, a2);
  v5 = BiSanitizeHandle(a1);
  v12 = 0LL;
  v6 = (void *)v5;
  if ( !a3 )
  {
    v8 = (void *)v5;
    goto LABEL_3;
  }
  v7 = BiOpenKey(v5, a3, 131103LL, &v12);
  v8 = v12;
  v9 = v7;
  if ( v7 >= 0 )
LABEL_3:
    v9 = BiZwDeleteValueKey(v8, &v11);
  if ( v8 != v6 && v8 )
    CmSiCloseSection(v8);
  return v9;
}
