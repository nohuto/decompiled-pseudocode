/*
 * XREFs of ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180015018
 * Callers:
 *     ?OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x180010644 (-OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioS.c)
 * Callees:
 *     ?Initialize@_WorkTask@@QEAAJV?$function@$$A6AXXZ@std@@PEAVCSerialWorkQueue@@@Z @ 0x180014DF4 (-Initialize@_WorkTask@@QEAAJV-$function@$$A6AXXZ@std@@PEAVCSerialWorkQueue@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F658 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003F69C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSerialWorkQueue::QueueWorkItem(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  signed int v4; // ebx
  PTP_POOL Threadpool; // rax
  signed int LastError; // eax
  signed int v7; // eax
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  __int64 (__fastcall ***v10)(_QWORD, _BYTE *); // rcx
  struct _TP_WORK *ThreadpoolWork; // rsi
  signed int v12; // eax
  volatile signed __int32 *v13; // rsi
  __int64 v14; // rcx
  _BYTE v16[56]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v17; // [rsp+58h] [rbp-30h]

  v2 = a2;
  v4 = 0;
  if ( *(_BYTE *)(a1 + 80) )
    goto LABEL_33;
  if ( *(_QWORD *)a1 )
    goto LABEL_12;
  Threadpool = CreateThreadpool(0LL);
  *(_QWORD *)a1 = Threadpool;
  if ( !Threadpool )
  {
    LastError = GetLastError();
    v4 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v4 = LastError;
  }
  if ( v4 >= 0 )
  {
    if ( SetThreadpoolThreadMinimum(*(PTP_POOL *)a1, 1u) )
      goto LABEL_11;
    v7 = GetLastError();
    v4 = (unsigned __int16)v7 | 0x80070000;
    if ( v7 <= 0 )
      v4 = v7;
    if ( v4 >= 0 )
    {
LABEL_11:
      SetThreadpoolThreadMaximum(*(PTP_POOL *)a1, 1u);
      *(_QWORD *)(a1 + 16) = *(_QWORD *)a1;
LABEL_12:
      v8 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      v9 = v8;
      if ( v8 )
      {
        *v8 = 0LL;
        v8[1] = 0LL;
        v8[2] = 0LL;
      }
      else
      {
        v9 = 0LL;
      }
      v4 = v9 == 0LL ? 0x8007000E : 0;
      if ( v9 )
      {
        v17 = 0LL;
        v10 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(v2 + 56);
        if ( v10 )
          v17 = (**v10)(v10, v16);
        v4 = _WorkTask::Initialize(v9, (__int64)v16, a1);
      }
      if ( v4 >= 0 )
      {
        ThreadpoolWork = CreateThreadpoolWork(
                           (PTP_WORK_CALLBACK)CSerialWorkQueue::WorkCallback,
                           v9,
                           (PTP_CALLBACK_ENVIRON)(a1 + 8));
        if ( ThreadpoolWork )
        {
          v4 = 0;
        }
        else
        {
          v12 = GetLastError();
          v4 = (unsigned __int16)v12 | 0x80070000;
          if ( v12 <= 0 )
            v4 = v12;
        }
        if ( v4 >= 0 )
        {
          SubmitThreadpoolWork(ThreadpoolWork);
          v9 = 0LL;
        }
      }
      if ( v9 )
      {
        v13 = (volatile signed __int32 *)v9[1];
        if ( v13 )
        {
          if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
            if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          }
        }
        operator delete(v9, (const struct std::nothrow_t *)0x18);
      }
    }
  }
LABEL_33:
  v14 = *(_QWORD *)(v2 + 56);
  if ( v14 )
  {
    LOBYTE(a2) = v14 != v2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 32LL))(v14, a2);
    *(_QWORD *)(v2 + 56) = 0LL;
  }
  return (unsigned int)v4;
}
