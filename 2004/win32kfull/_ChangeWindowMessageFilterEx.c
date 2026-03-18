/*
 * XREFs of _ChangeWindowMessageFilterEx @ 0x1C0037408
 * Callers:
 *     NtUserChangeWindowMessageFilterEx @ 0x1C0037270 (NtUserChangeWindowMessageFilterEx.c)
 * Callees:
 *     ?VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C0025CC8 (-VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z.c)
 *     ?VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x1C00266E4 (-VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z.c)
 *     UIPISQMChangeFilter @ 0x1C0037640 (UIPISQMChangeFilter.c)
 *     ?ValidateChangeMessageFilter@@YAHPEAUtagPROCESSINFO@@I@Z @ 0x1C00376D8 (-ValidateChangeMessageFilter@@YAHPEAUtagPROCESSINFO@@I@Z.c)
 *     ?GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1C0037A58 (-GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C0037B6C (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     ?AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x1C0037C04 (-AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z.c)
 *     FreeWindowMessageFilter @ 0x1C008CF8C (FreeWindowMessageFilter.c)
 *     ?RemoveMessageFromFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x1C0103B1C (-RemoveMessageFromFilter@@YAHPEAPEAPEAXIPEAH@Z.c)
 *     ?IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z @ 0x1C0103C54 (-IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z.c)
 */

__int64 __fastcall ChangeWindowMessageFilterEx(struct tagWND *a1, unsigned int a2, int a3, __int64 a4)
{
  unsigned int v4; // ebx
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v10; // r13
  void **v11; // r15
  __int64 v12; // r9
  struct tagVWPL **v14; // rcx
  void **v15[7]; // [rsp+30h] [rbp-38h] BYREF
  int v16; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  v16 = 0;
  CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1);
  *(_DWORD *)(a4 + 4) = 0;
  v10 = CurrentProcessWin32Process;
  UIPISQMChangeFilter(CurrentProcessWin32Process);
  if ( (unsigned __int8)Enforced() )
  {
    if ( !(unsigned int)ValidateChangeMessageFilter(v10, a2) )
      return 0LL;
    if ( a3 )
    {
      v15[0] = GetWindowMessageFilter(a1);
      v11 = v15[0];
      if ( a3 == 1 )
      {
        v4 = AddMessageToFilter(v15, a2, &v16);
        if ( v4 && v16 )
          *(_DWORD *)(a4 + 4) = 1;
      }
      else
      {
        if ( a3 != 2 )
          return v4;
        v4 = RemoveMessageFromFilter(v15, a2, &v16);
        if ( v4 )
        {
          if ( (unsigned int)IsMessageAllowedByFilterEx(*((void *const **)v10 + 106), a2, 0LL, 0LL)
            || (unsigned int)IsMessageAlwaysAllowedAcrossIL(a2) )
          {
            *(_DWORD *)(a4 + 4) = 3;
          }
          else if ( v16 )
          {
            *(_DWORD *)(a4 + 4) = 2;
          }
        }
      }
      if ( v11 != v15[0] )
      {
        v14 = (struct tagVWPL **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 856LL);
        if ( v15[0] )
          return (unsigned int)VWPLAddBase(v14, (__int64)v15[0], a1, 5u);
        else
          VWPLRemoveBase(v14, 0LL, a1, v12, 0LL);
      }
      return v4;
    }
    FreeWindowMessageFilter(a1);
  }
  return 1LL;
}
