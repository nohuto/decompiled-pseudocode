/*
 * XREFs of _NtGdiWidenPath@4 @ 0x211EC9
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     ??1XEPATHOBJ@@QAE@XZ @ 0xF6DBB (--1XEPATHOBJ@@QAE@XZ.c)
 *     ??0XEPATHOBJ@@QAE@AAVXDCOBJ@@@Z @ 0x1E448D (--0XEPATHOBJ@@QAE@AAVXDCOBJ@@@Z.c)
 *     ?bInactive@DC@@QBEHXZ @ 0x2113DA (-bInactive@DC@@QBEHXZ.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QAEHAAV1@PAU_XFORMOBJ@@PAU_LINEATTRS@@@Z @ 0x234F52 (-bComputeWidenedBounds@EPATHOBJ@@QAEHAAV1@PAU_XFORMOBJ@@PAU_LINEATTRS@@@Z.c)
 *     ?bWiden@EPATHOBJ@@QAEHAAV1@PAU_XFORMOBJ@@PAU_LINEATTRS@@@Z @ 0x235B22 (-bWiden@EPATHOBJ@@QAEHAAV1@PAU_XFORMOBJ@@PAU_LINEATTRS@@@Z.c)
 *     ?vReComputeBounds@EPATHOBJ@@QAEXXZ @ 0x237449 (-vReComputeBounds@EPATHOBJ@@QAEXXZ.c)
 */

int __stdcall NtGdiWidenPath(HDC a1)
{
  int v1; // esi
  struct _LINEATTRS *v2; // edi
  _BYTE v4[8]; // [esp+4h] [ebp-5Ch] BYREF
  int v5; // [esp+Ch] [ebp-54h]
  struct _XFORMOBJ v6; // [esp+48h] [ebp-18h] BYREF
  DC *v7[3]; // [esp+54h] [ebp-Ch] BYREF

  v1 = 0;
  memset(v7, 0, sizeof(v7));
  XDCOBJ::vLock((XDCOBJ *)v7, a1);
  if ( !v7[0] )
  {
    EngSetLastError(0x57u);
    goto LABEL_19;
  }
  if ( DC::bInactive(v7[0]) )
  {
    XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v4, v7);
    if ( !v5 )
    {
      EngSetLastError(8u);
LABEL_18:
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v4);
      goto LABEL_19;
    }
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v6, (struct XDCOBJ *)v7, 516);
    v2 = (struct _LINEATTRS *)((char *)v7[0] + 140);
    if ( (*((_BYTE *)v7[0] + 140) & 1) == 0 )
    {
      if ( (*(_DWORD *)(*((_DWORD *)v7[0] + 24) + 24) & 0x800) == 0 )
      {
        EngSetLastError(0x3EBu);
        goto LABEL_18;
      }
      v2 = (struct _LINEATTRS *)&unk_26DDA0;
    }
    if ( EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)v4, (struct EPATHOBJ *)v4, &v6, v2) )
    {
      if ( EPATHOBJ::bWiden((EPATHOBJ *)v4, (struct EPATHOBJ *)v4, &v6, v2) )
      {
        EPATHOBJ::vReComputeBounds((EPATHOBJ *)v4);
        v1 = 1;
      }
      else
      {
        EngSetLastError(8u);
      }
    }
    else
    {
      EngSetLastError(0x216u);
    }
    goto LABEL_18;
  }
  EngSetLastError(0x3EBu);
LABEL_19:
  if ( v7[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v7);
  return v1;
}
