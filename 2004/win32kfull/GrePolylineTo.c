/*
 * XREFs of GrePolylineTo @ 0x1C01370C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0076414 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00F7658 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0137F1C (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEBA?AU_POINTFIX@@XZ @ 0x1C0138A90 (-ptfxGetCurrent@EPATHOBJ@@QEBA-AU_POINTFIX@@XZ.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0139974 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall GrePolylineTo(HDC a1, struct _POINTL *a2, unsigned int a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdx
  int v7; // ebx
  unsigned int v8; // ebx
  struct _POINTFIX Current; // rax
  __int64 v10; // r9
  __int64 v11; // r8
  _QWORD v13[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct _XFORMOBJ v14; // [rsp+40h] [rbp-C0h] BYREF
  PATHOBJ ppo; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+68h] [rbp-98h]
  _BYTE v17[32]; // [rsp+B0h] [rbp-50h] BYREF
  int v18; // [rsp+D0h] [rbp-30h]

  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  v5 = v13[0];
  if ( !v13[0] || (*(_DWORD *)(v13[0] + 36LL) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v8 = 0;
LABEL_13:
    v5 = v13[0];
    goto LABEL_14;
  }
  v6 = *(_QWORD *)(v13[0] + 976LL);
  v7 = *(_DWORD *)(v6 + 152);
  if ( (v7 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v13[0], *(_QWORD *)(v6 + 160));
    v5 = v13[0];
  }
  if ( (v7 & 0x2000) != 0 )
  {
    GreDCSelectPen(v5, *(_QWORD *)(*(_QWORD *)(v5 + 976) + 168LL));
    v5 = v13[0];
  }
  if ( a3 )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v14, (struct XDCOBJ *)v13, 516);
    v8 = 1;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (struct XDCOBJ *)v13, 1);
    if ( v16 )
    {
      if ( EPATHOBJ::bPolyLineTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v14, a2, a3) )
      {
        Current = EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)&ppo);
        v10 = v13[0];
        v11 = a3 - 1;
        *(_DWORD *)(*(_QWORD *)(v13[0] + 976LL) + 152LL) &= 0xFFFFFCFF;
        *(_DWORD *)(*(_QWORD *)(v10 + 976) + 216LL) = a2[v11].x;
        *(_DWORD *)(*(_QWORD *)(v10 + 976) + 220LL) = a2[v11].y;
        *(_DWORD *)(*(_QWORD *)(v10 + 976) + 8LL) = *(_DWORD *)Current.x;
        *(_DWORD *)(*(_QWORD *)(v10 + 976) + 12LL) = *(_DWORD *)(*(_QWORD *)&Current + 4LL);
        if ( (*(_DWORD *)(v13[0] + 248LL) & 1) != 0
          || (unsigned int)EPATHOBJ::bStrokeAndOrFill(
                             &ppo,
                             (struct XDCOBJ *)v13,
                             (LINEATTRS *)(v13[0] + 208LL),
                             &v14,
                             1u) )
        {
LABEL_11:
          EPATHOBJ::vUnlock((EPATHOBJ *)&ppo);
          if ( v18 )
          {
            PopThreadGuardedObject(v17);
            v18 = 0;
          }
          goto LABEL_13;
        }
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v8 = 0;
    goto LABEL_11;
  }
  v8 = 1;
LABEL_14:
  if ( v5 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v13);
  return v8;
}
