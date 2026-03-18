/*
 * XREFs of FreeWindowMessageFilter @ 0x1C008CF8C
 * Callers:
 *     _ChangeWindowMessageFilterEx @ 0x1C0037408 (_ChangeWindowMessageFilterEx.c)
 *     xxxFreeWindow @ 0x1C008B600 (xxxFreeWindow.c)
 * Callees:
 *     ?VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x1C00266E4 (-VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z.c)
 *     ?MsgLookupTableCleanUp@@YAXPEAPEAX@Z @ 0x1C0106C0C (-MsgLookupTableCleanUp@@YAXPEAPEAX@Z.c)
 */

void __fastcall FreeWindowMessageFilter(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  void **v5; // [rsp+40h] [rbp+8h] BYREF

  v4 = *((_QWORD *)a1 + 2);
  v5 = 0LL;
  if ( (unsigned int)VWPLRemoveBase(
                       (struct tagVWPL **)(*(_QWORD *)(v4 + 416) + 856LL),
                       a2,
                       a1,
                       a4,
                       (unsigned __int64 *)&v5) )
    MsgLookupTableCleanUp(v5);
}
