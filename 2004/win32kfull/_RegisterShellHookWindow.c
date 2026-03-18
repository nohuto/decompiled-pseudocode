/*
 * XREFs of _RegisterShellHookWindow @ 0x1C0126240
 * Callers:
 *     <none>
 * Callees:
 *     ?VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C0025CC8 (-VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 */

__int64 __fastcall RegisterShellHookWindow(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rcx

  v3 = *((_QWORD *)a1 + 5);
  if ( *(char *)(v3 + 20) < 0 || *(char *)(v3 + 19) < 0 )
  {
    UserSetLastError(87LL, a2, a3);
  }
  else
  {
    v5 = *((_QWORD *)a1 + 3);
    if ( v5 && (unsigned int)VWPLAddBase((struct tagVWPL **)(*(_QWORD *)(v5 + 8) + 240LL), 0LL, a1, 2u) )
    {
      SetOrClrWF(1, (__int64)a1, 0x740u, 1);
      return 1LL;
    }
  }
  return 0LL;
}
