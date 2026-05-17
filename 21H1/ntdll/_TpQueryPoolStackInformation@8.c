/*
 * XREFs of _TpQueryPoolStackInformation@8 @ 0x4B383B90
 * Callers:
 *     <none>
 * Callees:
 *     _ZwQueryInformationWorkerFactory@20 @ 0x4B2F3E70 (_ZwQueryInformationWorkerFactory@20.c)
 */

int __stdcall TpQueryPoolStackInformation(int a1, _DWORD *a2)
{
  int result; // eax
  _BYTE v3[84]; // [esp+4h] [ebp-60h] BYREF
  int v4; // [esp+58h] [ebp-Ch]
  int v5; // [esp+5Ch] [ebp-8h]

  if ( !a1 || !a2 )
    return -1073741811;
  result = ZwQueryInformationWorkerFactory(*(_DWORD *)(a1 + 36), 7, (int)v3, 96, 0);
  if ( result >= 0 )
  {
    a2[1] = v5;
    *a2 = v4;
  }
  return result;
}
