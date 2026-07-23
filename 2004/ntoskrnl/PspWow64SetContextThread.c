/*
 * XREFs of PspWow64SetContextThread @ 0x1406E572C
 * Callers:
 *     NtSetInformationThread @ 0x140673B60 (NtSetInformationThread.c)
 *     WbSetWowTrapFrame @ 0x14096058C (WbSetWowTrapFrame.c)
 * Callees:
 *     RtlInitializeExtendedContext @ 0x1402E9C90 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x1402EA9B0 (RtlGetExtendedContextLength.c)
 *     PsGetThreadTeb @ 0x14033F520 (PsGetThreadTeb.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1403FFB60 (_alloca_probe.c)
 *     memset @ 0x14040A280 (memset.c)
 *     PspGetContextThreadInternal @ 0x1406AD5A8 (PspGetContextThreadInternal.c)
 *     RtlCopyContext @ 0x1406AD83C (RtlCopyContext.c)
 *     RtlpReadExtendedContext @ 0x1406AD950 (RtlpReadExtendedContext.c)
 *     PspSetContextThreadInternal @ 0x1406ADEB0 (PspSetContextThreadInternal.c)
 *     RtlpWow64SanitizeContextFlags @ 0x1406E621C (RtlpWow64SanitizeContextFlags.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1406E6274 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     EtwTiLogSetContextThread @ 0x1406E66C4 (EtwTiLogSetContextThread.c)
 *     RtlpWow64SetContextOnAmd64 @ 0x1406E6770 (RtlpWow64SetContextOnAmd64.c)
 *     RtlGuardIsValidWow64StackPointer @ 0x1406E6AA4 (RtlGuardIsValidWow64StackPointer.c)
 */

int __fastcall PspWow64SetContextThread(PETHREAD Thread, ULONG *a2, int a3, char a4)
{
  __int64 v8; // rdx
  struct _KTHREAD *CurrentThread; // r14
  _KPROCESS *Process; // r12
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  int result; // eax
  bool v14; // zf
  ULONG v15; // edi
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  void *v18; // rsp
  void *v19; // rsp
  ULONG *v20; // r15
  __int64 v21; // rcx
  __int64 ThreadTeb; // rax
  char v23; // r12
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  void *v26; // rsp
  void *v27; // rsp
  bool v28; // dl
  __int64 v29; // rcx
  int v30; // ebx
  PCONTEXT_EX v31; // r8
  int v32; // ecx
  int v33; // [rsp+20h] [rbp-30h]
  int v34; // [rsp+20h] [rbp-30h]
  int v35[2]; // [rsp+20h] [rbp-30h]
  int v36; // [rsp+28h] [rbp-28h]
  int v37; // [rsp+28h] [rbp-28h]
  __int16 v38; // [rsp+50h] [rbp+0h] BYREF
  char v39; // [rsp+52h] [rbp+2h]
  ULONG v40; // [rsp+54h] [rbp+4h] BYREF
  ULONG ContextLength; // [rsp+58h] [rbp+8h] BYREF
  _DWORD v42[3]; // [rsp+5Ch] [rbp+Ch] BYREF
  PCONTEXT_EX v43; // [rsp+68h] [rbp+18h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+70h] [rbp+20h]
  _DWORD v45[180]; // [rsp+80h] [rbp+30h] BYREF

  v39 = a4;
  v43 = 0LL;
  memset(v45, 0, 0x2CCuLL);
  ContextLength = 0;
  v38 = 0;
  memset(v42, 0, sizeof(v42));
  if ( a3 != 716 )
    return -1073741820;
  CurrentThread = KeGetCurrentThread();
  Process = Thread->Process;
  BugCheckParameter1 = (ULONG_PTR)Process;
  v11 = Process[1].AffinityPadding[10];
  if ( !v11 || *(_WORD *)(v11 + 8) != 332 )
    return -1073741811;
  if ( a4 )
  {
    v12 = (__int64)a2;
    if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
      v12 = 0x7FFFFFFF0000LL;
    v40 = *(_DWORD *)v12;
  }
  else
  {
    v40 = *a2;
  }
  LOBYTE(v8) = a4;
  result = RtlpWow64SanitizeContextFlags(&v40, v8);
  if ( result >= 0 )
  {
    v14 = a4 == 0;
    v15 = v40;
    if ( v14 )
    {
      v20 = a2;
      *(_QWORD *)&v42[1] = a2 + 179;
      goto LABEL_15;
    }
    result = RtlGetExtendedContextLength(v40, &ContextLength);
    if ( result >= 0 )
    {
      v16 = ContextLength + 15LL;
      if ( v16 <= ContextLength )
        v16 = 0xFFFFFFFFFFFFFF0LL;
      v17 = v16 & 0xFFFFFFFFFFFFFFF0uLL;
      v18 = alloca(v17);
      v19 = alloca(v17);
      v20 = (ULONG *)&v38;
      result = RtlInitializeExtendedContext((PCONTEXT)&v38, v15, (PCONTEXT_EX *)&v42[1]);
      if ( result >= 0 )
      {
        result = RtlpReadExtendedContext(v21, 1u, *(__int64 *)&v42[1], v15, (__int64)a2, 0LL);
        if ( result >= 0 )
        {
LABEL_15:
          if ( Thread != CurrentThread
            || (*(_DWORD *)&Process->0 & 0x20) == 0
            || (*v20 & 0x10001) != 0x10001
            || (ThreadTeb = PsGetThreadTeb((__int64)Thread),
                (unsigned int)RtlGuardIsValidWow64StackPointer(v20[49], ThreadTeb)) )
          {
            result = PspWow64ReadOrWriteThreadCpuArea((ULONG_PTR)Process, v33, v36, (__int64)v42, (__int64)&v38);
            if ( result >= 0 )
            {
              v23 = v38;
              if ( (_BYTE)v38 && (v15 & 0x10040) == 0x10040 )
              {
                return -1073741637;
              }
              else
              {
                result = RtlGetExtendedContextLength(0x10001Fu, &ContextLength);
                if ( result >= 0 )
                {
                  v24 = ContextLength + 15LL;
                  if ( v24 <= ContextLength )
                    v24 = 0xFFFFFFFFFFFFFF0LL;
                  v25 = v24 & 0xFFFFFFFFFFFFFFF0uLL;
                  v26 = alloca(v25);
                  v27 = alloca(v25);
                  result = RtlInitializeExtendedContext((PCONTEXT)&v38, 0x10001Fu, &v43);
                  if ( result >= 0 )
                  {
                    result = PspGetContextThreadInternal((__int64)Thread, (__int64)&v38, 0, 1, 1);
                    if ( result >= 0 )
                    {
                      result = v23
                             ? RtlCopyContext((PCONTEXT)v45, *v20, (PCONTEXT)v20)
                             : RtlpWow64SetContextOnAmd64(v45, &v38, v20, (char *)&v38 + 1);
                      if ( result >= 0 )
                      {
                        if ( LOWORD(v45[2]) != 35 )
                        {
                          v28 = 0;
                          if ( (v15 & 0x10040) != 0x10040 )
                            v28 = (v15 & 0x10002) != 65538 && (v15 & 0x10020) != 65568;
                          if ( !v28 )
                            v42[0] |= 1u;
                        }
                        result = PspWow64ReadOrWriteThreadCpuArea(BugCheckParameter1, v34, v37, (__int64)v42, 0LL);
                        v30 = result;
                        if ( result >= 0 )
                        {
                          if ( HIBYTE(v38) )
                          {
                            if ( (v15 & 0x10040) == 0x10040 )
                            {
                              v45[0] |= 0x100040u;
                              v31 = v43;
                              v32 = v42[1];
                              v43->XState = *(CONTEXT_CHUNK *)(*(_QWORD *)&v42[1] + 16LL);
                              v31->XState.Offset += v32 - (_DWORD)v31;
                              v31->All.Length = v31->XState.Offset + v31->XState.Length - v31->All.Offset;
                            }
                            v30 = PspSetContextThreadInternal(Thread, (__int64)&v38, 0, 1, 1);
                          }
                          if ( v30 >= 0 )
                          {
                            if ( v39 )
                            {
                              LOBYTE(v29) = KeGetCurrentThread()->PreviousMode;
                              EtwTiLogSetContextThread(v29, Thread, v20, v40, *(_QWORD *)v35);
                            }
                          }
                          return v30;
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
