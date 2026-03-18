/*
 * XREFs of BiSetRegistryValue @ 0x1408123B4
 * Callers:
 *     BiSetFirmwareModified @ 0x1403A7718 (BiSetFirmwareModified.c)
 *     BcdSetElementDataWithFlags @ 0x140803250 (BcdSetElementDataWithFlags.c)
 *     BiAddStoreFromFile @ 0x14081210C (BiAddStoreFromFile.c)
 *     BiMarkTreatAsSystemStore @ 0x140812260 (BiMarkTreatAsSystemStore.c)
 *     BcdSetSystemStore @ 0x140A1CAC4 (BcdSetSystemStore.c)
 *     BiSetObjectDescription @ 0x140A1D308 (BiSetObjectDescription.c)
 *     BiCreateEfiEntry @ 0x140A1F234 (BiCreateEfiEntry.c)
 *     BiUpdateBcdObject @ 0x140A20DF8 (BiUpdateBcdObject.c)
 * Callees:
 *     BiSanitizeHandle @ 0x14025DBFC (BiSanitizeHandle.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     BiZwSetValueKey @ 0x1403A774C (BiZwSetValueKey.c)
 *     BiOpenKey @ 0x140813164 (BiOpenKey.c)
 *     BiCloseKey @ 0x1408132F0 (BiCloseKey.c)
 */

__int64 __fastcall BiSetRegistryValue(__int64 a1, const WCHAR *a2, __int64 a3, ULONG a4, PVOID a5, ULONG a6)
{
  unsigned int i; // esi
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  NTSTATUS v13; // ebx
  int v15[2]; // [rsp+38h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-48h] BYREF

  DestinationString = 0LL;
  for ( i = 0; ; ++i )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    v11 = BiSanitizeHandle(a1);
    a1 = v11;
    *(_QWORD *)v15 = 0LL;
    if ( a3 )
    {
      v13 = BiOpenKey(v11, a3, 131103LL, v15);
      if ( v13 < 0 )
        goto LABEL_5;
    }
    else
    {
      *(_QWORD *)v15 = v11;
    }
    v13 = BiZwSetValueKey(*(void **)v15, &DestinationString, v12, a4, a5, a6);
LABEL_5:
    if ( *(_QWORD *)v15 != a1 && *(_QWORD *)v15 )
      BiCloseKey(*(_QWORD *)v15);
    if ( v13 == -1073741443 )
    {
      __debugbreak();
      if ( i < 5 )
        continue;
    }
    break;
  }
  return (unsigned int)v13;
}
