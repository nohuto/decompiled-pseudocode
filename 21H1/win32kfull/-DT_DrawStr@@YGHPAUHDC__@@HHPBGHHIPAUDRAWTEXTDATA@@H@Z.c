/*
 * XREFs of ?DT_DrawStr@@YGHPAUHDC__@@HHPBGHHIPAUDRAWTEXTDATA@@H@Z @ 0x1B7CFE
 * Callers:
 *     ?DT_DrawJustifiedLine@@YGXPAUHDC__@@HPBGHIPAUDRAWTEXTDATA@@H@Z @ 0x1B7C90 (-DT_DrawJustifiedLine@@YGXPAUHDC__@@HPBGHIPAUDRAWTEXTDATA@@H@Z.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _GreGetLayout@4 @ 0x566A8 (_GreGetLayout@4.c)
 *     _CALL_LPK@4 @ 0xBC83A (_CALL_LPK@4.c)
 *     _xxxClientLpkDrawTextEx@40 @ 0x1945DA (_xxxClientLpkDrawTextEx@40.c)
 *     ?DT_GetExtentMinusPrefixes@@YGHPAUHDC__@@PBGHIHPAUDRAWTEXTDATA@@H@Z @ 0x1B7D8B (-DT_GetExtentMinusPrefixes@@YGHPAUHDC__@@PBGHIHPAUDRAWTEXTDATA@@H@Z.c)
 */

int __userpurge DT_DrawStr@<eax>(
        int a1@<edx>,
        HDC a2@<ecx>,
        HDC a3,
        PCWSTR SourceString,
        HDC a5,
        const unsigned __int16 *a6,
        unsigned __int16 *a7,
        unsigned int a8,
        unsigned int a9,
        struct DRAWTEXTDATA *a10,
        int a11)
{
  int v13; // ecx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int result; // eax
  struct DRAWTEXTDATA *v17; // [esp+0h] [ebp-Ch]
  int v18; // [esp+4h] [ebp-8h]

  if ( (GreGetLayout(a2) & 1) != 0 )
    --a1;
  if ( *(_DWORD *)(a8 + 52) )
  {
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    result = CALL_LPK(ThreadWin32Thread);
    if ( result )
      return xxxClientLpkDrawTextEx(a2, a1, (int)a3, SourceString, (int)a5, (int)a6, (int)a7, (const void *)a8, 1, a9);
  }
  else
  {
    if ( a6 )
      (*(void (__stdcall **)(HDC, int, HDC, PCWSTR, HDC, unsigned __int16 *))(a8 + 44))(
        a2,
        a1,
        a3,
        SourceString,
        a5,
        a7);
    return DT_GetExtentMinusPrefixes(a5, a7, v13, a8, a9, v17, v18) - *(_DWORD *)(a8 + 48);
  }
  return result;
}
