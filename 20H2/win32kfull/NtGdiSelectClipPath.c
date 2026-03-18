/*
 * XREFs of NtGdiSelectClipPath @ 0x1C01399C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00690E4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C00A0B9C (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00A1484 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00A4750 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0139B3C (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C0139B9C (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bInactive@DC@@QEBAHXZ @ 0x1C013A9D4 (-bInactive@DC@@QEBAHXZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C015DAF0 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

__int64 __fastcall NtGdiSelectClipPath(HDC a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  int v5; // edi
  __int64 v6; // rax
  unsigned int v7; // ecx
  ULONG v8; // ecx
  DC *v10; // rcx
  unsigned int v11; // r8d
  DC *v12; // rcx
  DC *v13[2]; // [rsp+38h] [rbp-49h] BYREF
  struct REGION *v14; // [rsp+48h] [rbp-39h] BYREF
  int v15; // [rsp+50h] [rbp-31h]
  _BYTE v16[8]; // [rsp+58h] [rbp-29h] BYREF
  __int64 v17; // [rsp+60h] [rbp-21h]

  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  v3 = 0;
  if ( !v13[0] || (unsigned int)(a2 - 1) > 4 )
  {
LABEL_8:
    v8 = 87;
LABEL_9:
    EngSetLastError(v8);
    goto LABEL_10;
  }
  v4 = *((unsigned __int16 *)v13[0] + 6);
  v5 = 1;
  if ( (unsigned __int16)v4 > 1u )
  {
    v6 = *((_QWORD *)v13[0] + 6);
    if ( v6 )
      v7 = *(_DWORD *)(v6 + 40);
    else
      v7 = 0;
    TraceLoggingWriteUnsupportedGdiUsage(14LL, v7, v4);
    goto LABEL_8;
  }
  if ( !(unsigned int)DC::bInactive(v13[0]) )
  {
    v8 = 1003;
    goto LABEL_9;
  }
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v16, (struct XDCOBJ *)v13);
  if ( v17 )
  {
    v11 = *(unsigned __int8 *)(*((_QWORD *)v13[0] + 122) + 214LL);
    v15 = 0;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v14, (struct EPATHOBJ *)v16, v11, 0LL);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v14);
    if ( !v14 || !(unsigned int)DC::iSelect(v13[0], v14, a2) )
      v5 = 0;
    v12 = v13[0];
    *((_DWORD *)v13[0] + 62) &= ~1u;
    DC::hpath(v12, 0LL);
    v3 = v5;
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v14);
  }
  else
  {
    EngSetLastError(8u);
    v10 = v13[0];
    *((_DWORD *)v13[0] + 62) &= ~1u;
    DC::hpath(v10, 0LL);
  }
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v16);
LABEL_10:
  DCOBJ::~DCOBJ((DCOBJ *)v13);
  return v3;
}
