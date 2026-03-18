/*
 * XREFs of GreSfmCleanupPresentHistory @ 0x1C00530C0
 * Callers:
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0052B6C (-xxxDwmProcessShutdown@@YAJH@Z.c)
 * Callees:
 *     ?GreSfmCleanupDxgAdapter@@YAXI@Z @ 0x1C0053210 (-GreSfmCleanupDxgAdapter@@YAXI@Z.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C008D744 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 */

_BYTE *GreSfmCleanupPresentHistory()
{
  unsigned int v0; // edi
  __int64 v1; // r8
  _BYTE *v2; // rsi
  _BYTE *result; // rax
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // [rsp+38h] [rbp-79h] BYREF
  _BYTE *v7; // [rsp+40h] [rbp-71h]
  _DWORD v8[4]; // [rsp+48h] [rbp-69h] BYREF
  _BYTE v9[160]; // [rsp+58h] [rbp-59h] BYREF

  v0 = 0;
  v6 = 0LL;
  memset(v9, 0, sizeof(v9));
  v7 = 0LL;
  LOBYTE(v1) = 1;
  v2 = v9;
  result = (_BYTE *)((__int64 (__fastcall *)(__int64 *, _QWORD, __int64, _QWORD))qword_1C0252888)(&v6, 0LL, v1, 0LL);
  if ( (int)result >= 0 )
  {
    v4 = (unsigned int)v6;
    if ( (_DWORD)v6 )
    {
      if ( (unsigned int)v6 <= 8 || (result = (_BYTE *)PALLOCMEM2((unsigned int)(20 * v6)), (v2 = result) != 0LL) )
      {
        memset(v2, 0, 20 * v4);
        v7 = v2;
        LOBYTE(v5) = 1;
        if ( (int)((__int64 (__fastcall *)(__int64 *, _QWORD, __int64, _QWORD))qword_1C0252888)(&v6, 0LL, v5, 0LL) >= 0
          && (_DWORD)v6
          && (unsigned int)v6 <= (unsigned int)v4 )
        {
          do
          {
            GreSfmCleanupDxgAdapter(*(_DWORD *)&v7[20 * v0]);
            v8[0] = *(_DWORD *)&v7[20 * v0];
            ((void (__fastcall *)(_DWORD *, _QWORD))qword_1C0252898)(v8, 0LL);
            ++v0;
          }
          while ( v0 < (unsigned int)v6 );
        }
        result = v9;
        if ( v2 != v9 )
          return (_BYTE *)Win32FreePool(v2);
      }
    }
  }
  return result;
}
