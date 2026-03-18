/*
 * XREFs of NtGdiOffsetClipRgn @ 0x1C014BFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C0068488 (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C00A0B70 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00A0F50 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C00A111C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00A1484 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00A4750 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00F3124 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C015DAF0 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

__int64 __fastcall NtGdiOffsetClipRgn(HDC a1, LONG a2, LONG a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned int v8; // ecx
  __int64 v9; // rdi
  struct REGION *v10; // rax
  DC *v12[2]; // [rsp+38h] [rbp-49h] BYREF
  __int64 v13; // [rsp+48h] [rbp-39h] BYREF
  int v14; // [rsp+50h] [rbp-31h]
  __int64 v15; // [rsp+58h] [rbp-29h] BYREF
  __int64 v16; // [rsp+60h] [rbp-21h] BYREF
  _QWORD v17[2]; // [rsp+68h] [rbp-19h] BYREF
  _BYTE v18[32]; // [rsp+78h] [rbp-9h] BYREF
  __int64 v19; // [rsp+98h] [rbp+17h]
  __int64 v20; // [rsp+A0h] [rbp+1Fh]
  __int16 v21; // [rsp+A8h] [rbp+27h]
  struct _POINTL v22; // [rsp+100h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v12, a1);
  v5 = 0;
  if ( v12[0] )
  {
    v6 = *((unsigned __int16 *)v12[0] + 6);
    if ( (unsigned __int16)v6 > 1u )
    {
      v7 = *((_QWORD *)v12[0] + 6);
      if ( v7 )
        v8 = *(_DWORD *)(v7 + 40);
      else
        v8 = 0;
      TraceLoggingWriteUnsupportedGdiUsage(13LL, v8, v6);
      goto LABEL_7;
    }
    v19 = 0LL;
    v20 = 0LL;
    v21 = 256;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v18, (struct XDCOBJ *)v12, 1);
    if ( (v18[24] & 1) != 0 )
    {
      v9 = *((_QWORD *)v12[0] + 20);
      if ( v9 )
      {
        if ( *(_DWORD *)(v9 + 32) > 1u )
        {
          v15 = *((_QWORD *)v12[0] + 20);
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v13, *(_DWORD *)(v9 + 80));
          if ( !v13 )
          {
            EngSetLastError(8u);
            if ( v14 == 1 )
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v13);
            goto LABEL_22;
          }
          RGNOBJ::vCopy((RGNOBJ *)&v13, (struct RGNOBJ *)&v15);
          v9 = v13;
          ++*(_DWORD *)(v13 + 32);
          --*(_DWORD *)(v15 + 32);
          *((_QWORD *)v12[0] + 20) = v9;
          if ( v14 == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v13);
        }
        v16 = v9;
        v22.x = a2;
        v22.y = a3;
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v17, (struct XDCOBJ *)v12, -2147483132);
        if ( ((*(_DWORD *)(v17[0] + 32LL) & 2) != 0
           || EXFORMOBJ::bXform((EXFORMOBJ *)v17, (struct _VECTORL *)&v22, (struct _VECTORL *)&v22, 1uLL))
          && RGNOBJ::bOffset((RGNOBJ *)&v16, &v22) )
        {
          DC::bTightenRao(v12[0]);
          v10 = DC::prgnVisSnap(v12[0]);
          DC::vUpdate_VisRect(v12[0], v10);
          v5 = RGNOBJ::iComplexity((RGNOBJ *)&v16);
        }
        else
        {
          EngSetLastError(0x3EBu);
        }
        goto LABEL_22;
      }
      v5 = 2;
    }
LABEL_22:
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v18);
    goto LABEL_23;
  }
LABEL_7:
  EngSetLastError(6u);
LABEL_23:
  DCOBJ::~DCOBJ((DCOBJ *)v12);
  return v5;
}
