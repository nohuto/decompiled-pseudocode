/*
 * XREFs of ForwardTouchMessage @ 0x1C01DCBBC
 * Callers:
 *     NtUserPostMessage @ 0x1C0093530 (NtUserPostMessage.c)
 *     NtUserfnTOUCH @ 0x1C0207670 (NtUserfnTOUCH.c)
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     ?CreateValidTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IIQEAUtagTOUCHINPUT@@@Z @ 0x1C01DBCC8 (-CreateValidTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IIQEAUtagTOUCHINPUT@@@Z.c)
 *     _FreeTouchInputInfo @ 0x1C01DD0A0 (_FreeTouchInputInfo.c)
 *     _PostMessageCheckIL @ 0x1C01E2D08 (_PostMessageCheckIL.c)
 */

__int64 __fastcall ForwardTouchMessage(
        struct tagTHREADINFO *a1,
        struct tagWND *a2,
        __int64 a3,
        unsigned __int64 a4,
        volatile void *Address,
        int a6,
        __int64 a7,
        unsigned int a8,
        _QWORD *a9)
{
  unsigned int v10; // r15d
  __int64 CurrentProcessWow64Process; // rax
  __int64 v14; // rdx
  struct HTOUCHINPUT__ *ValidTouchInputInfo; // rax
  struct HTOUCHINPUT__ *v16; // rsi
  unsigned int v17; // edi
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // ebx

  v10 = a3;
  if ( (unsigned __int64)a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL || !Address || a4 - 1 > 0xFFFFFFFE )
  {
    UserSetLastError(87LL, (__int64)a2, a3);
    return 0LL;
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(4294967294LL);
  ProbeForRead(Address, 48LL * (unsigned int)a4, CurrentProcessWow64Process != 0 ? 1 : 4);
  ValidTouchInputInfo = CreateValidTouchInputInfo(a1, v14, a4, (struct tagTOUCHINPUT *const)Address);
  v16 = ValidTouchInputInfo;
  if ( !ValidTouchInputInfo )
    return 0LL;
  if ( a6 )
  {
    v17 = PostMessageCheckIL(a2, v10, a4, (__int64)ValidTouchInputInfo);
    v20 = a8;
  }
  else
  {
    v20 = a8;
    *a9 = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, unsigned __int64, struct HTOUCHINPUT__ *, __int64))mpFnidPfn[((_BYTE)a8 + 6) & 0x1F])(
            a2,
            v10,
            a4,
            ValidTouchInputInfo,
            a7);
    v17 = 1;
  }
  if ( !v17 || v20 >= 0x2AB && (v20 <= 0x2AC || v20 == 692) )
    FreeTouchInputInfo(v16, 1LL, v18, v19);
  return v17;
}
