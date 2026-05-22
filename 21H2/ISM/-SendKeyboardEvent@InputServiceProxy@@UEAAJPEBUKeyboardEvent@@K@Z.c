/*
 * XREFs of ?SendKeyboardEvent@InputServiceProxy@@UEAAJPEBUKeyboardEvent@@K@Z @ 0x180104030
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?OnKey@SurrogateCharAccumulator@@QEAAXG_NAEA_NQEAGAEAH@Z @ 0x1800B5478 (-OnKey@SurrogateCharAccumulator@@QEAAXG_NAEA_NQEAGAEAH@Z.c)
 */

__int64 __fastcall InputServiceProxy::SendKeyboardEvent(
        InputServiceProxy *this,
        const struct KeyboardEvent *a2,
        unsigned int a3)
{
  bool v6; // di
  DWORD LowPart; // r14d
  __int16 v8; // r12
  bool v9; // zf
  __int16 v10; // ax
  int Shared; // eax
  int v12; // eax
  int v13; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // [rsp+20h] [rbp-79h]
  int v19; // [rsp+28h] [rbp-71h]
  bool v20; // [rsp+70h] [rbp-29h] BYREF
  int v21; // [rsp+74h] [rbp-25h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+78h] [rbp-21h] BYREF
  int v23[2]; // [rsp+80h] [rbp-19h] BYREF
  __int64 v24; // [rsp+88h] [rbp-11h] BYREF
  __int128 v25; // [rsp+90h] [rbp-9h] BYREF
  int v26; // [rsp+A0h] [rbp+7h]
  unsigned __int16 v27[2]; // [rsp+A8h] [rbp+Fh] BYREF
  __int16 v28; // [rsp+ACh] [rbp+13h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v20 = 0;
  *(_DWORD *)v27 = 0;
  v28 = 0;
  PerformanceCount.LowPart = 0;
  v6 = 0;
  v21 = 0;
  LowPart = 0;
  v24 = 0LL;
  v8 = 0;
  *(_QWORD *)v23 = 0LL;
  if ( !a3 )
    goto LABEL_6;
  v9 = (*((_BYTE *)a2 + 8) & 4) == 0;
  v26 = 0;
  v10 = *((_WORD *)a2 + 9);
  v25 = 0LL;
  WORD4(v25) = v10;
  if ( !v9 )
    WORD4(v25) = v10 | 0x8000;
  LOWORD(v25) = *((_WORD *)a2 + 8);
  HIDWORD(v25) = *((_DWORD *)a2 + 8);
  LOWORD(v26) = *((_WORD *)a2 + 11);
  if ( (int)NtUserPostKeyboardInputMessage(a3, &v25, &v21) >= 0 )
  {
    v8 = 2048;
LABEL_6:
    if ( *(_DWORD *)a2 == 2 )
    {
      SurrogateCharAccumulator::OnKey(
        (InputServiceProxy *)((char *)this + 48),
        *((_WORD *)a2 + 10),
        (*((_BYTE *)a2 + 8) & 4) != 0,
        &v20,
        v27,
        (int *)&PerformanceCount);
      v6 = v20;
      LowPart = PerformanceCount.LowPart;
    }
    if ( *((_QWORD *)this + 4) )
    {
      Shared = MsgBlobCreateShared((char *)a2 + 38, 256LL, v23);
      if ( Shared < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          138LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
          (const char *)(unsigned int)Shared);
        __debugbreak();
      }
      if ( *((_DWORD *)a2 + 1) )
      {
        v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 4) + 296LL))(
                *((_QWORD *)this + 4),
                *((unsigned __int16 *)a2 + 11),
                *((unsigned __int16 *)a2 + 4),
                *((unsigned __int16 *)a2 + 8),
                *(_QWORD *)v23);
        if ( v17 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            211LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
            (const char *)(unsigned int)v17);
          __debugbreak();
        }
      }
      else
      {
        PerformanceCount.QuadPart = 0LL;
        QueryPerformanceCounter(&PerformanceCount);
        if ( *(_DWORD *)a2 )
        {
          if ( *(_DWORD *)a2 == 1 )
          {
            v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, int, LARGE_INTEGER))(**((_QWORD **)this + 4) + 48LL))(
                    *((_QWORD *)this + 4),
                    a3,
                    (unsigned __int16)(v8 | *((_WORD *)a2 + 4)),
                    *((unsigned __int16 *)a2 + 9),
                    *(_QWORD *)v23,
                    *((_QWORD *)a2 + 3),
                    v21,
                    PerformanceCount);
            if ( v15 < 0 )
            {
              wil::details::in1diag3::FailFast_Hr(
                retaddr,
                172LL,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
                (const char *)(unsigned int)v15);
              __debugbreak();
            }
          }
          else if ( *(_DWORD *)a2 == 2 && !v6 )
          {
            v12 = MsgStringCreateShared(v27, LowPart, &v24);
            if ( v12 < 0 )
            {
              wil::details::in1diag3::FailFast_Hr(
                retaddr,
                183LL,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
                (const char *)(unsigned int)v12);
              __debugbreak();
            }
            LOWORD(v18) = *((_WORD *)a2 + 9);
            v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, __int64, _WORD, _WORD, _DWORD, _QWORD, int, LARGE_INTEGER))(**((_QWORD **)this + 4) + 64LL))(
                    *((_QWORD *)this + 4),
                    a3,
                    (unsigned __int16)(v8 | *((_WORD *)a2 + 4)),
                    0LL,
                    v18,
                    v24,
                    0,
                    0,
                    *((_DWORD *)a2 + 8),
                    *(_QWORD *)v23,
                    v21,
                    PerformanceCount);
            if ( v13 < 0 )
            {
              wil::details::in1diag3::FailFast_Hr(
                retaddr,
                195LL,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
                (const char *)(unsigned int)v13);
              __debugbreak();
            }
            MsgRelease(v24);
          }
        }
        else
        {
          LOWORD(v19) = *((_WORD *)a2 + 8);
          v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, int, _DWORD, _QWORD, _QWORD, int, LARGE_INTEGER, _WORD))(**((_QWORD **)this + 4) + 32LL))(
                  *((_QWORD *)this + 4),
                  a3,
                  *((unsigned __int16 *)a2 + 11),
                  (unsigned __int16)(v8 | *((_WORD *)a2 + 4)),
                  *((_DWORD *)a2 + 3),
                  v19,
                  *((_DWORD *)a2 + 8),
                  *(_QWORD *)v23,
                  *((_QWORD *)a2 + 3),
                  v21,
                  PerformanceCount,
                  *((_WORD *)a2 + 18));
          if ( v16 < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              159LL,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
              (const char *)(unsigned int)v16);
            JUMPOUT(0x180104404LL);
          }
        }
      }
      MsgRelease(*(_QWORD *)v23);
    }
  }
  return 0LL;
}
