/*
 * XREFs of HvMoveLayoutStats @ 0x1407074A8
 * Callers:
 *     HvCheckHive @ 0x140706C14 (HvCheckHive.c)
 *     HvCheckBin @ 0x140707260 (HvCheckBin.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvMoveLayoutStats(_DWORD *a1)
{
  __int64 result; // rax

  *a1 += a1[2];
  result = (unsigned int)a1[3];
  a1[1] += result;
  a1[3] = 0;
  a1[2] = 0;
  return result;
}
