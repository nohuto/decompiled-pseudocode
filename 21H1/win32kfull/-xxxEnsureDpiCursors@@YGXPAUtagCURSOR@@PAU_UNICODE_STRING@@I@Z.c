/*
 * XREFs of ?xxxEnsureDpiCursors@@YGXPAUtagCURSOR@@PAU_UNICODE_STRING@@I@Z @ 0xD9146
 * Callers:
 *     ?xxxEnsureAllDpiCursors@@YGXXZ @ 0xD8C20 (-xxxEnsureAllDpiCursors@@YGXXZ.c)
 *     ?xxxEnsureDpiCursorsForSysCur@@YGXI@Z @ 0xD9106 (-xxxEnsureDpiCursorsForSysCur@@YGXI@Z.c)
 * Callees:
 *     _xxxClientCopyImage@20 @ 0x16E68 (_xxxClientCopyImage@20.c)
 *     _zzzUpdateCursorImage@0 @ 0x745FA (_zzzUpdateCursorImage@0.c)
 *     ?_DestroyCursor@@YG_NPAUtagCURSOR@@K@Z @ 0x785EE (-_DestroyCursor@@YG_NPAUtagCURSOR@@K@Z.c)
 *     ?GetSizeForIndex@CCursorSizes@@QBE_NIPAI@Z @ 0xD91CA (-GetSizeForIndex@CCursorSizes@@QBE_NIPAI@Z.c)
 *     ?GetSizeForCursorOrFrame@@YG?AUtagSIZE@@PAUtagCURSOR@@@Z @ 0xD920E (-GetSizeForCursorOrFrame@@YG-AUtagSIZE@@PAUtagCURSOR@@@Z.c)
 *     _xxxClientLoadImage@28 @ 0xD94BC (_xxxClientLoadImage@28.c)
 *     ?EnsureDpiCursor@Cursor@InputTraceLogging@@SGXPAUtagCURSOR@@@Z @ 0x143024 (-EnsureDpiCursor@Cursor@InputTraceLogging@@SGXPAUtagCURSOR@@@Z.c)
 *     ?LinkDpiCursor@@YGXPAUtagCURSOR@@0I@Z @ 0x14310B (-LinkDpiCursor@@YGXPAUtagCURSOR@@0I@Z.c)
 */

void __userpurge xxxEnsureDpiCursors(
        int a1@<edx>,
        int *a2@<ecx>,
        struct tagCURSOR *a3,
        struct _UNICODE_STRING *a4,
        unsigned int a5)
{
  INT cx; // edi
  struct tagSIZE SizeForCursorOrFrame; // kr08_8
  unsigned int v8; // eax
  int v9; // eax
  struct tagCURSOR *v10; // ebx
  INT v11; // edi
  INT v12; // eax
  _DWORD *Image; // eax
  _DWORD *v14; // edi
  int v15; // eax
  int i; // ecx
  int v17; // eax
  INT v18; // [esp-8h] [ebp-28h]
  INT v19; // [esp-4h] [ebp-24h]
  struct tagCURSOR *v20; // [esp+0h] [ebp-20h]
  struct tagCURSOR *v21; // [esp+0h] [ebp-20h]
  struct tagCURSOR *v22; // [esp+0h] [ebp-20h]
  unsigned int v23; // [esp+4h] [ebp-1Ch]
  INT b; // [esp+10h] [ebp-10h] BYREF
  unsigned int v25; // [esp+14h] [ebp-Ch]
  LONG cy; // [esp+18h] [ebp-8h]
  int v27; // [esp+1Ch] [ebp-4h]

  v27 = a1;
  if ( a1 || (a2[11] & 8) == 0 )
  {
    SizeForCursorOrFrame = GetSizeForCursorOrFrame(v20);
    cy = SizeForCursorOrFrame.cy;
    cx = SizeForCursorOrFrame.cx;
    v8 = 0;
    v25 = 0;
    do
    {
      b = 0;
      if ( CCursorSizes::GetSizeForIndex((CCursorSizes *)&b, v8, (unsigned int *)&b) )
      {
        v9 = a2[6];
        v10 = (struct tagCURSOR *)b;
        while ( v9 )
        {
          if ( *(_DWORD *)(v9 + 40) == b )
            goto LABEL_9;
          v9 = *(_DWORD *)(v9 + 20);
        }
        v9 = 0;
LABEL_9:
        if ( !v9 )
        {
          v19 = a2[10];
          v18 = b;
          b = a2[13];
          v11 = EngMulDiv(cx, v18, v19);
          v12 = EngMulDiv(cy / 2, (INT)v10, a2[10]);
          if ( v27 )
            Image = (_DWORD *)xxxClientLoadImage(2, v11, v12, (unsigned int)a3 | 0x40000, v27);
          else
            Image = (_DWORD *)xxxClientCopyImage(*a2, 2, v11, v12, (unsigned int)a3 | 0x40000);
          v14 = Image;
          if ( Image )
          {
            if ( Image[5] || (_DWORD *)Image[6] != Image || (Image[11] & 0x2000) != 0 )
              goto LABEL_28;
            v15 = a2[6];
            for ( i = v15; i && *(struct tagCURSOR **)(i + 40) != v10; i = *(_DWORD *)(i + 20) )
              ;
            if ( i || a2[13] != b )
              goto LABEL_28;
            while ( v15 && *(struct tagCURSOR **)(v15 + 40) != v10 )
              v15 = *(_DWORD *)(v15 + 20);
            if ( v15 )
            {
LABEL_28:
              _DestroyCursor(v14, 0);
            }
            else
            {
              v17 = a2[3];
              if ( v17 && (a2[11] & 0x200) == 0 )
                HMChangeOwnerProcess(v14, *(_DWORD *)(v17 + 180));
              LinkDpiCursor(v10, v21, v23);
              InputTraceLogging::Cursor::EnsureDpiCursor(v22);
              if ( gpcurLogCurrent == (struct tagCURSOR *)a2[6] )
              {
                gpcurLogCurrent = 0;
                gpcurPhysCurrent = 0;
                zzzUpdateCursorImage();
              }
            }
          }
          cx = SizeForCursorOrFrame.cx;
        }
      }
      v8 = v25 + 1;
      v25 = v8;
    }
    while ( v8 < 5 );
  }
}
