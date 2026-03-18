/*
 * XREFs of GreIntersectClipRect @ 0x1C00C29C0
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C002F2E0 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C001CE90 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C003A380 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00409E8 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0041720 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C004CB0C (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C005B8F0 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 *     EngSetLastError @ 0x1C00AAA00 (EngSetLastError.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C00CF684 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0141EE0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 */

__int64 __fastcall GreIntersectClipRect(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  DC *v8; // rdi
  unsigned int v9; // ebx
  __int64 v10; // rax
  unsigned int v11; // ecx
  ULONG v12; // ecx
  __int64 v14; // rcx
  int v15; // edx
  int v16; // eax
  __int64 v17; // [rsp+30h] [rbp-40h] BYREF
  int v18; // [rsp+38h] [rbp-38h]
  int v19; // [rsp+3Ch] [rbp-34h]
  DC *v20[2]; // [rsp+40h] [rbp-30h] BYREF
  struct _RECTL v21; // [rsp+50h] [rbp-20h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v20, a1);
  v8 = v20[0];
  v9 = 0;
  if ( !v20[0] )
  {
LABEL_7:
    v12 = 6;
LABEL_8:
    EngSetLastError(v12);
    goto LABEL_9;
  }
  if ( *((_WORD *)v20[0] + 6) > 1u )
  {
    v10 = *((_QWORD *)v20[0] + 6);
    if ( v10 )
      v11 = *(_DWORD *)(v10 + 40);
    else
      v11 = 0;
    TraceLoggingWriteUnsupportedGdiUsage(12LL, v11, *((unsigned __int16 *)v20[0] + 6));
    goto LABEL_7;
  }
  v14 = *((_QWORD *)v20[0] + 122);
  v18 = *(_DWORD *)(v14 + 208);
  v19 = *(_DWORD *)(v14 + 108) & 1;
  EXFORMOBJ::vInit((EXFORMOBJ *)&v17, v20, 516, 0x80000000);
  v21.left = a2;
  v21.top = a3;
  v15 = *(_DWORD *)(v17 + 32);
  v21.right = a4;
  v21.bottom = a5;
  if ( (v15 & 1) != 0 )
  {
    EXFORMOBJ::bXform((EXFORMOBJ *)&v17, (struct ERECTL *)&v21);
    ERECTL::vOrder((ERECTL *)&v21);
    v16 = DC::iCombine(v8, &v21, 1);
  }
  else
  {
    if ( (((a2 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
      || (((a5 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
      || (((a4 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
      || (((a3 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
    {
      v12 = 87;
      goto LABEL_8;
    }
    v16 = DC::iCombine(v8, (struct EXFORMOBJ *)&v17, &v21, 1);
  }
  v9 = v16;
  if ( v16 > 1 )
    v9 = 3;
LABEL_9:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v20);
  return v9;
}
