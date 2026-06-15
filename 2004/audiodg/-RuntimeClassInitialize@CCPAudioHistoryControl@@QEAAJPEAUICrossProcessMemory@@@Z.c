/*
 * XREFs of ?RuntimeClassInitialize@CCPAudioHistoryControl@@QEAAJPEAUICrossProcessMemory@@@Z @ 0x1400574C8
 * Callers:
 *     ??$MakeAndInitialize@VCCPAudioHistoryControl@@UICPAudioHistoryControl@@AEAPEAUICrossProcessMemory@@@Details@WRL@Microsoft@@YAJPEAPEAUICPAudioHistoryControl@@AEAPEAUICrossProcessMemory@@@Z @ 0x140056DA0 (--$MakeAndInitialize@VCCPAudioHistoryControl@@UICPAudioHistoryControl@@AEAPEAUICrossProcessMemor.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B180 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x140031844 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CCPAudioHistoryControl::RuntimeClassInitialize(
        CCPAudioHistoryControl *this,
        struct ICrossProcessMemory *a2)
{
  __int64 v2; // rax
  int v4; // eax
  const char *v5; // r9
  unsigned int v6; // edi
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v11; // [rsp+38h] [rbp+10h] BYREF
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  v2 = *(_QWORD *)a2;
  v11 = 0;
  v4 = (*(__int64 (__fastcall **)(struct ICrossProcessMemory *, int *, __int64 *))(v2 + 32))(a2, &v11, &v12);
  v6 = v4;
  if ( v4 >= 0 )
  {
    v8 = v12;
    if ( v12 )
    {
      v9 = *(unsigned int *)(v12 + 352);
      if ( (_DWORD)v9 )
      {
        *((_DWORD *)this + 9) = *(unsigned __int16 *)(v12 + 392);
        *((_DWORD *)this + 10) = *(_DWORD *)(v8 + 384);
        *((_DWORD *)this + 11) = *(_DWORD *)(v8 + 332);
        *((_QWORD *)this + 6) = *(_QWORD *)(v8 + 336);
        *((_QWORD *)this + 2) = v8 + v9;
        result = 0LL;
        *((_QWORD *)this + 3) = v8;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x25,
          (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cphistorybufferreader.cpp",
          (const char *)0x80070057LL);
        return 2147942487LL;
      }
    }
    else
    {
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x20,
               (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cphistorybufferreader.cpp",
               v5);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F,
      (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cphistorybufferreader.cpp",
      (const char *)(unsigned int)v4);
    return v6;
  }
  return result;
}
