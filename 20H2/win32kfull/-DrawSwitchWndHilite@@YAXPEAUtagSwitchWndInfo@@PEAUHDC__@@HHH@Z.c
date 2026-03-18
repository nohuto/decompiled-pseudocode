/*
 * XREFs of ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01F2600
 * Callers:
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01F2F40 (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F3568 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     GetDPIServerInfo @ 0x1C00332F0 (GetDPIServerInfo.c)
 *     GreSelectFont @ 0x1C00372A0 (GreSelectFont.c)
 *     FillRect @ 0x1C0037B08 (FillRect.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0053BA0 (xxxSendTransformableMessageTimeout.c)
 *     GreSetTextColor @ 0x1C0092300 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0092394 (GreSetBkColor.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     RtlInitLargeUnicodeString @ 0x1C00BC9CC (RtlInitLargeUnicodeString.c)
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x1C00F1438 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     TextCopy @ 0x1C00F155C (TextCopy.c)
 *     DrawFrame @ 0x1C014F4A8 (DrawFrame.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     DrawTextExWorker @ 0x1C025E650 (DrawTextExWorker.c)
 */

void __fastcall DrawSwitchWndHilite(struct tagSwitchWndInfo *a1, HDC a2, int a3, int a4, int a5)
{
  HDC DCEx; // rdi
  int v9; // r14d
  int v10; // r8d
  int v11; // ecx
  int v12; // r15d
  int v13; // r12d
  int v14; // r13d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  unsigned __int64 *v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // rbx
  struct _LARGE_UNICODE_STRING *StrName; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A0h] BYREF
  int v31; // [rsp+68h] [rbp-98h]
  __int64 v32; // [rsp+6Ch] [rbp-94h]
  unsigned __int64 LowLimit[2]; // [rsp+78h] [rbp-88h] BYREF
  RECT v34; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v35[3]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v36; // [rsp+B0h] [rbp-50h] BYREF
  int v37[4]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v38; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int16 v39[256]; // [rsp+E0h] [rbp-20h] BYREF

  DCEx = a2;
  if ( a2 )
  {
    v9 = 0;
  }
  else
  {
    v9 = 1;
    DCEx = (HDC)_GetDCEx(gspwndAltTab, 0LL, 0x10000LL);
  }
  v10 = *((_DWORD *)a1 + 29);
  v11 = v10 * a4 + *((_DWORD *)a1 + 22);
  v29[0] = v10 * a3 + *((_DWORD *)a1 + 21);
  v29[1] = v11;
  v29[2] = v29[0] + v10;
  v29[3] = v11 + v10;
  DrawFrame(DCEx, v29, 2, a5 != 0 ? 104 : 120);
  v12 = 0;
  if ( a5 )
  {
    LowLimit[0] = 0LL;
    v13 = GreSetTextColor(DCEx, *(_DWORD *)(gpsi + 4640LL));
    v14 = GreSetBkColor(DCEx, *(_DWORD *)(gpsi + 4628LL));
    GetDPIServerInfo(v16, v15, v17, v18);
    v19 = GreSelectFont(DCEx);
    v20 = (unsigned __int64 *)*((_QWORD *)a1 + 4);
    LowLimit[1] = v19;
    v21 = HMValidateHandleNoSecure(*v20, 1);
    v22 = v21;
    if ( v21 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v21 + 40) + 184LL) )
      {
        v36 = 0LL;
        StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                    (tagWND::ProtectedLargeUnicodeStringWNDstrName *)(v21 + 184),
                    (struct _LARGE_UNICODE_STRING *)&v36);
        v12 = TextCopy((__int64)StrName, (char *)v39, 0x100u);
      }
      else
      {
        v39[0] = 0;
      }
      v34 = *(RECT *)((char *)a1 + 92);
      FillRect(DCEx, &v34, *(HBRUSH *)(gpsi + 4816LL));
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      if ( (*(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 424) + 760LL) & 0xF) == 0
        || (*(_DWORD *)(ThreadWin32Thread + 488) & 1) != 0 )
      {
        v30 = 20LL;
        v32 = 0LL;
        v31 = 0;
        DrawTextExWorker(DCEx, v39, v12, &v34, 0x8820u, (struct tagDRAWTEXTPARAMS *)&v30);
      }
      else
      {
        v35[2] = 0LL;
        *(_OWORD *)v37 = 0LL;
        v38 = 0LL;
        RtlInitLargeUnicodeString((__int64)&v38, (__int64)v39);
        *(RECT *)v37 = v34;
        v25 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v35[0] = *(_QWORD *)(v25 + 416);
        *(_QWORD *)(v25 + 416) = v35;
        v35[1] = v22;
        HMLockObject(v22);
        xxxSendTransformableMessageTimeout(
          v22,
          0x8Cu,
          (unsigned __int64)DCEx,
          (struct _LARGE_STRING *)v37,
          2u,
          0x64u,
          (__int64 *)LowLimit,
          1,
          0);
        ThreadUnlock1(v27, v26, v28);
      }
    }
    GreSelectFont(DCEx);
    GreSetBkColor(DCEx, v14);
    GreSetTextColor(DCEx, v13);
  }
  if ( v9 )
    _ReleaseDC(DCEx);
}
