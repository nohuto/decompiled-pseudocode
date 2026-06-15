/*
 * XREFs of ?RuntimeClassInitialize@CCrossProcessMemoryManager@@QEAAJPEBG@Z @ 0x1400109C8
 * Callers:
 *     ??$MakeAndInitialize@VCCrossProcessMemoryManager@@UICrossProcessMemoryManager@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessMemoryManager@@AEAPEBG@Z @ 0x14001152C (--$MakeAndInitialize@VCCrossProcessMemoryManager@@UICrossProcessMemoryManager@@AEAPEBG@Details@W.c)
 * Callees:
 *     ?CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z @ 0x1400108F4 (-CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B180 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CCrossProcessMemoryManager::RuntimeClassInitialize(
        CCrossProcessMemoryManager *this,
        const unsigned __int16 *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  void *v5; // rbp
  HLOCAL v6; // rcx
  HLOCAL v7; // rsi
  DWORD LastError; // ebx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HLOCAL hMem; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    return 0LL;
  hMem = 0LL;
  v3 = CreateSecurityDescriptor(a2, (__int64)a2, &hMem);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = (void *)*((_QWORD *)this + 5);
    v6 = 0LL;
    v7 = hMem;
    hMem = 0LL;
    if ( v5 )
    {
      LastError = GetLastError();
      LocalFree(v5);
      SetLastError(LastError);
      v6 = hMem;
    }
    *((_QWORD *)this + 5) = v7;
    *((_QWORD *)this + 3) = v7;
    if ( v6 )
      LocalFree(v6);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x22,
    (unsigned int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpmemorymanager.cpp",
    (const char *)(unsigned int)v3,
    v10);
  if ( hMem )
    LocalFree(hMem);
  return v4;
}
