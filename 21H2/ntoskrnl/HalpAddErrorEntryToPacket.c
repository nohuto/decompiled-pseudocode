/*
 * XREFs of HalpAddErrorEntryToPacket @ 0x1404CFAB0
 * Callers:
 *     HalpAddMcaExtendedLogToMemoryErrorSection @ 0x1404B9464 (HalpAddMcaExtendedLogToMemoryErrorSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpAddErrorEntryToPacket(__int64 a1, __int64 a2, _OWORD *a3)
{
  unsigned int v5; // edx
  __int64 v6; // rdx
  unsigned int v7; // r10d
  char v8; // al
  __int64 v9; // rax

  if ( !a1 )
    return 3221225485LL;
  v5 = -1073741637;
  if ( (*(_DWORD *)a1 & 0x3FF0) != 0 )
  {
    v6 = *(_WORD *)(a1 + 40) < 0x300u ? 64 : 72;
    v7 = v6 + *(_DWORD *)(a1 + 44);
    if ( v7 < (unsigned int)v6 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      v8 = *(_BYTE *)(a1 + 42);
      *(_BYTE *)(a2 + 10) = v8;
      if ( (v8 & 1) != 0 )
        *(_OWORD *)(a2 + 32) = *(_OWORD *)(a1 + 48);
      if ( (v8 & 2) != 0 )
      {
        *(_OWORD *)(a2 + 52) = *(_OWORD *)(a1 + 64);
        *(_DWORD *)(a2 + 68) = *(_DWORD *)(a1 + 80);
      }
      v9 = *(_QWORD *)(a1 + 20) - *(_QWORD *)&MEMORY_ERROR_SECTION_GUID.Data1;
      if ( !v9 )
        v9 = *(_QWORD *)(a1 + 28) - *(_QWORD *)MEMORY_ERROR_SECTION_GUID.Data4;
      if ( !v9 )
      {
        *a3 = *(_OWORD *)(v6 + a1 + 20);
        a3[1] = *(_OWORD *)(v6 + a1 + 36);
        a3[2] = *(_OWORD *)(v6 + a1 + 52);
        a3[3] = *(_OWORD *)(v6 + a1 + 68);
        a3[4] = *(_OWORD *)(v6 + a1 + 84);
      }
      return v7 >= 0xFFFFFFEC ? 0xC000000D : 0;
    }
  }
  return v5;
}
