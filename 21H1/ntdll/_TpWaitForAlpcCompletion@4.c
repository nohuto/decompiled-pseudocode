/*
 * XREFs of _TpWaitForAlpcCompletion@4 @ 0x4B383490
 * Callers:
 *     <none>
 * Callees:
 *     _TppBarrierAdjust@12 @ 0x4B2DDB10 (_TppBarrierAdjust@12.c)
 *     _TppAlpcpValidateAlpc@12 @ 0x4B2E9A18 (_TppAlpcpValidateAlpc@12.c)
 *     _ZwAlpcQueryInformation@20 @ 0x4B2F3210 (_ZwAlpcQueryInformation@20.c)
 */

int __stdcall TpWaitForAlpcCompletion(int a1)
{
  int result; // eax
  int v2; // [esp+4h] [ebp-4h] BYREF

  result = TppAlpcpValidateAlpc(a1, 0, 0);
  if ( result )
  {
    v2 = *(_DWORD *)(a1 + 172);
    if ( v2 )
      ZwAlpcQueryInformation(*(_DWORD *)(a1 + 168), 11, (int)&v2, 4, 0);
    return TppBarrierAdjust((signed __int64 *)(a1 + 80), 0, 1);
  }
  return result;
}
