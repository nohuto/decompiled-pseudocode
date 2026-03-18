/*
 * XREFs of LpcpCopyRequestData @ 0x1408BD3BC
 * Callers:
 *     NtReadRequestData @ 0x1408BD820 (NtReadRequestData.c)
 *     NtWriteRequestData @ 0x1408BD9A0 (NtWriteRequestData.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ProbeForWrite @ 0x1405E9480 (ProbeForWrite.c)
 *     AlpcpUnlockMessage @ 0x14060A7C4 (AlpcpUnlockMessage.c)
 *     AlpcpLookupMessage @ 0x14060F060 (AlpcpLookupMessage.c)
 *     MmCopyVirtualMemory @ 0x14061FF30 (MmCopyVirtualMemory.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14064A6D4 (AlpcpProbeAndCaptureMessageHeader.c)
 */

NTSTATUS __fastcall LpcpCopyRequestData(
        char a1,
        void *a2,
        unsigned __int64 a3,
        unsigned int a4,
        char *Address,
        SIZE_T Length,
        __int64 *a7)
{
  __int64 v7; // r12
  struct _OBJECT_HANDLE_INFORMATION *HandleInformation; // r10
  KPROCESSOR_MODE PreviousMode; // r15
  size_t v13; // rdi
  __int64 *v14; // r9
  __int64 *v15; // rsi
  NTSTATUS result; // eax
  __int64 v17; // r9
  signed int v18; // ebx
  ULONG_PTR v19; // rcx
  __int64 v20; // r10
  __int64 v21; // rax
  struct _KTHREAD *CurrentThread; // r8
  ULONG_PTR Process; // rcx
  char *v24; // r9
  ULONG_PTR v25; // r8
  char *v26; // rdx
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  __int64 v28; // [rsp+50h] [rbp-68h] BYREF
  ULONG_PTR v29; // [rsp+58h] [rbp-60h] BYREF
  int v30[4]; // [rsp+60h] [rbp-58h]
  __int128 v31; // [rsp+70h] [rbp-48h] BYREF
  __int128 v32; // [rsp+80h] [rbp-38h]
  __int64 v33; // [rsp+90h] [rbp-28h]

  v7 = a4;
  HandleInformation = 0LL;
  v29 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  *(_OWORD *)v30 = 0LL;
  v28 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v13 = Length;
    if ( a1 )
    {
      if ( Length && ((unsigned __int64)&Address[Length] > 0x7FFFFFFF0000LL || &Address[Length] < Address) )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    else
    {
      ProbeForWrite(Address, Length, 1u);
    }
    AlpcpProbeAndCaptureMessageHeader(a3, (__int64)&v31, 0);
    v15 = a7;
    if ( a7 )
    {
      if ( a7 < v14 )
        v14 = a7;
      *v14 = *v14;
    }
  }
  else
  {
    v31 = *(_OWORD *)a3;
    v32 = *(_OWORD *)(a3 + 16);
    v33 = *(_QWORD *)(a3 + 32);
    v15 = a7;
    v13 = Length;
  }
  if ( !WORD3(v31) )
    return -1073741811;
  Object = HandleInformation;
  result = ObReferenceObjectByHandle(a2, 1u, AlpcPortObjectType, PreviousMode, &Object, HandleInformation);
  if ( result >= 0 )
  {
    v18 = AlpcpLookupMessage((__int64)Object, DWORD2(v32), v33, v17, &v29);
    if ( v18 >= 0 )
    {
      v19 = v29;
      v20 = *(_QWORD *)(v29 + 32);
      if ( v20 )
      {
        v18 = -1073741811;
        v21 = *(__int16 *)(v29 + 246);
        if ( (_WORD)v21 && *(_DWORD *)(v29 + v21 + 240) > (unsigned int)v7 )
        {
          *(_OWORD *)v30 = *(_OWORD *)(v29 + v21 + 16 * v7 + 248);
          v18 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v30, 8)) < v13 ? 0xC000000D : 0;
        }
        if ( v18 >= 0 )
        {
          CurrentThread = KeGetCurrentThread();
          if ( a1 )
          {
            Process = (ULONG_PTR)CurrentThread->ApcState.Process;
            v24 = *(char **)v30;
            v25 = *(_QWORD *)(v20 + 544);
            v26 = Address;
          }
          else
          {
            v25 = (ULONG_PTR)CurrentThread->ApcState.Process;
            v24 = Address;
            v26 = *(char **)v30;
            Process = *(_QWORD *)(v20 + 544);
          }
          v18 = MmCopyVirtualMemory(Process, v26, v25, v24, v13, PreviousMode, &v28);
          if ( v18 >= 0 )
          {
            if ( v15 )
              *v15 = v28;
          }
          v19 = v29;
        }
        AlpcpUnlockMessage(v19);
      }
      else
      {
        AlpcpUnlockMessage(v29);
        v18 = -1073741790;
      }
    }
    HalPutDmaAdapter((PADAPTER_OBJECT)Object);
    return v18;
  }
  return result;
}
