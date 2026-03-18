/*
 * XREFs of Interrupter_InterruptDisable @ 0x1C000CC70
 * Callers:
 *     Interrupter_WdfEvtInterruptDisable @ 0x1C000CBF0 (Interrupter_WdfEvtInterruptDisable.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     XilRegister_ReadUlong @ 0x1C00139CC (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0013B7C (XilRegister_WriteUlong.c)
 */

__int64 __fastcall Interrupter_InterruptDisable(__int64 a1)
{
  int *v2; // rdx
  __int64 v3; // rdi
  int Ulong; // eax
  _DWORD *v5; // rdx
  __int64 result; // rax
  signed __int32 v7[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4,
      9,
      40,
      (__int64)&WPP_84765f96df013c20a94fd65d5e9532b8_Traceguids,
      *(_DWORD *)(a1 + 32));
  v2 = *(int **)(a1 + 24);
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  *(_DWORD *)(a1 + 96) &= ~4u;
  if ( *(_BYTE *)(v3 + 129) )
    Ulong = *v2;
  else
    Ulong = XilRegister_ReadUlong(v3, v2);
  v5 = *(_DWORD **)(a1 + 24);
  result = Ulong & 0xFFFFFFFD;
  if ( !*(_BYTE *)(v3 + 129) )
    return XilRegister_WriteUlong(v3, v5, (unsigned int)result);
  *v5 = result;
  _InterlockedOr(v7, 0);
  return result;
}
