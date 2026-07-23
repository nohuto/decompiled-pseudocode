/*
 * XREFs of PspWow64GetContextThread @ 0x1406FCCF8
 * Callers:
 *     NtQueryInformationThread @ 0x140610870 (NtQueryInformationThread.c)
 *     WbGetWowTrapFrame @ 0x14095F0EC (WbGetWowTrapFrame.c)
 *     WbSetWowTrapFrame @ 0x14095F1EC (WbSetWowTrapFrame.c)
 * Callees:
 *     RtlInitializeExtendedContext @ 0x14032EDD0 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x14032FAF0 (RtlGetExtendedContextLength.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1403FE8D0 (_alloca_probe.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PspGetContextThreadInternal @ 0x1406F2448 (PspGetContextThreadInternal.c)
 *     RtlCopyContext @ 0x1406F26DC (RtlCopyContext.c)
 *     RtlpReadExtendedContext @ 0x1406F27F0 (RtlpReadExtendedContext.c)
 *     RtlpWriteExtendedContext @ 0x1406FCFC4 (RtlpWriteExtendedContext.c)
 *     RtlpWow64GetContextOnAmd64 @ 0x1406FD080 (RtlpWow64GetContextOnAmd64.c)
 *     RtlpWow64SanitizeContextFlags @ 0x1406FD43C (RtlpWow64SanitizeContextFlags.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1406FD494 (PspWow64ReadOrWriteThreadCpuArea.c)
 */

int __fastcall PspWow64GetContextThread(__int64 a1, ULONG *a2, int a3, char a4)
{
  __int64 v8; // rdx
  ULONG_PTR v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  int result; // eax
  ULONG v13; // ebx
  unsigned __int64 v14; // rax
  void *v15; // rsp
  _CONTEXT *v16; // r15
  __int64 v17; // rcx
  PCONTEXT_EX v18; // r13
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  void *v21; // rsp
  void *v22; // rsp
  PCONTEXT_EX v23; // r10
  int v24; // ecx
  int v25; // [rsp+20h] [rbp-30h]
  int v26; // [rsp+28h] [rbp-28h]
  _BYTE v27[4]; // [rsp+50h] [rbp+0h] BYREF
  ULONG v28; // [rsp+54h] [rbp+4h] BYREF
  ULONG ContextLength[2]; // [rsp+58h] [rbp+8h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+60h] [rbp+10h] BYREF
  PCONTEXT_EX v31; // [rsp+68h] [rbp+18h] BYREF
  __int64 v32; // [rsp+70h] [rbp+20h]
  int v33[4]; // [rsp+78h] [rbp+28h] BYREF
  __int64 v34; // [rsp+88h] [rbp+38h]
  _BYTE v35[720]; // [rsp+90h] [rbp+40h] BYREF

  v32 = a1;
  v31 = 0LL;
  memset(v35, 0, 0x2CCuLL);
  ContextLength[0] = 0;
  ContextEx = 0LL;
  v27[0] = 0;
  *(_OWORD *)v33 = 0LL;
  v34 = 0LL;
  if ( a3 != 716 )
    return -1073741820;
  v9 = *(_QWORD *)(a1 + 544);
  v10 = *(_QWORD *)(v9 + 1408);
  if ( !v10 || *(_WORD *)(v10 + 8) != 332 )
    return -1073741811;
  if ( a4 )
  {
    v11 = (__int64)a2;
    if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    v28 = *(_DWORD *)v11;
  }
  else
  {
    v28 = *a2;
  }
  LOBYTE(v8) = a4;
  result = RtlpWow64SanitizeContextFlags(&v28, v8);
  if ( result >= 0 )
  {
    v13 = v28;
    if ( !a4 )
    {
      v16 = (_CONTEXT *)a2;
      v18 = (PCONTEXT_EX)(a2 + 179);
LABEL_15:
      result = PspWow64ReadOrWriteThreadCpuArea(v9, v25, v26, 0LL, (__int64)v27);
      if ( result >= 0 )
      {
        if ( v27[0] && (v13 & 0x10040) == 0x10040 )
        {
          return -1073741637;
        }
        else
        {
          result = RtlGetExtendedContextLength(0x4010001Fu, ContextLength);
          if ( result >= 0 )
          {
            v19 = ContextLength[0] + 15LL;
            if ( v19 <= ContextLength[0] )
              v19 = 0xFFFFFFFFFFFFFF0LL;
            v20 = v19 & 0xFFFFFFFFFFFFFFF0uLL;
            v21 = alloca(v20);
            v22 = alloca(v20);
            result = RtlInitializeExtendedContext((PCONTEXT)v27, 0x4010001Fu, &v31);
            if ( result >= 0 )
            {
              if ( (v13 & 0x10040) == 0x10040 )
              {
                v33[2] |= 0x100040u;
                v23 = v31;
                v31->XState = v18->XState;
                v23->XState.Offset += (_DWORD)v18 - (_DWORD)v23;
                v23->All.Length = v23->XState.Offset + v23->XState.Length - v23->All.Offset;
              }
              result = PspGetContextThreadInternal(v32, (__int64)v27, 0, 1, 1);
              if ( result >= 0 )
              {
                if ( v27[0] )
                  result = RtlCopyContext(v16, v16->P1Home, (PCONTEXT)v35);
                else
                  result = RtlpWow64GetContextOnAmd64(v35, v27, v16);
                if ( result >= 0 )
                {
                  if ( a4 )
                  {
                    result = RtlpWriteExtendedContext(v24, (int)a2 + 716, (unsigned int)v33, v13, (__int64)v18);
                    ContextLength[1] = result;
                  }
                }
              }
            }
          }
        }
      }
      return result;
    }
    result = RtlGetExtendedContextLength(v28, ContextLength);
    if ( result >= 0 )
    {
      v14 = ContextLength[0] + 15LL;
      if ( v14 <= ContextLength[0] )
        v14 = 0xFFFFFFFFFFFFFF0LL;
      v15 = alloca(v14 & 0xFFFFFFFFFFFFFFF0uLL);
      v16 = (_CONTEXT *)v27;
      memset(v27, 0, ContextLength[0]);
      result = RtlInitializeExtendedContext((PCONTEXT)v27, v13, &ContextEx);
      if ( result >= 0 )
      {
        v18 = ContextEx;
        result = RtlpReadExtendedContext(v17, 0, (__int64)ContextEx, v13, (__int64)a2, (__int128 *)v33);
        if ( result >= 0 )
          goto LABEL_15;
      }
    }
  }
  return result;
}
