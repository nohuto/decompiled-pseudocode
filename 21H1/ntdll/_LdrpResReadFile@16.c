/*
 * XREFs of _LdrpResReadFile@16 @ 0x4B343482
 * Callers:
 *     _LdrpResSearchResourceInsideDirectory@52 @ 0x4B2BE960 (_LdrpResSearchResourceInsideDirectory@52.c)
 *     _LdrpResCompareResourceNames@32 @ 0x4B2BF6C8 (_LdrpResCompareResourceNames@32.c)
 *     _LdrpResSearchResourceHandle@32 @ 0x4B3434F8 (_LdrpResSearchResourceHandle@32.c)
 * Callees:
 *     _ZwWaitForSingleObject@12 @ 0x4B2F29A0 (_ZwWaitForSingleObject@12.c)
 *     _NtReadFile@36 @ 0x4B2F29C0 (_NtReadFile@36.c)
 *     _LdrpResSetFilePointer@8 @ 0x4B343B27 (_LdrpResSetFilePointer@8.c)
 */

int __thiscall LdrpResReadFile(void *this, int a2, int a3)
{
  int result; // eax
  int File; // ecx
  _BYTE v6[4]; // [esp+8h] [ebp-8h] BYREF
  int v7; // [esp+Ch] [ebp-4h]

  if ( !this || this == (void *)-1 )
    return -1073741811;
  result = LdrpResSetFilePointer();
  if ( result >= 0 )
  {
    File = NtReadFile((int)this, 0, 0, 0, (int)v6, a2, a3, 0, 0);
    if ( File == 259 )
      File = ZwWaitForSingleObject((int)this, 0, 0);
    result = (File & 0xC0000000) != 0x80000000 ? File : 0;
    if ( result >= 0 && a3 != v7 )
      return -1073741823;
  }
  return result;
}
