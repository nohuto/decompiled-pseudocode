/*
 * XREFs of Str_SetPtrW @ 0x180478440
 * Callers:
 *     ??1CWRLExecuteCommandBase@@MEAA@XZ @ 0x180329950 (--1CWRLExecuteCommandBase@@MEAA@XZ.c)
 *     ?SetDirectory@CWRLExecuteCommandBase@@UEAAJPEBG@Z @ 0x18032A490 (-SetDirectory@CWRLExecuteCommandBase@@UEAAJPEBG@Z.c)
 *     ?SetParameters@CWRLExecuteCommandBase@@UEAAJPEBG@Z @ 0x18032A4D0 (-SetParameters@CWRLExecuteCommandBase@@UEAAJPEBG@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18013BB60 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??$CCv6s_HeapAllocArray@G@@YAJPEAXK_K1PEAPEAG@Z @ 0x1804783A4 (--$CCv6s_HeapAllocArray@G@@YAJPEAXK_K1PEAPEAG@Z.c)
 *     ?CCv6s_HeapFree@@YAJPEAX0@Z @ 0x180478404 (-CCv6s_HeapFree@@YAJPEAX0@Z.c)
 */

BOOL __stdcall Str_SetPtrW(LPWSTR *ppsz, LPCWSTR psz)
{
  unsigned __int16 *v2; // rbx
  size_t v5; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  size_t v10; // rdx
  void *v11; // rbx
  HANDLE v12; // rax
  unsigned __int16 *v13; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0LL;
  v13 = 0LL;
  if ( psz )
  {
    v5 = (unsigned int)(lstrlenW(psz) + 1);
    ProcessHeap = GetProcessHeap();
    if ( (int)CCv6s_HeapAllocArray<unsigned short>(ProcessHeap, v7, v8, (unsigned int)v5, &v13) < 0 )
      return 0;
    v10 = v5;
    v2 = v13;
    StringCchCopyW(v13, v10, (size_t *)psz);
  }
  v11 = (void *)_InterlockedExchange64((volatile __int64 *)ppsz, (__int64)v2);
  if ( v11 )
  {
    v12 = GetProcessHeap();
    CCv6s_HeapFree(v12, v11);
  }
  return 1;
}
