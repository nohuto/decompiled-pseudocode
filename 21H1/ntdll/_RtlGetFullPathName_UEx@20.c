/*
 * XREFs of _RtlGetFullPathName_UEx@20 @ 0x4B2D22F0
 * Callers:
 *     _RtlGetFullPathName_U@16 @ 0x4B2ECAC0 (_RtlGetFullPathName_U@16.c)
 * Callees:
 *     _RtlGetFullPathName_Ustr@24 @ 0x4B2C8CA0 (_RtlGetFullPathName_Ustr@24.c)
 *     _RtlInitUnicodeStringEx@8 @ 0x4B2D1CE0 (_RtlInitUnicodeStringEx@8.c)
 */

int __stdcall RtlGetFullPathName_UEx(_WORD *a1, size_t a2, _WORD *a3, _DWORD *a4, unsigned int *a5)
{
  int result; // eax
  unsigned int FullPathName_Ustr; // eax
  unsigned __int16 v7[4]; // [esp+8h] [ebp-10h] BYREF
  int v8; // [esp+10h] [ebp-8h] BYREF

  if ( a5 )
    *a5 = 0;
  result = RtlInitUnicodeStringEx((int)v7, a1);
  if ( result >= 0 )
  {
    FullPathName_Ustr = RtlGetFullPathName_Ustr(v7, a2, a3, a4, 0, &v8);
    if ( FullPathName_Ustr )
    {
      if ( a5 )
        *a5 = FullPathName_Ustr;
      return 0;
    }
    else
    {
      return -1073741773;
    }
  }
  return result;
}
