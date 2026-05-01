/*
 * XREFs of ?GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@Z @ 0x180023910
 * Callers:
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x1800230B0 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 *     ?GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@Z @ 0x180023910 (-GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@.c)
 * Callees:
 *     ?GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@Z @ 0x180023910 (-GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@.c)
 *     _invalid_parameter_noinfo @ 0x18008DE4A (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x18008DF08 (memset_0.c)
 *     memcpy_0 @ 0x1800EEEC7 (memcpy_0.c)
 */

bool __fastcall wil::details::ThreadFailureCallbackHolder::GetThreadContext(
        struct wil::FailureInfo *a1,
        struct wil::details::ThreadFailureCallbackHolder **a2,
        char *a3,
        unsigned __int64 a4)
{
  bool result; // al
  struct wil::details::ThreadFailureCallbackHolder *v9; // rdx
  char *v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rax
  char *v13; // rbx
  _BYTE *v14; // rbx
  __int64 v15; // rbp
  size_t v16; // rdi
  size_t v17; // rsi

  result = 0;
  *a3 = 0;
  if ( a2 )
  {
    result = wil::details::ThreadFailureCallbackHolder::GetThreadContext(a1, a2[2], a3, a4);
    v9 = a2[4];
    if ( v9 )
    {
      if ( !*(_DWORD *)v9 )
        *(_DWORD *)v9 = _InterlockedIncrement(&wil::details::ThreadFailureCallbackHolder::s_telemetryId);
      if ( !*((_DWORD *)a1 + 18) )
      {
        *(_OWORD *)((char *)a1 + 72) = *(_OWORD *)v9;
        *((_QWORD *)a1 + 11) = *((_QWORD *)v9 + 2);
      }
      v10 = &a3[a4];
      *((_OWORD *)a1 + 6) = *(_OWORD *)v9;
      *((_QWORD *)a1 + 14) = *((_QWORD *)v9 + 2);
      v11 = -1LL;
      v12 = -1LL;
      do
        ++v12;
      while ( a3[v12] );
      v13 = &a3[v12];
      if ( v10 - v13 <= 2 )
        return 1;
      *v13 = 92;
      v14 = v13 + 1;
      v15 = *((_QWORD *)v9 + 1);
      do
        ++v11;
      while ( *(_BYTE *)(v11 + v15) );
      v16 = v11 + 1;
      v17 = v10 - v14;
      if ( v16 >= v17 )
        v16 = v17;
      if ( v16 )
      {
        if ( !v14 )
          goto LABEL_22;
        if ( v15 && v17 >= v16 )
        {
          memcpy_0(v14, *((const void **)v9 + 1), v16);
          goto LABEL_19;
        }
        memset_0(v14, 0, v17);
        if ( v15 )
        {
          if ( v17 >= v16 )
            goto LABEL_19;
          *(_DWORD *)_o__errno() = 34;
        }
        else
        {
LABEL_22:
          *(_DWORD *)_o__errno() = 22;
        }
        invalid_parameter_noinfo();
      }
LABEL_19:
      v14[v16 - 1] = 0;
      return 1;
    }
  }
  return result;
}
