/*
 * XREFs of ?GetProcessParentDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x180041530
 * Callers:
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x180040754 (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003268 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z @ 0x18003EF0C (-GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800448E8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004492C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045DE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CQueryKnownGameList::GetProcessParentDirectoryByPID(
        CQueryKnownGameList *this,
        __int64 a2,
        char **a3)
{
  DWORD v4; // ebp
  __int64 result; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  char *v9; // rax
  char *v10; // rbx
  int ProcessImageInfoByPID; // edi
  const struct std::nothrow_t *v12; // rdx
  const struct std::nothrow_t *v13; // rdx
  char *v14; // rsi
  unsigned __int64 v15; // rax
  const struct std::nothrow_t *v16; // rdx
  char *v17; // rdi
  __int64 v18; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v20; // [rsp+70h] [rbp+18h] BYREF
  char *v21; // [rsp+78h] [rbp+20h]

  v4 = a2;
  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3DE,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  v7 = *((_QWORD *)this + 94);
  if ( !v7 )
  {
    v20 = 260;
    v10 = 0LL;
    v14 = (char *)operator new[](0x208uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v14 )
    {
      operator delete(0LL, v13);
      v10 = v14;
      v21 = v14;
      ProcessImageInfoByPID = Common::GetProcessImageInfoByPID(v4, 0LL, 0LL, v14, (unsigned __int16 *)&v20);
      if ( ProcessImageInfoByPID == -2147024774 )
      {
        v15 = 2LL * v20;
        if ( !is_mul_ok(v20, 2uLL) )
          v15 = -1LL;
        v17 = (char *)operator new[](v15, (const struct std::nothrow_t *)&std::nothrow);
        if ( v17 != v14 )
        {
          operator delete(v14, v16);
          v10 = v17;
          v21 = v17;
        }
        if ( !v10 )
        {
          v18 = 1019LL;
LABEL_25:
          ProcessImageInfoByPID = -2147024882;
          goto LABEL_26;
        }
        ProcessImageInfoByPID = Common::GetProcessImageInfoByPID(v4, 0LL, 0LL, v10, (unsigned __int16 *)&v20);
      }
      if ( ProcessImageInfoByPID >= 0 )
      {
        *a3 = v10;
        goto LABEL_23;
      }
      v18 = 1023LL;
LABEL_26:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)(unsigned int)ProcessImageInfoByPID);
      goto LABEL_27;
    }
    v18 = 1012LL;
    goto LABEL_25;
  }
  result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, unsigned int *))(*(_QWORD *)v7 + 48LL))(
             v7,
             a2,
             0LL,
             &v20);
  if ( (int)result < 0 )
    return result;
  v8 = 2LL * v20;
  if ( !is_mul_ok(v20, 2uLL) )
    v8 = -1LL;
  v9 = (char *)operator new[](v8, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  v21 = v9;
  if ( v9 )
  {
    ProcessImageInfoByPID = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, unsigned int *))(**((_QWORD **)this + 94)
                                                                                              + 48LL))(
                              *((_QWORD *)this + 94),
                              v4,
                              v9,
                              &v20);
    if ( ProcessImageInfoByPID < 0 )
      goto LABEL_27;
    *a3 = v10;
LABEL_23:
    operator delete(0LL, v12);
    return 0LL;
  }
  ProcessImageInfoByPID = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3E7,
    (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
    (const char *)0x8007000ELL);
LABEL_27:
  operator delete(v10, v12);
  return (unsigned int)ProcessImageInfoByPID;
}
