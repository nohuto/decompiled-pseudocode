/*
 * XREFs of KiGetHeteroThreadQos @ 0x14051F568
 * Callers:
 *     KiConvertDynamicHeteroPolicy @ 0x14051F3E0 (KiConvertDynamicHeteroPolicy.c)
 * Callees:
 *     KiIsThreadRankBiased @ 0x140523ADC (KiIsThreadRankBiased.c)
 */

__int64 __fastcall KiGetHeteroThreadQos(__int64 a1, __int64 a2, int *a3)
{
  __int64 v4; // r9
  int v5; // edi
  int v6; // eax
  unsigned int v7; // edx
  __int64 v8; // rax
  int v9; // r10d
  char v10; // cl
  __int64 v11; // r8
  char v12; // r10
  __int64 v13; // r11
  unsigned int v14; // ecx
  int v15; // ecx
  __int64 result; // rax

  v4 = a1;
  v5 = 1;
  if ( (*(_DWORD *)(a1 + 120) & 0x400000) == 0 )
  {
    v8 = *(_QWORD *)(a1 + 1472);
    if ( v8 )
    {
      v9 = *(_DWORD *)(a1 + 512);
      v10 = 0;
      v6 = *(_DWORD *)(v8 + 512);
      if ( (unsigned __int8)v6 != (unsigned __int8)v9
        && ((unsigned __int8)v6 == 3
         || (unsigned __int8)v9 == 3
         || (unsigned __int8)v6 < (unsigned int)(unsigned __int8)v9) )
      {
        v10 = 1;
      }
      if ( !v10 )
        LOBYTE(v6) = v9;
      goto LABEL_3;
    }
    if ( *(_BYTE *)(a1 + 124) == 1 )
    {
      v7 = 3;
      goto LABEL_44;
    }
    if ( *(_BYTE *)(a1 + 124) == 2 )
    {
      v7 = 4;
      goto LABEL_44;
    }
    if ( ((*(_DWORD *)(a1 + 956) >> 8) & 3) != 0 )
    {
      if ( ((*(_DWORD *)(a1 + 956) >> 8) & 3) != 1 )
      {
        if ( ((*(_DWORD *)(a1 + 956) >> 8) & 3) == 2 )
        {
          v7 = 1;
          goto LABEL_44;
        }
LABEL_36:
        v7 = 0;
        goto LABEL_44;
      }
LABEL_43:
      v7 = 2;
      goto LABEL_44;
    }
    v11 = *(_QWORD *)(a1 + 544);
    v12 = KiDynamicHeteroCpuPolicyMask;
    v13 = (*(_DWORD *)(v11 + 632) >> 7) & 7;
    if ( (KiDynamicHeteroCpuPolicyMask & 4) != 0 )
    {
      if ( (_DWORD)v13 == 3 )
      {
LABEL_34:
        if ( (v12 & 1) != 0 && *(_BYTE *)(v11 + 1850) == 2 )
          goto LABEL_36;
        v7 = KiProcessPolicyToQosMappingTable[v13];
        if ( v7 != 5 )
          goto LABEL_44;
        v15 = *(char *)(v4 + 195);
        if ( *(char *)(v4 + 195) >= 15
          || (KiDynamicHeteroCpuPolicyMask & 2) != 0
          && (v15 >= KiDynamicHeteroCpuPolicyImportantPriority || (*(_DWORD *)(v4 + 116) & 0x400) != 0 && (char)v15 >= 8) )
        {
          goto LABEL_36;
        }
        goto LABEL_43;
      }
      v14 = *(_DWORD *)(a1 + 80);
      if ( v14 <= *(_DWORD *)(v4 + 84) )
        v14 = *(_DWORD *)(v4 + 84);
      if ( v14 < KiDynamicHeteroCpuPolicyExpectedCycles )
      {
        v5 = 0;
        if ( KeHeteroSystemQos )
        {
          if ( (KiDynamicHeteroCpuPolicyMask & 8) != 0 )
            goto LABEL_43;
        }
      }
    }
    if ( (_DWORD)v13 != 3 && (KiDynamicHeteroCpuPolicyMask & 0x20) == 0 )
    {
      if ( (unsigned __int8)KiIsThreadRankBiased(v4, a2, v11) )
        goto LABEL_43;
      v11 = *(_QWORD *)(v4 + 544);
      if ( *(_BYTE *)(v11 + 1463) == 1 )
        goto LABEL_43;
      v12 = KiDynamicHeteroCpuPolicyMask;
      if ( (KiDynamicHeteroCpuPolicyMask & 2) != 0 && *(char *)(v4 + 195) < 8 )
        goto LABEL_43;
    }
    goto LABEL_34;
  }
  v6 = *(_DWORD *)(a1 + 512);
LABEL_3:
  v7 = (unsigned __int8)v6;
LABEL_44:
  result = v7;
  *a3 = v5;
  return result;
}
