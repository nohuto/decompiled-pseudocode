/*
 * XREFs of ?xxxDoLocalTSFWork@@YGXKPAUtagWND@@JJKKPAUtagTHREADINFO@@K@Z @ 0x15572D
 * Callers:
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 * Callees:
 *     ?CreateAndPostTSFNotify@@YGXKPAUtagWND@@JJPAUtagTHREADINFO@@1K@Z @ 0x12096 (-CreateAndPostTSFNotify@@YGXKPAUtagWND@@JJPAUtagTHREADINFO@@1K@Z.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?CreateNotify@@YGPAUtagNOTIFY@@PAUtagEVENTHOOK@@KPAUtagWND@@JJPAUtagTHREADINFO@@KE@Z @ 0x9D858 (-CreateNotify@@YGPAUtagNOTIFY@@PAUtagEVENTHOOK@@KPAUtagWND@@JJPAUtagTHREADINFO@@KE@Z.c)
 *     ?xxxCallTSFNotifyHook@@YGXPAUtagNOTIFY@@@Z @ 0x1556EF (-xxxCallTSFNotifyHook@@YGXPAUtagNOTIFY@@@Z.c)
 */

void __userpurge xxxDoLocalTSFWork(
        struct tagEVENTHOOK *a1@<edx>,
        unsigned int a2@<ecx>,
        unsigned int a3,
        struct tagWND *a4,
        char a5,
        int a6,
        unsigned int a7,
        struct tagTHREADINFO *a8,
        struct tagTHREADINFO *a9,
        unsigned int a10)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  struct _KTHREAD **v13; // edi
  char v14; // cl
  int v15; // eax
  struct tagNOTIFY *Notify; // eax
  int v17; // eax
  struct _KTHREAD *v18; // [esp-4h] [ebp-44h]
  struct tagTHREADINFO *v19; // [esp+0h] [ebp-40h]
  unsigned int v20; // [esp+4h] [ebp-3Ch]
  _DWORD v21[12]; // [esp+Ch] [ebp-34h] BYREF
  unsigned int v22; // [esp+3Ch] [ebp-4h]
  char v23; // [esp+53h] [ebp+13h]

  v22 = a2;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v13 = (struct _KTHREAD **)ThreadWin32Thread;
  if ( v22 + 2147483646 > 3 || a7 == ThreadWin32Thread )
    v14 = a5;
  else
    v14 = a5 | 4;
  if ( (v14 & 4) != 0 && (v14 &= ~2u, (v14 & 4) != 0)
    || a7 != ThreadWin32Thread
    || !*(_DWORD *)(ThreadWin32Thread + 248)
    || (v23 = 0, (*(_DWORD *)(ThreadWin32Thread + 264) & 0x1000000C) != 0) )
  {
    v23 = 1;
  }
  v15 = a6 & *(_DWORD *)(*(_DWORD *)(a7 + 244) + 16);
  if ( (v15 & 0x1700) != 0 && v15 && (v15 & 0xFFFFE8FC) == 0 )
  {
    if ( (v14 & 2) != 0 )
    {
      Notify = CreateNotify(
                 v22,
                 0,
                 a1,
                 a3,
                 a4,
                 (PETHREAD *)a7,
                 (int)a8,
                 (struct tagTHREADINFO *)1,
                 (unsigned int)v19,
                 v20);
      if ( Notify )
        *((_DWORD *)Notify + 11) = a7;
    }
    else if ( v23 )
    {
      CreateAndPostTSFNotify(a1, a3, a4, a7, a7, a8, v19, v20);
    }
    else
    {
      v17 = 0;
      v21[4] = v22;
      memset(v21, 0, 12);
      v21[10] = 0;
      v21[11] = 0;
      v21[3] = 1;
      if ( a1 )
        v17 = *(_DWORD *)a1;
      v18 = *v13;
      v21[5] = v17;
      v21[6] = a3;
      v21[7] = a4;
      v21[8] = PsGetThreadId(v18);
      v21[9] = a8;
      xxxCallTSFNotifyHook(v21);
    }
  }
}
