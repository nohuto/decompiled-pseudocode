/*
 * XREFs of ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1C02431FC
 * Callers:
 *     NtUserSetWindowShowState @ 0x1C0203DC0 (NtUserSetWindowShowState.c)
 * Callees:
 *     _GetProp @ 0x1C0022FD8 (_GetProp.c)
 *     CkptRestore @ 0x1C00256D4 (CkptRestore.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00B029C (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C023E508 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 */

bool __fastcall xxxSetWindowShowState(struct tagWND *this, unsigned __int8 a2, struct tagRECT *a3)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  BOOL v7; // eax
  struct tagWND *v8; // rdx
  unsigned int v9; // r8d
  struct tagRECT *Prop; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  char v14; // [rsp+50h] [rbp+8h] BYREF

  v4 = a2;
  v5 = *((_QWORD *)this + 5);
  v7 = (*(_BYTE *)(v5 + 31) & 0x20) != 0 || (*(_BYTE *)(v5 + 233) & 3) != 0;
  if ( (a2 == 16 || a2 == 18 || a2 == 20) && !v7 )
    goto LABEL_9;
  if ( a3 )
  {
    Prop = (struct tagRECT *)GetProp((__int64)this, WORD2(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink), 1LL);
    if ( Prop )
    {
      *Prop = *a3;
    }
    else if ( !CkptRestore((__int64)this, a3) )
    {
      UserSetLastError(8LL, v12, v13);
      return 0;
    }
  }
  if ( ((_BYTE)v4 == 15 || (_BYTE)v4 == 17 || (_BYTE)v4 == 19) && (*(_BYTE *)(*((_QWORD *)this + 5) + 31LL) & 1) != 0 )
  {
LABEL_9:
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v14);
    LOBYTE(v8) = 1;
    NotifyShell::TrackedWindowPosChanged(this, v8, v9);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v14);
    return 1;
  }
  return (unsigned int)PostEventMessageEx(
                         *((struct tagTHREADINFO **)this + 2),
                         *(struct tagQ **)(*((_QWORD *)this + 2) + 424LL),
                         1u,
                         this,
                         1u,
                         a3 != 0LL ? 4 : 0,
                         v4 | gdwPUDFlags & 0x10000,
                         0LL) != 0;
}
