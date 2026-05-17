/*
 * XREFs of LdrpDoPostSnapWork @ 0x180047BB0
 * Callers:
 *     LdrpSnapModule @ 0x1800323F0 (LdrpSnapModule.c)
 * Callees:
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x1800334E8 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x180047920 (LdrpUnsuppressAddressTakenIat.c)
 *     LdrpHandleTlsData @ 0x180047C64 (LdrpHandleTlsData.c)
 *     ZwProtectVirtualMemory @ 0x18009DAB0 (ZwProtectVirtualMemory.c)
 *     LdrpLogDbgPrint @ 0x1800CDCC8 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpDoPostSnapWork(__int64 a1)
{
  int v2; // ebx
  __int64 result; // rax
  _QWORD *v4; // rax
  __int64 v5; // rcx
  char v6; // al
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  if ( !*(_QWORD *)(a1 + 104)
    || (result = ZwProtectVirtualMemory(-1LL, a1 + 104, a1 + 112, *(unsigned int *)(a1 + 136), &v7),
        v2 = result,
        (int)result >= 0) )
  {
    v4 = *(_QWORD **)(a1 + 152);
    if ( v4 && *v4 != *(_QWORD *)(a1 + 144) )
      __fastfail(0x13u);
    v5 = *(_QWORD *)(a1 + 56);
    if ( *(_WORD *)(v5 + 110) || (result = LdrpHandleTlsData(), v2 = result, (int)result >= 0) )
    {
      if ( LdrControlFlowGuardEnforcedWithExportSuppression(v5) )
      {
        v2 = LdrpUnsuppressAddressTakenIat(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 48LL), 0, 0);
        if ( v2 < 0 )
        {
          v6 = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) != 0 )
          {
            LdrpLogDbgPrint(
              (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
              565,
              (unsigned int)"LdrpDoPostSnapWork",
              0,
              (__int64)"LdrpDoPostSnapWork:Unable to unsuppress the export suppressed functions that are imported in the "
                       "DLL based at 0x%p.Status = 0x%x\n",
              *(const void **)(*(_QWORD *)(a1 + 56) + 48LL),
              v2);
            v6 = LdrpDebugFlags;
          }
          if ( (v6 & 0x10) != 0 )
            __debugbreak();
        }
      }
      return (unsigned int)v2;
    }
  }
  return result;
}
