/*
 * XREFs of NtCreateThread @ 0x140907010
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSanitizeContextFlags @ 0x140276574 (RtlpSanitizeContextFlags.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     PspCreateThread @ 0x140648C4C (PspCreateThread.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BDF0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtCreateThread(
        _QWORD *a1,
        int a2,
        __int64 a3,
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
  __int64 v23[10]; // [rsp+90h] [rbp-598h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+E0h] [rbp-548h]
  struct _KTHREAD *v25; // [rsp+E8h] [rbp-540h]
  __int64 v26[2]; // [rsp+F0h] [rbp-538h] BYREF
  __int128 v27; // [rsp+100h] [rbp-528h]
  _BYTE v28[152]; // [rsp+110h] [rbp-518h] BYREF
  unsigned __int64 v29; // [rsp+1A8h] [rbp-480h]

  v12 = (_BYTE *)a6;
  memset(v23, 0, 0x48uLL);
  *(_OWORD *)v26 = 0LL;
  v27 = 0LL;
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
      v17 = v28;
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
      v22 = v28;
      v29 = (v29 & 0xFFFFFFFFFFFFFFF0uLL) - 40;
      if ( (a7 & 3) == 0 )
      {
        v12 = v28;
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
    *(_OWORD *)v23 = *(_OWORD *)a7;
    if ( *(_OWORD *)v23 == 0LL )
    {
      *(_OWORD *)v23 = v19;
      *(_OWORD *)&v23[2] = *(_OWORD *)(a7 + 16);
      v23[4] = *(_QWORD *)(a7 + 32);
      if ( v23[4] )
      {
        v25 = KeGetCurrentThread();
        v20 = v25->ApcState.Process[1].AffinityPadding[10];
        if ( v20 )
        {
          v21 = *(_WORD *)(v20 + 8);
          if ( v21 == 332 || v21 == 452 )
          {
            v23[7] = v23[4];
            *(_OWORD *)&v23[5] = *(_OWORD *)&v23[2];
            memset(&v23[2], 0, 24);
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
