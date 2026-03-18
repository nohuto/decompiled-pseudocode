/*
 * XREFs of ACPIInterruptDispatchEventDpc @ 0x1C0025E00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00027D0 (WPP_RECORDER_SF_D.c)
 *     AMLIGetNameSpaceObject @ 0x1C000AC5C (AMLIGetNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B8AC (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C001441C (AMLIAsyncEvalObject.c)
 *     ACPIGpeEnableDisableEvents @ 0x1C0026370 (ACPIGpeEnableDisableEvents.c)
 *     ACPIWriteGpeStatusRegister @ 0x1C0026630 (ACPIWriteGpeStatusRegister.c)
 *     ACPIGpeIndexToByteIndex @ 0x1C002671C (ACPIGpeIndexToByteIndex.c)
 *     __security_check_cookie @ 0x1C0031A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0031EC0 (memmove.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C0058DE8 (OSNotifyDeviceWakeByGPEEvent.c)
 */

void __fastcall ACPIInterruptDispatchEventDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  char v4; // r14
  size_t v5; // r15
  __int64 v6; // rdx
  size_t v7; // r8
  char v8; // al
  _BYTE *v9; // rcx
  unsigned int i; // ebx
  unsigned __int8 v11; // r10
  unsigned __int8 v12; // r13
  void *v13; // rcx
  unsigned int v14; // edi
  __int64 v15; // rbx
  unsigned __int8 v16; // si
  unsigned int v17; // r8d
  int v18; // edx
  unsigned __int8 v19; // cl
  unsigned int v20; // edi
  int v21; // eax
  unsigned int v22; // r12d
  int v23; // r12d
  unsigned int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // [rsp+30h] [rbp-71h]
  unsigned __int8 v27; // [rsp+38h] [rbp-69h]
  unsigned int v28; // [rsp+3Ch] [rbp-65h]
  __int64 *v29; // [rsp+40h] [rbp-61h] BYREF
  _OWORD v30[6]; // [rsp+48h] [rbp-59h] BYREF
  _BYTE v31[32]; // [rsp+A8h] [rbp+7h] BYREF

  v4 = 0;
  HIBYTE(v28) = 0;
  v5 = *((unsigned __int16 *)AcpiInformation + 51);
  KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
  AcpiGpeDpcScheduled = 0;
  if ( !AcpiGpeDpcRunning )
  {
    AcpiGpeDpcRunning = 1;
    memset(v30, 0, 32);
    do
    {
      AcpiGpeWorkDone = 0;
      if ( (_DWORD)v5 )
      {
        v6 = 0LL;
        v7 = v5;
        do
        {
          v8 = *((_BYTE *)GpeRunMethod + v6);
          *((_BYTE *)GpeRunMethod + v6) = 0;
          *((_BYTE *)&v30[4] + v6) = v8;
          *((_BYTE *)&v30[2] + v6) = *((_BYTE *)GpeIsLevel + v6);
          v9 = GpeComplete;
          *((_BYTE *)v30 + v6) |= *((_BYTE *)GpeComplete + v6);
          v9[v6++] = 0;
          --v7;
        }
        while ( v7 );
      }
      memmove(v31, GpeWakeEnable, v5);
      KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
      for ( i = 0; i < (unsigned int)v5; v4 = 0 )
      {
        v11 = *((_BYTE *)&v30[2] + i);
        v12 = *((_BYTE *)&v30[4] + i);
        v27 = v11;
        while ( v12 )
        {
          v17 = *((unsigned __int16 *)AcpiInformation + 43);
          v18 = FirstSetLeftBit[v12];
          v19 = FirstSetLeftBit[v12];
          v20 = 1 << v19;
          v12 &= ~(unsigned __int8)(1 << v19);
          if ( i >= v17 + *((unsigned __int16 *)AcpiInformation + 49) )
            KeBugCheckEx(0xA5u, 0x17uLL, v18 + 8 * i, 2uLL, 0LL);
          if ( i >= v17 )
            v21 = *((unsigned __int16 *)AcpiInformation + 50) + 8 * (i - v17);
          else
            v21 = 8 * i;
          v22 = v21 + v18;
          if ( ((unsigned __int8)v20 & *((_BYTE *)GpeHandlerType + i)) != 0 )
          {
            v29 = 0LL;
            LOBYTE(v28) = i;
            BYTE1(v28) = 1 << v19;
            BYTE2(v28) = v11;
            byte_1C0081367 = ((unsigned __int8)v20 & v11) != 0 ? 76 : 69;
            byte_1C0081368 = HexDigit[(unsigned __int64)v22 >> 4];
            byte_1C0081369 = HexDigit[v22 & 0xF];
            if ( (int)AMLIGetNameSpaceObject(byte_1C0081360, 0LL, (unsigned __int64 *)&v29, 0) >= 0 )
            {
              v23 = AMLIAsyncEvalObject(v29, 0LL, 0, 0LL, ACPIInterruptEventCompletion, v28);
              AMLIDereferenceHandleEx((__int64)v29);
              if ( v23 < 0 )
              {
                KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
                *((_BYTE *)GpeRunMethod + i) |= v20;
                if ( !AcpiGpeDpcScheduled )
                {
                  AcpiGpeDpcScheduled = 1;
                  KeSetTimer(&AcpiGpeTimer, (LARGE_INTEGER)-20000000LL, &AcpiGpeDpc);
                }
                KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
              }
              else if ( v23 != 259 )
              {
                v4 |= v20;
              }
            }
          }
          else
          {
            if ( ((unsigned __int8)v20 & v31[i]) != 0 )
            {
              OSNotifyDeviceWakeByGPEEvent(v22, i, v20);
            }
            else
            {
              v24 = *(unsigned __int8 *)((unsigned int)ACPIGpeIndexToByteIndex(v22) + GpeMap);
              if ( v24 >= GpeVectorTableSize )
                goto LABEL_26;
              _mm_lfence();
              v25 = *((_QWORD *)GpeVectorTable + 2 * v24 + 1);
              if ( v25 )
              {
                (*(void (__fastcall **)(__int64, _QWORD))(v25 + 8))(v25, *(_QWORD *)(v25 + 16));
              }
              else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v26) = v22;
                WPP_RECORDER_SF_D(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  2u,
                  0x16u,
                  0xAu,
                  (__int64)&WPP_f0951bc89be93806c5bfad28f4f33887_Traceguids,
                  v26);
              }
            }
            v4 |= v20;
          }
LABEL_26:
          v11 = v27;
        }
        *((_BYTE *)v30 + i++) |= v4;
      }
      KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
    }
    while ( AcpiGpeWorkDone );
    v14 = 0;
    if ( (_DWORD)v5 )
    {
      v15 = 0LL;
      do
      {
        v16 = *((_BYTE *)v30 + v15);
        if ( (v16 & *((_BYTE *)&v30[2] + v15)) != 0 )
          ACPIWriteGpeStatusRegister(v14);
        v13 = GpePending;
        ++v14;
        *((_BYTE *)GpePending + v15) &= ~v16;
        *((_BYTE *)GpeCurEnable + v15) |= v16 & (*((_BYTE *)GpeWakeEnable + v15) | *((_BYTE *)GpeEnable + v15) & ~*((_BYTE *)GpeWakeHandler + v15));
        ++v15;
      }
      while ( v14 < (unsigned int)v5 );
    }
    LOBYTE(v13) = 1;
    AcpiGpeDpcRunning = 0;
    ACPIGpeEnableDisableEvents(v13);
  }
  KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
}
