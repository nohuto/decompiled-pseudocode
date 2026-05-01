/*
 * XREFs of sub_18004226C @ 0x18004226C
 * Callers:
 *     sub_180042074 @ 0x180042074 (sub_180042074.c)
 * Callees:
 *     sub_180029148 @ 0x180029148 (sub_180029148.c)
 */

LSTATUS __fastcall sub_18004226C(HKEY a1, const WCHAR *a2, _DWORD *a3)
{
  LSTATUS result; // eax
  BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF
  DWORD v6; // [rsp+58h] [rbp+20h] BYREF

  v6 = 4;
  result = sub_180029148(a1, a2, v5, &v6);
  if ( result >= 0 )
  {
    if ( v6 == 4 )
    {
      *a3 = *(_DWORD *)v5;
      return 0;
    }
    else
    {
      return -1073739509;
    }
  }
  return result;
}
