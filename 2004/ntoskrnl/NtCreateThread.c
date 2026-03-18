/*
 * XREFs of NtCreateThread @ 0x140903C40
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSanitizeContextFlags @ 0x1402E9D14 (RtlpSanitizeContextFlags.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     PspCreateThread @ 0x1406B12C0 (PspCreateThread.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtCreateThread(
        _QWORD *a1,
        int a2,
        ULONG_PTR a3,
        ULONG_PTR a4,
        unsigned __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  _BYTE *v12; // rbx
  __int64 result; // rax
  char PreviousMode; // dl
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  _OWORD *v17; // rax
  __int64 v18; // rcx
  __int128 v19; // xmm0
  unsigned __int64 v20; // rcx
  __int16 v21; // ax
  _BYTE *v22; // [rsp+78h] [rbp-5B0h]
  _OWORD v23[5]; // [rsp+90h] [rbp-598h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+E0h] [rbp-548h]
  struct _KTHREAD *v25; // [rsp+E8h] [rbp-540h]
  _OWORD v26[2]; // [rsp+F0h] [rbp-538h] BYREF
  _BYTE v27[152]; // [rsp+110h] [rbp-518h] BYREF
  unsigned __int64 v28; // [rsp+1A8h] [rbp-480h]

  v12 = (_BYTE *)a6;
  memset(v23, 0, 0x48uLL);
  memset(v26, 0, sizeof(v26));
  if ( !a6 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v15 = (__int64)a1;
    if ( (unsigned __int64)a1 >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v15 = *(_QWORD *)v15;
    if ( a5 )
    {
      if ( (a5 & 3) != 0 )
        goto LABEL_16;
      v16 = a5;
      if ( a5 >= 0x7FFFFFFF0000LL )
        v16 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v16 = *(_BYTE *)v16;
      *(_BYTE *)(v16 + 15) = *(_BYTE *)(v16 + 15);
    }
    if ( (a6 & 0xF) == 0 )
    {
      v17 = v27;
      v18 = 9LL;
      do
      {
        *v17 = *(_OWORD *)v12;
        v17[1] = *((_OWORD *)v12 + 1);
        v17[2] = *((_OWORD *)v12 + 2);
        v17[3] = *((_OWORD *)v12 + 3);
        v17[4] = *((_OWORD *)v12 + 4);
        v17[5] = *((_OWORD *)v12 + 5);
        v17[6] = *((_OWORD *)v12 + 6);
        v17 += 8;
        *(v17 - 1) = *((_OWORD *)v12 + 7);
        v12 += 128;
        --v18;
      }
      while ( v18 );
      *v17 = *(_OWORD *)v12;
      v17[1] = *((_OWORD *)v12 + 1);
      v17[2] = *((_OWORD *)v12 + 2);
      v17[3] = *((_OWORD *)v12 + 3);
      v17[4] = *((_OWORD *)v12 + 4);
      v22 = v27;
      v28 = (v28 & 0xFFFFFFFFFFFFFFF0uLL) - 40;
      if ( (a7 & 3) == 0 )
      {
        v12 = v27;
        goto LABEL_18;
      }
    }
LABEL_16:
    ExRaiseDatatypeMisalignment();
  }
  v22 = (_BYTE *)a6;
LABEL_18:
  result = RtlpSanitizeContextFlags((unsigned int *)v12 + 12, PreviousMode);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)v12 + 12) &= 0x10001Fu;
    *a1 = 0LL;
    v19 = *(_OWORD *)a7;
    v23[0] = *(_OWORD *)a7;
    if ( v23[0] == 0LL )
    {
      v23[0] = v19;
      v23[1] = *(_OWORD *)(a7 + 16);
      *(_QWORD *)&v23[2] = *(_QWORD *)(a7 + 32);
      if ( *(_QWORD *)&v23[2] )
      {
        v25 = KeGetCurrentThread();
        v20 = v25->ApcState.Process[1].AffinityPadding[10];
        if ( v20 )
        {
          v21 = *(_WORD *)(v20 + 8);
          if ( v21 == 332 || v21 == 452 )
          {
            *((_QWORD *)&v23[3] + 1) = *(_QWORD *)&v23[2];
            *(_OWORD *)((char *)&v23[2] + 8) = v23[1];
            memset(&v23[1], 0, 24);
          }
        }
        LOBYTE(v26[0]) = 1;
        return PspCreateThread(
                 (__int64)a1,
                 a2,
                 a3,
                 a4,
                 0LL,
                 0LL,
                 a5,
                 (__int64)v22,
                 (__int64)v23,
                 a8 == 1,
                 0LL,
                 0LL,
                 (__int64)v26);
      }
      else
      {
        return 3221225485LL;
      }
    }
    else
    {
      return 3221225659LL;
    }
  }
  return result;
}
