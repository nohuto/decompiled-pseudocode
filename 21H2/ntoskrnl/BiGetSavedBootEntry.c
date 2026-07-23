/*
 * XREFs of BiGetSavedBootEntry @ 0x1409726AC
 * Callers:
 *     BiBuildIdentifierList @ 0x140970B08 (BiBuildIdentifierList.c)
 *     BiCreateEfiEntry @ 0x1409714B0 (BiCreateEfiEntry.c)
 * Callees:
 *     BiGetRegistryValue @ 0x140783FB8 (BiGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiGetSavedBootEntry(__int64 a1, PVOID *a2)
{
  int RegistryValue; // eax
  PVOID v4; // rcx
  int v5; // ebx
  unsigned int v7; // [rsp+50h] [rbp+18h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0;
  P = 0LL;
  RegistryValue = BiGetRegistryValue(a1, L"FirmwareVariable", (__int64)L"Description", 3, &P, &v7);
  v4 = P;
  v5 = RegistryValue;
  if ( RegistryValue < 0
    || (v7 < 0x1C || *((_DWORD *)P + 1) < 0x1Cu || !*(_DWORD *)P ? (PVOID)(v5 = -1073741811) : (*a2 = P), v5 < 0) )
  {
    if ( v4 )
      ExFreePoolWithTag(v4, 0x4B444342u);
  }
  return (unsigned int)v5;
}
