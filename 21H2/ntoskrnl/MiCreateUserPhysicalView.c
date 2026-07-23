/*
 * XREFs of MiCreateUserPhysicalView @ 0x1408D5D08
 * Callers:
 *     MiReserveUserMemory @ 0x1407018B0 (MiReserveUserMemory.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiInsertVadEvent @ 0x14027CF2C (MiInsertVadEvent.c)
 *     MiSectionControlArea @ 0x14031FFB0 (MiSectionControlArea.c)
 *     MiCheckPurgeAndUpMapCount @ 0x140320D00 (MiCheckPurgeAndUpMapCount.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     ExGetCallBackBlockRoutine @ 0x140381CB0 (ExGetCallBackBlockRoutine.c)
 *     MiGetAweInfoPartition @ 0x14054C5D4 (MiGetAweInfoPartition.c)
 *     MiReferenceAweHandle @ 0x14054DE8C (MiReferenceAweHandle.c)
 *     MiCreateProcessDefaultAweInfo @ 0x1408D5C20 (MiCreateProcessDefaultAweInfo.c)
 */

int __fastcall MiCreateUserPhysicalView(__int64 a1, int a2, __int64 a3, _WORD *a4)
{
  PVOID v4; // rbx
  void *v6; // rcx
  unsigned __int64 v7; // r15
  __int64 v8; // rsi
  char v11; // r10
  unsigned int v12; // r9d
  KPROCESSOR_MODE PreviousMode; // r8
  ACCESS_MASK v14; // edx
  int result; // eax
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 *Pool; // rax
  __int64 *v23; // rdi
  int v24; // eax
  unsigned int v25; // eax
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF
  __int64 v27; // [rsp+38h] [rbp-30h] BYREF
  PVOID v28; // [rsp+80h] [rbp+18h] BYREF

  Object = 0LL;
  v4 = 0LL;
  v27 = 0LL;
  v6 = *(void **)(a3 + 112);
  v7 = 0LL;
  v8 = *(_QWORD *)(a3 + 120);
  v28 = 0LL;
  v11 = a2;
  if ( v6 )
  {
    v12 = (a2 & 4 | 8u) >> 1;
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    v14 = v12 | 8;
    if ( (v11 & 2) == 0 )
      v14 = v12;
    result = MiReferenceAweHandle(v6, v14, PreviousMode, &Object, &v28);
    if ( result >= 0 )
    {
      v4 = v28;
      if ( !v28 )
      {
        if ( Object )
          ObfDereferenceObjectWithTag(Object, 0x68506D4Du);
        return -1073741816;
      }
      v7 = MiSectionControlArea((__int64)v28);
      v16 = *(_QWORD *)(v7 + 8);
      v17 = ExGetCallBackBlockRoutine(v16);
      v18 = v17;
      if ( (v8 & 2) != 0 )
        goto LABEL_10;
      if ( (v8 & 8) != 0 )
      {
        v19 = 512LL;
        if ( v17 != 16 )
        {
LABEL_10:
          ObfDereferenceObjectWithTag(v4, 0x68506D4Du);
          return -1073741811;
        }
      }
      else
      {
        v19 = v17;
      }
      v20 = v19 << 12;
      if ( *(_QWORD *)(a3 + 16) < (unsigned __int64)(v19 << 12) )
        *(_QWORD *)(a3 + 16) = v20;
      v21 = *(_QWORD *)(a3 + 24);
      if ( (v21 & (v20 - 1)) != 0
        || *(_QWORD *)(a3 + 8) - *(_QWORD *)a3 + 1LL == v21 && (*(_QWORD *)a3 & (v20 - 1)) != 0 )
      {
        goto LABEL_10;
      }
      goto LABEL_27;
    }
  }
  else
  {
    if ( (v8 & 0xA) != 0 )
      return -1073741811;
    if ( a2 != 4 )
      return -1073741755;
    result = MiCreateProcessDefaultAweInfo(*(_BYTE *)(a3 + 104), &v27);
    if ( result >= 0 )
    {
      v16 = v27;
      v18 = 1LL;
      v19 = 1LL;
LABEL_27:
      Pool = (__int64 *)MiAllocatePool(64, 0x48uLL, 0x76706D4Du);
      v23 = Pool;
      if ( Pool )
      {
        *((_DWORD *)Pool + 16) = 256;
        Pool[4] = a1;
        Pool[5] = v16;
        *a4 = *(_WORD *)MiGetAweInfoPartition(v16);
        if ( v4 )
        {
          MiCheckPurgeAndUpMapCount(v7);
          v23[6] = v7;
          ObfDereferenceObjectWithTag(v4, 0x68506D4Du);
        }
        if ( v19 != v18 )
        {
          v24 = *((_DWORD *)v23 + 12);
          if ( v19 == 16 )
            v25 = v24 & 0xFFFFFFFC | 1;
          else
            v25 = v24 & 0xFFFFFFFC | 2;
          *((_DWORD *)v23 + 12) = v25;
        }
        v23[3] = 0LL;
        MiInsertVadEvent(a1, v23, 0);
        return 0;
      }
      else
      {
        if ( v4 )
          ObfDereferenceObjectWithTag(v4, 0x68506D4Du);
        return -1073741670;
      }
    }
  }
  return result;
}
