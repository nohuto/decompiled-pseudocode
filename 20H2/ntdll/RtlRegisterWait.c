/*
 * XREFs of RtlRegisterWait @ 0x18000BE70
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTpRevertCapture @ 0x18000BD78 (RtlpTpRevertCapture.c)
 *     RtlpTpInitializeData @ 0x18000BDF8 (RtlpTpInitializeData.c)
 *     RtlpTpResumeImpersonation @ 0x18000C0E4 (RtlpTpResumeImpersonation.c)
 *     TpAllocWait @ 0x18000DF40 (TpAllocWait.c)
 *     TpSetWaitEx @ 0x180011D60 (TpSetWaitEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 */

__int64 __fastcall RtlRegisterWait(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, unsigned int a6)
{
  int v8; // edi
  __int64 Heap; // rax
  __int64 v10; // rbx
  _QWORD *v11; // r12
  int v12; // eax
  char v14; // [rsp+20h] [rbp-98h]
  int v15; // [rsp+24h] [rbp-94h]
  __int64 v16; // [rsp+28h] [rbp-90h]
  __int64 v17; // [rsp+30h] [rbp-88h] BYREF
  int v18; // [rsp+40h] [rbp-78h] BYREF
  __int64 v19; // [rsp+48h] [rbp-70h]
  __int64 v20; // [rsp+50h] [rbp-68h]
  __int64 v21; // [rsp+58h] [rbp-60h]
  __int128 v22; // [rsp+60h] [rbp-58h]
  __int64 (__fastcall *v23)(__int64, __int64); // [rsp+70h] [rbp-48h]
  int v24; // [rsp+78h] [rbp-40h]
  int v25; // [rsp+7Ch] [rbp-3Ch]
  int v26; // [rsp+80h] [rbp-38h]

  v14 = 0;
  v17 = 0LL;
  v16 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 3221225473LL;
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFCuLL || !a3 )
    return 3221225485LL;
  *a1 = 0LL;
  v8 = RtlpTpRevertCapture((HANDLE *)&v17, a6 & 0x100, a3);
  v15 = v8;
  if ( v8 < 0 )
  {
    v10 = 0LL;
  }
  else
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, 96LL);
    v10 = Heap;
    v16 = Heap;
    if ( Heap )
    {
      v11 = (_QWORD *)(Heap + 48);
      *(_QWORD *)(Heap + 48) = 0LL;
      v8 = RtlpTpInitializeData(Heap, a6, v17);
      v15 = v8;
      if ( v8 >= 0 )
      {
        v14 = 1;
        *(_QWORD *)(v10 + 16) = 0LL;
        *(_DWORD *)(v10 + 24) = 0;
        *(_QWORD *)(v10 + 32) = a3;
        *(_QWORD *)(v10 + 40) = a4;
        *(_QWORD *)(v10 + 56) = a2;
        if ( a5 == -1 )
        {
          *(_QWORD *)(v10 + 64) = 0LL;
          *(_QWORD *)(v10 + 72) = 0LL;
        }
        else
        {
          *(_QWORD *)(v10 + 64) = a5;
          *(_QWORD *)(v10 + 64) = -10000LL * a5;
          *(_QWORD *)(v10 + 72) = v10 + 64;
        }
        *(_QWORD *)(v10 + 80) = 0LL;
        *(_DWORD *)(v10 + 88) = 0;
        v18 = 3;
        v19 = 0LL;
        v20 = 0LL;
        v21 = 0LL;
        v22 = 0LL;
        v23 = 0LL;
        v24 = 0;
        v25 = 1;
        v26 = 72;
        v12 = 0;
        if ( (a6 & 0xC4) != 0 )
        {
          v12 = 2;
          v24 = 2;
        }
        if ( (a6 & 0x10) != 0 )
          v24 = v12 | 1;
        v23 = RtlpTpWaitFinalizationCallback;
        v8 = TpAllocWait(v11, RtlpTpWaitCallback, v10, &v18);
        v15 = v8;
        if ( v8 >= 0 )
        {
          RtlAcquireSRWLockExclusive(v10 + 16);
          *a1 = v10;
          TpSetWaitEx(*v11, a2, *(_QWORD *)(v10 + 72), 0LL, 1, v16);
          RtlReleaseSRWLockExclusive(v10 + 16);
          v10 = 0LL;
          v16 = 0LL;
          v8 = 0;
          v15 = 0;
        }
      }
    }
    else
    {
      v8 = -1073741801;
      v15 = -1073741801;
    }
  }
  if ( v10 )
  {
    if ( v14 )
    {
      if ( *(_QWORD *)v10 )
        NtClose(*(HANDLE *)v10);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v16);
    v8 = v15;
  }
  RtlpTpResumeImpersonation(v17);
  return (unsigned int)v8;
}
