/*
 * XREFs of ?OnLeftSubmixConnected@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140005730
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140004190 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B400 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001CCA8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D6AC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14003DEFC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSubmixImpl::OnLeftSubmixConnected(CSubmixImpl *this, struct ISubmixInternal *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r12
  struct _RTL_CRITICAL_SECTION *v5; // r15
  _BYTE *v6; // rax
  _BYTE *v7; // rsi
  struct ATL::CAtlPlex *v8; // r8
  int v9; // edx
  _QWORD *i; // rcx
  __int64 *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int v15; // edi
  char *v16; // [rsp+20h] [rbp-78h]
  int v17; // [rsp+20h] [rbp-78h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  __int64 v19; // [rsp+A0h] [rbp+8h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  v16 = (char *)this + 176;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  if ( (*(unsigned __int8 (__fastcall **)(struct ISubmixInternal *))(*(_QWORD *)a2 + 136LL))(a2) )
  {
    v15 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x54B,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x8000FFFFLL,
      (int)v16);
  }
  else
  {
    v6 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
    v7 = v6;
    if ( v6 )
    {
      *(_QWORD *)v6 = a2;
      v6[8] = 0;
    }
    else
    {
      v7 = 0LL;
    }
    if ( v7 )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
      v19 = *((_QWORD *)this + 15);
      if ( !*((_QWORD *)this + 19) )
      {
        v8 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)this + 18, *((unsigned int *)this + 40), 0x18uLL);
        if ( !v8 )
          ATL::AtlThrowImpl(-2147024882);
        v9 = *((_DWORD *)this + 40);
        for ( i = (_QWORD *)((char *)v8 + 16 * (v9 - 1) + 8 * (unsigned int)(v9 - 1) + 8); --v9 >= 0; i -= 3 )
        {
          *i = *((_QWORD *)this + 19);
          *((_QWORD *)this + 19) = i;
        }
      }
      v11 = (__int64 *)*((_QWORD *)this + 19);
      v12 = *v11;
      v11[2] = (__int64)v7;
      *((_QWORD *)this + 19) = v12;
      v11[1] = 0LL;
      *v11 = v19;
      ++*((_QWORD *)this + 17);
      v13 = *((_QWORD *)this + 15);
      if ( v13 )
        *(_QWORD *)(v13 + 8) = v11;
      else
        *((_QWORD *)this + 16) = v11;
      *((_QWORD *)this + 15) = v11;
      if ( this != (CSubmixImpl *)-32LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
      operator delete(0LL);
      if ( v16 )
        LeaveCriticalSection(v5);
      return 0LL;
    }
    v15 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x581,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x8007000ELL,
      (int)v16);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x54F,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x8007000ELL,
      v17);
    operator delete(0LL);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return v15;
}
