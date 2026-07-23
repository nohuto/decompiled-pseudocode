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

NTSTATUS __cdecl RtlQueueWorkItem(WORKERCALLBACKFUNC Function, PVOID Context, ULONG Flags)
{
  char v3; // r14
  NTSTATUS v6; // edi
  HANDLE *Heap; // rax
  HANDLE *v8; // rbx
  NTSTATUS InformationActivationContext; // eax
  PVOID *v10; // r12
  volatile signed __int32 **v11; // rsi
  int v12; // eax
  PVOID v13; // rdx
  __int64 v14; // rcx
  _ACTIVATION_CONTEXT *v16; // rcx
  HANDLE v17; // rcx
  char v18; // [rsp+40h] [rbp-C8h]
  char v19; // [rsp+41h] [rbp-C7h]
  char v20; // [rsp+42h] [rbp-C6h]
  char v21; // [rsp+43h] [rbp-C5h]
  int v22; // [rsp+44h] [rbp-C4h]
  HANDLE *BaseAddress; // [rsp+48h] [rbp-C0h]
  PACTIVATION_CONTEXT ActivationContext[2]; // [rsp+50h] [rbp-B8h] BYREF
  int v25; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+68h] [rbp-A0h]
  __int64 v27; // [rsp+70h] [rbp-98h]
  __int64 v28; // [rsp+78h] [rbp-90h]
  __int128 v29; // [rsp+80h] [rbp-88h]
  __int64 v30; // [rsp+90h] [rbp-78h]
  int v31; // [rsp+98h] [rbp-70h]
  int v32; // [rsp+9Ch] [rbp-6Ch]
  int v33; // [rsp+A0h] [rbp-68h]
  PVOID DllHandle[2]; // [rsp+B0h] [rbp-58h]
  __int64 v35; // [rsp+C0h] [rbp-48h]
  struct _TEB *v36; // [rsp+C8h] [rbp-40h]
  struct _TEB *v37; // [rsp+D0h] [rbp-38h]
  struct _TEB *v38; // [rsp+D8h] [rbp-30h]
  HANDLE v39; // [rsp+128h] [rbp+20h] BYREF

  v3 = Flags;
  *(_OWORD *)ActivationContext = 0LL;
  v18 = 0;
  v20 = 0;
  v21 = 0;
  v19 = 0;
  v39 = 0LL;
  BaseAddress = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return -1073741823;
  v6 = RtlpTpRevertCapture(&v39);
  v22 = v6;
  if ( v6 < 0 )
  {
    v8 = 0LL;
  }
  else
  {
    Heap = (HANDLE *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x78uLL);
    v8 = Heap;
    BaseAddress = Heap;
    if ( Heap )
    {
      v6 = RtlpTpInitializeData(Heap + 5);
      v22 = v6;
      if ( v6 >= 0 )
      {
        v21 = 1;
        v36 = NtCurrentTeb();
        BaseAddress[12] = v36->SubProcessTag;
        v37 = NtCurrentTeb();
        v8 = BaseAddress;
        *(_GUID *)(BaseAddress + 13) = v37->ActivityId;
        InformationActivationContext = RtlQueryInformationActivationContext(
                                         1u,
                                         0LL,
                                         0LL,
                                         ActivationContextBasicInformation,
                                         ActivationContext,
                                         0x10uLL,
                                         0LL);
        v6 = InformationActivationContext;
        v22 = InformationActivationContext;
        if ( InformationActivationContext >= 0 )
        {
LABEL_6:
          if ( ((__int64)ActivationContext[1] & 1) != 0 )
          {
            RtlReleaseActivationContext(ActivationContext[0]);
            ActivationContext[0] = (PACTIVATION_CONTEXT)-1LL;
          }
          BaseAddress[9] = ActivationContext[0];
          v18 = 1;
          *((_DWORD *)BaseAddress + 22) = 2;
          v10 = BaseAddress + 7;
          BaseAddress[7] = Function;
          BaseAddress[8] = Context;
          v11 = (volatile signed __int32 **)(BaseAddress + 4);
          BaseAddress[4] = 0LL;
          v25 = 3;
          v26 = 0LL;
          v27 = 0LL;
          v28 = 0LL;
          v29 = 0LL;
          v30 = 0LL;
          v31 = 0;
          v32 = 1;
          v33 = 72;
          v12 = 0;
          if ( (v3 & 0xC0) != 0 )
            v12 = 2;
          v31 = v12;
          *BaseAddress = &RtlpTpWorkTaskCallbacks;
          *((_DWORD *)BaseAddress + 2) = 0;
          v6 = TpReserveTaskPost(*v11, (__int64)BaseAddress, (__int64)&v25);
          v22 = v6;
          if ( v6 >= 0 )
          {
            v19 = 1;
            if ( (unsigned __int64)*v10 < *((_QWORD *)&xmmword_180181510 + 1)
              || (unsigned __int64)*v10 >= *((_QWORD *)&xmmword_180181510 + 1)
                                         + (unsigned __int64)(unsigned int)qword_180181520 )
            {
              RtlpxLookupFunctionTable(*v10);
            }
            else
            {
              *(_OWORD *)DllHandle = xmmword_180181510;
              v35 = qword_180181520;
            }
            v13 = DllHandle[1];
            BaseAddress[10] = DllHandle[1];
            if ( v13 )
            {
              LdrAddRefDll(0, v13);
              v20 = 1;
              if ( RtlGetCurrentServiceSessionId() )
              {
                v14 = (__int64)NtCurrentPeb()->SharedData + 556;
                v8 = BaseAddress;
              }
              else
              {
                v14 = 2147353478LL;
              }
              if ( *(_BYTE *)v14 )
              {
                v38 = NtCurrentTeb();
                v8 = BaseAddress;
                RtlpTpETWCallbackEnqueue(
                  (unsigned int)*v11,
                  (_DWORD)BaseAddress,
                  (unsigned int)*v10,
                  (unsigned int)BaseAddress[8],
                  (__int64)v38->SubProcessTag);
              }
              TpPostTask(v8, *v11, 1LL, &v25);
              if ( !_InterlockedDecrement((volatile signed __int32 *)BaseAddress + 22) )
                RtlpTpWorkUnposted(BaseAddress, *v11);
              v8 = 0LL;
              BaseAddress = 0LL;
              v6 = 0;
              v22 = 0;
            }
          }
          goto LABEL_28;
        }
        if ( InformationActivationContext == -1072365557 )
        {
          BaseAddress[9] = (HANDLE)-1LL;
          goto LABEL_6;
        }
      }
    }
    else
    {
      v6 = -1073741801;
      v22 = -1073741801;
    }
  }
LABEL_28:
  if ( v8 )
  {
    if ( v18 )
    {
      v16 = (_ACTIVATION_CONTEXT *)v8[9];
      if ( v16 != (_ACTIVATION_CONTEXT *)-1LL )
        RtlReleaseActivationContext(v16);
    }
    if ( v19 )
      TpUnreserveTaskPost(v8[4], &v25);
    if ( v20 )
      LdrUnloadDll(v8[10]);
    if ( v21 )
    {
      v17 = v8[5];
      if ( v17 )
        NtClose(v17);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    v6 = v22;
  }
  RtlpTpResumeImpersonation(v39);
  return v6;
}
