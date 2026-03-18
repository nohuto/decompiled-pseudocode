/*
 * XREFs of RtlCreateEnclaveReturnFrame @ 0x140591810
 * Callers:
 *     PsCallEnclave @ 0x14090FA20 (PsCallEnclave.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlCreateEnclaveReturnFrame(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10)
{
  __int64 v12; // r11
  unsigned __int64 v13; // rcx
  __int64 v16; // rcx
  _QWORD *v18; // [rsp+40h] [rbp+18h]

  v12 = PspEnclaveDispatch;
  if ( *(_WORD *)(a1 + 368) != 51 || *(_QWORD *)(a1 + 360) != PspEnclaveDispatchReturn )
  {
    v13 = *(_QWORD *)(a1 + 384) - 80LL;
    v18 = (_QWORD *)v13;
    if ( (v13 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v13 >= 0x7FFFFFFF0000LL )
      v13 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v13 = *(_BYTE *)v13;
    *(_BYTE *)(v13 + 7) = *(_BYTE *)(v13 + 7);
    v18[5] = *(_QWORD *)(a1 + 80);
    v18[7] = *(_QWORD *)(a1 + 360);
    v18[8] = *(_QWORD *)(a1 + 344);
    *(_QWORD *)(a1 + 384) = v18;
    _R9 = *(_QWORD *)(a1 + 360);
    if ( a10 )
    {
      _RAX = __readmsr(0x6A7u) - 8;
      __asm { wrussq  qword ptr [rax], r9 }
      __writemsr(0x6A7u, _RAX);
    }
  }
  if ( a7 )
  {
    v16 = *(_QWORD *)(a1 + 384);
    *(_QWORD *)(v16 + 64) = a8;
    *(_QWORD *)(v16 + 72) = a7;
  }
  *(_QWORD *)(a1 + 56) = a4;
  *(_QWORD *)(a1 + 64) = a5;
  *(_QWORD *)(a1 + 72) = a6;
  *(_QWORD *)(a1 + 80) = a9;
  *(_QWORD *)(a1 + 360) = v12;
  *(_WORD *)(a1 + 368) = 51;
  return 0LL;
}
