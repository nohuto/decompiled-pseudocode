/*
 * XREFs of ?Allocate@CCrossProcessMemoryManager@@UEAAJIPEAPEAUICrossProcessMemory@@@Z @ 0x140011C70
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@VCCrossProcessServerMemory@@UICrossProcessMemory@@PEAXAEAI@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessMemory@@$$QEAPEAXAEAI@Z @ 0x140011410 (--$MakeAndInitialize@VCCrossProcessServerMemory@@UICrossProcessMemory@@PEAXAEAI@Details@WRL@Micr.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B180 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x140031844 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CCrossProcessMemoryManager::Allocate(
        CCrossProcessMemoryManager *this,
        DWORD a2,
        struct ICrossProcessMemory **a3)
{
  char *FileMappingW; // rdi
  const char *v5; // r9
  int v6; // eax
  struct ICrossProcessMemory *v7; // rbx
  unsigned int LastError; // esi
  DWORD dwMaximumSizeLow; // [rsp+20h] [rbp-28h]
  DWORD dwMaximumSizeLowa; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD v13; // [rsp+58h] [rbp+10h] BYREF
  struct ICrossProcessMemory *v14; // [rsp+60h] [rbp+18h] BYREF
  char *v15; // [rsp+68h] [rbp+20h] BYREF

  v13 = a2;
  if ( a3 )
  {
    *a3 = 0LL;
    FileMappingW = (char *)CreateFileMappingW(
                             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                             (LPSECURITY_ATTRIBUTES)((char *)this + 16),
                             4u,
                             0,
                             a2,
                             0LL);
    if ( ((unsigned __int64)(FileMappingW + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      v14 = 0LL;
      v15 = FileMappingW;
      v6 = Microsoft::WRL::Details::MakeAndInitialize<CCrossProcessServerMemory,ICrossProcessMemory,void *,unsigned int &>(
             &v14,
             (__int64 *)&v15,
             (int *)&v13);
      v7 = v14;
      LastError = v6;
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x39,
          (unsigned int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpmemorymanager.cpp",
          (const char *)(unsigned int)v6,
          dwMaximumSizeLowa);
      }
      else
      {
        FileMappingW = 0LL;
        if ( v14 )
        {
          *a3 = v14;
          (*(void (__fastcall **)(struct ICrossProcessMemory *))(*(_QWORD *)v7 + 8LL))(v7);
        }
        else
        {
          *a3 = 0LL;
        }
        LastError = 0;
      }
      if ( v7 )
        (*(void (__fastcall **)(struct ICrossProcessMemory *))(*(_QWORD *)v7 + 16LL))(v7);
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x35,
                    (unsigned int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpmemorymanager.cpp",
                    v5);
    }
    if ( (unsigned __int64)(FileMappingW - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(FileMappingW);
    return LastError;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D,
      (unsigned int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpmemorymanager.cpp",
      (const char *)0x80070057LL,
      dwMaximumSizeLow);
    return 2147942487LL;
  }
}
