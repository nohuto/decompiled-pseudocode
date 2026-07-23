/*
 * XREFs of KeVerifyContextIpForUserCet @ 0x1403F2D8C
 * Callers:
 *     KiVerifyContextRecord @ 0x140265110 (KiVerifyContextRecord.c)
 *     PspGetSetContextInternal @ 0x14063E6D0 (PspGetSetContextInternal.c)
 * Callees:
 *     KiLogUserCetSetContextIpValidationFailure @ 0x1403F2C54 (KiLogUserCetSetContextIpValidationFailure.c)
 *     KiVerifyContextIpForUserCet @ 0x1403F2E48 (KiVerifyContextIpForUserCet.c)
 */

__int64 __fastcall KeVerifyContextIpForUserCet(__int64 a1, __int64 a2, int *a3, __int64 a4)
{
  __int64 v6; // rbp
  unsigned int v7; // edi
  unsigned int v8; // edi
  unsigned int v9; // ebx
  __int64 v10; // r8
  int v11; // edx
  unsigned __int8 v12; // r9
  __int64 v14; // [rsp+20h] [rbp-18h]

  if ( (*(_DWORD *)(a1 + 116) & 0x100000) == 0 )
    return 0;
  v6 = *(_QWORD *)(a1 + 184);
  v7 = *(_DWORD *)(v6 + 2516);
  if ( (v7 & 0x20000) == 0 || (*(_DWORD *)(a2 + 48) & 0x100001) != 0x100001 )
    return 0;
  v14 = a4;
  v8 = v7 >> 31;
  LOBYTE(a4) = v8;
  v9 = KiVerifyContextIpForUserCet(a1, a2, (_DWORD)a3, a4, v14);
  if ( v9 == -1073740278 )
  {
    v10 = *(_QWORD *)(a2 + 248);
    v11 = *a3;
    v12 = v8 ^ 1;
    if ( (*(_DWORD *)(v6 + 2516) & 0x40000) == 0 )
    {
      KiLogUserCetSetContextIpValidationFailure(2, v11, v10, v12);
      return v9;
    }
    KiLogUserCetSetContextIpValidationFailure(1, v11, v10, v12);
    return 0;
  }
  return v9;
}
