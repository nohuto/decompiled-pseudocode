/*
 * XREFs of Interrupter_InterruptEnable @ 0x1C0010F5C
 * Callers:
 *     Interrupter_WdfEvtInterruptEnable @ 0x1C000F340 (Interrupter_WdfEvtInterruptEnable.c)
 *     Interrupter_ControllerResetPostReset @ 0x1C003C4C0 (Interrupter_ControllerResetPostReset.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     XilRegister_ReadUlong @ 0x1C0013DA0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0013F1C (XilRegister_WriteUlong.c)
 */

__int64 __fastcall Interrupter_InterruptEnable(__int64 a1)
{
  _DWORD *v2; // rdx
  __int64 v3; // rdi
  int *v4; // rdx
  int Ulong; // eax
  _DWORD *v6; // rdx
  __int64 result; // rax
  signed __int32 v8[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4,
      9,
      38,
      (__int64)&WPP_260d7188460d377ee27ff5eb6158db37_Traceguids,
      *(_DWORD *)(a1 + 32));
  v2 = (_DWORD *)(*(_QWORD *)(a1 + 24) + 4LL);
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a1 + 96) & 0xFFFFFFF9 | 4;
  if ( *(_BYTE *)(v3 + 129) )
  {
    *v2 = 200;
    _InterlockedOr(v8, 0);
  }
  else
  {
    XilRegister_WriteUlong(v3, v2, 200LL);
  }
  v4 = *(int **)(a1 + 24);
  if ( *(_BYTE *)(v3 + 129) )
    Ulong = *v4;
  else
    Ulong = XilRegister_ReadUlong(v3, v4);
  v6 = *(_DWORD **)(a1 + 24);
  result = Ulong | 2u;
  if ( !*(_BYTE *)(v3 + 129) )
    return XilRegister_WriteUlong(v3, v6, (unsigned int)result);
  *v6 = result;
  _InterlockedOr(v8, 0);
  return result;
}
