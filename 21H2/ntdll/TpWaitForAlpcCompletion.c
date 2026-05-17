/*
 * XREFs of TpWaitForAlpcCompletion @ 0x18007A670
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x18004CF8C (TppBarrierAdjust.c)
 *     TppAlpcpValidateAlpc @ 0x18007A77C (TppAlpcpValidateAlpc.c)
 *     ZwAlpcQueryInformation @ 0x18009E750 (ZwAlpcQueryInformation.c)
 */

__int64 __fastcall TpWaitForAlpcCompletion(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // r9
  int v4; // [rsp+48h] [rbp+10h] BYREF

  result = TppAlpcpValidateAlpc(a1, 0LL, 0LL);
  if ( (_DWORD)result )
  {
    v4 = *(_DWORD *)(a1 + 280);
    if ( v4 )
      ZwAlpcQueryInformation(*(_QWORD *)(a1 + 272), 11LL, &v4);
    return TppBarrierAdjust((volatile signed __int64 *)(a1 + 128), 0, 1uLL, v3);
  }
  return result;
}
