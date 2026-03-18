/*
 * XREFs of FreeWindowGCData @ 0x1C00D21DC
 * Callers:
 *     SetGestureConfigSettings @ 0x1C001B478 (SetGestureConfigSettings.c)
 *     xxxFreeWindow @ 0x1C00D094C (xxxFreeWindow.c)
 * Callees:
 *     ?VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x1C003EA14 (-VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z.c)
 *     ?FreeWindowGCList@@YAXPEAPEAUtagGESTURECONFIGLIST@@@Z @ 0x1C012AB28 (-FreeWindowGCList@@YAXPEAPEAUtagGESTURECONFIGLIST@@@Z.c)
 */

__int64 __fastcall FreeWindowGCData(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 result; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r9
  _QWORD *v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = *((_QWORD *)a1 + 2);
  v11 = 0LL;
  result = VWPLRemoveBase((struct tagVWPL **)(*(_QWORD *)(v4 + 424) + 872LL), a2, a1, a4, (unsigned __int64 *)&v11);
  if ( (_DWORD)result )
  {
    v7 = (unsigned __int64)v11;
    if ( v11 )
    {
      if ( *v11 )
      {
        Win32FreePool(*v11);
        *(_QWORD *)v7 = 0LL;
      }
      v8 = *(_QWORD *)(v7 + 16);
      if ( v8 )
      {
        FreeWindowGCList(*(struct tagGESTURECONFIGLIST ***)(v7 + 16));
        Win32FreePool(v8);
        *(_QWORD *)(v7 + 16) = 0LL;
      }
      Win32FreePool(v7);
      return VWPLRemoveBase((struct tagVWPL **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 872LL), v9, a1, v10, 0LL);
    }
  }
  return result;
}
