/*
 * XREFs of ?xxxQueryDropObject@@YGPAUtagCURSOR@@PAUtagWND@@PAUtagDROPSTRUCT@@@Z @ 0x1A61CC
 * Callers:
 *     ?xxxQueryDropObject@@YGPAUtagCURSOR@@PAUtagWND@@PAUtagDROPSTRUCT@@@Z @ 0x1A61CC (-xxxQueryDropObject@@YGPAUtagCURSOR@@PAUtagWND@@PAUtagDROPSTRUCT@@@Z.c)
 *     _xxxDragObject@20 @ 0x1A6347 (_xxxDragObject@20.c)
 * Callees:
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 *     __ScreenToClient@8 @ 0xC76AE (__ScreenToClient@8.c)
 *     __ChildWindowFromPointEx@16 @ 0x17BE7F (__ChildWindowFromPointEx@16.c)
 *     ?xxxQueryDropObject@@YGPAUtagCURSOR@@PAUtagWND@@PAUtagDROPSTRUCT@@@Z @ 0x1A61CC (-xxxQueryDropObject@@YGPAUtagCURSOR@@PAUtagWND@@PAUtagDROPSTRUCT@@@Z.c)
 *     __ClientToScreen@8 @ 0x1B7000 (__ClientToScreen@8.c)
 */

struct tagCURSOR *__fastcall xxxQueryDropObject(_DWORD *a1, int a2)
{
  int v2; // ebx
  int v4; // edi
  int v5; // edx
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  _DWORD *v9; // ecx
  _DWORD *v10; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  struct tagCURSOR *result; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // edx
  struct tagWND *v17; // [esp+0h] [ebp-30h]
  struct tagDROPSTRUCT *v18; // [esp+4h] [ebp-2Ch]
  int DropObject; // [esp+10h] [ebp-20h] BYREF
  int v20; // [esp+14h] [ebp-1Ch]
  unsigned int HighLimit; // [esp+18h] [ebp-18h]
  int v22; // [esp+1Ch] [ebp-14h] BYREF
  int v23; // [esp+20h] [ebp-10h]
  int v24; // [esp+24h] [ebp-Ch] BYREF
  _DWORD *v25; // [esp+28h] [ebp-8h]
  int v26; // [esp+2Ch] [ebp-4h]

  DropObject = 0;
  v2 = *(_DWORD *)(a2 + 20);
  v20 = a2;
  v24 = 0;
  v23 = v2;
  v25 = 0;
  v26 = 0;
  v4 = *(_DWORD *)(a2 + 16);
  v5 = a1[5];
  v22 = v4;
  if ( !PtInRect((_DWORD *)(v5 + 52), v4, v2) )
    return 0;
  if ( (*(_BYTE *)(v6 + 23) & 8) != 0 )
    return 0;
  v7 = *(_DWORD *)(v6 + 108);
  if ( v7 )
  {
    if ( !GrePtInRegion(v7, v4, v2) )
      return 0;
  }
  v8 = a1[5];
  HighLimit = *(_BYTE *)(v8 + 23) & 0x20;
  if ( !HighLimit && PtInRect((_DWORD *)(v8 + 68), v4, v2) )
  {
    _ScreenToClient((int)a1, &v22);
    v10 = _ChildWindowFromPointEx(v9, 3, v22, v23);
    _ClientToScreen(a1, &v22);
    if ( v10 )
    {
      if ( v10 != a1 )
      {
        CurrentThread = KeGetCurrentThread();
        ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
        v24 = *(_DWORD *)(ThreadWin32Thread + 228);
        *(_DWORD *)(ThreadWin32Thread + 228) = &v24;
        v25 = v10;
        HMLockObject(v10);
        DropObject = (int)xxxQueryDropObject(v17, v18);
        ThreadUnlock1();
        result = (struct tagCURSOR *)DropObject;
        if ( DropObject )
          return result;
      }
    }
    v2 = v23;
    v4 = v22;
  }
  _ScreenToClient((int)a1, (_DWORD *)(v20 + 16));
  v14 = v20;
  *(_DWORD *)(v20 + 4) = *a1;
  v15 = xxxSendTransformableMessageTimeout(
          (int)a1,
          0x22Bu,
          HighLimit,
          v14,
          2u,
          (struct tagDDECONV *)0xBB8,
          &DropObject,
          1u,
          0);
  result = v15 != 0 ? (struct tagCURSOR *)DropObject : 0;
  DropObject = (int)result;
  if ( !result )
    goto LABEL_15;
  if ( result != (struct tagCURSOR *)1 )
    result = (struct tagCURSOR *)HMValidateHandle((int)result, 3);
  if ( !result )
  {
LABEL_15:
    v16 = v20;
    *(_DWORD *)(v20 + 16) = v4;
    *(_DWORD *)(v16 + 20) = v2;
  }
  return result;
}
