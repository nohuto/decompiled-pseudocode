/*
 * XREFs of ?CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z @ 0x1C0006A9C
 * Callers:
 *     ?xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x1C00065E8 (-xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z.c)
 *     ?DoGlobalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x1C0122730 (-DoGlobalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00BE818 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?CreateNotify@@YAPEAUtagNOTIFY@@PEAUtagEVENTHOOK@@KPEAUtagWND@@JJPEAUtagTHREADINFO@@KE@Z @ 0x1C00CB468 (-CreateNotify@@YAPEAUtagNOTIFY@@PEAUtagEVENTHOOK@@KPEAUtagWND@@JJPEAUtagTHREADINFO@@KE@Z.c)
 */

void __fastcall CreateAndPostTSFNotify(
        unsigned int a1,
        struct tagWND *a2,
        int a3,
        int a4,
        struct tagTHREADINFO *a5,
        struct tagTHREADINFO *a6,
        unsigned int a7)
{
  struct tagTHREADINFO *v7; // rdi
  struct tagNOTIFY *Notify; // rbx
  __int64 v9; // rax
  struct tagNOTIFY **v10; // rcx
  bool v11; // zf

  v7 = a5;
  if ( *((_QWORD *)a5 + 54) )
  {
    if ( a5 != (struct tagTHREADINFO *)gptiRit )
    {
      Notify = CreateNotify(0LL, a1, a2, a3, a4, a6, a7, 1);
      if ( Notify )
      {
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&a5);
        *((_DWORD *)Notify + 14) |= 0xCu;
        if ( !(unsigned int)PostEventMessageEx(v7, *((struct tagQ **)v7 + 54), 0xCu, 0LL, 0, 0LL, (__int64)Notify, 0LL) )
        {
          v9 = *(_QWORD *)Notify;
          if ( *(struct tagNOTIFY **)(*(_QWORD *)Notify + 8LL) != Notify
            || (v10 = (struct tagNOTIFY **)*((_QWORD *)Notify + 1), *v10 != Notify) )
          {
            __fastfail(3u);
          }
          *v10 = (struct tagNOTIFY *)v9;
          *(_QWORD *)(v9 + 8) = v10;
          v11 = *((_DWORD *)Notify + 6) == 0;
          *((_QWORD *)Notify + 1) = Notify;
          *(_QWORD *)Notify = Notify;
          if ( v11 )
            HMAssignmentUnlock((char *)Notify + 16);
          if ( Notify == (struct tagNOTIFY *)&unk_1C033B400 )
            dword_1C0339AD0 = 0;
          else
            Win32FreePool(Notify);
        }
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&a5);
      }
    }
  }
}
