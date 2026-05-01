/*
 * XREFs of ?GetProcessParentDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x1800416B8
 * Callers:
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x180040784 (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003268 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z @ 0x18003EF0C (-GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180044AD8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044B1C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CQueryKnownGameList::GetProcessParentDirectoryByPID(
        struct _RTL_CRITICAL_SECTION *this,
        DWORD a2,
        char **a3)
{
  ULONG_PTR v7; // rbx
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  ULONG_PTR SpinCount; // rax
  int ProcessImageInfoByPID; // esi
  unsigned __int64 v11; // rax
  char *v12; // rax
  char *v13; // rdi
  const struct std::nothrow_t *v14; // rdx
  const struct std::nothrow_t *v15; // rdx
  char *v16; // r14
  unsigned __int64 v17; // rax
  const struct std::nothrow_t *v18; // rdx
  char *v19; // rsi
  __int64 v20; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  unsigned int v22; // [rsp+80h] [rbp+40h] BYREF
  ULONG_PTR v23; // [rsp+88h] [rbp+48h]

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F4,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  v7 = 0LL;
  v23 = 0LL;
  v8 = this + 19;
  EnterCriticalSection(this + 19);
  SpinCount = this[18].SpinCount;
  if ( SpinCount )
  {
    v7 = this[18].SpinCount;
    (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)SpinCount + 8LL))(v7);
    v23 = v7;
  }
  if ( v8 )
    LeaveCriticalSection(v8);
  if ( !v7 )
  {
    v22 = 260;
    v13 = 0LL;
    v16 = (char *)operator new[](0x208uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v16 )
    {
      operator delete(0LL, v15);
      v13 = v16;
      ProcessImageInfoByPID = Common::GetProcessImageInfoByPID(a2, 0LL, 0LL, v16, (unsigned __int16 *)&v22);
      if ( ProcessImageInfoByPID == -2147024774 )
      {
        v17 = 2LL * v22;
        if ( !is_mul_ok(v22, 2uLL) )
          v17 = -1LL;
        v19 = (char *)operator new[](v17, (const struct std::nothrow_t *)&std::nothrow);
        if ( v19 != v16 )
        {
          operator delete(v16, v18);
          v13 = v19;
        }
        if ( !v13 )
        {
          v20 = 1048LL;
LABEL_29:
          ProcessImageInfoByPID = -2147024882;
          goto LABEL_30;
        }
        ProcessImageInfoByPID = Common::GetProcessImageInfoByPID(a2, 0LL, 0LL, v13, (unsigned __int16 *)&v22);
      }
      if ( ProcessImageInfoByPID >= 0 )
      {
        *a3 = v13;
LABEL_27:
        operator delete(0LL, v14);
        ProcessImageInfoByPID = 0;
        goto LABEL_32;
      }
      v20 = 1052LL;
LABEL_30:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)(unsigned int)ProcessImageInfoByPID);
      goto LABEL_31;
    }
    v20 = 1041LL;
    goto LABEL_29;
  }
  ProcessImageInfoByPID = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _QWORD, unsigned int *))(*(_QWORD *)v7 + 48LL))(
                            v7,
                            a2,
                            0LL,
                            &v22);
  if ( ProcessImageInfoByPID >= 0 )
  {
    v11 = 2LL * v22;
    if ( !is_mul_ok(v22, 2uLL) )
      v11 = -1LL;
    v12 = (char *)operator new[](v11, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v12;
    if ( !v12 )
    {
      ProcessImageInfoByPID = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x404,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8007000ELL);
LABEL_31:
      operator delete(v13, v14);
      goto LABEL_32;
    }
    ProcessImageInfoByPID = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, char *, unsigned int *))(*(_QWORD *)v7 + 48LL))(
                              v7,
                              a2,
                              v12,
                              &v22);
    if ( ProcessImageInfoByPID < 0 )
      goto LABEL_31;
    *a3 = v13;
    goto LABEL_27;
  }
LABEL_32:
  if ( v7 )
    (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)ProcessImageInfoByPID;
}
