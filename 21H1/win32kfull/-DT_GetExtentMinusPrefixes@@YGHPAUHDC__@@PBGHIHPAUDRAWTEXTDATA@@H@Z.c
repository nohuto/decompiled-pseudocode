/*
 * XREFs of ?DT_GetExtentMinusPrefixes@@YGHPAUHDC__@@PBGHIHPAUDRAWTEXTDATA@@H@Z @ 0x1B7D8B
 * Callers:
 *     ?DT_DrawStr@@YGHPAUHDC__@@HHPBGHHIPAUDRAWTEXTDATA@@H@Z @ 0x1B7CFE (-DT_DrawStr@@YGHPAUHDC__@@HHPBGHHIPAUDRAWTEXTDATA@@H@Z.c)
 *     ?NeedsEndEllipsis@@YGHPAUHDC__@@PBGPAHPAUDRAWTEXTDATA@@I3H@Z @ 0x1B8097 (-NeedsEndEllipsis@@YGHPAUHDC__@@PBGPAHPAUDRAWTEXTDATA@@I3H@Z.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _CALL_LPK@4 @ 0xBC83A (_CALL_LPK@4.c)
 *     _xxxClientGetTextExtentPointW@16 @ 0xBCB06 (_xxxClientGetTextExtentPointW@16.c)
 *     _GreGetTextExtentW@20 @ 0xE26D8 (_GreGetTextExtentW@20.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _xxxClientLpkDrawTextEx@40 @ 0x1945DA (_xxxClientLpkDrawTextEx@40.c)
 *     _GetPrefixCount@16 @ 0x1B837E (_GetPrefixCount@16.c)
 */

LONG __userpurge DT_GetExtentMinusPrefixes@<eax>(
        const WCHAR *a1@<edx>,
        HDC a2@<ecx>,
        HDC a3,
        const unsigned __int16 *a4,
        int a5,
        unsigned int a6,
        int a7,
        struct DRAWTEXTDATA *a8,
        int a9)
{
  PKTHREAD CurrentThread; // eax
  PKTHREAD v10; // eax
  int v11; // ecx
  const void *v12; // edx
  struct tagSIZE v14; // [esp+10h] [ebp-3Ch] BYREF
  int v15; // [esp+1Ch] [ebp-30h]
  int v16; // [esp+20h] [ebp-2Ch]
  int v17; // [esp+24h] [ebp-28h]
  int ThreadWin32Thread; // [esp+28h] [ebp-24h]
  HDC v19; // [esp+2Ch] [ebp-20h]
  PCWSTR SourceString; // [esp+30h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]

  SourceString = a1;
  v19 = a2;
  v15 = 38;
  v14.cx = 0;
  v14.cy = 0;
  CurrentThread = KeGetCurrentThread();
  v17 = *(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 260);
  v10 = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(v10);
  GetPrefixCount(0, 0);
  ms_exc.registration.TryLevel = 0;
  v11 = *(_DWORD *)(v17 + 20) & 2;
  v16 = v11;
  ms_exc.registration.TryLevel = -2;
  if ( ((*_gpsi & 2) == 0 || !v11) && *(_DWORD *)(a6 + 52) && CALL_LPK(ThreadWin32Thread) )
    return xxxClientLpkDrawTextEx(v19, 0, 0, SourceString, (int)a3, 0, (int)a4, v12, 1, a7);
  if ( CALL_LPK(ThreadWin32Thread) )
    xxxClientGetTextExtentPointW(v19, SourceString, (int)a3, &v14);
  else
    GreGetTextExtentW(v19, (unsigned __int16 *)SourceString, (unsigned int)a3, &v14, 1);
  return v14.cx;
}
