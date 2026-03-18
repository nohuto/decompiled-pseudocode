/*
 * XREFs of SetDpiDepSysMet @ 0x1C0010A00
 * Callers:
 *     InitLoadResources @ 0x1C0010780 (InitLoadResources.c)
 * Callees:
 *     <none>
 */

void *__fastcall SetDpiDepSysMet(int a1, int a2)
{
  __int64 v2; // rbx
  void *result; // rax
  unsigned int v4; // ecx
  __int64 v5; // rdx

  v2 = a1;
  if ( a2 < 0 )
  {
    DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 400LL, 19LL, a2, a1, 0LL, 0LL, 0LL, 0);
    a2 = 1;
  }
  result = (void *)*((unsigned int *)gpsi + v2 + 571);
  *((_DWORD *)gpsi + v2 + 571) = a2;
  if ( a2 != (_DWORD)result )
  {
    v4 = 2;
    v5 = 4 * v2 + 2524;
    do
    {
      result = gpsi;
      ++v4;
      *(_DWORD *)((char *)gpsi + v5) = -1;
      v5 += 120LL;
    }
    while ( v4 < 0x12 );
  }
  return result;
}
