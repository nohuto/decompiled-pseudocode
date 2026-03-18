/*
 * XREFs of NVMeAsyncEventRequestCompletion @ 0x1C00160A0
 * Callers:
 *     <none>
 * Callees:
 *     BuildGetLogPageCommand @ 0x1C0001F64 (BuildGetLogPageCommand.c)
 *     ProcessCommand @ 0x1C0002084 (ProcessCommand.c)
 *     GetNamespaceId @ 0x1C0004344 (GetNamespaceId.c)
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 *     NVMeZeroMemory @ 0x1C00044E0 (NVMeZeroMemory.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000456C (NVMeAllocateDmaBuffer.c)
 *     IsNVMeControllerOnFatalError @ 0x1C000489C (IsNVMeControllerOnFatalError.c)
 *     GetLocalCommand @ 0x1C000A2E8 (GetLocalCommand.c)
 *     NVMeControllerAsyncReset @ 0x1C000BF30 (NVMeControllerAsyncReset.c)
 *     NVMeQueueWorkItem @ 0x1C0013B4C (NVMeQueueWorkItem.c)
 *     NVMeIssueAsyncEventCommand @ 0x1C0018B1C (NVMeIssueAsyncEventCommand.c)
 */

char __fastcall NVMeAsyncEventRequestCompletion(__int64 a1, __int64 a2, int *a3)
{
  __int64 SrbExtension; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r11
  int v11; // edx
  __int64 v12; // r12
  _DWORD *v13; // r15
  int v14; // ecx
  unsigned int v15; // r14d
  char v16; // al
  __int64 v17; // rcx
  const wchar_t *v18; // rax
  char v19; // al
  unsigned __int8 v20; // cl
  int NamespaceId; // ebx
  __int64 v23; // [rsp+58h] [rbp-70h]
  __int64 v24; // [rsp+68h] [rbp-60h]
  __int64 v25; // [rsp+78h] [rbp-50h]
  __int64 v26; // [rsp+88h] [rbp-40h]
  void *v27; // [rsp+E0h] [rbp+18h] BYREF
  __int64 v28; // [rsp+E8h] [rbp+20h] BYREF

  SrbExtension = GetSrbExtension(a2);
  v8 = SrbExtension;
  if ( !v9
    || (LOBYTE(SrbExtension) = *(_BYTE *)(v7 + 3), (_BYTE)SrbExtension == 14)
    || (*(_DWORD *)(a1 + 24) & 0xE) != 0
    || (_BYTE)SrbExtension != 1 )
  {
    *(_BYTE *)(v8 + 4253) |= 8u;
    return SrbExtension;
  }
  SrbExtension = GetLocalCommand(a1, a2);
  v11 = *a3;
  v12 = *((unsigned __int8 *)a3 + 2);
  v13 = (_DWORD *)SrbExtension;
  v14 = *a3 & 7;
  if ( !v14 )
  {
    v15 = 64;
    StorPortExtendedFunction(
      86LL,
      a1,
      0LL,
      (unsigned int)v10,
      9,
      L"NVMe Async Event-Error Status",
      32LL,
      3,
      0,
      0LL,
      L"EventType",
      v11 & 7,
      L"EventInfo",
      *((unsigned __int8 *)a3 + 1),
      L"LogPageId",
      v12,
      L"LogPageSize",
      64LL);
    v16 = *((_BYTE *)a3 + 1);
    if ( v16 == 1 )
    {
      v17 = a1;
LABEL_8:
      NVMeControllerAsyncReset(v17, 0LL, 0LL, 0LL);
      goto LABEL_34;
    }
    if ( v16 == 3 && (unsigned __int8)IsNVMeControllerOnFatalError(a1) )
    {
      v17 = a1;
      if ( !*(_QWORD *)(a1 + 3960) )
        goto LABEL_8;
      NVMeQueueWorkItem(a1, NVMeControllerPanicResetActionWorkItem);
    }
    goto LABEL_34;
  }
  if ( v14 == (_DWORD)v10 )
  {
    v26 = 512LL;
    v15 = 512;
    v25 = *((unsigned __int8 *)a3 + 2);
    v24 = *((unsigned __int8 *)a3 + 1);
    v23 = v11 & 7;
    v18 = L"NVMe Async Event-Health Status";
    goto LABEL_33;
  }
  switch ( v14 )
  {
    case 2:
      v19 = *((_BYTE *)a3 + 1);
      v15 = 512;
      if ( v19 )
      {
        if ( v19 == (_BYTE)v10 )
        {
          StorPortExtendedFunction(
            86LL,
            a1,
            0LL,
            0LL,
            9,
            L"NVMe Async Event-Firmware Activate Start",
            32LL,
            3,
            0,
            0LL,
            L"EventType",
            v11 & 7,
            L"EventInfo",
            v10,
            L"LogPageId",
            v12,
            L"LogPageSize",
            512LL);
          goto LABEL_34;
        }
        if ( v19 != 2 )
        {
LABEL_34:
          v27 = 0LL;
          v28 = 0LL;
          LOBYTE(SrbExtension) = NVMeAllocateDmaBuffer(a1, v15, &v27, &v28);
          if ( v27 )
          {
            if ( v13 )
            {
              if ( *(_BYTE *)(a2 + 2) == 40 )
                v20 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
              else
                v20 = *(_BYTE *)(a2 + 7);
              NamespaceId = GetNamespaceId(a1, v20);
              NVMeZeroMemory(v27, v15);
              BuildGetLogPageCommand(a1, v8, v12, v15, v28, NamespaceId, 0LL, 0);
              *(_BYTE *)(v8 + 4253) |= 4u;
              *(_QWORD *)(v8 + 4224) = NVMeGetLogPageCompletion;
              *(_QWORD *)(v8 + 4200) = v27;
              *(_QWORD *)(v8 + 4208) = v28;
              *(_DWORD *)(v8 + 4240) = v15;
              LOBYTE(SrbExtension) = ProcessCommand(a1, (__int64)(v13 + 2));
            }
            return SrbExtension;
          }
          break;
        }
        v26 = 512LL;
        v25 = *((unsigned __int8 *)a3 + 2);
        v24 = 2LL;
        v23 = v11 & 7;
        v18 = L"NVMe Async Event-Telemetry Log Changed";
      }
      else
      {
        if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 3796), 1u) )
          goto LABEL_34;
        v15 = 4096;
        v26 = 4096LL;
        v25 = *((unsigned __int8 *)a3 + 2);
        v24 = *((unsigned __int8 *)a3 + 1);
        v23 = *a3 & 7LL;
        v18 = L"NVMe Async Event-Namespace Change";
      }
LABEL_33:
      StorPortExtendedFunction(
        86LL,
        a1,
        0LL,
        (unsigned int)v10,
        9,
        v18,
        32LL,
        3,
        0,
        0LL,
        L"EventType",
        v23,
        L"EventInfo",
        v24,
        L"LogPageId",
        v25,
        L"LogPageSize",
        v26);
      goto LABEL_34;
    case 6:
      if ( *((_BYTE *)a3 + 1) == (_BYTE)v10 )
        LOBYTE(SrbExtension) = StorPortExtendedFunction(
                                 86LL,
                                 a1,
                                 0LL,
                                 0LL,
                                 9,
                                 L"NVMe Async Event- Sanitize Completed",
                                 32LL,
                                 3,
                                 0,
                                 0LL,
                                 L"EventType",
                                 v11 & 7,
                                 L"EventInfo",
                                 v10,
                                 L"LogPageId",
                                 v12,
                                 L"LogPageSize",
                                 0LL);
      break;
    case 7:
      if ( *(_QWORD *)(a1 + 3960) && *((_BYTE *)a3 + 1) == (_BYTE)v10 )
      {
        StorPortExtendedFunction(
          86LL,
          a1,
          0LL,
          (unsigned int)v10,
          9,
          L"NVMe Async Event-Device Panic",
          32LL,
          2,
          0,
          0LL,
          L"EventType",
          v11 & 7,
          L"EventInfo",
          v10,
          L"LogPageId",
          v12,
          L"LogPageSize",
          0LL);
        LOBYTE(SrbExtension) = NVMeQueueWorkItem(a1, NVMeControllerPanicResetActionWorkItem);
        break;
      }
      v26 = 512LL;
      v15 = 512;
      v25 = *((unsigned __int8 *)a3 + 2);
      v24 = *((unsigned __int8 *)a3 + 1);
      v23 = v11 & 7;
      v18 = L"NVMe Async Event-Vendor Specific";
      goto LABEL_33;
  }
  if ( v13 )
  {
    *v13 = 0;
    LOBYTE(SrbExtension) = NVMeIssueAsyncEventCommand(a1, v13);
  }
  return SrbExtension;
}
