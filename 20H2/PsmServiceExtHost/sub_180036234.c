/*
 * XREFs of sub_180036234 @ 0x180036234
 * Callers:
 *     sub_180034234 @ 0x180034234 (sub_180034234.c)
 *     sub_180036134 @ 0x180036134 (sub_180036134.c)
 *     PsmCrmCleanup_0 @ 0x180084550 (PsmCrmCleanup_0.c)
 *     sub_18008479C @ 0x18008479C (sub_18008479C.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_1800362C0 @ 0x1800362C0 (sub_1800362C0.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_1800847DC @ 0x1800847DC (sub_1800847DC.c)
 */

void __fastcall sub_180036234(_QWORD *a1, int a2)
{
  _QWORD *i; // rdi
  __int64 v4; // rcx
  __int64 v5; // [rsp+30h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+40h] [rbp-58h] BYREF
  UUID *v7; // [rsp+60h] [rbp-38h]
  int v8; // [rsp+68h] [rbp-30h]
  int v9; // [rsp+6Ch] [rbp-2Ch]
  __int64 *v10; // [rsp+70h] [rbp-28h]
  int v11; // [rsp+78h] [rbp-20h]
  int v12; // [rsp+7Ch] [rbp-1Ch]

  if ( a2 && a1[6] != -1LL )
    sub_1800362C0();
  for ( i = a1 + 7; (_QWORD *)*i != i; sub_1800847DC(a1, *i, 0LL) )
    ;
  if ( (unsigned int)dword_1800B3250 > 5 )
  {
    if ( sub_180010470((__int64)&dword_1800B3250, 2LL) )
    {
      v9 = 0;
      v12 = 0;
      v7 = &Uuid;
      v5 = a1[2];
      v10 = &v5;
      v8 = 16;
      v11 = 8;
      sub_18002E278(v4, (unsigned __int8 *)dword_1800A2EED, 0LL, 0LL, 4u, &v6);
    }
  }
}
