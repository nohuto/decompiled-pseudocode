/*
 * XREFs of GrePolyBezierTo @ 0x1C01397C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00A1484 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00F3124 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0139EEC (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEBA?AU_POINTFIX@@XZ @ 0x1C013AA60 (-ptfxGetCurrent@EPATHOBJ@@QEBA-AU_POINTFIX@@XZ.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C013B974 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall GrePolyBezierTo(HDC a1, struct _POINTL *a2, unsigned int a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdx
  int v7; // ebx
  unsigned int v8; // ebx
  struct _POINTFIX Current; // rax
  __int64 v10; // r9
  __int64 v11; // r8
  ULONG v13; // ecx
  _QWORD v14[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct _XFORMOBJ v15; // [rsp+40h] [rbp-C0h] BYREF
  PATHOBJ ppo; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+68h] [rbp-98h]
  _BYTE v18[32]; // [rsp+B0h] [rbp-50h] BYREF
  int v19; // [rsp+D0h] [rbp-30h]

  DCOBJ::DCOBJ((DCOBJ *)v14, a1);
  v5 = v14[0];
  if ( !v14[0] || (*(_DWORD *)(v14[0] + 36LL) & 0x10000) != 0 )
  {
    v13 = 6;
    goto LABEL_22;
  }
  if ( a3 < 3 || a3 != 3 * (a3 / 3) )
  {
    v13 = 87;
LABEL_22:
    EngSetLastError(v13);
    v8 = 0;
    goto LABEL_14;
  }
  v6 = *(_QWORD *)(v14[0] + 976LL);
  v7 = *(_DWORD *)(v6 + 152);
  if ( (v7 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v14[0], *(_QWORD *)(v6 + 160));
    v5 = v14[0];
  }
  if ( (v7 & 0x2000) != 0 )
    GreDCSelectPen(v5, *(_QWORD *)(*(_QWORD *)(v5 + 976) + 168LL));
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v15, (struct XDCOBJ *)v14, 516);
  v8 = 1;
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (struct XDCOBJ *)v14, 1);
  if ( !v17 )
  {
    EngSetLastError(8u);
LABEL_19:
    v8 = 0;
    goto LABEL_12;
  }
  if ( !EPATHOBJ::bPolyBezierTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v15, a2, a3) )
    goto LABEL_19;
  Current = EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)&ppo);
  v10 = v14[0];
  v11 = a3 - 1;
  *(_DWORD *)(*(_QWORD *)(v14[0] + 976LL) + 152LL) &= 0xFFFFFCFF;
  *(_DWORD *)(*(_QWORD *)(v10 + 976) + 216LL) = a2[v11].x;
  *(_DWORD *)(*(_QWORD *)(v10 + 976) + 220LL) = a2[v11].y;
  *(_DWORD *)(*(_QWORD *)(v10 + 976) + 8LL) = *(_DWORD *)Current.x;
  *(_DWORD *)(*(_QWORD *)(v10 + 976) + 12LL) = *(_DWORD *)(*(_QWORD *)&Current + 4LL);
  if ( (*(_DWORD *)(v14[0] + 248LL) & 1) == 0
    && !(unsigned int)EPATHOBJ::bStrokeAndOrFill(&ppo, (struct XDCOBJ *)v14, (LINEATTRS *)(v14[0] + 208LL), &v15, 1u) )
  {
    goto LABEL_19;
  }
LABEL_12:
  EPATHOBJ::vUnlock((EPATHOBJ *)&ppo);
  if ( v19 )
  {
    PopThreadGuardedObject(v18);
    v19 = 0;
  }
LABEL_14:
  if ( v14[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v14);
  return v8;
}
