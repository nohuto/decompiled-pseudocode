/*
 * XREFs of _anonymous_namespace_::GetRawMouseInputDestination @ 0x1C01BA900
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C00302C4 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0033BCC (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     INPUTDEST_FROM_PWND @ 0x1C00A8AFC (INPUTDEST_FROM_PWND.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3740 (memset.c)
 */

_OWORD *__fastcall anonymous_namespace_::GetRawMouseInputDestination(_OWORD *a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 PtiFromInputDest; // rdi
  int v5; // eax
  _OWORD *v6; // rax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  _DWORD v14[30]; // [rsp+20h] [rbp-78h] BYREF

  memset(a1, 0, 0x70uLL);
  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(0LL, 1LL, v2, v3);
  if ( PtiFromInputDest )
  {
    v5 = (int)qword_1C024FF00;
    if ( qword_1C024FF00 )
      v5 = qword_1C024FF00(PtiFromInputDest);
    if ( v5 )
    {
      v6 = INPUTDEST_FROM_PWND(v14, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(PtiFromInputDest + 424) + 832LL) + 64LL));
      v7 = v6[1];
      *a1 = *v6;
      v8 = v6[2];
      a1[1] = v7;
      v9 = v6[3];
      a1[2] = v8;
      v10 = v6[4];
      a1[3] = v9;
      v11 = v6[5];
      a1[4] = v10;
      v12 = v6[6];
      a1[5] = v11;
      a1[6] = v12;
    }
  }
  return a1;
}
