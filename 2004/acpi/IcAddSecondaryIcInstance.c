/*
 * XREFs of IcAddSecondaryIcInstance @ 0x1C0097628
 * Callers:
 *     AcpiIrqLibConfigureLibrary @ 0x1C00BD414 (AcpiIrqLibConfigureLibrary.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0032180 (memset.c)
 */

__int64 IcAddSecondaryIcInstance()
{
  __int64 result; // rax
  int v1; // esi
  int v2; // edi
  unsigned int v3; // ebp
  PVOID PoolWithTag; // rax
  __int64 v5; // rbx
  __int64 *v6; // rax
  _OWORD v7[3]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+80h] [rbp+8h] BYREF

  memset(v7, 0, sizeof(v7));
  v8 = 0LL;
  v9 = 56;
  result = ((__int64 (__fastcall *)(__int64, __int64, _OWORD *, int *))HalDispatchTable->HalQuerySystemInformation)(
             28LL,
             56LL,
             v7,
             &v9);
  if ( (int)result >= 0 )
  {
    v1 = DWORD2(v7[0]);
    v2 = DWORD1(v7[0]);
    if ( DWORD2(v7[0]) && DWORD1(v7[0]) )
    {
      if ( (unsigned int)(DWORD2(v7[0]) + DWORD1(v7[0])) < DWORD1(v7[0]) )
        return 3221225621LL;
      if ( (unsigned int)(DWORD2(v7[0]) + DWORD1(v7[0])) >= 0xFFF00000 )
        return 3221225485LL;
      result = 0LL;
    }
    else
    {
      result = 3221225485LL;
    }
    if ( (int)result >= 0 )
    {
      v3 = 200 * (DWORD2(v7[0]) - 1) + 232;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v3, 0x49706341u);
      v5 = (__int64)PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v3);
        *(_DWORD *)(v5 + 16) = v2;
        *(_DWORD *)(v5 + 28) = 4;
        *(_DWORD *)(v5 + 20) = v1 + v2 - 1;
        v6 = (__int64 *)qword_1C0081548;
        if ( *(__int64 **)qword_1C0081548 != &IcListHead )
          __fastfail(3u);
        *(_QWORD *)(v5 + 8) = qword_1C0081548;
        *(_QWORD *)v5 = &IcListHead;
        *v6 = v5;
        result = 0LL;
        qword_1C0081548 = v5;
      }
      else
      {
        return 3221225626LL;
      }
    }
  }
  return result;
}
