/*
 * XREFs of ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1C0079EF0
 * Callers:
 *     ?xxxEnsureDpiCursorsForSysCur@@YAXI@Z @ 0x1C0079EA0 (-xxxEnsureDpiCursorsForSysCur@@YAXI@Z.c)
 *     ?xxxEnsureAllDpiCursors@@YAXXZ @ 0x1C007B5D0 (-xxxEnsureAllDpiCursors@@YAXXZ.c)
 * Callees:
 *     xxxClientCopyImage @ 0x1C0073878 (xxxClientCopyImage.c)
 *     xxxClientLoadImage @ 0x1C0077158 (xxxClientLoadImage.c)
 *     ?GetSizeForIndex@CCursorSizes@@QEBA_NIPEAI@Z @ 0x1C0079FA0 (-GetSizeForIndex@CCursorSizes@@QEBA_NIPEAI@Z.c)
 *     ?FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z @ 0x1C007A050 (-FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z.c)
 *     ?zzzFixupGlobalCursorWhenChanged@@YAXPEAUtagCURSOR@@@Z @ 0x1C007A410 (-zzzFixupGlobalCursorWhenChanged@@YAXPEAUtagCURSOR@@@Z.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C0093B5C (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     ?EnsureDpiCursor@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@@Z @ 0x1C01D3750 (-EnsureDpiCursor@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@@Z.c)
 *     ?LinkDpiCursor@@YAXPEAUtagCURSOR@@0I@Z @ 0x1C01D38C8 (-LinkDpiCursor@@YAXPEAUtagCURSOR@@0I@Z.c)
 */

void __fastcall xxxEnsureDpiCursors(struct tagCURSOR *a1, struct _UNICODE_STRING *a2, unsigned int a3)
{
  struct tagCURSOR *v4; // rbx
  INT v5; // r14d
  int v6; // r15d
  unsigned int i; // esi
  __int64 v8; // r13
  INT v9; // edi
  INT v10; // eax
  __int64 v11; // rdx
  __int64 Image; // rax
  struct tagCURSOR *v13; // rdi
  unsigned int v14; // edx
  struct tagCURSOR *v15; // rcx
  __int64 v16; // rdx
  __int64 b; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v18; // [rsp+80h] [rbp+18h]

  v18 = a3;
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
        v11 = v18;
        if ( a2 )
        {
          LODWORD(v11) = v18 | 0x40000;
          Image = (__int64)xxxClientLoadImage(&a2->Length, v11, 2u, v9, v10, v18 | 0x40000);
        }
        else
        {
          Image = xxxClientCopyImage(*(_QWORD *)v4, 2, v9, v10, v18 | 0x40000);
        }
        v13 = (struct tagCURSOR *)Image;
        if ( Image )
        {
          if ( *(_QWORD *)(Image + 40)
            || *(_QWORD *)(Image + 48) != Image
            || (*(_DWORD *)(Image + 80) & 0x2000) != 0
            || FindDPICursor(v4, b)
            || *((_QWORD *)v4 + 11) != v8
            || FindDPICursor(v15, v14) )
          {
            _DestroyCursor(v13, 0);
          }
          else
          {
            v16 = *((_QWORD *)v4 + 3);
            if ( v16 )
            {
              if ( (*((_DWORD *)v4 + 20) & 0x200) == 0 )
                HMChangeOwnerProcess(v13, *(_QWORD *)(v16 + 320));
            }
            LinkDpiCursor(v4, v13, b);
            InputTraceLogging::Cursor::EnsureDpiCursor(v13);
            zzzFixupGlobalCursorWhenChanged(v4);
          }
        }
      }
    }
  }
}
