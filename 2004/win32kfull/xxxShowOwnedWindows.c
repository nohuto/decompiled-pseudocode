/*
 * XREFs of xxxShowOwnedWindows @ 0x1C005B430
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C005A998 (xxxMinMaximizeEx.c)
 *     ?xxxShowOwnedPopups@@YAHPEAUtagWND@@H@Z @ 0x1C0153D90 (-xxxShowOwnedPopups@@YAHPEAUtagWND@@H@Z.c)
 *     xxxMinimizeHungWindow @ 0x1C023FFD0 (xxxMinimizeHungWindow.c)
 * Callees:
 *     SetVisible @ 0x1C0020760 (SetVisible.c)
 *     BuildHwndList @ 0x1C006B520 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006CD90 (FreeHwndList.c)
 *     _GetDesktopWindow @ 0x1C006F290 (_GetDesktopWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     xxxSendMessage @ 0x1C009BB64 (xxxSendMessage.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxShowOwnedWindows(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 result; // rax
  __int64 DesktopWindow; // rax
  __int64 v8; // rdx
  __int64 v9; // r13
  __int64 v10; // r14
  _QWORD *v11; // r15
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 i; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 RectRgnIndirect; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int128 v23; // [rsp+20h] [rbp-48h] BYREF
  __int64 v24; // [rsp+30h] [rbp-38h]

  v3 = a2;
  v23 = 0LL;
  v24 = 0LL;
  result = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(result + 31) & 0xC0) != 0x40 )
  {
    DesktopWindow = GetDesktopWindow(a1);
    result = BuildHwndList(*(struct tagWND **)(DesktopWindow + 112));
    v9 = result;
    if ( result )
    {
      v10 = 4LL;
      if ( (_DWORD)v3 != 2 )
        v10 = 0LL;
      v11 = (_QWORD *)(result + 32);
      if ( (_DWORD)v3 == 4 )
        v10 = 3LL;
      while ( 1 )
      {
        if ( *v11 == 1LL )
          return FreeHwndList(v9);
        LOBYTE(v8) = 1;
        v12 = HMValidateHandleNoSecure(*v11, v8);
        v13 = v12;
        if ( v12 )
        {
          v8 = *(_QWORD *)(*(_QWORD *)(v12 + 136) + 8LL);
          if ( (*(_BYTE *)(v8 + 8) & 4) == 0 && v12 != a1 )
          {
            v14 = *(_QWORD *)(v12 + 120);
            if ( v14 )
            {
              for ( i = *(_QWORD *)(v14 + 40); (*(_BYTE *)(i + 31) & 0xC0) != 0; i = *(_QWORD *)(v16 + 40) )
              {
                if ( v14 == a1 )
                  break;
                if ( (*(_BYTE *)(i + 31) & 0xC0) == 0xC0 )
                  break;
                v16 = *(_QWORD *)(v14 + 120);
                if ( !v16 )
                  break;
                v14 = *(_QWORD *)(v14 + 120);
              }
            }
            if ( v10 )
            {
              if ( !v14 || v14 == a1 || (_DWORD)v3 == 4 && (*(_BYTE *)(*(_QWORD *)(v14 + 40) + 31LL) & 0x28) == 0x20 )
                goto LABEL_14;
            }
            else if ( v14 != a1 )
            {
              goto LABEL_14;
            }
            v17 = *(_QWORD *)(v13 + 40);
            if ( (unsigned int)v3 >= 3 )
            {
              if ( (*(_BYTE *)(v17 + 17) & 0x40) == 0 )
                goto LABEL_14;
            }
            else if ( (*(_BYTE *)(v17 + 31) & 0x10) == 0 )
            {
              goto LABEL_14;
            }
            if ( a3 )
            {
              RectRgnIndirect = GreCreateRectRgnIndirect(*(_QWORD *)(v13 + 40) + 88LL);
              GreCombineRgn(a3, a3, RectRgnIndirect, 2LL);
              GreDeleteObject(RectRgnIndirect);
              SetOrClrWF(1LL, v13, 320LL, 1LL);
              SetVisible((struct tagWND *)v13, 0);
            }
            else
            {
              ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
              *(_QWORD *)&v23 = *(_QWORD *)(ThreadWin32Thread + 408);
              *(_QWORD *)(ThreadWin32Thread + 408) = &v23;
              *((_QWORD *)&v23 + 1) = v13;
              HMLockObject(v13);
              xxxSendMessage(v13, 24LL, (unsigned int)v3 >= 3, v3);
              ThreadUnlock1(v21, v20, v22);
            }
          }
        }
LABEL_14:
        ++v11;
      }
    }
  }
  return result;
}
