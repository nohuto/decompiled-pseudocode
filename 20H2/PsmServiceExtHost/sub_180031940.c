/*
 * XREFs of sub_180031940 @ 0x180031940
 * Callers:
 *     <none>
 * Callees:
 *     sub_180031DB4 @ 0x180031DB4 (sub_180031DB4.c)
 *     j_free @ 0x1800448FC (j_free.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     j_j_free @ 0x1800460D8 (j_j_free.c)
 *     memset @ 0x18004683A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

int __fastcall sub_180031940(__int64 a1, __int64 a2)
{
  DWORD v3; // ebx
  _QWORD **v4; // rdi
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rcx
  int result; // eax
  DWORD v10; // ebx
  void *v11; // r8
  void *v12; // r8
  _BYTE TlsValue[144]; // [rsp+20h] [rbp-A8h] BYREF

  memset(TlsValue, 0, 0x88uLL);
  v3 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v3, TlsValue);
  }
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a2 + 224));
  v4 = (_QWORD **)(a2 + 272);
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == v4 )
      break;
    if ( (_QWORD **)v5[1] != v4 || (v6 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v4 = v6;
    v6[1] = v4;
    *(_OWORD *)v5 = 0LL;
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a2 + 224));
    v7 = v5 - 17;
    sub_180031DB4(a2, v7);
    if ( v7 )
    {
      if ( *((_DWORD *)v7 + 32) > 1u )
      {
        v11 = (void *)v7[14];
        if ( v11 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
        v12 = (void *)v7[15];
        if ( v12 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
      }
      v8 = (_QWORD *)v7[1];
      if ( v8 != v7 + 3 )
        j_j_free(v8);
      j_free(v7);
    }
    RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a2 + 224));
  }
  *(_DWORD *)(a2 + 296) &= ~1u;
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a2 + 224));
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
  v10 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    return TlsSetValue(v10, 0LL);
  }
  return result;
}
