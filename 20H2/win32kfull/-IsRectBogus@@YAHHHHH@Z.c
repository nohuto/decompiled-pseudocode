/*
 * XREFs of ?IsRectBogus@@YAHHHHH@Z @ 0x1C01CFCCC
 * Callers:
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01CFB60 (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 * Callees:
 *     GetMonitorWorkRect @ 0x1C003AE18 (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x1C003AFE8 (GetMonitorRect.c)
 *     ?TestRectBogus@@YAHUtagRECT@@HHHH@Z @ 0x1C01CFFC0 (-TestRectBogus@@YAHUtagRECT@@HHHH@Z.c)
 */

__int64 __fastcall IsRectBogus(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  int v5; // esi
  int v6; // ebp
  int v7; // r14d
  __int64 v8; // r15
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebx
  struct tagRECT v13; // [rsp+30h] [rbp-48h] BYREF
  __int128 v14; // [rsp+40h] [rbp-38h] BYREF
  __int128 v15; // [rsp+50h] [rbp-28h] BYREF

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  v8 = *(_QWORD *)(GetDispInfo(a1, a2, a3, a4) + 96);
  v13 = (struct tagRECT)*GetMonitorWorkRect(&v14, v8);
  v11 = 0;
  if ( (unsigned int)TestRectBogus(&v13, v7, v6, v5, v4) )
    return 1;
  v13 = (struct tagRECT)*GetMonitorRect(&v15, v8, v9, v10);
  if ( (unsigned int)TestRectBogus(&v13, v7, v6, v5, v4) )
    return 1;
  return v11;
}
