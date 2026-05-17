/*
 * XREFs of _EtwpWriteRemainingCompressedData@12 @ 0x4B383377
 * Callers:
 *     _EtwpFinalizeLogFileHeader@8 @ 0x4B2EE176 (_EtwpFinalizeLogFileHeader@8.c)
 * Callees:
 *     _NtWriteFile@36 @ 0x4B2F29E0 (_NtWriteFile@36.c)
 */

int __fastcall EtwpWriteRemainingCompressedData(int *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v5; // edi
  int v6; // edx
  int v7; // eax
  bool v8; // cf
  _DWORD *v9; // ecx
  _BYTE v10[8]; // [esp+8h] [ebp-Ch] BYREF
  _DWORD *v11; // [esp+10h] [ebp-4h]

  v11 = a2;
  *a2 = 0;
  *a3 = 0;
  if ( !a1[80] )
    return 0;
  v5 = a1 + 62;
  v6 = NtWriteFile(a1[26], 0, 0, 0, (int)v10, a1[78], a1[35], (int)(a1 + 62), 0);
  if ( v6 >= 0 )
  {
    v7 = a1[80];
    v8 = __CFADD__(v7, *v5);
    *v5 += v7;
    v9 = v11;
    a1[63] += v8;
    *v9 = a1[81];
  }
  else
  {
    *a3 = a1[81];
  }
  return v6;
}
