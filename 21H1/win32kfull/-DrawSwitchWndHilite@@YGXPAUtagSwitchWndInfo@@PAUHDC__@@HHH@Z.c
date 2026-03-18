/*
 * XREFs of ?DrawSwitchWndHilite@@YGXPAUtagSwitchWndInfo@@PAUHDC__@@HHH@Z @ 0x15C04A
 * Callers:
 *     ?xxxMoveSwitchWndHilite@@YGPAUHWND__@@PAUtagWND@@PAUtagSwitchWndInfo@@H@Z @ 0x15C854 (-xxxMoveSwitchWndHilite@@YGPAUHWND__@@PAUtagWND@@PAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxPaintSwitchWindow@@YGXPAUtagWND@@@Z @ 0x15CD33 (-xxxPaintSwitchWindow@@YGXPAUtagWND@@@Z.c)
 * Callees:
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QBEPAU_LARGE_UNICODE_STRING@@AAU3@@Z @ 0x1D702 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QBEPAU_LARGE_UNICODE_STRING@@AAU3@@Z.c)
 *     _TextCopy@12 @ 0x1D7C6 (_TextCopy@12.c)
 *     _RtlInitLargeUnicodeString@8 @ 0x1DCA6 (_RtlInitLargeUnicodeString@8.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     _GreSelectFont@8 @ 0x5AA52 (_GreSelectFont@8.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _FillRect@12 @ 0x7226C (_FillRect@12.c)
 *     _GreSetTextColor@8 @ 0x90E92 (_GreSetTextColor@8.c)
 *     _GreSetBkColor@8 @ 0x90F50 (_GreSetBkColor@8.c)
 *     _GetProcessDpiServerInfo@0 @ 0x91B9E (_GetProcessDpiServerInfo@0.c)
 *     _DrawFrame@16 @ 0xC2994 (_DrawFrame@16.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?SENDMSG_LPK@@YGHQAUtagTHREADINFO@@@Z @ 0x15C687 (-SENDMSG_LPK@@YGHQAUtagTHREADINFO@@@Z.c)
 *     _DrawTextExWorker@28 @ 0x1B8194 (_DrawTextExWorker@28.c)
 */

void __userpurge DrawSwitchWndHilite(
        HDC a1@<edx>,
        _DWORD *a2@<ecx>,
        struct tagSwitchWndInfo *a3,
        HDC a4,
        int a5,
        int a6,
        int a7)
{
  HDC DCEx; // ebx
  _DWORD *v8; // edi
  int v9; // esi
  int v10; // ecx
  int ProcessDpiServerInfo; // eax
  int v12; // eax
  unsigned int *v13; // ecx
  ULONG_PTR v14; // eax
  struct _LARGE_UNICODE_STRING *StrName; // eax
  int v16; // eax
  PKTHREAD CurrentThread; // eax
  int v18; // ecx
  PKTHREAD v19; // eax
  int ThreadWin32Thread; // eax
  ULONG_PTR v21; // esi
  HDC v22; // [esp-4h] [ebp-27Ch]
  ULONG_PTR v23; // [esp-4h] [ebp-27Ch]
  const RECT *v24; // [esp+0h] [ebp-278h]
  struct tagTHREADINFO *const v25; // [esp+0h] [ebp-278h]
  HBRUSH v26; // [esp+4h] [ebp-274h]
  int v27; // [esp+10h] [ebp-268h] BYREF
  ULONG_PTR v28; // [esp+14h] [ebp-264h]
  int v29; // [esp+18h] [ebp-260h]
  int v30; // [esp+1Ch] [ebp-25Ch]
  int v31; // [esp+20h] [ebp-258h]
  int v32; // [esp+24h] [ebp-254h]
  int v33; // [esp+28h] [ebp-250h]
  _DWORD *v34; // [esp+2Ch] [ebp-24Ch]
  ULONG_PTR BugCheckParameter2; // [esp+30h] [ebp-248h]
  int v36; // [esp+34h] [ebp-244h] BYREF
  int v37; // [esp+38h] [ebp-240h]
  int v38; // [esp+3Ch] [ebp-23Ch]
  int v39; // [esp+40h] [ebp-238h]
  int v40; // [esp+44h] [ebp-234h] BYREF
  int v41; // [esp+48h] [ebp-230h]
  int v42; // [esp+4Ch] [ebp-22Ch]
  int v43; // [esp+50h] [ebp-228h]
  int v44[7]; // [esp+54h] [ebp-224h] BYREF
  _WORD v45[258]; // [esp+70h] [ebp-208h] BYREF

  DCEx = a1;
  v8 = a2;
  v34 = a2;
  if ( a1 )
  {
    v33 = 0;
  }
  else
  {
    v33 = 1;
    DCEx = (HDC)_GetDCEx(gspwndAltTab, 0, 0x10000);
  }
  v9 = v8[24];
  v10 = v8[17] + (_DWORD)a4 * v9;
  v27 = v8[16] + (_DWORD)a3 * v9;
  v28 = v10;
  v29 = v27 + v9;
  v30 = v10 + v9;
  DrawFrame(DCEx, &v27, 2, a5 != 0 ? 104 : 120);
  if ( a5 )
  {
    v36 = 0;
    v39 = GreSetTextColor(DCEx, *(_DWORD *)(_gpsi + 4240));
    v38 = GreSetBkColor(DCEx, *(_DWORD *)(_gpsi + 4228));
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
      ProcessDpiServerInfo = GetProcessDpiServerInfo();
    else
      ProcessDpiServerInfo = Get96DpiServerInfo();
    v12 = GreSelectFont(DCEx, *(_DWORD *)(ProcessDpiServerInfo + 8));
    v13 = (unsigned int *)v8[4];
    v37 = v12;
    v14 = HMValidateHandleNoSecure(*v13, 1);
    BugCheckParameter2 = v14;
    if ( v14 )
    {
      if ( *(_DWORD *)(*(_DWORD *)(v14 + 20) + 116) )
      {
        v27 = 0;
        v28 = 0;
        v29 = 0;
        StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                    (tagWND::ProtectedLargeUnicodeStringWNDstrName *)(v14 + 100),
                    (struct _LARGE_UNICODE_STRING *)&v27);
        v16 = TextCopy((int)StrName, v45, 256);
        v8 = v34;
        v32 = v16;
      }
      else
      {
        v32 = 0;
        v45[0] = 0;
      }
      v40 = v8[18];
      v41 = v8[19];
      v22 = *(HDC *)(_gpsi + 4352);
      v42 = v8[20];
      v43 = v8[21];
      FillRect(v22, v24, v26);
      CurrentThread = KeGetCurrentThread();
      W32GetThreadWin32Thread(CurrentThread);
      if ( SENDMSG_LPK(v25) )
      {
        v29 = 0;
        memset(v44, 0, sizeof(v44));
        RtlInitLargeUnicodeString(&v44[4], v45);
        v44[0] = v40;
        v44[1] = v41;
        v44[2] = v42;
        v44[3] = v43;
        v19 = KeGetCurrentThread();
        ThreadWin32Thread = W32GetThreadWin32Thread(v19);
        v21 = BugCheckParameter2;
        v23 = BugCheckParameter2;
        v27 = *(_DWORD *)(ThreadWin32Thread + 228);
        *(_DWORD *)(ThreadWin32Thread + 228) = &v27;
        v28 = v21;
        HMLockObject(v23);
        xxxSendTransformableMessageTimeout(
          v21,
          0x8Cu,
          (unsigned int)DCEx,
          (int)v44,
          2u,
          (struct tagDDECONV *)0x64,
          &v36,
          1u,
          0);
        ThreadUnlock1();
      }
      else
      {
        v27 = 20;
        v28 = 0;
        v31 = 0;
        v29 = 0;
        v30 = 0;
        DrawTextExWorker(DCEx, v32, (int)&v40, 34848, (int)&v27, v18);
      }
    }
    GreSelectFont(DCEx, v37);
    GreSetBkColor(DCEx, v38);
    GreSetTextColor(DCEx, v39);
  }
  if ( v33 )
    _ReleaseDC(DCEx);
}
