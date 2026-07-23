/*
 * XREFs of HvlHalGetVpIndexFromApicId @ 0x1404F53C0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpGetVpIndexFromApicId @ 0x1404F2F8C (HvlpGetVpIndexFromApicId.c)
 */

__int64 __fastcall HvlHalGetVpIndexFromApicId(int a1, _DWORD *a2)
{
  __int64 result; // rax
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  result = HvlpGetVpIndexFromApicId(a1, &v4);
  *a2 = v4;
  return result;
}
