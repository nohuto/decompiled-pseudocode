/*
 * XREFs of _RtlpCopyLegacyContextArm@16 @ 0x4B35BFE4
 * Callers:
 *     _RtlpCopyLegacyContext@16 @ 0x4B35BCDD (_RtlpCopyLegacyContext@16.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpCopyLegacyContextArm(int a1, _DWORD *a2, int a3, _DWORD *a4)
{
  int v4; // ecx
  int result; // eax

  v4 = a3;
  *a2 = a3 & 0x67FFFFFF;
  if ( (a3 & 0x40000000) != 0 )
    *a2 = a3 & 0x67FFFFFF | *a4 & 0x98000000;
  if ( (a3 & 0x200001) == 0x200001 )
  {
    a2[16] = a4[16];
    a2[14] = a4[14];
    a2[15] = a4[15];
    a2[17] = a4[17];
  }
  if ( (a3 & 0x200002) == 0x200002 )
  {
    qmemcpy(a2 + 1, a4 + 1, 0x34u);
    v4 = a3;
  }
  if ( (v4 & 0x200004) == 0x200004 )
  {
    a2[18] = a4[18];
    qmemcpy(a2 + 20, a4 + 20, 0x100u);
    v4 = a3;
  }
  result = 2097160;
  if ( (v4 & 0x200008) == 0x200008 )
  {
    qmemcpy(a2 + 84, a4 + 84, 0x20u);
    qmemcpy(a2 + 92, a4 + 92, 0x24u);
    result = a4[101];
    a2[101] = result;
  }
  return result;
}
