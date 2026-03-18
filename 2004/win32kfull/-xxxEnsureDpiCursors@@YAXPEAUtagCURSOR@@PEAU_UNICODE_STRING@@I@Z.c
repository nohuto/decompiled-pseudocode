/*
 * XREFs of ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1C004308C
 * Callers:
 *     ?xxxEnsureDpiCursorsForSysCur@@YAXI@Z @ 0x1C004303C (-xxxEnsureDpiCursorsForSysCur@@YAXI@Z.c)
 *     ?xxxEnsureAllDpiCursors@@YAXXZ @ 0x1C011CCE4 (-xxxEnsureAllDpiCursors@@YAXXZ.c)
 * Callees:
 *     xxxClientCopyImage @ 0x1C0030E98 (xxxClientCopyImage.c)
 *     ?GetSizeForIndex@CCursorSizes@@QEBA_NIPEAI@Z @ 0x1C004313C (-GetSizeForIndex@CCursorSizes@@QEBA_NIPEAI@Z.c)
 *     ?FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z @ 0x1C00431EC (-FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z.c)
 *     ?zzzFixupGlobalCursorWhenChanged@@YAXPEAUtagCURSOR@@@Z @ 0x1C00435AC (-zzzFixupGlobalCursorWhenChanged@@YAXPEAUtagCURSOR@@@Z.c)
 *     xxxClientLoadImage @ 0x1C0043B54 (xxxClientLoadImage.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C00AF4C4 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     ?EnsureDpiCursor@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@@Z @ 0x1C01D4560 (-EnsureDpiCursor@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@@Z.c)
 *     ?LinkDpiCursor@@YAXPEAUtagCURSOR@@0I@Z @ 0x1C01D46D8 (-LinkDpiCursor@@YAXPEAUtagCURSOR@@0I@Z.c)
 */

void __fastcall xxxEnsureDpiCursors(struct tagCURSOR *a1, struct _UNICODE_STRING *a2, int a3)
{
  struct tagCURSOR *v4; // rbx
  INT v5; // r14d
  int v6; // r15d
  unsigned int i; // esi
  __int64 v8; // r13
  INT v9; // edi
  INT v10; // eax
  __int64 v11; // rax
  struct tagCURSOR *v12; // rdi
  unsigned int v13; // edx
  struct tagCURSOR *v14; // rcx
  __int64 v15; // rdx
  __int64 b; // [rsp+78h] [rbp+10h] BYREF
  int v17; // [rsp+80h] [rbp+18h]

  v17 = a3;
  v4 = a1;
  if ( a2 || (*((_DWORD *)a1 + 20) & 8) == 0 )
  {
    b = 0LL;
    if ( a1 )
    {
      if ( (*((_DWORD *)a1 + 20) & 8) != 0 )
        a1 = (struct tagCURSOR *)**((_QWORD **)a1 + 12);
      v5 = *((_DWORD *)a1 + 35);
      v6 = *((_DWORD *)a1 + 36);
    }
    else
    {
      v6 = HIDWORD(b);
      v5 = b;
    }
    for ( i = 0; i < 5; ++i )
    {
      LODWORD(b) = 0;
      if ( CCursorSizes::GetSizeForIndex(a1, i, (unsigned int *)&b) && !FindDPICursor(v4, b) )
      {
        v8 = *((_QWORD *)v4 + 11);
        v9 = EngMulDiv(v5, b, *((_DWORD *)v4 + 19));
        v10 = EngMulDiv(v6 / 2, b, *((_DWORD *)v4 + 19));
        v11 = a2
            ? xxxClientLoadImage((_DWORD)a2, v17 | 0x40000u, 2, v9, v10, v17 | 0x40000u)
            : xxxClientCopyImage(*(_QWORD *)v4, 2, v9, v10, v17 | 0x40000u);
        v12 = (struct tagCURSOR *)v11;
        if ( v11 )
        {
          if ( *(_QWORD *)(v11 + 40)
            || *(_QWORD *)(v11 + 48) != v11
            || (*(_DWORD *)(v11 + 80) & 0x2000) != 0
            || FindDPICursor(v4, b)
            || *((_QWORD *)v4 + 11) != v8
            || FindDPICursor(v14, v13) )
          {
            _DestroyCursor(v12, 0);
          }
          else
          {
            v15 = *((_QWORD *)v4 + 3);
            if ( v15 )
            {
              if ( (*((_DWORD *)v4 + 20) & 0x200) == 0 )
                HMChangeOwnerProcess(v12, *(_QWORD *)(v15 + 320));
            }
            LinkDpiCursor(v4, v12, b);
            InputTraceLogging::Cursor::EnsureDpiCursor(v12);
            zzzFixupGlobalCursorWhenChanged(v4);
          }
        }
      }
    }
  }
}
