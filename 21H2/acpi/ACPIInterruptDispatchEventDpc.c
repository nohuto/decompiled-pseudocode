/*
 * XREFs of ACPIInterruptDispatchEventDpc @ 0x1C0057880
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C0C (WPP_RECORDER_SF_D.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C0018260 (AMLIGetNameSpaceObject.c)
 *     AMLIAsyncEvalObject @ 0x1C0019E08 (AMLIAsyncEvalObject.c)
 *     ACPIWriteGpeStatusRegister @ 0x1C001FE48 (ACPIWriteGpeStatusRegister.c)
 *     ACPIGpeEnableDisableEvents @ 0x1C00200A4 (ACPIGpeEnableDisableEvents.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 *     ACPIGpeIndexToByteIndex @ 0x1C0030BE0 (ACPIGpeIndexToByteIndex.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C0059E04 (OSNotifyDeviceWakeByGPEEvent.c)
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
  unsigned int v13; // r8d
  int v14; // edx
  unsigned __int8 v15; // cl
  unsigned int v16; // edi
  int v17; // eax
  unsigned int v18; // r12d
  int v19; // r12d
  unsigned int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned int v23; // edi
  __int64 v24; // rbx
  unsigned __int8 v25; // si
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
          v13 = *((unsigned __int16 *)AcpiInformation + 43);
          v14 = FirstSetLeftBit[v12];
          v15 = FirstSetLeftBit[v12];
          v16 = 1 << v15;
          v12 &= ~(unsigned __int8)(1 << v15);
          if ( i >= v13 + *((unsigned __int16 *)AcpiInformation + 49) )
            KeBugCheckEx(0xA5u, 0x17uLL, v14 + 8 * i, 2uLL, 0LL);
          if ( i >= v13 )
            v17 = *((unsigned __int16 *)AcpiInformation + 50) + 8 * (i - v13);
          else
            v17 = 8 * i;
          v18 = v17 + v14;
          if ( ((unsigned __int8)v16 & *((_BYTE *)GpeHandlerType + i)) != 0 )
          {
            v29 = 0LL;
            LOBYTE(v28) = i;
            BYTE1(v28) = 1 << v15;
            BYTE2(v28) = v11;
            byte_1C00805BF = ((unsigned __int8)v16 & v11) != 0 ? 76 : 69;
            byte_1C00805C0 = HexDigit[(unsigned __int64)v18 >> 4];
            byte_1C00805C1 = HexDigit[v18 & 0xF];
            if ( (int)AMLIGetNameSpaceObject(byte_1C00805B8, 0LL, &v29, 0) >= 0 )
            {
              v19 = AMLIAsyncEvalObject(v29, 0LL, 0, 0LL, ACPIInterruptEventCompletion, v28);
              AMLIDereferenceHandleEx((volatile signed __int32 *)v29);
              if ( v19 < 0 )
              {
                KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
                *((_BYTE *)GpeRunMethod + i) |= v16;
                if ( !AcpiGpeDpcScheduled )
                {
                  AcpiGpeDpcScheduled = 1;
                  KeSetTimer(&AcpiGpeTimer, (LARGE_INTEGER)-20000000LL, &AcpiGpeDpc);
                }
                KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
              }
              else if ( v19 != 259 )
              {
                v4 |= v16;
              }
            }
          }
          else
          {
            if ( ((unsigned __int8)v16 & v31[i]) != 0 )
            {
              OSNotifyDeviceWakeByGPEEvent(v18, i, v16);
            }
            else
            {
              v20 = *(unsigned __int8 *)((unsigned int)ACPIGpeIndexToByteIndex(v18) + GpeMap);
              if ( v20 >= GpeVectorTableSize )
                goto LABEL_28;
              _mm_lfence();
              v21 = *((_QWORD *)GpeVectorTable + 2 * v20 + 1);
              if ( v21 )
              {
                (*(void (__fastcall **)(__int64, _QWORD))(v21 + 8))(v21, *(_QWORD *)(v21 + 16));
              }
              else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v26) = v18;
                WPP_RECORDER_SF_D(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  2u,
                  0x16u,
                  0xAu,
                  (__int64)&WPP_f0951bc89be93806c5bfad28f4f33887_Traceguids,
                  v26);
              }
            }
            v4 |= v16;
          }
LABEL_28:
          v11 = v27;
        }
        *((_BYTE *)v30 + i++) |= v4;
      }
      KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
    }
    while ( AcpiGpeWorkDone );
    v23 = 0;
    if ( (_DWORD)v5 )
    {
      v24 = 0LL;
      do
      {
        v25 = *((_BYTE *)v30 + v24);
        if ( (v25 & *((_BYTE *)&v30[2] + v24)) != 0 )
          ACPIWriteGpeStatusRegister(v23, v25 & *((_BYTE *)&v30[2] + v24));
        ++v23;
        *((_BYTE *)GpePending + v24) &= ~v25;
        LOBYTE(v22) = v25 & (*((_BYTE *)GpeWakeEnable + v24) | *((_BYTE *)GpeEnable + v24) & ~*((_BYTE *)GpeWakeHandler
                                                                                              + v24));
        *((_BYTE *)GpeCurEnable + v24++) |= v22;
      }
      while ( v23 < (unsigned int)v5 );
    }
    AcpiGpeDpcRunning = 0;
    ACPIGpeEnableDisableEvents(1, v22);
  }
  KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
}
