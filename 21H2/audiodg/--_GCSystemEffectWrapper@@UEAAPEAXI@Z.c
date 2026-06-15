/*
 * XREFs of ??_GCSystemEffectWrapper@@UEAAPEAXI@Z @ 0x140017C10
 * Callers:
 *     <none>
 * Callees:
 *     ?OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ @ 0x14001C240 (-OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x14001CC5C (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x140051278 (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 */

// Hidden C++ exception states: #wind=3
CSystemEffectWrapper *__fastcall CSystemEffectWrapper::`scalar deleting destructor'(
        CSystemEffectWrapper *this,
        char a2)
{
  __int64 v4; // rcx
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  LPVOID v8; // rdi
  LPVOID Context; // [rsp+70h] [rbp+8h] BYREF

  *(_QWORD *)this = &CSystemEffectWrapper::`vftable'{for `INDUnknown'};
  *((_QWORD *)this + 1) = &CSystemEffectWrapper::`vftable'{for `IAudioProcessingObject'};
  *((_QWORD *)this + 2) = &CSystemEffectWrapper::`vftable'{for `IAudioProcessingObjectConfiguration'};
  *((_QWORD *)this + 3) = &CSystemEffectWrapper::`vftable'{for `IAudioProcessingObjectRT'};
  *((_QWORD *)this + 4) = &CSystemEffectWrapper::`vftable'{for `IAudioSystemEffects2'};
  *((_QWORD *)this + 5) = &CSystemEffectWrapper::`vftable'{for `IAPOAuxiliaryInputConfiguration'};
  *((_QWORD *)this + 6) = &CSystemEffectWrapper::`vftable'{for `IAPOAuxiliaryInputRT'};
  *((_QWORD *)this + 7) = &CSystemEffectWrapper::`vftable'{for `IAPOAcousticEchoCancellation'};
  *((_QWORD *)this + 8) = &CSystemEffectWrapper::`vftable'{for `IAudioAmbisonics'};
  *((_QWORD *)this + 9) = &CSystemEffectWrapper::`vftable'{for `IAPOPreferredFormatSupport'};
  *((_QWORD *)this + 10) = &CSystemEffectWrapper::`vftable'{for `ISystemEffectWrapper'};
  v4 = *((_QWORD *)this + 12);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 12) = 0LL;
  }
  CoTaskMemFree(*((LPVOID *)this + 15));
  *((_QWORD *)this + 15) = 0LL;
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      Windows::Media::Devices::SendCommandAsyncOperation::OnCancel(this);
    }
    else
    {
      v8 = 0LL;
      if ( InitOnceExecuteOnce(&gRTHeapInitOnce, (PINIT_ONCE_FN)AERTMemoryInitOnce, 0LL, &Context) )
        v8 = Context;
      if ( g_bSkipRTHeap )
      {
        operator delete(this);
      }
      else
      {
        if ( v8 )
          RtlFreeMemoryBlockLookaside(v8, this);
        if ( (byte_140090581 & 4) != 0 )
          McTemplateU0pqpqqqqqq_EventWriteTransfer(v6, v5, v7, 6, (char)v8, 0, 0, 0);
      }
    }
  }
  return this;
}
