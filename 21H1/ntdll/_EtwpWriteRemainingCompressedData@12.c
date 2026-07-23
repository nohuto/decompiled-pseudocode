/*
 * XREFs of _EtwpWriteRemainingCompressedData@12 @ 0x4B383377
 * Callers:
 *     _EtwpFinalizeLogFileHeader@8 @ 0x4B2EE176 (_EtwpFinalizeLogFileHeader@8.c)
 * Callees:
 *     _NtWriteFile@36 @ 0x4B2F29E0 (_NtWriteFile@36.c)
 */

NTSTATUS __fastcall EtwpWriteRemainingCompressedData(int a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v5; // edi
  NTSTATUS v6; // edx
  int v7; // eax
  bool v8; // cf
  _DWORD *v9; // ecx
  _IO_STATUS_BLOCK IoStatusBlock; // [esp+8h] [ebp-Ch] BYREF
  _DWORD *v11; // [esp+10h] [ebp-4h]

  v11 = a2;
  *a2 = 0;
  *a3 = 0;
  if ( !*(_DWORD *)(a1 + 320) )
    return 0;
  v5 = (_DWORD *)(a1 + 248);
  v6 = NtWriteFile(
         *(HANDLE *)(a1 + 104),
         0,
         0,
         0,
         &IoStatusBlock,
         *(PVOID *)(a1 + 312),
         *(_DWORD *)(a1 + 140),
         (PLARGE_INTEGER)(a1 + 248),
         0);
  if ( v6 >= 0 )
  {
    v7 = *(_DWORD *)(a1 + 320);
    v8 = __CFADD__(v7, *v5);
    *v5 += v7;
    v9 = v11;
    *(_DWORD *)(a1 + 252) += v8;
    *v9 = *(_DWORD *)(a1 + 324);
  }
  else
  {
    *a3 = *(_DWORD *)(a1 + 324);
  }
  return v6;
}
