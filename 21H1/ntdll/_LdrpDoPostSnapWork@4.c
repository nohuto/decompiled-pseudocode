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

NTSTATUS __thiscall LdrpDoPostSnapWork(int this)
{
  int v2; // esi
  PVOID *v3; // ecx
  NTSTATUS result; // eax
  _DWORD *v5; // eax
  char v6; // al
  ULONG OldProtect; // [esp+Ch] [ebp-4h] BYREF

  v2 = 0;
  v3 = (PVOID *)(this + 60);
  if ( !*v3
    || (result = ZwProtectVirtualMemory(
                   (HANDLE)0xFFFFFFFF,
                   v3,
                   (PSIZE_T)(this + 64),
                   *(_DWORD *)(this + 80),
                   &OldProtect),
        v2 = result,
        result >= 0) )
  {
    v5 = *(_DWORD **)(this + 88);
    if ( v5 && *v5 != *(_DWORD *)(this + 84) )
      __fastfail(0x13u);
    if ( *(_WORD *)(*(_DWORD *)(this + 32) + 58) || (v2 = LdrpHandleTlsData(), v2 >= 0) )
    {
      if ( LdrControlFlowGuardEnforcedWithExportSuppression() )
      {
        v2 = LdrpUnsuppressAddressTakenIat(*(PVOID *)(*(_DWORD *)(this + 32) + 24), 0);
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
              *(const void **)(*(_DWORD *)(this + 32) + 24),
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
