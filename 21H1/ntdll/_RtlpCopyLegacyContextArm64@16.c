/*
 * XREFs of _RtlpCopyLegacyContextArm64@16 @ 0x4B35BE5E
 * Callers:
 *     _RtlpCopyLegacyContext@16 @ 0x4B35BCDD (_RtlpCopyLegacyContext@16.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpCopyLegacyContextArm64(int a1, _DWORD *a2, int a3, _DWORD *a4)
{
  int v4; // ecx
  int result; // eax

  v4 = a3;
  *a2 = a3 & 0x67FFFFFF;
  if ( (a3 & 0x40000000) != 0 )
    *a2 = a3 & 0x67FFFFFF | *a4 & 0x98000000;
  if ( (a3 & 0x400001) == 0x400001 )
  {
    a2[66] = a4[66];
    a2[67] = a4[67];
    a2[64] = a4[64];
    a2[65] = a4[65];
    a2[1] = a4[1];
  }
  if ( (a3 & 0x400002) == 0x400002 )
  {
    qmemcpy(a2 + 2, a4 + 2, 0x90u);
    qmemcpy(a2 + 40, a4 + 40, 0x50u);
    v4 = a3;
    a2[60] = a4[60];
    a2[61] = a4[61];
    a2[62] = a4[62];
    a2[63] = a4[63];
  }
  if ( (v4 & 0x400010) == 0x400010 )
  {
    a2[38] = a4[38];
    a2[39] = a4[39];
  }
  if ( (v4 & 0x400004) == 0x400004 )
  {
    a2[196] = a4[196];
    a2[197] = a4[197];
    qmemcpy(a2 + 68, a4 + 68, 0x200u);
    v4 = a3;
  }
  result = 4194312;
  if ( (v4 & 0x400008) == 0x400008 )
  {
    qmemcpy(a2 + 206, a4 + 206, 0x40u);
    qmemcpy(a2 + 198, a4 + 198, 0x20u);
    a2[224] = a4[224];
    a2[225] = a4[225];
    a2[226] = a4[226];
    a2[227] = a4[227];
    a2[222] = a4[222];
    result = a4[223];
    a2[223] = result;
  }
  return result;
}
