/*
 * XREFs of ?xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AAE_NPAUtagWND@@@Z @ 0x19FC53
 * Callers:
 *     _xxxProcessEventMessage@8 @ 0x13A0E (_xxxProcessEventMessage@8.c)
 * Callees:
 *     _INPUTDEST_FROM_PWND@4 @ 0x9B69A (_INPUTDEST_FROM_PWND@4.c)
 *     ?CompositeAppHasForeground@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0xC7072 (-CompositeAppHasForeground@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YG_NPAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x14183D (-xxxForceForegroundWindowNoRestoreFocus@@YG_NPAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     _SetMiPPromotion@8 @ 0x14E66B (_SetMiPPromotion@8.c)
 *     _PhysicalToLogicalPointForWindow@16 @ 0x151670 (_PhysicalToLogicalPointForWindow@16.c)
 */

char __thiscall CMoveSizeRequest::xxxRevalidateAndTransferCapture(CMoveSizeRequest *this, struct tagWND *a2)
{
  int v3; // eax
  int v4; // ecx
  CMoveSizeRequest *v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v9; // [esp-8h] [ebp-104h]
  int v10; // [esp-4h] [ebp-100h]
  _DWORD v11[26]; // [esp+10h] [ebp-ECh] BYREF
  struct tagWND *v12; // [esp+78h] [ebp-84h]
  int v13; // [esp+7Ch] [ebp-80h] BYREF
  CMoveSizeRequest *v14; // [esp+80h] [ebp-7Ch]
  int v15; // [esp+84h] [ebp-78h] BYREF
  _BYTE v16[108]; // [esp+88h] [ebp-74h] BYREF

  v14 = this;
  v12 = a2;
  v3 = PtiFromThreadId(*((_DWORD *)this + 1));
  v15 = v3;
  if ( !v3 )
    return 0;
  v4 = *(_DWORD *)(v3 + 688);
  if ( (v4 & 0x40000000) == 0 )
    return 0;
  *(_DWORD *)(v3 + 688) = v4 & 0xBFFFFFFF;
  if ( *((_DWORD *)this + 4) != CMoveSizeRequest::cNextMoveSizeOpRequestId - 1
    || (*(_BYTE *)(v15 + 264) & 1) != 0
    || !(unsigned __int8)IsCapturedByThread(&v15)
    || *(struct tagWND **)(_gpqForeground + 64) != a2
    && (!CoreWindowProp::CompositeAppHasForeground(a2) || !xxxForceForegroundWindowNoRestoreFocus((int)a2, 0)) )
  {
    return 0;
  }
  *(_BYTE *)(*(_DWORD *)(_gptiCurrent + 236) + 152) |= 4u;
  *(_BYTE *)(*(_DWORD *)(v15 + 236) + 152) &= ~4u;
  qmemcpy(v16, INPUTDEST_FROM_PWND(a2, v11), 0x68u);
  ForceCapture(2, v16);
  v5 = v14;
  *(_DWORD *)(_gptiCurrent + 428) = *((_DWORD *)v14 + 2);
  v6 = *((_DWORD *)v5 + 3);
  v7 = (int)v12;
  *(_DWORD *)(_gptiCurrent + 432) = v6;
  v10 = *(_DWORD *)(_gptiCurrent + 432);
  v9 = *(_DWORD *)(_gptiCurrent + 428);
  v13 = *(_DWORD *)(_gptiCurrent + 416);
  v14 = *(CMoveSizeRequest **)(_gptiCurrent + 420);
  PhysicalToLogicalPointForWindow(v7, &v13, v9, v10);
  *(_DWORD *)(_gptiCurrent + 416) = v13;
  *(_DWORD *)(_gptiCurrent + 420) = v14;
  SetMiPPromotion(_gptiCurrent, (char *)0x242);
  return 1;
}
