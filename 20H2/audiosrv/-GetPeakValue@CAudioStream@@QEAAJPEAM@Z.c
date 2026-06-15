/*
 * XREFs of ?GetPeakValue@CAudioStream@@QEAAJPEAM@Z @ 0x1800D1E00
 * Callers:
 *     ?GetPeakValue@CAudioSession@@UEAAJPEAM@Z @ 0x1800C8030 (-GetPeakValue@CAudioSession@@UEAAJPEAM@Z.c)
 * Callees:
 *     _freea @ 0x1800470A0 (_freea.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     memset_0 @ 0x18006AD3C (memset_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006D390 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _alloca_probe @ 0x1800740F0 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CB034 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioStream::GetPeakValue(CAudioStream *this, float *a2)
{
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  size_t v6; // rcx
  __int64 v7; // rax
  void *v8; // rsp
  _QWORD *v9; // rbx
  _DWORD *v10; // rax
  unsigned int v11; // esi
  __int64 v12; // rdx
  int v13; // eax
  float *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // [rsp+0h] [rbp-20h] BYREF
  _QWORD Memory[2]; // [rsp+20h] [rbp+0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+38h]

  if ( !a2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42A,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 136);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  Memory[0] = v5;
  *a2 = 0.0;
  if ( !*((_QWORD *)this + 24) )
    goto LABEL_29;
  v6 = (4LL * *((unsigned int *)this + 24) + 16) & -(__int64)(4 * (unsigned __int64)*((unsigned int *)this + 24) < 4 * (unsigned __int64)*((unsigned int *)this + 24) + 16);
  if ( !v6 )
  {
    v9 = 0LL;
    goto LABEL_14;
  }
  if ( v6 <= 0x400 )
  {
    v7 = v6 + 15;
    if ( v6 + 15 < v6 )
      v7 = 0xFFFFFFFFFFFFFF0LL;
    v8 = alloca(v7 & 0xFFFFFFFFFFFFFFF0uLL);
    v9 = Memory;
    if ( &v16 == (__int64 *)-32LL )
      goto LABEL_14;
    LODWORD(Memory[0]) = 52428;
    goto LABEL_12;
  }
  v10 = malloc(v6);
  v9 = v10;
  if ( v10 )
  {
    *v10 = 56797;
LABEL_12:
    v9 += 2;
  }
LABEL_14:
  Memory[1] = v9;
  if ( !v9 )
  {
    v11 = -2147024882;
    v12 = 1075LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)v11);
    if ( v9 )
      freea(v9);
    if ( v5 )
      LeaveCriticalSection(v5);
    return v11;
  }
  memset_0(v9, 0, 4LL * *((unsigned int *)this + 24));
  v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, _QWORD))(**((_QWORD **)this + 24) + 24LL))(
          *((_QWORD *)this + 24),
          v9,
          *((unsigned int *)this + 24));
  v11 = v13;
  if ( v13 >= 0 )
  {
    if ( *((_DWORD *)this + 24) )
    {
      v14 = (float *)v9;
      v15 = *((unsigned int *)this + 24);
      do
      {
        *a2 = fmaxf(*v14++, *a2);
        --v15;
      }
      while ( v15 );
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1078LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)v13);
    if ( v11 != -2147417848 )
    {
      v12 = 1094LL;
      goto LABEL_20;
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)this + 24);
  }
  freea(v9);
LABEL_29:
  if ( v5 )
    LeaveCriticalSection(v5);
  return 0LL;
}
