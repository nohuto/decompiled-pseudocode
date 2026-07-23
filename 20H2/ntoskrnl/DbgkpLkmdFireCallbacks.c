/*
 * XREFs of DbgkpLkmdFireCallbacks @ 0x14088AC74
 * Callers:
 *     DbgkCaptureLiveDump @ 0x14088A77C (DbgkCaptureLiveDump.c)
 * Callees:
 *     ExReferenceCallBackBlock @ 0x140233690 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x140233750 (ExDereferenceCallBackBlock.c)
 *     PsGetProcessSessionIdEx @ 0x1403614B0 (PsGetProcessSessionIdEx.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

void __fastcall DbgkpLkmdFireCallbacks(__int64 a1, int a2, __int64 a3)
{
  char v3; // si
  int ProcessSessionId; // ebx
  _RTL_RUN_ONCE *v8; // rdi
  __int64 v9; // r14
  struct _EX_RUNDOWN_REF *v10; // rbp
  int Ptr; // eax
  int (__fastcall *Count)(__int64 (__fastcall *)(__int64, __int64, __int64), __int64 (__fastcall *)(), __int64, unsigned __int64, __int64); // rbx

  v3 = 1;
  if ( (a2 & 1) != 0 )
  {
    ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
    if ( ProcessSessionId != (unsigned int)PsGetProcessSessionIdEx(a3) || ProcessSessionId == -1 )
      v3 = 0;
  }
  v8 = &stru_140C53DB0;
  v9 = 8LL;
  do
  {
    v10 = ExReferenceCallBackBlock((signed __int64 *)v8);
    if ( v10 )
    {
      Ptr = (int)v8[1].Ptr;
      if ( (Ptr & a2) != 0 && ((Ptr & 4) == 0 || v3) )
      {
        Count = (int (__fastcall *)(__int64 (__fastcall *)(__int64, __int64, __int64), __int64 (__fastcall *)(), __int64, unsigned __int64, __int64))v10[1].Count;
        (*(void (__fastcall **)(__int64))(a1 + 10312))(a1 + 10240);
        if ( Count(DbgkpLkmdSnapData, DbgkpLkmdIsMemoryBlockPresentFromCallback, a1, v10[2].Count, a3) < 0 )
          (*(void (__fastcall **)(__int64))(a1 + 10320))(a1 + 10240);
      }
      ExDereferenceCallBackBlock((signed __int64 *)v8, v10);
    }
    v8 += 2;
    --v9;
  }
  while ( v9 );
}
