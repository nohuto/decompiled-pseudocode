/*
 * XREFs of _DWP_SetHotKey@8 @ 0x730DE
 * Callers:
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 * Callees:
 *     ?HotKeyHelper@@YGPAPAUtagHOTKEYSTRUCT@@PAUtagWND@@@Z @ 0x73144 (-HotKeyHelper@@YGPAPAUtagHOTKEYSTRUCT@@PAUtagWND@@@Z.c)
 *     _HotKeyToWindow@4 @ 0x1A2512 (_HotKeyToWindow@4.c)
 */

int __fastcall DWP_SetHotKey(int a1, int a2)
{
  struct tagHOTKEYSTRUCT **v4; // ecx
  struct tagHOTKEYSTRUCT *v5; // esi
  int v7; // eax
  struct tagHOTKEYSTRUCT *v8; // eax
  int v9; // edx
  int v10; // ecx
  struct tagHOTKEYSTRUCT *v11; // esi
  struct tagWND *v12; // [esp+0h] [ebp-14h]
  struct tagHOTKEYSTRUCT **v13; // [esp+Ch] [ebp-8h]
  BOOL v14; // [esp+10h] [ebp-4h]

  v14 = 0;
  if ( (_BYTE)a2 == 27 || (_BYTE)a2 == 32 || (_BYTE)a2 == 9 || (_BYTE)a2 == 0xE7 )
    return -1;
  if ( (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 23) & 0x40) != 0 )
    return 0;
  if ( a2 )
  {
    v7 = HotKeyToWindow(a2);
    if ( v7 )
      v14 = v7 != a1;
  }
  v4 = HotKeyHelper(v12);
  v13 = v4;
  v5 = *v4;
  if ( *v4 )
  {
    if ( a2 )
    {
      *((_DWORD *)v5 + 1) = a2;
    }
    else
    {
      *v4 = (struct tagHOTKEYSTRUCT *)*((_DWORD *)v5 + 2);
      HMAssignmentUnlock(v5);
      Win32FreePool(v5);
      --gcHotKey;
    }
    return v14 + 1;
  }
  if ( !a2 )
    return 1;
  v8 = (struct tagHOTKEYSTRUCT *)Win32AllocPool(12, 1802007381);
  v11 = v8;
  if ( !v8 )
    return 0;
  *((_DWORD *)v8 + 2) = 0;
  *(_DWORD *)v8 = 0;
  *((_DWORD *)v8 + 1) = a2;
  HMAssignmentLock(v10, v9);
  ++gcHotKey;
  *v13 = v11;
  return v14 + 1;
}
