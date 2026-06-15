/*
 * XREFs of ?GetMemory@CCrossProcessServerMemory@@UEAAJPEAIPEAPEAX@Z @ 0x14001A770
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B430 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14003BFB4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CCrossProcessServerMemory::GetMemory(CCrossProcessServerMemory *this, unsigned int *a2, void **a3)
{
  void *v5; // rcx
  unsigned int v7; // eax
  LPVOID v8; // rax
  const char *v9; // r9
  unsigned int v11; // ebx
  __int64 v12; // rdx
  int dwNumberOfBytesToMap; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = (void *)*((_QWORD *)this + 2);
  if ( (((unsigned __int64)v5 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v11 = -2147467261;
    v12 = 82LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpmemorymanager.cpp",
      (const char *)v11,
      dwNumberOfBytesToMap);
    return v11;
  }
  v7 = *((_DWORD *)this + 6);
  if ( !v7 )
  {
    v11 = -2147467259;
    v12 = 85LL;
    goto LABEL_9;
  }
  if ( *((_QWORD *)this + 4) )
  {
LABEL_6:
    *a2 = v7;
    *a3 = (void *)*((_QWORD *)this + 4);
    return 0LL;
  }
  v8 = MapViewOfFile(v5, 0xF001Fu, 0, 0, *((unsigned int *)this + 6));
  if ( v8 )
  {
    *((_QWORD *)this + 4) = v8;
    v7 = *((_DWORD *)this + 6);
    goto LABEL_6;
  }
  return wil::details::in1diag3::Return_GetLastError(
           retaddr,
           (void *)0x5D,
           (unsigned int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpmemorymanager.cpp",
           v9);
}
