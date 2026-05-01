/*
 * XREFs of ?GetDisplayRegionId@WindowingEnvironmentConfig@@UEAAJPEAUIImmersiveMonitor@@PEAI@Z @ 0x18006EE40
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowingEnvironmentConfig::GetDisplayRegionId(
        WindowingEnvironmentConfig *this,
        struct IImmersiveMonitor *a2,
        unsigned int *a3)
{
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  __int64 *v8; // rdx
  __int64 *v9; // rcx
  __int64 *v10; // rax
  unsigned int v11; // r8d
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v15; // [rsp+40h] [rbp+18h] BYREF
  PSRWLOCK SRWLock; // [rsp+48h] [rbp+20h] BYREF

  if ( !a3 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x129,
      (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
      (const char *)0x80070057LL,
      v13);
    goto LABEL_16;
  }
  *a3 = 0;
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 6) + 56LL))(*((_QWORD *)this + 6), &SRWLock);
  v15 = 0;
  v6 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, unsigned int *))(*(_QWORD *)a2 + 24LL))(a2, &v15);
  v7 = retaddr;
  if ( v6 < 0 )
  {
LABEL_16:
    wil::details::in1diag3::Throw_Hr(
      v7,
      (void *)0x130,
      (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
      (const char *)(unsigned int)v6,
      v13);
    goto LABEL_17;
  }
  v8 = (__int64 *)*((_QWORD *)this + 9);
  v9 = v8;
  v10 = (__int64 *)v8[1];
  if ( *((_BYTE *)v10 + 25) )
    goto LABEL_14;
  v11 = v15;
  do
  {
    if ( *((_DWORD *)v10 + 7) < v11 )
    {
LABEL_17:
      v10 = (__int64 *)v10[2];
    }
    else
    {
      v9 = v10;
      v10 = (__int64 *)*v10;
    }
  }
  while ( !*((_BYTE *)v10 + 25) );
  if ( v9 == v8 || v11 < *((_DWORD *)v9 + 7) )
LABEL_14:
    v9 = v8;
  if ( v9 == v8 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x133,
      (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
      (const char *)0x80070057LL,
      v13);
    __debugbreak();
    JUMPOUT(0x180109846LL);
  }
  *a3 = *((_DWORD *)v9 + 8);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 0LL;
}
