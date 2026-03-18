/*
 * XREFs of ?RecordCompositionMode@CCompositionSwapchainStatistics@@UEAA_NU_LUID@@W4BufferCompositionMode@@@Z @ 0x18020AA30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSwapchainStatistics::RecordCompositionMode(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v6; // rax
  char v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h]

  v9 = a2;
  v6 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 8) + 80LL))(*(_QWORD *)(a1 + 8), &v8);
  if ( __PAIR64__(HIDWORD(v9), a2) != *v6 )
    *(_QWORD *)(a1 + 36) = a2;
  if ( a3 )
  {
    if ( a3 == 1 )
      *(_BYTE *)(a1 + 33) = 1;
  }
  else
  {
    *(_BYTE *)(a1 + 32) = 1;
  }
  ++*(_DWORD *)(a1 + 88);
  return 1;
}
