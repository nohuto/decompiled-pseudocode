/*
 * XREFs of _xxxHandleHealthyThread@4 @ 0x1707E9
 * Callers:
 *     _xxxSleepThread2@20 @ 0x4510E (_xxxSleepThread2@20.c)
 *     _xxxUpdateInputHangInfo@8 @ 0x6C0FA (_xxxUpdateInputHangInfo@8.c)
 * Callees:
 *     _IsWindowGhosted@4 @ 0x72B34 (_IsWindowGhosted@4.c)
 *     _xxxHandleHealthyWindow@4 @ 0x170876 (_xxxHandleHealthyWindow@4.c)
 */

int __stdcall xxxHandleHealthyThread(int a1)
{
  int v2; // edi
  int v3; // ecx
  int v4; // ebx
  _DWORD *v5; // eax
  int v6; // eax
  _DWORD *v8; // [esp+Ch] [ebp-8h]
  int v9; // [esp+10h] [ebp-4h]
  unsigned int v10; // [esp+1Ch] [ebp+8h]

  v2 = 0;
  while ( 1 )
  {
    v6 = *(_DWORD *)(a1 + 264);
    if ( v6 >= 0 )
      break;
    v3 = 0;
    *(_DWORD *)(a1 + 264) = v6 & 0x7FFFFFFF;
    v4 = 0;
    v10 = 0;
    v9 = 0;
    do
    {
      if ( *(_BYTE *)(_gSharedInfo[1] + v4 + 12) == 1 )
      {
        v5 = *(_DWORD **)(v3 + _gpKernelHandleTable);
        v8 = v5;
        if ( v5[2] == a1 && IsWindowGhosted(v5) && xxxHandleHealthyWindow(v8) )
          v2 = 1;
      }
      v4 += 16;
      ++v10;
      v9 += 12;
      v3 = v9;
    }
    while ( v10 <= _giheLast );
  }
  return v2;
}
