/*
 * XREFs of AlpcpFormatConnectionRequest @ 0x1406CFA9C
 * Callers:
 *     NtSecureConnectPort @ 0x1406CD3F0 (NtSecureConnectPort.c)
 *     AlpcpProcessConnectionRequest @ 0x1406CE428 (AlpcpProcessConnectionRequest.c)
 * Callees:
 *     AlpcpReferenceBlob @ 0x140655834 (AlpcpReferenceBlob.c)
 *     AlpcpMapLegacyPortView @ 0x1406A9428 (AlpcpMapLegacyPortView.c)
 *     AlpcpAllocateMessage @ 0x1406D0144 (AlpcpAllocateMessage.c)
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x1406D06E8 (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpValidateConnectionMessage @ 0x1406D12F4 (AlpcpValidateConnectionMessage.c)
 *     AlpcpCaptureAttributes @ 0x1406D59F0 (AlpcpCaptureAttributes.c)
 *     AlpcpUnlockMessage @ 0x1406D962C (AlpcpUnlockMessage.c)
 */

__int64 __fastcall AlpcpFormatConnectionRequest(
        ULONG_PTR *a1,
        unsigned int a2,
        _QWORD *a3,
        __int64 a4,
        unsigned __int16 *a5,
        __int64 a6,
        __int64 a7,
        ULONG_PTR *a8,
        char a9,
        char a10)
{
  char v10; // si
  unsigned __int16 *v11; // r14
  int v12; // r12d
  void *v13; // r15
  ULONG_PTR *v15; // rbp
  __int64 result; // rax
  int v17; // ebx
  ULONG_PTR v18; // rdi
  _WORD *v19; // rcx
  __int16 v20; // ax
  __int16 v21; // dx
  int v22; // r9d
  _QWORD *v23; // rax
  __int64 v24; // rbp
  __int64 v25; // rax
  ULONG_PTR v26; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp+18h] BYREF

  v10 = a9;
  v11 = a5;
  v12 = a4;
  BugCheckParameter2 = 0LL;
  v13 = a3;
  v15 = a1;
  if ( !a4
    || (v23 = (_QWORD *)a3[2], LOBYTE(a3) = a9, result = AlpcpValidateConnectionMessage(*v23, a5, a3), (int)result >= 0) )
  {
    result = AlpcpAllocateMessage(&BugCheckParameter2, 0LL, 0LL);
    v17 = result;
    if ( (int)result >= 0 )
    {
      v18 = BugCheckParameter2;
      if ( v10 )
      {
        v24 = a7;
        if ( a7 )
        {
          v17 = AlpcpMapLegacyPortView(v13, a7, BugCheckParameter2 + 104);
          v25 = *(_QWORD *)(v24 + 24);
          v15 = a1;
          *(_QWORD *)(v18 + 272) = v25;
        }
        else
        {
          v15 = a1;
          *(_QWORD *)(BugCheckParameter2 + 272) = 0LL;
        }
      }
      else
      {
        v17 = AlpcpCaptureAttributes(v13, a2, a6, BugCheckParameter2, BugCheckParameter2 + 104);
      }
      if ( v17 < 0 )
        goto LABEL_22;
      v19 = (_WORD *)BugCheckParameter2;
      *(_OWORD *)(BugCheckParameter2 + 248) = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
      v20 = *v11;
      v19[120] = *v11;
      v19[121] = v20 + 40;
      v21 = v19[122] & 0xFF00 | 0xA;
      v19[122] = v21;
      if ( !KeGetCurrentThread()->PreviousMode )
        v19[122] = v21 | v11[2] & 0x8000;
      v22 = *v11;
      v18 = BugCheckParameter2;
      if ( (_WORD)v22
        && (v17 = AlpcpSetupMessageDataForDeferredCopy(BugCheckParameter2, v12, a2, v22, v10, a10), v17 < 0) )
      {
LABEL_22:
        AlpcpUnlockMessage(v18);
      }
      else
      {
        if ( v10 )
        {
          v26 = *(_QWORD *)(v18 + 144);
          if ( v26 )
          {
            *a8 = v26;
            AlpcpReferenceBlob(v26);
          }
        }
        *v15 = v18;
      }
      return (unsigned int)v17;
    }
  }
  return result;
}
