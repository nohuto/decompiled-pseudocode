/*
 * XREFs of ?xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AEAA_NPEAUtagWND@@@Z @ 0x1C02415F8
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00D8288 (xxxProcessEventMessage.c)
 * Callees:
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C000796C (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     INPUTDEST_FROM_PWND @ 0x1C0128DE0 (INPUTDEST_FROM_PWND.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1C0128F9C (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     SetMiPPromotion @ 0x1C01E1A5C (SetMiPPromotion.c)
 *     PhysicalToLogicalPointForWindow @ 0x1C01E5440 (PhysicalToLogicalPointForWindow.c)
 */

char __fastcall CMoveSizeRequest::xxxRevalidateAndTransferCapture(CMoveSizeRequest *this, struct tagWND *a2)
{
  __int64 v4; // rax
  int v5; // ecx
  __int64 v6; // r8
  _OWORD *v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v11; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v12; // [rsp+28h] [rbp-D8h] BYREF
  _DWORD v13[28]; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v14[7]; // [rsp+A0h] [rbp-60h] BYREF

  v4 = PtiFromThreadId(*((unsigned int *)this + 1));
  v12 = v4;
  if ( !v4 )
    return 0;
  v5 = *(_DWORD *)(v4 + 1232);
  if ( (v5 & 0x40000000) == 0 )
    return 0;
  *(_DWORD *)(v4 + 1232) = v5 & 0xBFFFFFFF;
  if ( *((_DWORD *)this + 4) != CMoveSizeRequest::cNextMoveSizeOpRequestId - 1
    || (*(_DWORD *)(v12 + 488) & 1) != 0
    || !(unsigned __int8)IsCapturedByThread(&v12)
    || *(struct tagWND **)(gpqForeground + 120LL) != a2
    && (!(unsigned int)CoreWindowProp::CompositeAppHasForeground(a2)
     || !xxxForceForegroundWindowNoRestoreFocus((__int64)a2, 0LL, v6)) )
  {
    return 0;
  }
  *(_BYTE *)(*(_QWORD *)(gptiCurrent + 432LL) + 228LL) |= 4u;
  *(_BYTE *)(*(_QWORD *)(v12 + 432) + 228LL) &= ~4u;
  v7 = INPUTDEST_FROM_PWND(v13, (__int64)a2);
  v14[0] = *v7;
  v14[1] = v7[1];
  v14[2] = v7[2];
  v14[3] = v7[3];
  v14[4] = v7[4];
  v14[5] = v7[5];
  v14[6] = v7[6];
  ForceCapture(2LL, v14);
  v8 = *((_QWORD *)this + 1);
  v9 = *(_DWORD *)(gptiCurrent + 764LL);
  HIDWORD(v11) = *(_DWORD *)(gptiCurrent + 768LL);
  *(_QWORD *)(gptiCurrent + 776LL) = v8;
  LODWORD(v11) = v9;
  PhysicalToLogicalPointForWindow(v8, (__int64)a2, &v11);
  *(_QWORD *)(gptiCurrent + 764LL) = v11;
  SetMiPPromotion(gptiCurrent, 578);
  return 1;
}
