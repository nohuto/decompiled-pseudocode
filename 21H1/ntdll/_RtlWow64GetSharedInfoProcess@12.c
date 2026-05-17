/*
 * XREFs of _RtlWow64GetSharedInfoProcess@12 @ 0x4B33A200
 * Callers:
 *     <none>
 * Callees:
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 *     _NtReadVirtualMemory@20 @ 0x4B2F2D70 (_NtReadVirtualMemory@20.c)
 */

int __thiscall RtlWow64GetSharedInfoProcess(void *this, int a2, _BYTE *a3, int a4)
{
  int result; // eax
  void *v5; // edx
  void *v6; // [esp+0h] [ebp-4h] BYREF

  v6 = this;
  result = ZwQueryInformationProcess(a2, 26, (int)&v6, 4, 0);
  if ( result >= 0 )
  {
    v5 = v6;
    if ( v6 )
    {
      *a3 = 1;
      return NtReadVirtualMemory(a2, (int)v5 + 1152, a4, 40, 0);
    }
    else
    {
      *a3 = 0;
    }
  }
  return result;
}
