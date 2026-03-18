/*
 * XREFs of NtUserGetPointerInputTransform @ 0x1C0131F10
 * Callers:
 *     <none>
 * Callees:
 *     EnterSharedCrit @ 0x1C004B1D0 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C019169C (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ApiSetGetMiPInputTransform @ 0x1C01C9198 (ApiSetGetMiPInputTransform.c)
 */

__int64 __fastcall NtUserGetPointerInputTransform(int a1, unsigned int a2, volatile void *a3)
{
  __int64 v4; // r14
  __int64 v6; // rdx
  struct tagTHREADINFO *v7; // r15
  int v8; // ebx
  __int64 v9; // rcx
  __int64 CurrentProcessWow64Process; // rax
  CTouchProcessor *v11; // rcx
  int MiPInputTransform; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9

  v4 = a2;
  v7 = EnterSharedCrit(0, 1);
  v8 = 0;
  if ( a1
    && !HIWORD(a1)
    && (v9 = (unsigned int)(v4 - 1), (unsigned int)v9 <= 0x63)
    && a3
    && (a1 != 1 || (_DWORD)v4 == 1) )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v9);
    ProbeForWrite(a3, v4 << 6, CurrentProcessWow64Process != 0 ? 1 : 4);
    if ( a1 == 1 )
      MiPInputTransform = ApiSetGetMiPInputTransform(v7, a3);
    else
      MiPInputTransform = CTouchProcessor::GetPointerTransform(v11, v7, a1, v4, (struct tagINPUT_TRANSFORM *)a3);
    v8 = MiPInputTransform;
  }
  else
  {
    UserSetLastError(87LL, v6);
  }
  UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  return v8;
}
