/*
 * XREFs of ?GetBorderFlagFromStuckEdge@CortanaDesktopExperienceView@@AEAA?AW4ShellExperienceViewBorderEdge@Experience@Shell@Internal@Windows@@W4EDGEUI_TRAYSTUCKPLACE@@_N1@Z @ 0x1801E8E68
 * Callers:
 *     ?ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x1801EE510 (-ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?IsSearchAndCortanaSplitEnabled@@YAEXZ @ 0x180053408 (-IsSearchAndCortanaSplitEnabled@@YAEXZ.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::GetBorderFlagFromStuckEdge(__int64 a1, int a2, char a3, char a4)
{
  unsigned int v4; // ebx
  int v7; // esi
  unsigned int v8; // ecx
  unsigned int v9; // r8d
  int v10; // r9d
  int v11; // edx
  int v12; // edx
  int v13; // ebx

  v4 = 0;
  if ( *(_BYTE *)(a1 + 253) || a4 )
  {
    v9 = 1;
    v7 = 0;
    v10 = 0;
    v8 = 4;
  }
  else
  {
    v7 = 2;
    v8 = 12;
    v9 = 9;
    v10 = 8;
  }
  if ( a2 )
  {
    v11 = a2 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        if ( v12 == 1 )
        {
          if ( IsSearchAndCortanaSplitEnabled() )
            return v7 | 5u;
          else
            return v7 | (a3 != 0 ? 1 : 4);
        }
      }
      else
      {
        return v9;
      }
    }
    else
    {
      if ( *(_DWORD *)(a1 + 248) == 2 )
        v13 = 5;
      else
        v13 = a3 != 0 ? 1 : 4;
      return v10 | (unsigned int)v13;
    }
  }
  else
  {
    return v8;
  }
  return v4;
}
