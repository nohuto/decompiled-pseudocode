/*
 * XREFs of RaidSetLedStateByNpem @ 0x1C0044B10
 * Callers:
 *     RaidAdapterSetLedState @ 0x1C002E8B4 (RaidAdapterSetLedState.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D730 (_guard_dispatch_icall_nop.c)
 *     RaidGetNpemControlInterface @ 0x1C00441B4 (RaidGetNpemControlInterface.c)
 */

__int64 __fastcall RaidSetLedStateByNpem(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdi
  unsigned int v5; // eax
  int i; // ebx
  ULONG v7; // ebx
  bool v8; // cc
  __int64 v9; // r8
  int v10; // eax
  int v11; // [rsp+50h] [rbp+18h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0LL;
  v11 = 0;
  result = RaidGetNpemControlInterface(a1, &v12);
  if ( (int)result >= 0 )
  {
    v4 = v12;
    result = (*(__int64 (__fastcall **)(_QWORD, int *))(v12 + 40))(*(_QWORD *)(v12 + 8), &v11);
    if ( (int)result >= 0 )
    {
      v5 = *(_DWORD *)(a2 + 8);
      for ( i = 0; ; ++i )
      {
        v5 >>= 1;
        if ( !v5 )
          break;
      }
      v7 = i + 2;
      v8 = v7 <= RtlNumberOfSetBitsUlongPtr(0x3FFuLL);
      v10 = v11;
      if ( !v8 )
        v7 = 0;
      if ( (v11 & 1) != 0 && _bittest(&v10, v7) )
      {
        LOBYTE(v9) = *(_BYTE *)(a2 + 12);
        return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(v4 + 48))(*(_QWORD *)(v4 + 8), v7, v9);
      }
      else
      {
        return 3221225659LL;
      }
    }
  }
  return result;
}
