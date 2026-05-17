/*
 * XREFs of _RtlIsPartialPlaceholderFileHandle@8 @ 0x4B3667B0
 * Callers:
 *     <none>
 * Callees:
 *     _ZwQueryInformationFile@20 @ 0x4B2F2A70 (_ZwQueryInformationFile@20.c)
 */

int __stdcall RtlIsPartialPlaceholderFileHandle(int a1, bool *a2)
{
  int InformationFile; // eax
  int v3; // ecx
  char v5[8]; // [esp+0h] [ebp-10h] BYREF
  int v6; // [esp+8h] [ebp-8h] BYREF

  InformationFile = ZwQueryInformationFile(a1, (int)v5, (int)&v6, 8, 35);
  v3 = InformationFile;
  if ( InformationFile >= 0 )
  {
    *a2 = (v6 & 0x440000) != 0;
    return 0;
  }
  else if ( InformationFile == -1073741811 )
  {
    v3 = 0;
    *a2 = 0;
  }
  return v3;
}
