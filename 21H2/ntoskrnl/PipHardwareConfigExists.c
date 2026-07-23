/*
 * XREFs of PipHardwareConfigExists @ 0x140A9123C
 * Callers:
 *     PipHardwareConfigInit @ 0x140A522F4 (PipHardwareConfigInit.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     _PnpCtxRegQueryValue @ 0x14061A094 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegOpenKey @ 0x14063562C (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegEnumKey @ 0x1407C4164 (_PnpCtxRegEnumKey.c)
 */

char __fastcall PipHardwareConfigExists(void *a1, int a2)
{
  ULONG v2; // edi
  char v3; // bl
  int v6; // eax
  unsigned int v8; // [rsp+38h] [rbp-D0h] BYREF
  int v9; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v10; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE Handle[2]; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v12[132]; // [rsp+58h] [rbp-B0h] BYREF

  Handle[0] = 0LL;
  v2 = 0;
  LODWORD(v10) = 0;
  v3 = 0;
  v9 = 0;
  do
  {
    v8 = 260;
    v6 = PnpCtxRegEnumKey((__int64)a1, a1, v2++, v12, &v8);
    if ( v6 < 0 )
      break;
    if ( (int)PnpCtxRegOpenKey(0LL, (int)a1, (int)v12, 0, 1, (__int64)Handle) >= 0 )
    {
      v8 = 4;
      if ( (int)PnpCtxRegQueryValue((__int64)a1, Handle[0], (__int64)L"Id", (__int64)&v9, (__int64)&v10, (__int64)&v8) >= 0
        && v9 == 4
        && v8 == 4
        && (_DWORD)v10 == a2 )
      {
        v3 = 1;
      }
      ZwClose(Handle[0]);
      Handle[0] = 0LL;
    }
  }
  while ( !v3 );
  return v3;
}
