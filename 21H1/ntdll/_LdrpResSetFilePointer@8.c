/*
 * XREFs of _LdrpResSetFilePointer@8 @ 0x4B343B27
 * Callers:
 *     _LdrpResReadFile@16 @ 0x4B343482 (_LdrpResReadFile@16.c)
 *     _LdrpResSearchResourceHandle@32 @ 0x4B3434F8 (_LdrpResSearchResourceHandle@32.c)
 * Callees:
 *     _ZwSetInformationFile@20 @ 0x4B2F2BF0 (_ZwSetInformationFile@20.c)
 */

int __fastcall LdrpResSetFilePointer(int a1, int a2)
{
  _BYTE v3[8]; // [esp+0h] [ebp-10h] BYREF
  _DWORD v4[2]; // [esp+8h] [ebp-8h] BYREF

  if ( !a1 || a1 == -1 )
    return -1073741816;
  v4[1] = 0;
  v4[0] = a2;
  return ZwSetInformationFile(a1, (int)v3, (int)v4, 8, 14);
}
