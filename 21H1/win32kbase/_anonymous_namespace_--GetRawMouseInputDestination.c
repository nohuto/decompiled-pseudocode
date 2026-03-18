/*
 * XREFs of _anonymous_namespace_::GetRawMouseInputDestination @ 0x1C01C29D0
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C005FFC0 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C005C7C0 (INPUTDEST_FROM_PWND.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0064EF0 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 */

_OWORD *__fastcall anonymous_namespace_::GetRawMouseInputDestination(_OWORD *a1)
{
  __int64 PtiFromInputDest; // rdi
  int v3; // eax
  _OWORD *v4; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  _DWORD v12[30]; // [rsp+20h] [rbp-78h] BYREF

  memset(a1, 0, 0x70uLL);
  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(0LL, 1);
  if ( PtiFromInputDest )
  {
    v3 = (int)qword_1C0257EC0;
    if ( qword_1C0257EC0 )
      v3 = qword_1C0257EC0(PtiFromInputDest);
    if ( v3 )
    {
      v4 = INPUTDEST_FROM_PWND(v12, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(PtiFromInputDest + 416) + 832LL) + 64LL));
      v5 = v4[1];
      *a1 = *v4;
      v6 = v4[2];
      a1[1] = v5;
      v7 = v4[3];
      a1[2] = v6;
      v8 = v4[4];
      a1[3] = v7;
      v9 = v4[5];
      a1[4] = v8;
      v10 = v4[6];
      a1[5] = v9;
      a1[6] = v10;
    }
  }
  return a1;
}
