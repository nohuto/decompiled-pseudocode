/*
 * XREFs of RtlQueueWorkItem @ 0x18000B780
 * Callers:
 *     <none>
 * Callees:
 *     TpReserveTaskPost @ 0x18000B6FC (TpReserveTaskPost.c)
 *     RtlpTpRevertCapture @ 0x18000BD78 (RtlpTpRevertCapture.c)
 *     RtlpTpInitializeData @ 0x18000BDF8 (RtlpTpInitializeData.c)
 *     RtlpTpResumeImpersonation @ 0x18000C0E4 (RtlpTpResumeImpersonation.c)
 *     LdrUnloadDll @ 0x18000FBF0 (LdrUnloadDll.c)
 *     LdrAddRefDll @ 0x180010140 (LdrAddRefDll.c)
 *     TpPostTask @ 0x180012A98 (TpPostTask.c)
 *     RtlQueryInformationActivationContext @ 0x180012DE0 (RtlQueryInformationActivationContext.c)
 *     RtlReleaseActivationContext @ 0x180013570 (RtlReleaseActivationContext.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlpxLookupFunctionTable @ 0x180032F40 (RtlpxLookupFunctionTable.c)
 *     RtlpTpWorkUnposted @ 0x18006FDD0 (RtlpTpWorkUnposted.c)
 *     TpUnreserveTaskPost @ 0x18006FEC0 (TpUnreserveTaskPost.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     RtlpTpETWCallbackEnqueue @ 0x180112838 (RtlpTpETWCallbackEnqueue.c)
 */

__int64 __fastcall RtlQueueWorkItem(__int64 a1, __int64 a2, unsigned int a3)
{
  int v6; // edi
  __int64 Heap; // rax
  _QWORD *v8; // rbx
  int InformationActivationContext; // eax
  _QWORD *v10; // r12
  volatile signed __int32 **v11; // rsi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v18; // rcx
  void *v19; // rcx
  char v20; // [rsp+40h] [rbp-C8h]
  char v21; // [rsp+41h] [rbp-C7h]
  char v22; // [rsp+42h] [rbp-C6h]
  char v23; // [rsp+43h] [rbp-C5h]
  int v24; // [rsp+44h] [rbp-C4h]
  __int64 v25; // [rsp+48h] [rbp-C0h]
  __int128 v26; // [rsp+50h] [rbp-B8h] BYREF
  int v27; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+68h] [rbp-A0h]
  __int64 v29; // [rsp+70h] [rbp-98h]
  __int64 v30; // [rsp+78h] [rbp-90h]
  __int128 v31; // [rsp+80h] [rbp-88h]
  __int64 v32; // [rsp+90h] [rbp-78h]
  int v33; // [rsp+98h] [rbp-70h]
  int v34; // [rsp+9Ch] [rbp-6Ch]
  int v35; // [rsp+A0h] [rbp-68h]
  __int128 v36; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v37; // [rsp+C0h] [rbp-48h]
  struct _TEB *v38; // [rsp+C8h] [rbp-40h]
  struct _TEB *v39; // [rsp+D0h] [rbp-38h]
  struct _TEB *v40; // [rsp+D8h] [rbp-30h]
  __int64 v41; // [rsp+128h] [rbp+20h] BYREF

  v26 = 0LL;
  v20 = 0;
  v22 = 0;
  v23 = 0;
  v21 = 0;
  v41 = 0LL;
  v25 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 3221225473LL;
  v6 = RtlpTpRevertCapture(&v41, a3 & 0x100);
  v24 = v6;
  if ( v6 < 0 )
  {
    v8 = 0LL;
  }
  else
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, 120LL);
    v8 = (_QWORD *)Heap;
    v25 = Heap;
    if ( Heap )
    {
      v6 = RtlpTpInitializeData(Heap + 40, a3, v41);
      v24 = v6;
      if ( v6 >= 0 )
      {
        v23 = 1;
        v38 = NtCurrentTeb();
        *(_QWORD *)(v25 + 96) = v38->SubProcessTag;
        v39 = NtCurrentTeb();
        v8 = (_QWORD *)v25;
        *(_GUID *)(v25 + 104) = v39->ActivityId;
        InformationActivationContext = RtlQueryInformationActivationContext(1, 0, 0, 1, (__int64)&v26, 16LL, 0LL);
        v6 = InformationActivationContext;
        v24 = InformationActivationContext;
        if ( InformationActivationContext >= 0 )
        {
LABEL_6:
          if ( (BYTE8(v26) & 1) != 0 )
          {
            RtlReleaseActivationContext(v26);
            *(_QWORD *)&v26 = -1LL;
          }
          *(_QWORD *)(v25 + 72) = v26;
          v20 = 1;
          *(_DWORD *)(v25 + 88) = 2;
          v10 = (_QWORD *)(v25 + 56);
          *(_QWORD *)(v25 + 56) = a1;
          *(_QWORD *)(v25 + 64) = a2;
          v11 = (volatile signed __int32 **)(v25 + 32);
          *(_QWORD *)(v25 + 32) = 0LL;
          v27 = 3;
          v28 = 0LL;
          v29 = 0LL;
          v30 = 0LL;
          v31 = 0LL;
          v32 = 0LL;
          v33 = 0;
          v34 = 1;
          v35 = 72;
          v12 = 0;
          if ( (a3 & 0xC0) != 0 )
            v12 = 2;
          v33 = v12;
          *(_QWORD *)v25 = RtlpTpWorkTaskCallbacks;
          *(_DWORD *)(v25 + 8) = 0;
          v6 = TpReserveTaskPost(*v11, v25, (__int64)&v27);
          v24 = v6;
          if ( v6 >= 0 )
          {
            v21 = 1;
            if ( *v10 < *((_QWORD *)&xmmword_180181510 + 1)
              || *v10 >= *((_QWORD *)&xmmword_180181510 + 1) + (unsigned __int64)(unsigned int)qword_180181520 )
            {
              RtlpxLookupFunctionTable(*v10, &v36);
            }
            else
            {
              v36 = xmmword_180181510;
              v37 = qword_180181520;
            }
            v13 = *((_QWORD *)&v36 + 1);
            *(_QWORD *)(v25 + 80) = *((_QWORD *)&v36 + 1);
            if ( v13 )
            {
              LdrAddRefDll(0LL);
              v22 = 1;
              if ( (unsigned int)RtlGetCurrentServiceSessionId(v15, v14) )
              {
                v16 = (__int64)NtCurrentPeb()->SharedData + 556;
                v8 = (_QWORD *)v25;
              }
              else
              {
                v16 = 2147353478LL;
              }
              if ( *(_BYTE *)v16 )
              {
                v40 = NtCurrentTeb();
                v8 = (_QWORD *)v25;
                RtlpTpETWCallbackEnqueue(
                  (unsigned int)*v11,
                  v25,
                  *v10,
                  *(_QWORD *)(v25 + 64),
                  (__int64)v40->SubProcessTag);
              }
              TpPostTask(v8, *v11, 1LL, &v27);
              if ( !_InterlockedDecrement((volatile signed __int32 *)(v25 + 88)) )
                RtlpTpWorkUnposted(v25, *v11);
              v8 = 0LL;
              v25 = 0LL;
              v6 = 0;
              v24 = 0;
            }
          }
          goto LABEL_28;
        }
        if ( InformationActivationContext == -1072365557 )
        {
          *(_QWORD *)(v25 + 72) = -1LL;
          goto LABEL_6;
        }
      }
    }
    else
    {
      v6 = -1073741801;
      v24 = -1073741801;
    }
  }
LABEL_28:
  if ( v8 )
  {
    if ( v20 )
    {
      v18 = v8[9];
      if ( v18 != -1 )
        RtlReleaseActivationContext(v18);
    }
    if ( v21 )
      TpUnreserveTaskPost(v8[4], &v27);
    if ( v22 )
      LdrUnloadDll(v8[10]);
    if ( v23 )
    {
      v19 = (void *)v8[5];
      if ( v19 )
        NtClose(v19);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v25);
    v6 = v24;
  }
  RtlpTpResumeImpersonation(v41);
  return (unsigned int)v6;
}
