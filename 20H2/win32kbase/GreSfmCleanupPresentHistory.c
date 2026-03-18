/*
 * XREFs of GreSfmCleanupPresentHistory @ 0x1C0075070
 * Callers:
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0074B1C (-xxxDwmProcessShutdown@@YAJH@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C003C5B0 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     ?GreSfmCleanupDxgAdapter@@YAXI@Z @ 0x1C00751C0 (-GreSfmCleanupDxgAdapter@@YAXI@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3740 (memset.c)
 */

void GreSfmCleanupPresentHistory()
{
  unsigned int v0; // edi
  __int64 v1; // r8
  _BYTE *v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // [rsp+38h] [rbp-79h] BYREF
  _BYTE *v6; // [rsp+40h] [rbp-71h]
  _DWORD v7[4]; // [rsp+48h] [rbp-69h] BYREF
  _BYTE v8[160]; // [rsp+58h] [rbp-59h] BYREF

  v0 = 0;
  v5 = 0LL;
  memset(v8, 0, sizeof(v8));
  v6 = 0LL;
  LOBYTE(v1) = 1;
  v2 = v8;
  if ( (int)((__int64 (__fastcall *)(__int64 *, _QWORD, __int64, _QWORD))qword_1C024A868)(&v5, 0LL, v1, 0LL) >= 0 )
  {
    v3 = (unsigned int)v5;
    if ( (_DWORD)v5 )
    {
      if ( (unsigned int)v5 <= 8 || (v2 = PALLOCMEM2((unsigned int)(20 * v5), 1886221383LL, 1)) != 0LL )
      {
        memset(v2, 0, 20 * v3);
        v6 = v2;
        LOBYTE(v4) = 1;
        if ( (int)((__int64 (__fastcall *)(__int64 *, _QWORD, __int64, _QWORD))qword_1C024A868)(&v5, 0LL, v4, 0LL) >= 0
          && (_DWORD)v5
          && (unsigned int)v5 <= (unsigned int)v3 )
        {
          do
          {
            GreSfmCleanupDxgAdapter(*(_DWORD *)&v6[20 * v0]);
            v7[0] = *(_DWORD *)&v6[20 * v0];
            ((void (__fastcall *)(_DWORD *, _QWORD))qword_1C024A878)(v7, 0LL);
            ++v0;
          }
          while ( v0 < (unsigned int)v5 );
        }
        if ( v2 != v8 )
          Win32FreePool((__int64)v2);
      }
    }
  }
}
