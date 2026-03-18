/*
 * XREFs of ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01F1D44
 * Callers:
 *     xxxDiscardPointerFrameMessagesInternal @ 0x1C01F0ACC (xxxDiscardPointerFrameMessagesInternal.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0099E30 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00B328C (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEAUtagMSG@@@Z @ 0x1C01F14F4 (-DiscardPointerMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@P.c)
 */

__int64 __fastcall xxxDiscardPointerWindowFrameMessages(struct tagTHREADINFO *a1, unsigned __int64 a2)
{
  __int64 v3; // r13
  __int64 result; // rax
  __int64 v5; // rbx
  int v6; // esi
  unsigned __int64 v7; // rcx
  int v8; // r12d
  int v9; // r14d
  unsigned int v10; // esi
  __int64 v11; // r15
  __int64 v12; // r9
  int v13; // eax
  unsigned int v14; // edi
  __int64 ThreadWin32Thread; // rax
  HWND HwndReference; // [rsp+30h] [rbp-40h]
  __int64 v17; // [rsp+38h] [rbp-38h]
  __int128 v18; // [rsp+40h] [rbp-30h] BYREF
  __int64 v19; // [rsp+50h] [rbp-20h]
  _BYTE v20[24]; // [rsp+58h] [rbp-18h] BYREF
  unsigned __int16 v22; // [rsp+C0h] [rbp+50h] BYREF
  unsigned int v23; // [rsp+C8h] [rbp+58h] BYREF

  LODWORD(v3) = 0;
  v23 = 0;
  v22 = 0;
  HwndReference = CTouchProcessor::GetHwndReference(gpTouchProcessor, a2, &v22, &v23);
  result = ValidateHwnd(HwndReference);
  v17 = result;
  if ( result )
  {
    v5 = 0LL;
    if ( ((*((_BYTE *)a1 + 672) | *(_BYTE *)(**((_QWORD **)a1 + 57) + 16LL)) & 0x10) != 0 )
    {
      v6 = 1;
      v7 = 48LL * v23;
      if ( v7 <= 0xFFFFFFFF && (unsigned int)(v7 - 1) <= 0x270FFFE )
        v5 = Win32AllocPool((unsigned int)v7, 1735422805LL);
    }
    else
    {
      v6 = 0;
    }
    v8 = 0;
    v9 = v5 != 0 ? v6 : 0;
    v10 = 0;
    CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>((__int64)v20, *((_QWORD *)a1 + 53));
    v11 = *(_QWORD *)(*((_QWORD *)a1 + 53) + 24LL);
    if ( v11 )
    {
      do
      {
        v3 = *(_QWORD *)v11;
        if ( CTouchProcessor::IsPointerWindowFrameMessage(
               gpTouchProcessor,
               a2,
               HwndReference,
               *(_DWORD *)(v11 + 24),
               *(_QWORD *)(v11 + 40),
               1) )
        {
          v12 = 0LL;
          if ( v9 && v10 < v23 )
            v12 = v5 + 48LL * v10;
          v13 = DiscardPointerMessage((__int64)a1, v11, v17, v12);
          if ( v9 && v13 == 1 )
            ++v10;
          ++v8;
        }
        v11 = v3;
      }
      while ( v3 );
      if ( v8 )
        CTouchProcessor::UpdateThreadPointerList(gpTouchProcessor, (struct tagTHREADINFO *)((char *)a1 + 1080), v22);
    }
    if ( v9 )
    {
      v19 = 0LL;
      v18 = 0LL;
      PushW32ThreadLock(v5, &v18, (__int64)Win32FreePool);
      v14 = v3;
      if ( v10 )
      {
        do
        {
          if ( v14 >= v23 )
            break;
          xxxCallHook(0, 1uLL, v5 + 48LL * v14++, 3);
        }
        while ( v14 < v10 );
      }
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)(ThreadWin32Thread + 16) = v18;
    }
    if ( v5 )
      Win32FreePool(v5);
    return 1LL;
  }
  return result;
}
