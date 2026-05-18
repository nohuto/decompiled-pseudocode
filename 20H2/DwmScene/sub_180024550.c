/*
 * XREFs of sub_180024550 @ 0x180024550
 * Callers:
 *     <none>
 * Callees:
 *     sub_180024694 @ 0x180024694 (sub_180024694.c)
 *     sub_180024A60 @ 0x180024A60 (sub_180024A60.c)
 *     memset @ 0x18011E09A (memset.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180024550(__int64 a1, unsigned int *a2, _DWORD *a3)
{
  __int64 result; // rax
  int v7; // r8d
  unsigned int v8; // ebx
  int v9; // r8d
  int v10; // r8d
  _QWORD *v11; // rax
  ULONG_PTR v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // [rsp+30h] [rbp-89h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+40h] [rbp-79h] BYREF
  unsigned int v16; // [rsp+E0h] [rbp+27h] BYREF
  void *retaddr; // [rsp+118h] [rbp+5Fh]

  result = sub_180024A60();
  *a2 = 1;
  *a3 = 0;
  v7 = *(_DWORD *)(a1 + 420);
  if ( v7 != 1 )
  {
    v8 = 2;
    v9 = v7 - 2;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 == 1 )
          v8 = 8;
        else
          v8 = 1;
      }
      else
      {
        v8 = 4;
      }
    }
    while ( 1 )
    {
      v16 = 0;
      v11 = (_QWORD *)sub_180024694(a1, &v14);
      v12 = (*(int (__fastcall **)(_QWORD, __int64, _QWORD, unsigned int *))(*(_QWORD *)*v11 + 240LL))(
              *v11,
              10LL,
              v8,
              &v16);
      v13 = v14;
      if ( v14 )
      {
        v14 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      if ( (v12 & 0x80000000) != 0LL )
      {
        memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
        pExceptionRecord.ExceptionCode = -532265403;
        pExceptionRecord.ExceptionAddress = retaddr;
        pExceptionRecord.NumberParameters = 1;
        pExceptionRecord.ExceptionInformation[0] = v12;
        RaiseFailFastException(&pExceptionRecord, 0LL, 0);
      }
      result = v16;
      if ( v16 )
        break;
      if ( !--v8 )
        return result;
    }
    *a2 = v8;
    result = (unsigned int)(result - 1);
    *a3 = result;
  }
  return result;
}
