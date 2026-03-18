/*
 * XREFs of ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C0078134
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C004ACA8 (IsToplevelWindowDesktopComposed.c)
 *     HMValidateHandleNoRip @ 0x1C0076550 (HMValidateHandleNoRip.c)
 *     xxxCreateWindowSmIcon @ 0x1C007A488 (xxxCreateWindowSmIcon.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C0093B5C (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     xxxRedrawTitle @ 0x1C00BF060 (xxxRedrawTitle.c)
 *     SendDwmIconChange @ 0x1C00C4E60 (SendDwmIconChange.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     xxxRecreateSmallIcons @ 0x1C0242F5C (xxxRecreateSmallIcons.c)
 */

HICON __fastcall xxxDWP_SetIcon(struct tagWND *a1, unsigned __int64 a2, HICON a3)
{
  __int64 v6; // rax
  HICON v7; // r15
  HICON v8; // rdi
  HICON v9; // rsi
  int v10; // r14d
  int v11; // r12d
  __int64 v12; // rax
  HICON v13; // rax

  if ( a2 > 3 )
  {
    UserSetLastError(87LL);
    return 0LL;
  }
  if ( a2 == 3 )
  {
    xxxRecreateSmallIcons((int)a1);
    return 0LL;
  }
  v6 = *((_QWORD *)a1 + 5);
  v7 = *(HICON *)(v6 + 272);
  v8 = *(HICON *)(v6 + 264);
  v9 = v8;
  if ( a2 )
    v9 = *(HICON *)(v6 + 272);
  if ( v9 != a3 )
  {
    v10 = 1;
    v11 = 0;
    v12 = HMValidateHandleNoRip((__int64)v8, 3);
    if ( v12 && (*(_DWORD *)(v12 + 80) & 0x80u) != 0 )
    {
      v11 = 1;
      _DestroyCursor((struct tagCURSOR *)v12, 0);
    }
    if ( a2 )
    {
      if ( v11 )
      {
        v8 = 0LL;
      }
      else if ( v8 )
      {
        v10 = 0;
      }
      v7 = a3;
    }
    else
    {
      v13 = 0LL;
      v8 = a3;
      if ( !v11 )
        v13 = v9;
      v9 = v13;
    }
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 272LL) = v7;
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 264LL) = v8;
    if ( v7 && !v8 )
      xxxCreateWindowSmIcon(a1, v7, 1LL);
    if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      SendDwmIconChange((int)a1);
    if ( v10 )
      xxxRedrawTitle(a1, 8204LL);
  }
  return v9;
}
