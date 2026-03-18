/*
 * XREFs of _xxxWindowHitTest2@20 @ 0x7D1C4
 * Callers:
 *     _xxxWindowHitTest@20 @ 0x7D14C (_xxxWindowHitTest@20.c)
 *     _xxxWindowFromPoint@8 @ 0x9ADAE (_xxxWindowFromPoint@8.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@@PAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x17B14E (-xxxWindowHitTestFromTargetingProperty@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTT.c)
 * Callees:
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x269F0 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     ?IsCompositionInputWindow@@YGHPBUtagWND@@@Z @ 0x6E522 (-IsCompositionInputWindow@@YGHPBUtagWND@@@Z.c)
 *     _xxxWindowHitTest@20 @ 0x7D14C (_xxxWindowHitTest@20.c)
 *     _LayerHitTest@12 @ 0x17B8DE (_LayerHitTest@12.c)
 *     _SizeBoxHwnd@4 @ 0x1B6D75 (_SizeBoxHwnd@4.c)
 */

int __fastcall xxxWindowHitTest2(int BugCheckParameter2, int *a2, int a3, int a4, int a5)
{
  int v5; // esi
  int v6; // eax
  int v7; // ecx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int result; // eax
  int v11; // ecx
  int *v12; // eax
  int v13; // edx
  int v14; // eax
  int v16; // [esp+10h] [ebp-10h]
  int v17; // [esp+10h] [ebp-10h]
  int v18; // [esp+14h] [ebp-Ch] BYREF
  int v19; // [esp+18h] [ebp-8h]
  int v20; // [esp+1Ch] [ebp-4h]

  v5 = BugCheckParameter2;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  if ( !BugCheckParameter2 || !IsCompositionInputWindow() && (*(_BYTE *)(*(_DWORD *)(v5 + 20) + 23) & 0x10) == 0 )
    return 0;
  if ( !IsCompositionInputWindow() && !PtInRect((_DWORD *)(*(_DWORD *)(v5 + 20) + 52), a4, a5) )
    return 0;
  v6 = *(_DWORD *)(*(_DWORD *)(v5 + 20) + 108);
  if ( v6 )
  {
    if ( !GrePtInRegion(v6, a4, a5) )
      return 0;
  }
  if ( (*(_BYTE *)(*(_DWORD *)(v5 + 20) + 18) & 8) != 0 && !LayerHitTest(a4, a5) )
    return 0;
  if ( CoreWindowProp::IsCompositeAppOrSelfDisabled((struct tagWND *)v5) && (a3 & 1) != 0 )
  {
    if ( (*(_BYTE *)(*(_DWORD *)(v5 + 20) + 23) & 0xC0) != 0x40 )
    {
      v11 = -2;
      goto LABEL_18;
    }
    return 0;
  }
  if ( IsCompositionInputWindow() )
    goto LABEL_16;
  v7 = *(_DWORD *)(v5 + 20);
  if ( (*(_BYTE *)(v7 + 23) & 0x20) != 0 || !PtInRect((_DWORD *)(v7 + 68), a4, a5) )
    goto LABEL_16;
  v16 = *(_DWORD *)(v5 + 60);
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v18 = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = &v18;
  v19 = v16;
  if ( v16 )
    HMLockObject(v16);
  v17 = xxxWindowHitTest(*(_DWORD *)(v5 + 60), a3, a4, a5);
  ThreadUnlock1();
  result = v17;
  if ( !v17 )
  {
LABEL_16:
    if ( IsCompositionInputWindow() || *(_DWORD *)(v5 + 8) != _gptiCurrent )
    {
      v11 = 1;
    }
    else
    {
      _InterlockedIncrement(&glSendMessage);
      v11 = xxxSendTransformableMessageTimeout(
              v5,
              0x84u,
              0,
              (unsigned __int16)a4 | ((unsigned __int16)a5 << 16),
              0,
              0,
              0,
              1u,
              0);
      if ( v11 == -1 )
        return 0;
    }
LABEL_18:
    v12 = a2;
    if ( a2 )
      *a2 = v11;
    v13 = *(_DWORD *)(v5 + 20);
    LOBYTE(v12) = ~*(_BYTE *)(v13 + 18);
    if ( v11 == (((unsigned int)v12 >> 6) & 1 | 0x10) && (*(_BYTE *)(v13 + 22) & 4) == 0 )
    {
      v14 = SizeBoxHwnd(v5);
      if ( v14 )
        v5 = v14;
    }
    return *(_DWORD *)v5;
  }
  return result;
}
