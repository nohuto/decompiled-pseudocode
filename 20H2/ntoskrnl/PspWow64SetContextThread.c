/*
 * XREFs of PspWow64SetContextThread @ 0x1406C79EC
 * Callers:
 *     NtSetInformationThread @ 0x14060E970 (NtSetInformationThread.c)
 *     WbSetWowTrapFrame @ 0x14096635C (WbSetWowTrapFrame.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x1402E6530 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1402E65B0 (RtlInitializeExtendedContext.c)
 *     PsGetThreadTeb @ 0x1402E8950 (PsGetThreadTeb.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140405E30 (_alloca_probe.c)
 *     memset @ 0x140411300 (memset.c)
 *     PspSetContextThreadInternal @ 0x140693770 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140693928 (PspGetContextThreadInternal.c)
 *     RtlCopyContext @ 0x140693BBC (RtlCopyContext.c)
 *     RtlpReadExtendedContext @ 0x140693CD0 (RtlpReadExtendedContext.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140695814 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     RtlpWow64SanitizeContextFlags @ 0x140695B90 (RtlpWow64SanitizeContextFlags.c)
 *     EtwTiLogSetContextThread @ 0x1406C7D98 (EtwTiLogSetContextThread.c)
 *     RtlpWow64SetContextOnAmd64 @ 0x1406C7E44 (RtlpWow64SetContextOnAmd64.c)
 *     RtlGuardIsValidWow64StackPointer @ 0x1406C8178 (RtlGuardIsValidWow64StackPointer.c)
 */

int __fastcall PspWow64SetContextThread(PETHREAD Thread, ULONG *a2, int a3, char a4)
{
  struct _KTHREAD *CurrentThread; // r14
  _KPROCESS *Process; // r12
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  int result; // eax
  bool v13; // zf
  ULONG v14; // edi
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  void *v17; // rsp
  void *v18; // rsp
  ULONG *v19; // r15
  __int64 v20; // rcx
  __int64 ThreadTeb; // rax
  char v22; // r12
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  void *v25; // rsp
  void *v26; // rsp
  bool v27; // dl
  __int64 v28; // rcx
  int v29; // ebx
  PCONTEXT_EX v30; // r8
  int v31; // ecx
  int v32; // [rsp+20h] [rbp-30h]
  int v33; // [rsp+20h] [rbp-30h]
  int v34[2]; // [rsp+20h] [rbp-30h]
  int v35; // [rsp+28h] [rbp-28h]
  int v36; // [rsp+28h] [rbp-28h]
  __int16 v37; // [rsp+50h] [rbp+0h] BYREF
  char v38; // [rsp+52h] [rbp+2h]
  ULONG v39; // [rsp+54h] [rbp+4h] BYREF
  ULONG ContextLength; // [rsp+58h] [rbp+8h] BYREF
  _DWORD v41[3]; // [rsp+5Ch] [rbp+Ch] BYREF
  PCONTEXT_EX v42; // [rsp+68h] [rbp+18h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+70h] [rbp+20h]
  _DWORD v44[180]; // [rsp+80h] [rbp+30h] BYREF

  v38 = a4;
  v42 = 0LL;
  memset(v44, 0, 0x2CCuLL);
  ContextLength = 0;
  v37 = 0;
  memset(v41, 0, sizeof(v41));
  if ( a3 != 716 )
    return -1073741820;
  CurrentThread = KeGetCurrentThread();
  Process = Thread->Process;
  BugCheckParameter1 = (ULONG_PTR)Process;
  v10 = Process[1].AffinityPadding[10];
  if ( !v10 || *(_WORD *)(v10 + 8) != 332 )
    return -1073741811;
  if ( a4 )
  {
    v11 = (__int64)a2;
    if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    v39 = *(_DWORD *)v11;
  }
  else
  {
    v39 = *a2;
  }
  result = RtlpWow64SanitizeContextFlags((int *)&v39, a4);
  if ( result >= 0 )
  {
    v13 = a4 == 0;
    v14 = v39;
    if ( v13 )
    {
      v19 = a2;
      *(_QWORD *)&v41[1] = a2 + 179;
      goto LABEL_15;
    }
    result = RtlGetExtendedContextLength(v39, &ContextLength);
    if ( result >= 0 )
    {
      v15 = ContextLength + 15LL;
      if ( v15 <= ContextLength )
        v15 = 0xFFFFFFFFFFFFFF0LL;
      v16 = v15 & 0xFFFFFFFFFFFFFFF0uLL;
      v17 = alloca(v16);
      v18 = alloca(v16);
      v19 = (ULONG *)&v37;
      result = RtlInitializeExtendedContext((PCONTEXT)&v37, v14, (PCONTEXT_EX *)&v41[1]);
      if ( result >= 0 )
      {
        result = RtlpReadExtendedContext(v20, 1u, *(__int64 *)&v41[1], v14, (__int64)a2, 0LL);
        if ( result >= 0 )
        {
LABEL_15:
          if ( Thread != CurrentThread
            || (*(_DWORD *)&Process->0 & 0x20) == 0
            || (*v19 & 0x10001) != 0x10001
            || (ThreadTeb = PsGetThreadTeb((__int64)Thread),
                (unsigned int)RtlGuardIsValidWow64StackPointer(v19[49], ThreadTeb)) )
          {
            result = PspWow64ReadOrWriteThreadCpuArea(
                       Process,
                       (__int64)Thread,
                       1,
                       (__int64)v44,
                       v32,
                       v35,
                       v41,
                       (bool *)&v37);
            if ( result >= 0 )
            {
              v22 = v37;
              if ( (_BYTE)v37 && (v14 & 0x10040) == 0x10040 )
              {
                return -1073741637;
              }
              else
              {
                result = RtlGetExtendedContextLength(0x10001Fu, &ContextLength);
                if ( result >= 0 )
                {
                  v23 = ContextLength + 15LL;
                  if ( v23 <= ContextLength )
                    v23 = 0xFFFFFFFFFFFFFF0LL;
                  v24 = v23 & 0xFFFFFFFFFFFFFFF0uLL;
                  v25 = alloca(v24);
                  v26 = alloca(v24);
                  result = RtlInitializeExtendedContext((PCONTEXT)&v37, 0x10001Fu, &v42);
                  if ( result >= 0 )
                  {
                    result = PspGetContextThreadInternal((__int64)Thread, (__int64)&v37, 0, 1, 1);
                    if ( result >= 0 )
                    {
                      result = v22
                             ? RtlCopyContext((PCONTEXT)v44, *v19, (PCONTEXT)v19)
                             : RtlpWow64SetContextOnAmd64(v44, &v37, v19, (char *)&v37 + 1);
                      if ( result >= 0 )
                      {
                        if ( LOWORD(v44[2]) != 35 )
                        {
                          v27 = 0;
                          if ( (v14 & 0x10040) != 0x10040 )
                            v27 = (v14 & 0x10002) != 65538 && (v14 & 0x10020) != 65568;
                          if ( !v27 )
                            v41[0] |= 1u;
                        }
                        result = PspWow64ReadOrWriteThreadCpuArea(
                                   (_KPROCESS *)BugCheckParameter1,
                                   (__int64)Thread,
                                   0,
                                   (__int64)v44,
                                   v33,
                                   v36,
                                   v41,
                                   0LL);
                        v29 = result;
                        if ( result >= 0 )
                        {
                          if ( HIBYTE(v37) )
                          {
                            if ( (v14 & 0x10040) == 0x10040 )
                            {
                              v44[0] |= 0x100040u;
                              v30 = v42;
                              v31 = v41[1];
                              v42->XState = *(CONTEXT_CHUNK *)(*(_QWORD *)&v41[1] + 16LL);
                              v30->XState.Offset += v31 - (_DWORD)v30;
                              v30->All.Length = v30->XState.Offset + v30->XState.Length - v30->All.Offset;
                            }
                            v29 = PspSetContextThreadInternal(Thread, (__int64)&v37, 0, 1, 1);
                          }
                          if ( v29 >= 0 )
                          {
                            if ( v38 )
                            {
                              LOBYTE(v28) = KeGetCurrentThread()->PreviousMode;
                              EtwTiLogSetContextThread(v28, Thread, v19, v39, *(_QWORD *)v34);
                            }
                          }
                          return v29;
                        }
                      }
                    }
                  }
                }
              }
            }
            return result;
          }
          return -1073741811;
        }
      }
    }
  }
  return result;
}
