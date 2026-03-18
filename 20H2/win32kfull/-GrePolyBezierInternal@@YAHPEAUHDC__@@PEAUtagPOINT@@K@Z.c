/*
 * XREFs of ?GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z @ 0x1C029EDB0
 * Callers:
 *     GrePolyBezier @ 0x1C029F6E0 (GrePolyBezier.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00A1484 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00F3124 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0139EEC (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C013B974 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall GrePolyBezierInternal(HDC a1, struct _POINTL *a2, unsigned int a3)
{
  POINTL *v5; // rcx
  unsigned int v6; // ebx
  POINTL v7; // rdx
  int v8; // esi
  ULONG v9; // ecx
  POINTL *v11[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct _XFORMOBJ v12; // [rsp+40h] [rbp-C0h] BYREF
  PATHOBJ ppo; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+58h] [rbp-A8h]
  _BYTE v15[32]; // [rsp+A0h] [rbp-60h] BYREF
  int v16; // [rsp+C0h] [rbp-40h]

  DCOBJ::DCOBJ((DCOBJ *)v11, a1);
  v5 = v11[0];
  if ( !v11[0] || (v11[0][4].y & 0x10000) != 0 )
  {
    v9 = 6;
    goto LABEL_20;
  }
  if ( a3 < 4 || (v6 = 1, a3 % 3 != 1) )
  {
    v9 = 87;
LABEL_20:
    EngSetLastError(v9);
    v6 = 0;
    goto LABEL_21;
  }
  v7 = v11[0][122];
  v8 = *(_DWORD *)(*(_QWORD *)&v7 + 152LL);
  if ( (v8 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v11[0], *(_QWORD *)(*(_QWORD *)&v7 + 160LL));
    v5 = v11[0];
  }
  if ( (v8 & 0x2000) != 0 )
    GreDCSelectPen(v5, *(_QWORD *)(*(_QWORD *)&v5[122] + 168LL));
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v12, (struct XDCOBJ *)v11, 516);
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (DC **)v11, 1);
  if ( !v14 )
  {
    EngSetLastError(8u);
LABEL_15:
    v6 = 0;
    goto LABEL_16;
  }
  if ( !EPATHOBJ::bMoveTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v12, a2)
    || !EPATHOBJ::bPolyBezierTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v12, a2 + 1, a3 - 1)
    || (v11[0][31].x & 1) == 0
    && !(unsigned int)EPATHOBJ::bStrokeAndOrFill(&ppo, v11, (LINEATTRS *)&v11[0][26], &v12, 1u) )
  {
    goto LABEL_15;
  }
LABEL_16:
  EPATHOBJ::vUnlock((EPATHOBJ *)&ppo);
  if ( v16 )
  {
    PopThreadGuardedObject(v15);
    v16 = 0;
  }
LABEL_21:
  if ( v11[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v11);
  return v6;
}
