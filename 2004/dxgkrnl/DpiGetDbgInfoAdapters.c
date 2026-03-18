/*
 * XREFs of DpiGetDbgInfoAdapters @ 0x1C0050638
 * Callers:
 *     ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z @ 0x1C0043F9C (-TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z.c)
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C0264750 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetDbgInfoAdapters(__int64 a1)
{
  unsigned int v1; // r10d
  _QWORD *v3; // r9
  __int64 *v4; // r8
  __int64 v5; // rdx
  unsigned int v6; // ecx

  v1 = 0;
  v3 = (_QWORD *)qword_1C00B1B40;
  if ( (_QWORD *)*v3 != v3 )
  {
    do
    {
      if ( v1 >= 7 )
        break;
      v4 = (__int64 *)v3[7];
      if ( (__int64 *)*v4 != v4 )
      {
        do
        {
          if ( *((_DWORD *)v4 + 4) == 1953656900 && *((_DWORD *)v4 + 5) == 2 && *((_DWORD *)v4 + 59) == 2 )
          {
            if ( v1 >= 7 )
              break;
            v5 = 2LL * v1;
            *(_DWORD *)(a1 + 8 * v5) = *(_DWORD *)(v4[487] + 2596);
            *(_DWORD *)(a1 + 8 * v5 + 4) = *((_DWORD *)v4 + 281);
            *(_DWORD *)(a1 + 8 * v5 + 8) = *((_DWORD *)v4 + 282);
            v6 = (*(_DWORD *)(v4[487] + 200) == 1) | *(_DWORD *)(a1 + 16LL * v1 + 12) & 0xFFFFFFFE;
            *(_DWORD *)(a1 + 8 * v5 + 12) = v6;
            *(_DWORD *)(a1 + 8 * v5 + 12) = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(2 * *((_BYTE *)v4 + 1152))) & 2;
            ++v1;
          }
          v4 = (__int64 *)*v4;
        }
        while ( *v4 != v3[7] );
      }
      v3 = (_QWORD *)*v3;
    }
    while ( *v3 != qword_1C00B1B40 );
  }
  return 0LL;
}
