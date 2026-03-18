/*
 * XREFs of ?xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x1C00065E8
 * Callers:
 *     xxxWindowEvent @ 0x1C00CD660 (xxxWindowEvent.c)
 * Callees:
 *     ?xxxCallTSFNotifyHook@@YAXPEAUtagNOTIFY@@@Z @ 0x1C00068BC (-xxxCallTSFNotifyHook@@YAXPEAUtagNOTIFY@@@Z.c)
 *     ?CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z @ 0x1C0006A9C (-CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?CreateNotify@@YAPEAUtagNOTIFY@@PEAUtagEVENTHOOK@@KPEAUtagWND@@JJPEAUtagTHREADINFO@@KE@Z @ 0x1C00CB468 (-CreateNotify@@YAPEAUtagNOTIFY@@PEAUtagEVENTHOOK@@KPEAUtagWND@@JJPEAUtagTHREADINFO@@KE@Z.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

void __fastcall xxxDoLocalTSFWork(
        unsigned int a1,
        struct tagWND *a2,
        int a3,
        unsigned int a4,
        char a5,
        unsigned int a6,
        struct tagTHREADINFO *a7,
        unsigned int a8)
{
  __int64 ThreadWin32Thread; // rax
  struct _KTHREAD **v13; // rdi
  char v14; // cl
  char v15; // r8
  bool v16; // dl
  unsigned int v17; // ecx
  struct _KTHREAD *v18; // rcx
  struct tagNOTIFY *Notify; // rax
  _QWORD v20[10]; // [rsp+40h] [rbp-68h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v13 = (struct _KTHREAD **)ThreadWin32Thread;
  if ( a7 == (struct tagTHREADINFO *)ThreadWin32Thread || a1 + 2147483646 > 3 )
    v14 = a5;
  else
    v14 = a5 | 4;
  v15 = v14 & 0xFD;
  if ( (v14 & 4) == 0 )
    v15 = v14;
  v16 = (v15 & 4) != 0
     || a7 != (struct tagTHREADINFO *)ThreadWin32Thread
     || !*(_QWORD *)(ThreadWin32Thread + 456)
     || (*(_DWORD *)(ThreadWin32Thread + 488) & 0x1000000C) != 0;
  v17 = a6 & *(_DWORD *)(*((_QWORD *)a7 + 56) + 16LL);
  if ( (v17 & 0x1700) != 0 && v17 && (v17 & 0xFFFFE8FC) == 0 )
  {
    if ( (v15 & 2) != 0 )
    {
      Notify = CreateNotify(0LL, a1, a2, a3, a4, a7, a8, 1);
      if ( Notify )
        *((_QWORD *)Notify + 8) = a7;
    }
    else if ( v16 )
    {
      CreateAndPostTSFNotify(a1, a2, a3, a4, a7, a7, a8);
    }
    else
    {
      memset(v20, 0, 0x48uLL);
      HIDWORD(v20[3]) = a1;
      LODWORD(v20[3]) = 1;
      if ( a2 )
        v20[4] = *(_QWORD *)a2;
      else
        v20[4] = 0LL;
      v18 = *v13;
      v20[5] = __PAIR64__(a4, a3);
      LODWORD(v20[6]) = (unsigned int)PsGetThreadId(v18);
      HIDWORD(v20[6]) = a8;
      xxxCallTSFNotifyHook((struct tagNOTIFY *)v20);
    }
  }
}
