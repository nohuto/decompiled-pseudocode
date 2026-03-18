/*
 * XREFs of _InternalInvalidate3@12 @ 0x37E6A
 * Callers:
 *     _xxxEndPaint@8 @ 0x12580 (_xxxEndPaint@8.c)
 *     ?InternalInvalidate2@@YGHPAUtagWND@@PAUHRGN__@@1PAUtagRECT@@K@Z @ 0x36A50 (-InternalInvalidate2@@YGHPAUtagWND@@PAUHRGN__@@1PAUtagRECT@@K@Z.c)
 * Callees:
 *     _SetHungFlag@8 @ 0x17252 (_SetHungFlag@8.c)
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _IncPaintCount@4 @ 0x46034 (_IncPaintCount@4.c)
 *     _ClearHungFlag@8 @ 0x715BC (_ClearHungFlag@8.c)
 *     _CalcWindowRgn@12 @ 0x9B782 (_CalcWindowRgn@12.c)
 *     _DecPaintCount@4 @ 0xAA80E (_DecPaintCount@4.c)
 *     _IncPaintCountInterMoveSize@4 @ 0x19D871 (_IncPaintCountInterMoveSize@4.c)
 */

struct tagVWPL *__fastcall InternalInvalidate3(struct tagVWPL **a1, int a2, int a3)
{
  struct tagVWPL *result; // eax
  int v7; // eax
  struct tagVWPL **v8; // ecx
  unsigned int v9; // eax
  int v10; // eax
  struct tagVWPL *v11; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v14; // [esp+10h] [ebp-4h]
  BOOL v15; // [esp+1Ch] [ebp+8h]

  v14 = a3 & 1;
  if ( (a3 & 1) != 0 && a1 == (struct tagVWPL **)_GetDesktopWindow(a1) )
  {
    result = (struct tagVWPL *)IsWindowDesktopComposed(a1);
    if ( result )
      return result;
  }
  result = a1[5];
  v15 = *((_DWORD *)result + 23) || (*((_BYTE *)result + 9) & 0x10) != 0;
  if ( (a3 & 0x407) == 0 )
  {
    if ( (a3 & 0x838) == 0 || (*((_BYTE *)result + 9) & 0x20) != 0 && (a3 & 0x8000) == 0 )
      return result;
    if ( (a3 & 0x10) != 0 )
      result = (struct tagVWPL *)SetOrClrWF(0, (int)a1, 0x110u, 1);
    if ( (a3 & 8) == 0 )
      goto LABEL_54;
    if ( (a3 & 0x20) != 0 )
      SetOrClrWF(0, (int)a1, 0x102u, 1);
    if ( (a3 & 0x800) != 0 )
    {
      SetOrClrWF(0, (int)a1, 0x108u, 1);
      SetOrClrWF(0, (int)a1, 0x680u, 1);
    }
    if ( (a3 & 0x820) != 0 )
      ClearHungFlag(a1);
    result = a1[5];
    if ( !*((_DWORD *)result + 23) )
      goto LABEL_54;
    if ( (*((_BYTE *)result + 9) & 8) != 0 )
    {
      if ( a2 != 1 )
      {
LABEL_60:
        if ( *((_DWORD *)a1[5] + 23) == 1 )
        {
          *((_DWORD *)a1[5] + 23) = CreateEmptyRgnPublic();
          v9 = (unsigned int)a1[5];
          if ( !*(_DWORD *)(v9 + 92) )
            goto LABEL_24;
          LOBYTE(v9) = ~*(_BYTE *)(v9 + 9);
          if ( !CalcWindowRgn((v9 >> 3) & 1) )
            goto LABEL_24;
        }
        v10 = GreCombineRgn(*((_DWORD *)a1[5] + 23), *((_DWORD *)a1[5] + 23), a2, 4);
        if ( !v10 )
          goto LABEL_24;
        result = (struct tagVWPL *)(v10 - 1);
        if ( result )
        {
LABEL_54:
          if ( v15 )
          {
            result = a1[5];
            if ( !*((_DWORD *)result + 23) && (*((_BYTE *)result + 9) & 0x10) == 0 )
              return (struct tagVWPL *)DecPaintCount(a1);
          }
          return result;
        }
LABEL_65:
        DeleteMaybeSpecialRgn(*((_DWORD *)a1[5] + 23));
        *((_DWORD *)a1[5] + 23) = 0;
        SetOrClrWF(0, (int)a1, 0x102u, 1);
        result = (struct tagVWPL *)ClearHungFlag(a1);
        goto LABEL_54;
      }
      a2 = _ghrgnInv2;
      CalcWindowRgn(1);
    }
    if ( a2 == 1 )
      goto LABEL_65;
    goto LABEL_60;
  }
  if ( (a3 & 2) != 0 )
    result = (struct tagVWPL *)SetOrClrWF(1, (int)a1, 0x110u, 1);
  if ( v14 )
  {
    SetOrClrWF(0, (int)a1, 0x101u, 1);
    if ( a1[2] != (struct tagVWPL *)_gptiCurrent )
    {
      SetOrClrWF(1, (int)a1, 0x120u, 1);
      if ( (*((_BYTE *)a1[5] + 12) & 1) != 0 )
      {
        SetOrClrWF(1, (int)a1, 0x402u, 1);
        gRdwFlags |= a3;
      }
    }
    if ( a2 == 1 && (*((_BYTE *)a1[5] + 13) & 1) == 0 )
      SetOrClrWF(0, (int)a1, 0x102u, 1);
    if ( (a3 & 4) != 0 )
      SetOrClrWF(1, (int)a1, 0x102u, 1);
    if ( (a3 & 0x404) != 0 && (*((_BYTE *)a1[5] + 16) & 0x20) == 0 )
      SetHungFlag(a1, 776);
    if ( (a3 & 0x400) != 0 )
      SetOrClrWF(1, (int)a1, 0x108u, 1);
    result = (struct tagVWPL *)*((_DWORD *)a1[5] + 23);
    if ( result != (struct tagVWPL *)1 )
    {
      if ( a2 == 1 )
        goto LABEL_24;
      if ( result )
      {
        result = (struct tagVWPL *)GreCombineRgn(result, result, a2, 2);
        if ( result )
          goto LABEL_25;
        goto LABEL_24;
      }
      *((_DWORD *)a1[5] + 23) = CreateEmptyRgnPublic();
      v7 = *((_DWORD *)a1[5] + 23);
      if ( !v7 || (result = (struct tagVWPL *)GreCombineRgn(v7, a2, 0, 5)) == 0 )
      {
LABEL_24:
        DeleteMaybeSpecialRgn(*((_DWORD *)a1[5] + 23));
        result = a1[5];
        *((_DWORD *)result + 23) = 1;
      }
    }
  }
LABEL_25:
  if ( !v15 )
  {
    result = a1[5];
    if ( *((_DWORD *)result + 23) || (*((_BYTE *)result + 9) & 0x10) != 0 )
    {
      if ( ((unsigned int)&loc_20000 & a3) != 0 )
      {
        v11 = a1[2];
        CurrentThread = KeGetCurrentThread();
        ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
        v8 = a1;
        if ( v11 != (struct tagVWPL *)ThreadWin32Thread )
          return (struct tagVWPL *)IncPaintCountInterMoveSize(a1);
      }
      else
      {
        v8 = a1;
      }
      return (struct tagVWPL *)IncPaintCount(v8);
    }
  }
  return result;
}
