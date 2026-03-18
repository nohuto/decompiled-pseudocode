/*
 * XREFs of AlpcpFormatConnectionRequest @ 0x14062B0F8
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x140628D28 (AlpcpProcessConnectionRequest.c)
 *     NtSecureConnectPort @ 0x14062E280 (NtSecureConnectPort.c)
 * Callees:
 *     AlpcpMapLegacyPortView @ 0x1406101FC (AlpcpMapLegacyPortView.c)
 *     AlpcpValidateConnectionMessage @ 0x14062AF90 (AlpcpValidateConnectionMessage.c)
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x14062B07C (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpAllocateMessage @ 0x14062B79C (AlpcpAllocateMessage.c)
 *     AlpcpUnlockMessage @ 0x140682914 (AlpcpUnlockMessage.c)
 *     AlpcpCaptureAttributes @ 0x140686C00 (AlpcpCaptureAttributes.c)
 *     AlpcpReferenceBlob @ 0x1406888F0 (AlpcpReferenceBlob.c)
 */

__int64 __fastcall AlpcpFormatConnectionRequest(
        ULONG_PTR *a1,
        unsigned int a2,
        __int64 a3,
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
  ULONG_PTR *v15; // rbp
  __int64 result; // rax
  int v17; // ebx
  ULONG_PTR v18; // rdi
  _WORD *v19; // rcx
  unsigned __int16 v20; // ax
  __int16 v21; // dx
  __int64 v22; // rbp
  __int64 v23; // rax
  ULONG_PTR v24; // rcx
  ULONG_PTR v26; // [rsp+80h] [rbp+18h] BYREF

  v10 = a9;
  v11 = a5;
  v26 = 0LL;
  v15 = a1;
  if ( !a4 || (result = AlpcpValidateConnectionMessage(**(_QWORD **)(a3 + 16), a5, a9), (int)result >= 0) )
  {
    result = AlpcpAllocateMessage(&v26, 0LL, 0LL);
    v17 = result;
    if ( (int)result >= 0 )
    {
      v18 = v26;
      if ( v10 )
      {
        v22 = a7;
        if ( a7 )
        {
          v17 = AlpcpMapLegacyPortView((char *)a3, a7, v26 + 104);
          v23 = *(_QWORD *)(v22 + 24);
          v15 = a1;
          *(_QWORD *)(v18 + 272) = v23;
        }
        else
        {
          v15 = a1;
          *(_QWORD *)(v26 + 272) = 0LL;
        }
      }
      else
      {
        v17 = AlpcpCaptureAttributes(a3, a2, a6, v26, v26 + 104);
      }
      if ( v17 < 0 )
        goto LABEL_22;
      v19 = (_WORD *)v26;
      *(_OWORD *)(v26 + 248) = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
      v20 = *v11;
      v19[120] = *v11;
      v19[121] = v20 + 40;
      v21 = v19[122] & 0xFF00 | 0xA;
      v19[122] = v21;
      if ( !KeGetCurrentThread()->PreviousMode )
        v19[122] = v21 | v11[2] & 0x8000;
      v18 = v26;
      if ( *v11 && (v17 = AlpcpSetupMessageDataForDeferredCopy(v26, a4, a2, *v11, v10, a10), v17 < 0) )
      {
LABEL_22:
        AlpcpUnlockMessage(v18);
      }
      else
      {
        if ( v10 )
        {
          v24 = *(_QWORD *)(v18 + 144);
          if ( v24 )
          {
            *a8 = v24;
            AlpcpReferenceBlob(v24);
          }
        }
        *v15 = v18;
      }
      return (unsigned int)v17;
    }
  }
  return result;
}
