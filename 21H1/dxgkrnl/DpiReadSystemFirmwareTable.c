/*
 * XREFs of DpiReadSystemFirmwareTable @ 0x1C0185FA0
 * Callers:
 *     <none>
 * Callees:
 *     DpiQuerySystemFirmwareTables @ 0x1C0186018 (DpiQuerySystemFirmwareTables.c)
 */

__int64 __fastcall DpiReadSystemFirmwareTable(__int64 a1, __int64 a2, int a3, int a4, void *a5, _DWORD *a6)
{
  __int64 v6; // rbx
  __int64 v7; // r10
  __int64 v9; // rax

  v6 = a1;
  if ( a1
    && (v7 = *(_QWORD *)(a1 + 64)) != 0
    && *(_DWORD *)(v7 + 16) == 1953656900
    && (a1 = 1LL, (unsigned int)(*(_DWORD *)(v7 + 20) - 2) <= 1) )
  {
    if ( *(_BYTE *)(v7 + 2695) )
    {
      *a6 = 0;
      return 3221226599LL;
    }
    else
    {
      return DpiQuerySystemFirmwareTables(1, a2, a3, a4, a5, (__int64)a6);
    }
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v9 + 24) = v6;
    *(_QWORD *)(v9 + 32) = -1073741585LL;
    WdLogEvent5_WdError(v9);
    return 3221225711LL;
  }
}
