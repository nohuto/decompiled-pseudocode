/*
 * XREFs of _xxxHandleWindowPosChanged@8 @ 0xAB7B6
 * Callers:
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 * Callees:
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     _xxxSendSizeMessage@8 @ 0xB2C46 (_xxxSendSizeMessage@8.c)
 */

int __fastcall xxxHandleWindowPosChanged(_DWORD *BugCheckParameter2, int a2)
{
  int v3; // eax
  int result; // eax
  int v5; // eax
  int v6; // edi
  int v7; // ebx
  int v8; // eax
  char v9; // al
  unsigned int v10; // edx
  int v11; // [esp+10h] [ebp-8h]

  v3 = *(_DWORD *)(a2 + 24);
  if ( (v3 & 0x1000) == 0 )
  {
    v5 = BugCheckParameter2[5];
    v6 = *(_DWORD *)(v5 + 68);
    v7 = *(_DWORD *)(v5 + 72);
    v11 = BugCheckParameter2[14];
    if ( v11 != _GetDesktopWindow(BugCheckParameter2) )
    {
      v8 = *(_DWORD *)(v11 + 20);
      v6 -= *(_DWORD *)(v8 + 68);
      v7 -= *(_DWORD *)(v8 + 72);
    }
    _InterlockedIncrement(&glSendMessage);
    xxxSendTransformableMessageTimeout(
      (int)BugCheckParameter2,
      3u,
      0,
      (unsigned __int16)v6 | ((unsigned __int16)v7 << 16),
      0,
      0,
      0,
      1u,
      0);
    v3 = *(_DWORD *)(a2 + 24);
  }
  result = v3 & 0x8800;
  if ( result != 2048 )
  {
    v9 = *(_BYTE *)(BugCheckParameter2[5] + 23);
    if ( (v9 & 0x20) != 0 )
    {
      v10 = 1;
    }
    else if ( (v9 & 1) != 0 )
    {
      v10 = 2;
    }
    else
    {
      v10 = 0;
    }
    return xxxSendSizeMessage((ULONG_PTR)BugCheckParameter2, v10);
  }
  return result;
}
