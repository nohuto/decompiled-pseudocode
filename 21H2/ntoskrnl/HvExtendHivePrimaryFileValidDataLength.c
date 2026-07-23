/*
 * XREFs of HvExtendHivePrimaryFileValidDataLength @ 0x140876A44
 * Callers:
 *     CmpFlushHive @ 0x1406A48D8 (CmpFlushHive.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpFileFlushAndPurge @ 0x1406FA1C8 (CmpFileFlushAndPurge.c)
 */

__int64 __fastcall HvExtendHivePrimaryFileValidDataLength(__int64 a1, int a2, int a3)
{
  unsigned int v3; // ebx
  _DWORD v7[2]; // [rsp+30h] [rbp-28h] BYREF
  int *v8; // [rsp+38h] [rbp-20h]
  __int64 v9; // [rsp+40h] [rbp-18h]
  int v10; // [rsp+68h] [rbp+10h] BYREF

  v3 = 0;
  v10 = -16843010;
  v7[1] = 0;
  v9 = 4LL;
  v7[0] = a2 - 4;
  v8 = &v10;
  if ( (*(int (__fastcall **)(__int64, _QWORD, _DWORD *, __int64, int))(a1 + 40))(a1, 0LL, v7, 1LL, a3) >= 0 )
  {
    if ( (int)CmpFileFlushAndPurge(a1, 0) < 0 )
      return (unsigned int)-1073741491;
    return v3;
  }
  else
  {
    return (unsigned int)-1073741491;
  }
}
