/*
 * XREFs of ?UpdateRotation@@YGXPAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@W4DISPLAYCONFIG_ROTATION@@@Z @ 0x140D4D
 * Callers:
 *     ?xxxRotateScreen@CLegacyRotationMgr@@AAEJKHPAH@Z @ 0x141004 (-xxxRotateScreen@CLegacyRotationMgr@@AAEJKHPAH@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall UpdateRotation(_DWORD *a1, int a2)
{
  int result; // eax
  int v4; // ecx
  int v5; // eax

  result = a1[26];
  if ( a2 != result )
  {
    if ( (((unsigned __int8)a2 ^ (unsigned __int8)result) & 1) != 0 && ((unsigned int)&loc_20000 & *a1) != 0 )
    {
      v4 = a1[31];
      a1[31] = a1[32];
      a1[32] = v4;
    }
    v5 = a1[1];
    *a1 |= 0x200u;
    a1[2] |= 0x200u;
    a1[1] = v5;
    result = a1[3];
    a1[26] = a2;
    a1[3] = result;
  }
  return result;
}
