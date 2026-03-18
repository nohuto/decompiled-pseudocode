/*
 * XREFs of AlpcpCaptureAttributes @ 0x1407AB790
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x140665B68 (AlpcpAcceptConnectPort.c)
 *     AlpcpFormatConnectionRequest @ 0x140668084 (AlpcpFormatConnectionRequest.c)
 *     AlpcpSendMessage @ 0x1407A9ED0 (AlpcpSendMessage.c)
 * Callees:
 *     IoThreadToProcess @ 0x1402321F0 (IoThreadToProcess.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PoEnergyEstimationEnabled @ 0x1402F6160 (PoEnergyEstimationEnabled.c)
 *     PsEncodeThreadWorkOnBehalfTicket @ 0x1402F61F8 (PsEncodeThreadWorkOnBehalfTicket.c)
 *     PsGetWorkOnBehalfThread @ 0x1402F6220 (PsGetWorkOnBehalfThread.c)
 *     memset @ 0x140435E00 (memset.c)
 *     AlpcpCaptureHandleAttribute @ 0x14066AD24 (AlpcpCaptureHandleAttribute.c)
 *     AlpcpCaptureDirectAttribute @ 0x1406B5708 (AlpcpCaptureDirectAttribute.c)
 *     AlpcpCaptureDirectAttribute32 @ 0x1406B76F8 (AlpcpCaptureDirectAttribute32.c)
 *     AlpcpCaptureSecurityAttribute32 @ 0x1406B778C (AlpcpCaptureSecurityAttribute32.c)
 *     AlpcpCaptureContextAttribute32 @ 0x1406B8D00 (AlpcpCaptureContextAttribute32.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1406BCB64 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     AlpcpCaptureViewAttribute32 @ 0x1406DA9E8 (AlpcpCaptureViewAttribute32.c)
 *     AlpcpCaptureHandleAttribute32 @ 0x1406E54C4 (AlpcpCaptureHandleAttribute32.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     AlpcpCaptureViewAttribute @ 0x1407A45E4 (AlpcpCaptureViewAttribute.c)
 *     AlpcpReleaseAttributes @ 0x1407A6660 (AlpcpReleaseAttributes.c)
 *     AlpcpCaptureSecurityAttribute @ 0x1407A80A0 (AlpcpCaptureSecurityAttribute.c)
 *     AlpcpCaptureContextAttribute @ 0x1407AC650 (AlpcpCaptureContextAttribute.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpCaptureAttributes(void *a1, int a2, int *a3, __int64 a4, void *a5)
{
  _QWORD *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // r15d
  ULONG v12; // r8d
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // eax
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  ULONG v21; // eax
  ULONG v22; // edx
  int v23; // edi
  int v24; // esi
  __int64 v25; // rdx
  struct _KTHREAD *CurrentThread; // rbx
  PVOID WorkOnBehalfThread; // rax
  void *v28; // rdi
  __int64 v29; // rcx
  __int64 v31; // rdx
  signed int v32; // r15d
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  signed int v37; // r15d
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v45; // [rsp+80h] [rbp+18h] BYREF

  v8 = a5;
  memset(a5, 0, 0x48uLL);
  *v8 = *(_QWORD *)(a4 + 104);
  v8[1] = *(_QWORD *)(a4 + 112);
  if ( !a3 )
    return 0LL;
  if ( !KeGetCurrentThread()->PreviousMode )
  {
    v11 = *a3;
    v23 = a3[1];
    goto LABEL_50;
  }
  v10 = (__int64)a3;
  if ( (unsigned __int64)a3 >= 0x7FFFFFFF0000LL )
    v10 = 0x7FFFFFFF0000LL;
  v11 = *(_DWORD *)v10;
  v12 = 8;
  if ( (a2 & 0xC0000000) == 0x80000000 )
  {
    if ( v11 < 0 )
      v12 = 20;
    v21 = v12 + 16;
    if ( (v11 & 0x40000000) == 0 )
      v21 = v12;
    v22 = v21 + 20;
    if ( (v11 & 0x20000000) == 0 )
      v22 = v21;
    if ( (v11 & 0x10000000) != 0 )
      v22 += 16;
    if ( (v11 & 0x8000000) != 0 )
      v22 += 24;
    v19 = v22 + 8;
    if ( (v11 & 0x2000000) == 0 )
      v19 = v22;
    v12 = 4;
  }
  else
  {
    v13 = 8;
    if ( v11 < 0 )
      v13 = 32;
    v14 = v13 + 32;
    if ( (v11 & 0x40000000) == 0 )
      v14 = v13;
    v15 = v14 + 32;
    if ( (v11 & 0x20000000) == 0 )
      v15 = v14;
    v16 = v15 + 24;
    if ( (v11 & 0x10000000) == 0 )
      v16 = v15;
    v17 = v16 + 24;
    if ( (v11 & 0x8000000) == 0 )
      v17 = v16;
    v18 = v17 + 8;
    if ( (v11 & 0x4000000) == 0 )
      v18 = v17;
    v19 = v18 + 8;
    if ( (v11 & 0x2000000) == 0 )
      v19 = v18;
  }
  v20 = v19 - 1;
  if ( (v11 & 0xA0000000) != 0 )
  {
    v9 = (__int64)a3;
    if ( v20 <= 0xFFE )
    {
      if ( ((v12 - 1) & (unsigned int)a3) == 0 )
      {
        if ( (unsigned __int64)a3 >= 0x7FFFFFFF0000LL )
          v9 = 0x7FFFFFFF0000LL;
        *(_BYTE *)v9 = *(_BYTE *)v9;
        *(_BYTE *)(v9 + (unsigned int)v19 - 1) = *(_BYTE *)(v9 + (unsigned int)v19 - 1);
        goto LABEL_49;
      }
LABEL_48:
      ExRaiseDatatypeMisalignment();
    }
    ProbeForWrite(a3, (unsigned int)v19, v12);
  }
  else
  {
    v9 = (unsigned int)v19;
    if ( v20 > 0xFFFE )
    {
      if ( (_DWORD)v19 )
      {
        if ( ((v12 - 1) & (unsigned int)a3) == 0 )
        {
          if ( (unsigned __int64)a3 + (unsigned int)v19 > 0x7FFFFFFF0000LL
            || (int *)((char *)a3 + (unsigned int)v19) < a3 )
          {
            MEMORY[0x7FFFFFFF0000] = 0;
          }
          goto LABEL_49;
        }
        goto LABEL_48;
      }
    }
    else if ( ((v12 - 1) & (unsigned int)a3) != 0 )
    {
      goto LABEL_48;
    }
  }
LABEL_49:
  v23 = a3[1];
LABEL_50:
  if ( (~v11 & v23) == 0 )
  {
    v24 = 0;
    if ( a2 < 0 )
    {
      if ( v23 >= 0 || (v24 = AlpcpCaptureSecurityAttribute32(a1, (__int64)(a3 + 2), (__int64)v8), v24 >= 0) )
      {
        if ( (v23 & 0x40000000) == 0
          || (v24 = AlpcpCaptureViewAttribute32(
                      (__int64)a1,
                      (int *)((char *)a3 + (((__int64)(v11 & 0xFFFFFFFF80000000uLL) >> 63) & 0xC) + 8)),
              v24 >= 0) )
        {
          if ( (v23 & 0x20000000) == 0 )
            goto LABEL_122;
          v31 = (((int)(v11 & 0xC0000000) >> 31) & 0xC) + 24LL;
          if ( (v11 & 0x40000000) == 0 )
            v31 = (((int)(v11 & 0xC0000000) >> 31) & 0xC) + 8LL;
          v24 = AlpcpCaptureContextAttribute32((__int64)a1, (int *)((char *)a3 + v31), a4, v8);
          if ( v24 >= 0 )
          {
LABEL_122:
            if ( (v23 & 0x10000000) == 0 )
              goto LABEL_123;
            v42 = (((int)(v11 & 0xE0000000) >> 31) & 0xC) + 24LL;
            if ( (v11 & 0x40000000) == 0 )
              v42 = (((int)(v11 & 0xE0000000) >> 31) & 0xC) + 8LL;
            v43 = v42 + 20;
            if ( (v11 & 0x20000000) == 0 )
              v43 = v42;
            v24 = AlpcpCaptureHandleAttribute32((int *)((char *)a3 + v43), (__int64)v8);
            if ( v24 >= 0 )
            {
LABEL_123:
              if ( (v23 & 0x4000000) == 0 )
                goto LABEL_91;
              v32 = v11 & 0xF8000000;
              v33 = ((v32 >> 31) & 0xC) + 24LL;
              if ( (v32 & 0x40000000) == 0 )
                v33 = ((v32 >> 31) & 0xC) + 8LL;
              v34 = v33 + 20;
              if ( (v32 & 0x20000000) == 0 )
                v34 = v33;
              v35 = v34 + 16;
              if ( (v32 & 0x10000000) == 0 )
                v35 = v34;
              v36 = v35 + 24;
              if ( (v32 & 0x8000000) == 0 )
                v36 = v35;
              v24 = AlpcpCaptureDirectAttribute32((unsigned int *)((char *)a3 + v36), (void *)v9, (__int64)v8, a2, v23);
              if ( v24 >= 0 )
              {
LABEL_91:
                if ( (v23 & 0x2000000) != 0 )
                  v24 = AlpcpCaptureWorkOnBehalfAttribute((__int64)v8);
              }
            }
          }
        }
      }
    }
    else if ( v23 >= 0 || (v24 = AlpcpCaptureSecurityAttribute(a1, (__int64)(a3 + 2), (__int64)v8), v24 >= 0) )
    {
      if ( (v23 & 0x40000000) == 0
        || (v24 = AlpcpCaptureViewAttribute(
                    (__int64)a1,
                    (__int128 *)((char *)a3 + (((__int64)(v11 & 0xFFFFFFFF80000000uLL) >> 63) & 0x18) + 8)),
            v24 >= 0) )
      {
        if ( (v23 & 0x20000000) == 0 )
          goto LABEL_124;
        v25 = (((int)(v11 & 0xC0000000) >> 31) & 0x18) + 40LL;
        if ( (v11 & 0x40000000) == 0 )
          v25 = (((int)(v11 & 0xC0000000) >> 31) & 0x18) + 8LL;
        v24 = AlpcpCaptureContextAttribute(a1, (char *)a3 + v25, a4, v8);
        if ( v24 >= 0 )
        {
LABEL_124:
          if ( (v23 & 0x10000000) == 0 || (v24 = AlpcpCaptureHandleAttribute(), v24 >= 0) )
          {
            if ( (v23 & 0x4000000) == 0 )
              goto LABEL_60;
            v37 = v11 & 0xF8000000;
            v38 = ((v37 >> 31) & 0x18) + 40LL;
            if ( (v37 & 0x40000000) == 0 )
              v38 = ((v37 >> 31) & 0x18) + 8LL;
            v39 = v38 + 32;
            if ( (v37 & 0x20000000) == 0 )
              v39 = v38;
            v40 = v39 + 24;
            if ( (v37 & 0x10000000) == 0 )
              v40 = v39;
            v41 = v40 + 24;
            if ( (v37 & 0x8000000) == 0 )
              v41 = v40;
            v24 = AlpcpCaptureDirectAttribute((unsigned __int64 *)((char *)a3 + v41), (void *)v9, (__int64)v8, a2, v23);
            if ( v24 >= 0 )
            {
LABEL_60:
              if ( (v23 & 0x2000000) != 0 )
              {
                v24 = 0;
                LODWORD(a5) = 0;
                v45 = 0LL;
                CurrentThread = KeGetCurrentThread();
                WorkOnBehalfThread = PsGetWorkOnBehalfThread(CurrentThread, &a5);
                v28 = WorkOnBehalfThread;
                if ( WorkOnBehalfThread )
                {
                  v29 = (__int64)WorkOnBehalfThread;
                }
                else
                {
                  if ( !IoThreadToProcess(CurrentThread)[2].Affinity.StaticBitmap[18]
                    && !(unsigned __int8)PoEnergyEstimationEnabled() )
                  {
LABEL_66:
                    if ( (_DWORD)a5 )
                      ObfDereferenceObject(v28);
                    v8[8] = v45;
                    return (unsigned int)v24;
                  }
                  v29 = (__int64)CurrentThread;
                }
                PsEncodeThreadWorkOnBehalfTicket(v29, &v45);
                goto LABEL_66;
              }
            }
          }
        }
      }
    }
    if ( v24 < 0 )
      AlpcpReleaseAttributes(v8);
    return (unsigned int)v24;
  }
  return 3221225485LL;
}
