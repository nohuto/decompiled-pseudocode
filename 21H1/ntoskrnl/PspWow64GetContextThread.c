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

__int64 __fastcall PspWow64GetContextThread(__int64 a1, unsigned int *a2, int a3, char a4)
{
  __int64 v8; // rdx
  ULONG_PTR v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 result; // rax
  unsigned int v13; // ebx
  unsigned __int64 v14; // rax
  void *v15; // rsp
  int *v16; // r15
  __int64 v17; // rcx
  __int64 v18; // r13
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  void *v21; // rsp
  void *v22; // rsp
  _DWORD *v23; // r10
  int v24; // ecx
  int v25; // [rsp+20h] [rbp-30h]
  int v26; // [rsp+28h] [rbp-28h]
  _BYTE v27[4]; // [rsp+50h] [rbp+0h] BYREF
  unsigned int v28; // [rsp+54h] [rbp+4h] BYREF
  _DWORD v29[2]; // [rsp+58h] [rbp+8h] BYREF
  __int64 v30; // [rsp+60h] [rbp+10h] BYREF
  __int64 v31; // [rsp+68h] [rbp+18h] BYREF
  __int64 v32; // [rsp+70h] [rbp+20h]
  int v33[4]; // [rsp+78h] [rbp+28h] BYREF
  __int64 v34; // [rsp+88h] [rbp+38h]
  _BYTE v35[720]; // [rsp+90h] [rbp+40h] BYREF

  v32 = a1;
  v31 = 0LL;
  memset(v35, 0, 0x2CCuLL);
  v29[0] = 0;
  v30 = 0LL;
  v27[0] = 0;
  *(_OWORD *)v33 = 0LL;
  v34 = 0LL;
  if ( a3 != 716 )
    return 3221225476LL;
  v9 = *(_QWORD *)(a1 + 544);
  v10 = *(_QWORD *)(v9 + 1408);
  if ( !v10 || *(_WORD *)(v10 + 8) != 332 )
    return 3221225485LL;
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
  if ( (int)result >= 0 )
  {
    v13 = v28;
    if ( !a4 )
    {
      v16 = (int *)a2;
      v18 = (__int64)(a2 + 179);
LABEL_15:
      result = PspWow64ReadOrWriteThreadCpuArea(v9, v25, v26, 0LL, (__int64)v27);
      if ( (int)result >= 0 )
      {
        if ( v27[0] && (v13 & 0x10040) == 0x10040 )
        {
          return 3221225659LL;
        }
        else
        {
          result = RtlGetExtendedContextLength(0x4010001Fu, v29);
          if ( (int)result >= 0 )
          {
            v19 = v29[0] + 15LL;
            if ( v19 <= v29[0] )
              v19 = 0xFFFFFFFFFFFFFF0LL;
            v20 = v19 & 0xFFFFFFFFFFFFFFF0uLL;
            v21 = alloca(v20);
            v22 = alloca(v20);
            result = RtlInitializeExtendedContext((__int64)v27, 0x4010001Fu, (__int64)&v31);
            if ( (int)result >= 0 )
            {
              if ( (v13 & 0x10040) == 0x10040 )
              {
                v33[2] |= 0x100040u;
                v23 = (_DWORD *)v31;
                *(_QWORD *)(v31 + 16) = *(_QWORD *)(v18 + 16);
                v23[4] += v18 - (_DWORD)v23;
                v23[1] = v23[4] + v23[5] - *v23;
              }
              result = PspGetContextThreadInternal(v32, (__int64)v27, 0, 1, 1);
              if ( (int)result >= 0 )
              {
                if ( v27[0] )
                  result = RtlCopyContext((__int64)v16, *v16, (__int64)v35);
                else
                  result = RtlpWow64GetContextOnAmd64(v35, v27, v16);
                if ( (int)result >= 0 )
                {
                  if ( a4 )
                  {
                    result = RtlpWriteExtendedContext(v24, (int)a2 + 716, (unsigned int)v33, v13, v18);
                    v29[1] = result;
                  }
                }
              }
            }
          }
        }
      }
      return result;
    }
    result = RtlGetExtendedContextLength(v28, v29);
    if ( (int)result >= 0 )
    {
      v14 = v29[0] + 15LL;
      if ( v14 <= v29[0] )
        v14 = 0xFFFFFFFFFFFFFF0LL;
      v15 = alloca(v14 & 0xFFFFFFFFFFFFFFF0uLL);
      v16 = (int *)v27;
      memset(v27, 0, v29[0]);
      result = RtlInitializeExtendedContext((__int64)v27, v13, (__int64)&v30);
      if ( (int)result >= 0 )
      {
        v18 = v30;
        result = RtlpReadExtendedContext(v17, 0, v30, v13, (__int64)a2, (__int128 *)v33);
        if ( (int)result >= 0 )
          goto LABEL_15;
      }
    }
  }
  return result;
}
