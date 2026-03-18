/*
 * XREFs of _CkptInit@8 @ 0xB4EF2
 * Callers:
 *     __GetWindowPlacement@12 @ 0xB456C (__GetWindowPlacement@12.c)
 *     _CkptRestore@8 @ 0xB487A (_CkptRestore@8.c)
 * Callees:
 *     <none>
 */

int __fastcall CkptInit(_DWORD *a1, _DWORD *a2)
{
  int result; // eax

  a2[12] &= 0xFFFFFF80;
  result = -1;
  a2[8] = -1;
  a2[9] = -1;
  a2[10] = -1;
  a2[11] = -1;
  *a2 = *a1;
  a2[1] = a1[1];
  a2[2] = a1[2];
  a2[3] = a1[3];
  a2[4] = *a1;
  a2[5] = a1[1];
  a2[6] = a1[2];
  a2[7] = a1[3];
  return result;
}
