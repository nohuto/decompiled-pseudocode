/*
 * XREFs of BiIsWinPEBoot @ 0x140782F84
 * Callers:
 *     BiCleanupLoadedStores @ 0x140782268 (BiCleanupLoadedStores.c)
 *     BcdCloseStore @ 0x1407825D4 (BcdCloseStore.c)
 * Callees:
 *     wcsstr @ 0x1403D4300 (wcsstr.c)
 *     BiGetRegistryValue @ 0x140783FB8 (BiGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

bool BiIsWinPEBoot()
{
  bool v0; // bl
  int v2; // [rsp+40h] [rbp+8h] BYREF
  wchar_t *Str; // [rsp+48h] [rbp+10h] BYREF

  v0 = 0;
  Str = 0LL;
  v2 = 0;
  if ( (int)BiGetRegistryValue(
              0LL,
              L"SystemStartOptions",
              L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control",
              1LL,
              &Str,
              &v2) >= 0 )
  {
    v0 = wcsstr(Str, L"MININT") != 0LL;
    ExFreePoolWithTag(Str, 0x4B444342u);
  }
  return v0;
}
