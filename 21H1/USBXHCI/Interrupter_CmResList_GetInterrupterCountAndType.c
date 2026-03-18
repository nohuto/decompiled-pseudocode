/*
 * XREFs of Interrupter_CmResList_GetInterrupterCountAndType @ 0x1C006C9A4
 * Callers:
 *     Interrupter_PrepareHardware @ 0x1C006BBE0 (Interrupter_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Interrupter_CmResList_GetInterrupterCountAndType(__int64 a1, __int64 a2, _DWORD *a3, int *a4)
{
  int v4; // ebx
  int v5; // edi
  unsigned int i; // ebp
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  int v12; // edx
  int v13; // edx

  v4 = 0;
  v5 = 0;
  for ( i = 0; ; ++i )
  {
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2432))(WdfDriverGlobals, a2);
    if ( i >= (unsigned int)result )
      break;
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2440))(
            WdfDriverGlobals,
            a2,
            i);
    v11 = v10;
    if ( *(_BYTE *)v10 == 2 )
    {
      if ( (WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
         || (v12 = *(unsigned __int16 *)(v10 + 2),
             LOBYTE(v12) = 4,
             WPP_RECORDER_SF_dd(
               *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
               v12,
               9,
               62,
               (__int64)&WPP_260d7188460d377ee27ff5eb6158db37_Traceguids,
               i,
               *(_WORD *)(v10 + 2)),
             *(_BYTE *)v11 == 2))
        && (*(_BYTE *)(v11 + 2) & 3) == 3 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v13 = *(unsigned __int16 *)(v11 + 6);
          LOBYTE(v13) = 4;
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            v13,
            9,
            63,
            (__int64)&WPP_260d7188460d377ee27ff5eb6158db37_Traceguids,
            *(_WORD *)(v11 + 6),
            *(_DWORD *)(v11 + 8));
        }
        v5 = (v4 != 0) + 1;
        v4 += *(unsigned __int16 *)(v11 + 6);
      }
      else
      {
        ++v4;
      }
    }
  }
  *a3 = v4;
  *a4 = v5;
  return result;
}
