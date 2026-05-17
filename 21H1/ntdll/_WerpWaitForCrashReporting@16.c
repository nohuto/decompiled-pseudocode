/*
 * XREFs of _WerpWaitForCrashReporting@16 @ 0x4B33B348
 * Callers:
 *     _RtlReportExceptionEx@20 @ 0x4B33A550 (_RtlReportExceptionEx@20.c)
 *     _RtlReportExceptionHelper@16 @ 0x4B33A890 (_RtlReportExceptionHelper@16.c)
 * Callees:
 *     _NtWaitForMultipleObjects@20 @ 0x4B2F2F30 (_NtWaitForMultipleObjects@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _WerpProcessId@4 @ 0x4B33B2CF (_WerpProcessId@4.c)
 */

int __fastcall WerpWaitForCrashReporting(void *a1, int a2, int a3, int a4)
{
  int v4; // esi
  int v5; // ebx
  int v6; // edi
  struct _TEB *v7; // esi
  bool v8; // zf
  int v9; // eax
  _DWORD v13[3]; // [esp+18h] [ebp-10h] BYREF

  v4 = a4;
  v5 = 0;
  v6 = 0;
  if ( a1 )
  {
    v7 = NtCurrentTeb();
    v8 = (void *)WerpProcessId(a1) == v7->ClientId.UniqueProcess;
    v4 = a4;
    if ( !v8 )
    {
      v6 = 1;
      v13[0] = a1;
    }
  }
  if ( a2 )
    v13[v6++] = a2;
  if ( a3 )
    v13[v6++] = a3;
  if ( v6 )
  {
    if ( (unsigned int)v6 <= 3 )
    {
      do
      {
        v9 = NtWaitForMultipleObjects(v6, (int)v13, 1, 1, v4);
        if ( v9 < 0 )
          return v9;
        if ( v9 < v6 )
          return v5;
      }
      while ( v9 != 258 );
      return -1073741823;
    }
    else
    {
      return -1073741684;
    }
  }
  return v5;
}
