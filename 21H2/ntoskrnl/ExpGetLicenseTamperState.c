/*
 * XREFs of ExpGetLicenseTamperState @ 0x1405B2CC8
 * Callers:
 *     ExGetLicenseTamperState @ 0x14094D210 (ExGetLicenseTamperState.c)
 *     ExSetLicenseTamperState @ 0x14094D2D0 (ExSetLicenseTamperState.c)
 *     sub_14094D610 @ 0x14094D610 (sub_14094D610.c)
 *     sub_14094DE40 @ 0x14094DE40 (sub_14094DE40.c)
 *     sub_14094DEC0 @ 0x14094DEC0 (sub_14094DEC0.c)
 *     SLUpdateLicenseDataInternal @ 0x14094E290 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     ExpLicUpdateChecksum @ 0x1405B2E28 (ExpLicUpdateChecksum.c)
 *     ExpSetKernelDataProtection @ 0x140685DD0 (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x140685FC0 (ExpGetKernelDataProtection.c)
 */

__int64 __fastcall ExpGetLicenseTamperState(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned __int64 v7; // r10
  int updated; // eax
  __int64 v9; // rdx
  __int64 v10; // r9
  __int128 v11; // [rsp+20h] [rbp-60h] BYREF
  __int128 v12; // [rsp+30h] [rbp-50h]
  __int128 v13; // [rsp+40h] [rbp-40h]
  __int128 v14; // [rsp+50h] [rbp-30h] BYREF
  __int128 v15; // [rsp+60h] [rbp-20h]
  __int128 v16; // [rsp+70h] [rbp-10h]

  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  if ( !*(_QWORD *)(a1 + 46832) )
  {
    result = *(unsigned int *)(a1 + 46988);
    *a2 = result;
    return result;
  }
  result = ExpGetKernelDataProtection(a1, &v14);
  if ( (int)result >= 0 )
  {
    result = DWORD2(v14);
    *a2 = DWORD2(v14);
    return result;
  }
  if ( (_DWORD)result == -1073741275 )
  {
    v5 = *(_QWORD *)(a1 + 46832);
    v6 = *(unsigned int *)(a1 + 46824);
    LODWORD(v7) = -1;
    HIDWORD(v11) = 0;
    *(_DWORD *)((char *)&v13 + 9) = 0;
    *(_WORD *)((char *)&v13 + 13) = 0;
    HIBYTE(v13) = 0;
    if ( !v5 )
    {
      result = 3221225485LL;
LABEL_17:
      if ( (int)result >= 0 )
      {
        DWORD2(v14) = 4;
        result = ExpSetKernelDataProtection(a1, &v14, (unsigned int)v7, 0LL);
      }
      goto LABEL_19;
    }
    if ( (_DWORD)v6 && a1 == -24 )
      goto LABEL_19;
    *(_QWORD *)&v11 = 0LL;
    v12 = 0uLL;
    DWORD2(v11) = 4;
    *(_QWORD *)&v13 = 0LL;
    BYTE8(v13) = 1;
    updated = ExpLicUpdateChecksum(v5 + 20, v6, &v11, a1 + 24);
    if ( updated )
      goto LABEL_14;
    if ( (_DWORD)v9 )
    {
      if ( 16 * v9 > v7 )
        goto LABEL_14;
      updated = ExpLicUpdateChecksum(v10, v9, &v11, v10);
    }
    if ( !updated )
    {
LABEL_15:
      result = 0LL;
      v14 = v11;
      v15 = v12;
      v16 = v13;
      goto LABEL_17;
    }
LABEL_14:
    *(_QWORD *)&v11 = 0LL;
    DWORD2(v11) = 4;
    goto LABEL_15;
  }
LABEL_19:
  *a2 = 4;
  return result;
}
