/*
 * XREFs of PfpPrefetchRequest @ 0x140673EA0
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1406B3034 (PfSetSuperfetchInformation.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     PfPrefetchRequestVerify @ 0x1406738E0 (PfPrefetchRequestVerify.c)
 *     PfpPrefetchRequestPerform @ 0x140674268 (PfpPrefetchRequestPerform.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PfpPrefetchRequest(__int64 a1, KPROCESSOR_MODE a2)
{
  unsigned int *PoolWithTag; // rbx
  unsigned int v5; // eax
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  void *v8; // rcx
  NTSTATUS v9; // edi
  __int64 v10; // rdx
  _DWORD *v11; // r15
  unsigned __int64 v12; // r12
  __int64 v13; // r13
  _DWORD *v14; // r14
  int v16; // [rsp+80h] [rbp+8h]
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF
  PVOID P; // [rsp+98h] [rbp+20h]

  PoolWithTag = 0LL;
  v16 = 0;
  if ( *(_DWORD *)(a1 + 8) == 5 )
  {
    v5 = *(_DWORD *)(a1 + 24);
    if ( v5 < 0x80 )
    {
      v9 = -1073741306;
    }
    else
    {
      PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v5, 0x51526650u);
      P = PoolWithTag;
      if ( PoolWithTag )
      {
        if ( a2 )
        {
          v6 = *(unsigned int *)(a1 + 24);
          if ( (_DWORD)v6 )
          {
            v7 = *(_QWORD *)(a1 + 16);
            if ( (v7 & 7) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v7 + v6 > 0x7FFFFFFF0000LL || v7 + v6 < v7 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
        }
        memmove(PoolWithTag, *(const void **)(a1 + 16), *(unsigned int *)(a1 + 24));
        if ( (unsigned int)PfPrefetchRequestVerify((unsigned __int64)PoolWithTag, *(unsigned int *)(a1 + 24)) )
        {
          v9 = -1073741701;
        }
        else
        {
          v8 = (void *)*((_QWORD *)PoolWithTag + 9);
          if ( v8 )
          {
            Object = 0LL;
            v9 = ObReferenceObjectByHandle(v8, 1u, (POBJECT_TYPE)ExEventObjectType, a2, &Object, 0LL);
            *((_QWORD *)PoolWithTag + 9) = Object;
            if ( v9 < 0 )
              goto LABEL_20;
            v16 = 1;
          }
          v9 = PfpPrefetchRequestPerform(PoolWithTag);
          v10 = PoolWithTag[10];
          v11 = (unsigned int *)((char *)PoolWithTag + v10);
          v12 = (unsigned __int64)&PoolWithTag[12 * PoolWithTag[3]] + v10;
          v13 = *(_QWORD *)(a1 + 16);
          v14 = (_DWORD *)(v10 + v13);
          if ( a2 )
            ProbeForWrite(*(volatile void **)(a1 + 16), *(unsigned int *)(a1 + 24), 8u);
          while ( (unsigned __int64)v11 < v12 )
          {
            *v14 ^= (*v14 ^ *v11) & 8;
            v11 += 12;
            v14 += 12;
          }
          *(_OWORD *)(v13 + 84) = *(_OWORD *)(PoolWithTag + 21);
          *(_OWORD *)(v13 + 100) = *(_OWORD *)(PoolWithTag + 25);
          *(_QWORD *)(v13 + 116) = *(_QWORD *)(PoolWithTag + 29);
          *(_DWORD *)(v13 + 124) = PoolWithTag[31];
        }
      }
      else
      {
        v9 = -1073741670;
      }
    }
  }
  else
  {
    v9 = -1073741821;
  }
LABEL_20:
  if ( v16 )
    HalPutDmaAdapter(*((PADAPTER_OBJECT *)PoolWithTag + 9));
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v9;
}
