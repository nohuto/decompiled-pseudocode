/*
 * XREFs of NtGdiRoundRect @ 0x1C0135E00
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0076414 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00F7658 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z @ 0x1C012C27C (-bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z.c)
 *     ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C0135B44 (--0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 *     NtGdiRectangle @ 0x1C0137370 (NtGdiRectangle.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0137F1C (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0139974 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiRoundRect(HDC a1, LONG a2, LONG a3, LONG a4, int a5, unsigned int a6, int a7)
{
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // ebx
  unsigned int v13; // edi
  unsigned int v14; // ecx
  __int64 v16; // rbx
  _QWORD v17[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct _XFORMOBJ v18; // [rsp+40h] [rbp-C0h] BYREF
  struct _RECTL v19; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v20[20]; // [rsp+60h] [rbp-A0h] BYREF
  PATHOBJ ppo; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v22; // [rsp+B8h] [rbp-48h]
  _BYTE v23[32]; // [rsp+100h] [rbp+0h] BYREF
  int v24; // [rsp+120h] [rbp+20h]

  if ( !a6 || !a7 )
    return NtGdiRectangle(a1, a5);
  DCOBJ::DCOBJ((DCOBJ *)v17, a1);
  v10 = v17[0];
  if ( v17[0] && (*(_DWORD *)(v17[0] + 36LL) & 0x10000) == 0 )
  {
    v11 = *(_QWORD *)(v17[0] + 976LL);
    v12 = *(_DWORD *)(v11 + 152);
    if ( (v12 & 0x1000) != 0 )
    {
      GreDCSelectBrush(v17[0], *(_QWORD *)(v11 + 160));
      v10 = v17[0];
    }
    if ( (v12 & 0x2000) != 0 )
      GreDCSelectPen(v10, *(_QWORD *)(*(_QWORD *)(v10 + 976) + 168LL));
    v19.bottom = a5;
    v19.left = a2;
    v19.top = a3;
    v19.right = a4;
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v18, (struct XDCOBJ *)v17, 516);
    v13 = 1;
    EBOX::EBOX((EBOX *)v20, (struct DCOBJ *)v17, &v19, (struct _LINEATTRS *)(v17[0] + 208LL), 1);
    if ( v20[0] )
      goto LABEL_18;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (struct XDCOBJ *)v17, 1);
    if ( v22 )
    {
      if ( (unsigned int)bRoundRect((struct EPATHOBJ *)&ppo, (struct EBOX *)v20, a6) )
      {
        if ( (*(_DWORD *)(v17[0] + 248LL) & 1) == 0 )
        {
          if ( v20[1] )
          {
            v16 = *(_QWORD *)(v17[0] + 136LL);
            *(_QWORD *)(v17[0] + 136LL) = *(_QWORD *)(v17[0] + 144LL);
            *(_DWORD *)(v17[0] + 316LL) |= 1u;
            v14 = EPATHOBJ::bStrokeAndOrFill(&ppo, (struct XDCOBJ *)v17, 0LL, 0LL, 2u);
            *(_QWORD *)(v17[0] + 136LL) = v16;
            *(_DWORD *)(v17[0] + 316LL) |= 1u;
          }
          else
          {
            v14 = EPATHOBJ::bStrokeAndOrFill(&ppo, (struct XDCOBJ *)v17, (LINEATTRS *)(v17[0] + 208LL), &v18, 3u);
          }
          v13 = v14;
        }
        goto LABEL_16;
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v13 = 0;
LABEL_16:
    EPATHOBJ::vUnlock((EPATHOBJ *)&ppo);
    if ( v24 )
    {
      PopThreadGuardedObject(v23);
      v24 = 0;
    }
    goto LABEL_18;
  }
  EngSetLastError(6u);
  v13 = 0;
LABEL_18:
  if ( v17[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v17);
  return v13;
}
