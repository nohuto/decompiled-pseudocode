/*
 * XREFs of _vConvertLogFontW@8 @ 0x89F34
 * Callers:
 *     _GreCreateFontIndirectW@8 @ 0x89CD6 (_GreCreateFontIndirectW@8.c)
 * Callees:
 *     <none>
 */

int __stdcall vConvertLogFontW(int a1, const void *a2)
{
  int result; // eax

  result = a1;
  qmemcpy((void *)a1, a2, 0x5Cu);
  *(_WORD *)(a1 + 92) = 0;
  *(_WORD *)(a1 + 220) = 0;
  *(_WORD *)(a1 + 284) = 0;
  *(_DWORD *)(a1 + 352) = 0;
  *(_DWORD *)(a1 + 348) = 134248036;
  return result;
}
