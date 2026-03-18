/*
 * XREFs of MiGetAwePageSizeFromVa @ 0x1405AAF9C
 * Callers:
 *     MmSetGraphicsPtes @ 0x14096B560 (MmSetGraphicsPtes.c)
 * Callees:
 *     MiGetAweNode @ 0x1405AAF14 (MiGetAweNode.c)
 *     MiGetAweViewPageSize @ 0x1405AB030 (MiGetAweViewPageSize.c)
 */

_QWORD *__fastcall MiGetAwePageSizeFromVa(unsigned __int64 a1)
{
  _QWORD *result; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r11
  __int64 v6; // rdx

  result = MiGetAweNode(a1);
  if ( result )
  {
    result = (_QWORD *)MiGetAweViewPageSize(result, v2, v3, v4);
    if ( !result )
    {
      v6 = *(_QWORD *)(v5 + 32);
      if ( (*(_DWORD *)(v6 + 8) & 1) == 0 )
        return *(_QWORD **)(v6 + 16);
    }
  }
  return result;
}
