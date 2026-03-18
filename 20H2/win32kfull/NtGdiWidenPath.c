/*
 * XREFs of NtGdiWidenPath @ 0x1C02AD010
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00A1484 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00A4750 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00F3124 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C0133F74 (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C0135A88 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0139B3C (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C0139B9C (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bInactive@DC@@QEBAHXZ @ 0x1C013A9D4 (-bInactive@DC@@QEBAHXZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C015DAF0 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     ?vReComputeBounds@EPATHOBJ@@QEAAXXZ @ 0x1C02CE2F0 (-vReComputeBounds@EPATHOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiWidenPath(HDC a1)
{
  unsigned int v1; // ebx
  ULONG v2; // ecx
  __int64 v3; // rcx
  unsigned int v4; // eax
  struct _LINEATTRS *v5; // rdi
  ULONG v6; // ecx
  DC *v8[2]; // [rsp+38h] [rbp-49h] BYREF
  struct _XFORMOBJ v9; // [rsp+48h] [rbp-39h] BYREF
  _BYTE v10[8]; // [rsp+58h] [rbp-29h] BYREF
  __int64 v11; // [rsp+60h] [rbp-21h]

  DCOBJ::DCOBJ((DCOBJ *)v8, a1);
  v1 = 0;
  if ( v8[0] )
  {
    if ( !(unsigned int)DC::bInactive(v8[0]) )
    {
      v2 = 1003;
      goto LABEL_5;
    }
    XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v10, v8);
    if ( v11 )
    {
      if ( *((_WORD *)v8[0] + 6) > 1u )
      {
        v3 = *((_QWORD *)v8[0] + 6);
        if ( v3 )
          v4 = *(_DWORD *)(v3 + 40);
        else
          v4 = 0;
        TraceLoggingWriteUnsupportedGdiUsage(7, v4, *((unsigned __int16 *)v8[0] + 6));
        goto LABEL_14;
      }
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v9, (struct XDCOBJ *)v8, 516);
      v5 = (struct _LINEATTRS *)((char *)v8[0] + 208);
      if ( (*((_DWORD *)v8[0] + 52) & 1) == 0 )
      {
        if ( (*(_DWORD *)(*((_QWORD *)v8[0] + 18) + 40LL) & 0x800) == 0 )
        {
LABEL_14:
          v6 = 1003;
LABEL_20:
          EngSetLastError(v6);
LABEL_22:
          XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v10);
          goto LABEL_23;
        }
        v5 = (struct _LINEATTRS *)&unk_1C0332650;
      }
      if ( !(unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)v10, (struct EPATHOBJ *)v10, &v9, v5) )
      {
        v6 = 534;
        goto LABEL_20;
      }
      if ( (unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v10, (struct EPATHOBJ *)v10, &v9, v5) )
      {
        EPATHOBJ::vReComputeBounds((EPATHOBJ *)v10);
        v1 = 1;
        goto LABEL_22;
      }
    }
    v6 = 8;
    goto LABEL_20;
  }
  v2 = 87;
LABEL_5:
  EngSetLastError(v2);
LABEL_23:
  DCOBJ::~DCOBJ((DCOBJ *)v8);
  return v1;
}
