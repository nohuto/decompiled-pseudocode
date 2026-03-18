/*
 * XREFs of NtGdiWidenPath @ 0x1C02AE600
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0076414 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00F7658 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C0132024 (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C0133B38 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0137B84 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C0137BC0 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bInactive@DC@@QEBAHXZ @ 0x1C0138A04 (-bInactive@DC@@QEBAHXZ.c)
 *     ?vReComputeBounds@EPATHOBJ@@QEAAXXZ @ 0x1C02CF790 (-vReComputeBounds@EPATHOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiWidenPath(HDC a1)
{
  ULONG v1; // ecx
  unsigned int v2; // ebx
  struct _LINEATTRS *v3; // rdi
  ULONG v4; // ecx
  DC *v6[2]; // [rsp+20h] [rbp-49h] BYREF
  struct _XFORMOBJ v7; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v8[8]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v9; // [rsp+48h] [rbp-21h]

  DCOBJ::DCOBJ((DCOBJ *)v6, a1);
  if ( !v6[0] )
  {
    v1 = 87;
LABEL_5:
    EngSetLastError(v1);
    v2 = 0;
    goto LABEL_18;
  }
  if ( !(unsigned int)DC::bInactive(v6[0]) )
  {
    v1 = 1003;
    goto LABEL_5;
  }
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v8, v6);
  if ( !v9 )
    goto LABEL_14;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v7, (struct XDCOBJ *)v6, 516);
  v2 = 1;
  v3 = (struct _LINEATTRS *)((char *)v6[0] + 208);
  if ( (*((_DWORD *)v6[0] + 52) & 1) != 0 )
  {
LABEL_11:
    if ( !(unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)v8, (struct EPATHOBJ *)v8, &v7, v3) )
    {
      v4 = 534;
      goto LABEL_15;
    }
    if ( (unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v8, (struct EPATHOBJ *)v8, &v7, v3) )
    {
      EPATHOBJ::vReComputeBounds((EPATHOBJ *)v8);
      goto LABEL_17;
    }
LABEL_14:
    v4 = 8;
    goto LABEL_15;
  }
  if ( (*(_DWORD *)(*((_QWORD *)v6[0] + 18) + 40LL) & 0x800) != 0 )
  {
    v3 = (struct _LINEATTRS *)&unk_1C0335C90;
    goto LABEL_11;
  }
  v4 = 1003;
LABEL_15:
  EngSetLastError(v4);
  v2 = 0;
LABEL_17:
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v8);
LABEL_18:
  if ( v6[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v6);
  return v2;
}
