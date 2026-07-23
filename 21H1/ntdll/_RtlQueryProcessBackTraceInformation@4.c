/*
 * XREFs of _RtlQueryProcessBackTraceInformation@4 @ 0x4B336A00
 * Callers:
 *     _RtlQueryProcessDebugInformation@12 @ 0x4B336B50 (_RtlQueryProcessDebugInformation@12.c)
 * Callees:
 *     _memmove @ 0x4B2F8BF0 (_memmove.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlQueryProcessBackTraceInformation@4 @ 0x4B336A00 (_RtlQueryProcessBackTraceInformation@4.c)
 *     _RtlpCommitQueryDebugInfo@8 @ 0x4B3378A8 (_RtlpCommitQueryDebugInfo@8.c)
 *     _RtlpDeCommitQueryDebugInfo@12 @ 0x4B3379F5 (_RtlpDeCommitQueryDebugInfo@12.c)
 */

int __stdcall RtlQueryProcessBackTraceInformation(int a1)
{
  PRTL_SRWLOCK v1; // esi
  _DWORD *DebugInfo; // eax
  _DWORD *v4; // edi
  unsigned int Value; // eax
  int v6; // edx
  int v7; // ebx
  unsigned int v8; // ecx
  _WORD *v9; // ecx
  size_t v10; // [esp-4h] [ebp-4Ch]
  unsigned int v11; // [esp+18h] [ebp-30h]
  int v12; // [esp+24h] [ebp-24h]
  _DWORD *v13; // [esp+28h] [ebp-20h]

  v1 = RtlpStackTraceDatabase;
  if ( !RtlpStackTraceDatabase )
    return 0;
  DebugInfo = (_DWORD *)RtlpCommitQueryDebugInfo(a1, 16);
  v4 = DebugInfo;
  if ( !DebugInfo )
    return -1073741801;
  *((_BYTE *)&v1[17].0 + 1) = 1;
  *DebugInfo = v1[20].Value - v1[18].Value;
  DebugInfo[1] = v1[25].Value - v1[18].Value;
  DebugInfo[2] = v1[23].Value;
  Value = v1[24].Value;
  v4[3] = Value;
  v6 = RtlpCommitQueryDebugInfo(a1, 140 * Value);
  v12 = v6;
  if ( v6 )
  {
    v7 = 0;
    v8 = v1[24].Value;
    v13 = (_DWORD *)v1[25].Value;
    while ( 1 )
    {
      v11 = v8 - 1;
      if ( !v8 )
        break;
      v9 = (_WORD *)*--v13;
      *(_DWORD *)v6 = 0;
      *(_DWORD *)(v6 + 4) = v9[2] & 0x7FF;
      *(_WORD *)(v6 + 8) = v9[4];
      *(_WORD *)(v6 + 10) = v9[5];
      LODWORD(v10) = 4 * (unsigned __int16)v9[5];
      memmove((void *)(v6 + 12), v9 + 6, v10);
      v6 = v12 + 140;
      v12 += 140;
      v8 = v11;
    }
  }
  else
  {
    v7 = -1073741801;
    RtlpDeCommitQueryDebugInfo(16);
  }
  *((_BYTE *)&v1[17].0 + 1) = 0;
  if ( v7 >= 0 )
    *(_DWORD *)(a1 + 52) = v4;
  return v7;
}
