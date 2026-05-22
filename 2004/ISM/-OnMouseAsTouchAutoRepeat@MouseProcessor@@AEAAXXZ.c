/*
 * XREFs of ?OnMouseAsTouchAutoRepeat@MouseProcessor@@AEAAXXZ @ 0x180135B9C
 * Callers:
 *     _lambda_bee3b73c73505971acff5e8346377b68_::_lambda_invoker_cdecl_ @ 0x1801356A0 (_lambda_bee3b73c73505971acff5e8346377b68_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z @ 0x180023768 (--0-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?Inject@InjectionDevice@@QEAAJPEAUInputInfo@@@Z @ 0x180120DD0 (-Inject@InjectionDevice@@QEAAJPEAUInputInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MouseProcessor::OnMouseAsTouchAutoRepeat(MouseProcessor *this, __int64 a2, __int64 a3, const char *a4)
{
  DWORD TickCount; // edi
  int v6; // eax
  __int64 v7; // r8
  const char *v8; // r9
  struct InputInfo *v9; // rdx
  const struct std::nothrow_t *v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF
  struct InputInfo *v13; // [rsp+38h] [rbp+10h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp+18h] BYREF

  if ( !*((_BYTE *)this + 128) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      457LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
      a4);
    __debugbreak();
  }
  TickCount = GetTickCount();
  QueryPerformanceCounter(&PerformanceCount);
  v12 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, char *))(**((_QWORD **)this + 14) + 32LL))(
         *((_QWORD *)this + 14),
         &v12,
         (char *)&v12 + 4);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      465LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  VariableSizedPayloadStorage<InputInfo>::VariableSizedPayloadStorage<InputInfo>((void **)&v13, 0x168uLL, v7, v8);
  v9 = v13;
  *(_DWORD *)v13 = 8;
  *((_DWORD *)v9 + 2) = TickCount;
  *((LARGE_INTEGER *)v9 + 2) = PerformanceCount;
  *((_DWORD *)v9 + 53) = 1;
  *((_DWORD *)v9 + 54) = 2;
  *((_DWORD *)v9 + 55) = 2;
  *((_DWORD *)v9 + 57) = 155670;
  *((_QWORD *)v9 + 31) = v12;
  *((_QWORD *)v9 + 33) = v12;
  *((_DWORD *)v9 + 70) = *((_DWORD *)v9 + 2);
  *((_QWORD *)v9 + 37) = *((_QWORD *)v9 + 2);
  InjectionDevice::Inject((MouseProcessor *)((char *)this + 136), v9);
  if ( v13 )
    operator delete(v13, v10);
}
