/*
 * XREFs of ?_TTCheckNCTarget@@YGHUtagRECT@@PAUtagWND@@PAUtagPNTRWINDOWHITTTESTARGS@@PAU1@PAGPAUtagPOINT@@3K@Z @ 0x17A3C7
 * Callers:
 *     ?xxxPointerInsideNCTargeting@@YGXPAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x17A5BF (-xxxPointerInsideNCTargeting@@YGXPAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K.c)
 * Callees:
 *     ?TTBetterTarget@@YGHPAUtagWND@@IPAUtagPNTRWINDOWHITTTESTARGS@@PAUtagRECT@@K@Z @ 0x179D48 (-TTBetterTarget@@YGHPAUtagWND@@IPAUtagPNTRWINDOWHITTTESTARGS@@PAUtagRECT@@K@Z.c)
 *     _TouchTargetingRankForRect@48 @ 0x1B902D (_TouchTargetingRankForRect@48.c)
 */

int __userpurge _TTCheckNCTarget@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        struct tagRECT a3,
        struct tagWND *a4,
        struct tagPNTRWINDOWHITTTESTARGS *a5,
        struct tagRECT *a6,
        unsigned __int16 *a7,
        struct tagPOINT *a8,
        struct tagRECT *a9,
        unsigned int a10)
{
  int v10; // ebx
  int v11; // eax
  int result; // eax
  struct tagRECT *v13; // [esp+0h] [ebp-1Ch]
  unsigned int v14; // [esp+4h] [ebp-18h]
  int v15; // [esp+Ch] [ebp-10h] BYREF
  int v16; // [esp+10h] [ebp-Ch]
  int v17; // [esp+14h] [ebp-8h]
  struct tagWND *v18; // [esp+18h] [ebp-4h]

  v15 = 0;
  v16 = 0;
  v17 = a2;
  v18 = (struct tagWND *)a1;
  v10 = (unsigned __int16)TouchTargetingRankForRect(
                            *(struct tagPOINT **)(a1 + 24),
                            (int)&v15,
                            (int)a4,
                            (char)a5,
                            (int)a6,
                            (int)a7,
                            (int)a8,
                            (char)a5,
                            (int)a6,
                            (int)a7,
                            (int)a8);
  if ( (unsigned __int16)v10 >= *(_WORD *)a3.top
    || (unsigned __int16)v10 >= 0xFFDu
    || !TTBetterTarget(v10, v17, v18, (int *)a3.left, a4, v13, v14) )
  {
    return 0;
  }
  *(_DWORD *)a3.bottom = a5;
  *(_WORD *)a3.top = v10;
  *(_DWORD *)a3.right = v15;
  v11 = v16;
  *(_DWORD *)(a3.bottom + 4) = a6;
  *(_DWORD *)(a3.right + 4) = v11;
  result = 1;
  *(_DWORD *)(a3.bottom + 8) = a7;
  *(_DWORD *)(a3.bottom + 12) = a8;
  return result;
}
