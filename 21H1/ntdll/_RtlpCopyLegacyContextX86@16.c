/*
 * XREFs of _RtlpCopyLegacyContextX86@16 @ 0x4B35C0BC
 * Callers:
 *     _RtlpCopyLegacyContext@16 @ 0x4B35BCDD (_RtlpCopyLegacyContext@16.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpCopyLegacyContextX86(int a1, _DWORD *a2, int a3, _DWORD *a4)
{
  int v4; // ecx
  int result; // eax

  v4 = a3;
  *a2 = a3 & 0x67FFFFFF;
  if ( (a3 & 0x40000000) != 0 )
    *a2 = a3 & 0x67FFFFFF | *a4 & 0x98000000;
  if ( (a3 & 0x10001) == 0x10001 )
  {
    a2[45] = a4[45];
    a2[46] = a4[46];
    a2[47] = a4[47];
    a2[48] = a4[48];
    a2[49] = a4[49];
    a2[50] = a4[50];
  }
  if ( (a3 & 0x10002) == 0x10002 )
  {
    a2[39] = a4[39];
    a2[40] = a4[40];
    a2[41] = a4[41];
    a2[43] = a4[43];
    a2[42] = a4[42];
    a2[44] = a4[44];
  }
  if ( (a3 & 0x10004) == 0x10004 )
  {
    a2[35] = a4[35];
    a2[36] = a4[36];
    a2[37] = a4[37];
    a2[38] = a4[38];
  }
  if ( (a3 & 0x10008) == 0x10008 )
  {
    qmemcpy(a2 + 7, a4 + 7, 0x70u);
    v4 = a3;
  }
  if ( (v4 & 0x10010) == 0x10010 )
  {
    a2[1] = a4[1];
    a2[2] = a4[2];
    a2[3] = a4[3];
    a2[4] = a4[4];
    a2[5] = a4[5];
    a2[6] = a4[6];
  }
  result = 65568;
  if ( (v4 & 0x10020) == 0x10020 )
    qmemcpy(a2 + 51, a4 + 51, 0x120u);
  return result;
}
