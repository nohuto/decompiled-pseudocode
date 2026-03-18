/*
 * XREFs of PspWow64GetContextThread @ 0x140691C20
 * Callers:
 *     NtQueryInformationThread @ 0x1405F1760 (NtQueryInformationThread.c)
 *     WbGetWowTrapFrame @ 0x14096625C (WbGetWowTrapFrame.c)
 *     WbSetWowTrapFrame @ 0x14096635C (WbSetWowTrapFrame.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x1402E6530 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1402E65B0 (RtlInitializeExtendedContext.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140405E30 (_alloca_probe.c)
 *     memset @ 0x140411300 (memset.c)
 *     RtlpWow64GetContextOnAmd64 @ 0x14068FBDC (RtlpWow64GetContextOnAmd64.c)
 *     PspGetContextThreadInternal @ 0x140693928 (PspGetContextThreadInternal.c)
 *     RtlCopyContext @ 0x140693BBC (RtlCopyContext.c)
 *     RtlpReadExtendedContext @ 0x140693CD0 (RtlpReadExtendedContext.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140695814 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     RtlpWow64SanitizeContextFlags @ 0x140695B90 (RtlpWow64SanitizeContextFlags.c)
 *     RtlpWriteExtendedContext @ 0x140695BE8 (RtlpWriteExtendedContext.c)
 */

__int64 __fastcall PspWow64GetContextThread(__int64 a1, int *a2, int a3, char a4)
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
  int v17; // ecx
  __int64 v18; // r13
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  void *v21; // rsp
  void *v22; // rsp
  int v23; // r9d
  _DWORD *v24; // r10
  int v25; // ecx
  int v26; // [rsp+20h] [rbp-30h]
  int v27; // [rsp+28h] [rbp-28h]
  _BYTE v28[4]; // [rsp+50h] [rbp+0h] BYREF
  unsigned int v29; // [rsp+54h] [rbp+4h] BYREF
  _DWORD v30[2]; // [rsp+58h] [rbp+8h] BYREF
  __int64 v31; // [rsp+60h] [rbp+10h] BYREF
  __int64 v32; // [rsp+68h] [rbp+18h] BYREF
  __int64 v33; // [rsp+70h] [rbp+20h]
  int v34[4]; // [rsp+78h] [rbp+28h] BYREF
  __int64 v35; // [rsp+88h] [rbp+38h]
  _BYTE v36[720]; // [rsp+90h] [rbp+40h] BYREF

  v33 = a1;
  v32 = 0LL;
  memset(v36, 0, 0x2CCuLL);
  v30[0] = 0;
  v31 = 0LL;
  v28[0] = 0;
  *(_OWORD *)v34 = 0LL;
  v35 = 0LL;
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
    v29 = *(_DWORD *)v11;
  }
  else
  {
    v29 = *a2;
  }
  LOBYTE(v8) = a4;
  result = RtlpWow64SanitizeContextFlags(&v29, v8);
  if ( (int)result >= 0 )
  {
    v13 = v29;
    if ( !a4 )
    {
      v16 = a2;
      v18 = (__int64)(a2 + 179);
LABEL_15:
      result = PspWow64ReadOrWriteThreadCpuArea(v9, v26, v27, 0LL, (__int64)v28);
      if ( (int)result >= 0 )
      {
        if ( v28[0] && (v13 & 0x10040) == 0x10040 )
        {
          return 3221225659LL;
        }
        else
        {
          result = RtlGetExtendedContextLength(1074790431LL, (__int64)v30);
          if ( (int)result >= 0 )
          {
            v19 = v30[0] + 15LL;
            if ( v19 <= v30[0] )
              v19 = 0xFFFFFFFFFFFFFF0LL;
            v20 = v19 & 0xFFFFFFFFFFFFFFF0uLL;
            v21 = alloca(v20);
            v22 = alloca(v20);
            result = RtlInitializeExtendedContext((__int64)v28, 0x4010001Fu, (__int64)&v32);
            if ( (int)result >= 0 )
            {
              if ( (v13 & 0x10040) == 0x10040 )
              {
                v34[2] |= 0x100040u;
                v24 = (_DWORD *)v32;
                *(_QWORD *)(v32 + 16) = *(_QWORD *)(v18 + 16);
                v24[4] += v18 - (_DWORD)v24;
                v24[1] = v24[4] + v24[5] - *v24;
              }
              LOBYTE(v23) = 1;
              result = PspGetContextThreadInternal(v33, (unsigned int)v28, 0, v23, 1);
              if ( (int)result >= 0 )
              {
                if ( v28[0] )
                  result = RtlCopyContext(v16, (unsigned int)*v16, v36);
                else
                  result = RtlpWow64GetContextOnAmd64((__int64)v36, (__int64)v28, v16);
                if ( (int)result >= 0 )
                {
                  if ( a4 )
                  {
                    result = RtlpWriteExtendedContext(v25, (int)a2 + 716, (unsigned int)v34, v13, v18);
                    v30[1] = result;
                  }
                }
              }
            }
          }
        }
      }
      return result;
    }
    result = RtlGetExtendedContextLength(v29, (__int64)v30);
    if ( (int)result >= 0 )
    {
      v14 = v30[0] + 15LL;
      if ( v14 <= v30[0] )
        v14 = 0xFFFFFFFFFFFFFF0LL;
      v15 = alloca(v14 & 0xFFFFFFFFFFFFFFF0uLL);
      v16 = (int *)v28;
      memset(v28, 0, v30[0]);
      result = RtlInitializeExtendedContext((__int64)v28, v13, (__int64)&v31);
      if ( (int)result >= 0 )
      {
        v18 = v31;
        result = RtlpReadExtendedContext(v17, 0, v31, v13, (__int64)a2, (__int64)v34);
        if ( (int)result >= 0 )
          goto LABEL_15;
      }
    }
  }
  return result;
}
