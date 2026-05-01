/*
 * XREFs of sub_18003E910 @ 0x18003E910
 * Callers:
 *     sub_18000A1B0 @ 0x18000A1B0 (sub_18000A1B0.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003E910(__int64 a1, __int64 a2, HANDLE *a3)
{
  HRESULT v4; // eax
  int v5; // ebx
  void *v6; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  void *ppInterface; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  ppInterface = 0LL;
  v4 = CoGetCallContext(&stru_180052E50, &ppInterface);
  v5 = v4;
  if ( v4 < 0 )
  {
    if ( v4 != -2147417833 )
    {
      sub_180003268(retaddr, 88, (__int64)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp", v4);
      goto LABEL_8;
    }
    *a3 = GetCurrentProcess();
LABEL_6:
    v5 = 0;
    goto LABEL_8;
  }
  v5 = (*(__int64 (__fastcall **)(void *, __int64, HANDLE *))(*(_QWORD *)ppInterface + 24LL))(ppInterface, 4096LL, a3);
  if ( v5 >= 0 )
    goto LABEL_6;
LABEL_8:
  v6 = ppInterface;
  if ( ppInterface )
  {
    ppInterface = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return (unsigned int)v5;
}
