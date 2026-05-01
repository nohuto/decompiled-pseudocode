/*
 * XREFs of sub_1800299B8 @ 0x1800299B8
 * Callers:
 *     sub_1800066B0 @ 0x1800066B0 (sub_1800066B0.c)
 *     sub_18001BD70 @ 0x18001BD70 (sub_18001BD70.c)
 *     sub_1800298A0 @ 0x1800298A0 (sub_1800298A0.c)
 *     sub_18002AA04 @ 0x18002AA04 (sub_18002AA04.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800299B8(__int64 a1)
{
  __int64 v1; // r8
  unsigned int v2; // ecx
  int v3; // edx
  int v4; // edx

  v1 = *(_QWORD *)(a1 + 776);
  v2 = 0;
  v3 = *(_DWORD *)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(v1 + 88) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL) + 120)
                              + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                 + 580) & 3;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
      return v4 == 1;
    else
      return *(_WORD *)(v1 + 610) & 1;
  }
  return v2;
}
