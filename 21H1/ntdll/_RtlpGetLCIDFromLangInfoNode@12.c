/*
 * XREFs of _RtlpGetLCIDFromLangInfoNode@12 @ 0x4B2ABEE0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlCultureNameToLCID@8 @ 0x4B2D56B0 (_RtlCultureNameToLCID@8.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

int __stdcall RtlpGetLCIDFromLangInfoNode(int a1, int a2, _WORD *a3)
{
  __int16 v3; // cx
  __int16 v5; // ax
  UNICODE_STRING DestinationString; // [esp+4h] [ebp-Ch] BYREF
  int v7; // [esp+Ch] [ebp-4h] BYREF

  v7 = 0;
  if ( !a1 || !a2 || !a3 )
    return -1073741811;
  v3 = *(_WORD *)(a2 + 4);
  if ( v3 )
  {
    *a3 = v3;
  }
  else
  {
    v5 = *(_WORD *)(a2 + 6);
    if ( v5 >= 0 )
    {
      RtlInitUnicodeString(
        &DestinationString,
        (PCWSTR)(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 16)
               + 2 * *(__int16 *)(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 12) + 2 * v5)));
      if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v7) )
        *a3 = v7;
    }
  }
  return 0;
}
