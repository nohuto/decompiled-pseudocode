/*
 * XREFs of _RtlInitBarrier@12 @ 0x4B3502F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlInitBarrier(int a1, int a2, int a3)
{
  _DWORD *v3; // eax
  int v4; // edx

  v3 = (_DWORD *)((a1 + 7) & 0xFFFFFFF8);
  if ( !v3 )
    return -1073741811;
  v4 = 0;
  v3[2] = 0;
  v3[3] = a2;
  *v3 = 0;
  v3[1] = 0;
  return v4;
}
