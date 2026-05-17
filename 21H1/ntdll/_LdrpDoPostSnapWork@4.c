/*
 * XREFs of _LdrpDoPostSnapWork@4 @ 0x4B2D0C67
 * Callers:
 *     _LdrpSnapModule@4 @ 0x4B2BDE10 (_LdrpSnapModule@4.c)
 * Callees:
 *     _LdrControlFlowGuardEnforcedWithExportSuppression@0 @ 0x4B2D00AD (_LdrControlFlowGuardEnforcedWithExportSuppression@0.c)
 *     _LdrpHandleTlsData@4 @ 0x4B2D0CD1 (_LdrpHandleTlsData@4.c)
 *     _ZwProtectVirtualMemory@20 @ 0x4B2F2E80 (_ZwProtectVirtualMemory@20.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 *     _LdrpUnsuppressAddressTakenIat@12 @ 0x4B3345D2 (_LdrpUnsuppressAddressTakenIat@12.c)
 */

int __thiscall LdrpDoPostSnapWork(_DWORD *this)
{
  int v2; // esi
  _DWORD *v3; // ecx
  int result; // eax
  _DWORD *v5; // eax
  char v6; // al
  _BYTE v7[4]; // [esp+Ch] [ebp-4h] BYREF

  v2 = 0;
  v3 = this + 15;
  if ( !*v3 || (result = ZwProtectVirtualMemory(-1, v3, this + 16, this[20], v7), v2 = result, result >= 0) )
  {
    v5 = (_DWORD *)this[22];
    if ( v5 && *v5 != this[21] )
      __fastfail(0x13u);
    if ( *(_WORD *)(this[8] + 58) || (v2 = LdrpHandleTlsData(), v2 >= 0) )
    {
      if ( LdrControlFlowGuardEnforcedWithExportSuppression() )
      {
        v2 = LdrpUnsuppressAddressTakenIat(0);
        if ( v2 < 0 )
        {
          v6 = ShowSnaps;
          if ( (ShowSnaps & 3) != 0 )
          {
            LdrpLogDbgPrint(
              "minkernel\\ntdll\\ldrsnap.c",
              565,
              "LdrpDoPostSnapWork",
              0,
              "LdrpDoPostSnapWork:Unable to unsuppress the export suppressed functions that are imported in the DLL based"
              " at 0x%p.Status = 0x%x\n",
              *(const void **)(this[8] + 24),
              v2);
            v6 = ShowSnaps;
          }
          if ( (v6 & 0x10) != 0 )
            __debugbreak();
        }
      }
    }
    return v2;
  }
  return result;
}
