/*
 * XREFs of ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x1400309DC
 * Callers:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x14001B2E4 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z.c)
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBVResultException@2@PEAG_K@Z @ 0x140031040 (-MaybeGetExceptionString@details@wil@@YAXAEBVResultException@2@PEAG_K@Z.c)
 *     ?what@ResultException@wil@@UEBAPEBDXZ @ 0x1400321A0 (-what@ResultException@wil@@UEBAPEBDXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CC60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     ?LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ @ 0x140030FF0 (-LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ.c)
 */

__int64 __fastcall wil::GetFailureLogString(
        wil *this,
        unsigned __int16 *a2,
        __int64 a3,
        const struct wil::FailureInfo *a4)
{
  void (__fastcall *v7)(__int64, wil *, unsigned __int16 *, const struct wil::FailureInfo *); // rax
  const char *v8; // rsi
  DWORD v9; // r8d
  unsigned __int16 *v10; // rdi
  __int64 v11; // rax
  const unsigned __int16 *v12; // r9
  unsigned __int16 *v13; // rax
  const unsigned __int16 *v14; // r9
  wil::details *v15; // rbp
  DWORD CurrentThreadId; // eax
  wil::details *v17; // rax
  const unsigned __int16 *v18; // r9
  unsigned __int16 *v19; // rax
  const unsigned __int16 *v20; // r9
  const unsigned __int16 *v21; // r9
  const unsigned __int16 *v22; // r9
  LPWSTR lpBuffer; // [rsp+20h] [rbp-258h]
  LPWSTR lpBuffera; // [rsp+20h] [rbp-258h]
  DWORD nSize[2]; // [rsp+28h] [rbp-250h]
  va_list *Arguments; // [rsp+30h] [rbp-248h]
  WCHAR Buffer[256]; // [rsp+40h] [rbp-238h] BYREF

  if ( a2 )
  {
    if ( this )
    {
      v7 = (void (__fastcall *)(__int64, wil *, unsigned __int16 *, const struct wil::FailureInfo *))g_pfnResultLoggingCallback;
      *(_WORD *)this = 0;
      if ( !v7 || !wil::details::g_resultMessageCallbackSet || (v7(a3, this, a2, a4), !*(_WORD *)this) )
      {
        v8 = (const char *)&word_1400708D9;
        if ( *(_DWORD *)a3 )
        {
          switch ( *(_DWORD *)a3 )
          {
            case 1:
              v8 = "ReturnHr";
              break;
            case 2:
              v8 = "LogHr";
              break;
            case 3:
              v8 = "FailFast";
              break;
          }
        }
        else
        {
          v8 = "Exception";
        }
        v9 = *(_DWORD *)(a3 + 4);
        Buffer[0] = 0;
        FormatMessageW(0x1200u, 0LL, v9, 0x400u, Buffer, 0x100u, 0LL);
        v10 = (unsigned __int16 *)((char *)this + 2 * (_QWORD)a2);
        v11 = *(_QWORD *)(a3 + 128);
        v12 = *(const unsigned __int16 **)(a3 + 120);
        if ( *(_QWORD *)(a3 + 48) )
        {
          LODWORD(lpBuffer) = *(_DWORD *)(a3 + 56);
          v13 = wil::details::LogStringPrintf(
                  this,
                  v10,
                  L"%hs(%u)\\%hs!%p: ",
                  *(const unsigned __int16 **)(a3 + 48),
                  lpBuffer,
                  v12,
                  v11);
        }
        else
        {
          v13 = wil::details::LogStringPrintf(this, v10, L"%hs!%p: ", v12, v11);
        }
        v14 = *(const unsigned __int16 **)(a3 + 136);
        v15 = (wil::details *)v13;
        if ( v14 )
          v15 = (wil::details *)wil::details::LogStringPrintf((wil::details *)v13, v10, L"(caller: %p) ", v14);
        CurrentThreadId = GetCurrentThreadId();
        LODWORD(Arguments) = *(_DWORD *)(a3 + 4);
        nSize[0] = CurrentThreadId;
        LODWORD(lpBuffera) = *(_DWORD *)(a3 + 60);
        v17 = (wil::details *)wil::details::LogStringPrintf(
                                v15,
                                v10,
                                L"%hs(%d) tid(%x) %08X %ws",
                                (const unsigned __int16 *)v8,
                                lpBuffera,
                                *(_QWORD *)nSize,
                                Arguments,
                                Buffer);
        if ( *(_QWORD *)(a3 + 16) || *(_QWORD *)(a3 + 64) || *(_QWORD *)(a3 + 40) )
        {
          v19 = wil::details::LogStringPrintf(v17, v10, L"    ", v18);
          v20 = *(const unsigned __int16 **)(a3 + 16);
          if ( v20 )
            v19 = wil::details::LogStringPrintf((wil::details *)v19, v10, L"Msg:[%ws] ", v20);
          v21 = *(const unsigned __int16 **)(a3 + 64);
          if ( v21 )
            v19 = wil::details::LogStringPrintf((wil::details *)v19, v10, L"CallContext:[%hs] ", v21);
          v22 = *(const unsigned __int16 **)(a3 + 40);
          if ( *(_QWORD *)(a3 + 32) )
          {
            wil::details::LogStringPrintf((wil::details *)v19, v10, L"[%hs(%hs)]\n", v22, *(_QWORD *)(a3 + 32));
          }
          else if ( v22 )
          {
            wil::details::LogStringPrintf((wil::details *)v19, v10, L"[%hs]\n", v22);
          }
          else
          {
            wil::details::LogStringPrintf((wil::details *)v19, v10, L"\n", 0LL);
          }
        }
      }
    }
  }
  return 0LL;
}
