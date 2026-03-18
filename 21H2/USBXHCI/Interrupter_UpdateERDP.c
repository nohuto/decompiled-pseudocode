/*
 * XREFs of Interrupter_UpdateERDP @ 0x1C0014370
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0002BB0 (Interrupter_DeferredWorkProcessor.c)
 *     Interrupter_InterrupterRegisterIntialize @ 0x1C00144F0 (Interrupter_InterrupterRegisterIntialize.c)
 *     Interrupter_InitializeForOffload @ 0x1C003C1CC (Interrupter_InitializeForOffload.c)
 * Callees:
 *     XilRegister_WriteUlong64 @ 0x1C0014420 (XilRegister_WriteUlong64.c)
 *     WPP_RECORDER_SF_i @ 0x1C00156C4 (WPP_RECORDER_SF_i.c)
 */

__int64 __fastcall Interrupter_UpdateERDP(__int64 a1, char a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  _DWORD *v9; // rdx
  __int64 result; // rax
  signed __int32 v11[8]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(v3 + 88);
  v5 = ((unsigned __int8)*(_DWORD *)(a1 + 128) ^ (unsigned __int8)*(_QWORD *)(*(_QWORD *)(a1 + 144) + 24LL)) & 7 ^ (*(_QWORD *)(*(_QWORD *)(a1 + 144) + 24LL) + 16LL * *(unsigned int *)(a1 + 124));
  v6 = v5 & 0xFFFFFFFFFFFFFFF7uLL;
  v7 = v5 | 8;
  if ( a2 )
    v6 = v7;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_i(*(_QWORD *)(v3 + 72), 5, 9, 31, (__int64)&WPP_84765f96df013c20a94fd65d5e9532b8_Traceguids, v6);
  v8 = *(_QWORD *)(a1 + 24);
  v9 = (_DWORD *)(v8 + 24);
  if ( !*(_BYTE *)(v4 + 129) )
    return XilRegister_WriteUlong64(v4, v9, v6);
  result = *(_QWORD *)(*(_QWORD *)(v4 + 8) + 336LL);
  if ( (result & 1) != 0 )
  {
    *v9 = v6;
    _InterlockedOr(v11, 0);
    *(_DWORD *)(v8 + 28) = HIDWORD(v6);
  }
  else
  {
    *(_QWORD *)v9 = v6;
  }
  _InterlockedOr(v11, 0);
  return result;
}
