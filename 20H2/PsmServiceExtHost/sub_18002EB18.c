/*
 * XREFs of sub_18002EB18 @ 0x18002EB18
 * Callers:
 *     sub_180030800 @ 0x180030800 (sub_180030800.c)
 * Callees:
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_18002EC14 @ 0x18002EC14 (sub_18002EC14.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

int __fastcall sub_18002EB18(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  DWORD CurrentThreadId; // eax
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rax
  __int64 v10; // [rsp+30h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+40h] [rbp-58h] BYREF
  UUID *v12; // [rsp+60h] [rbp-38h]
  int v13; // [rsp+68h] [rbp-30h]
  int v14; // [rsp+6Ch] [rbp-2Ch]
  __int64 *v15; // [rsp+70h] [rbp-28h]
  int v16; // [rsp+78h] [rbp-20h]
  int v17; // [rsp+7Ch] [rbp-1Ch]

  v2 = *(_QWORD *)(a1 + 16);
  RtlAcquireSRWLockExclusive(&unk_1800B3EB8);
  CurrentThreadId = GetCurrentThreadId();
  v6 = (_QWORD *)qword_1800B3ED0;
  dword_1800B3EC0 = CurrentThreadId;
  v7 = (_QWORD *)(a2 + 24);
  if ( *(__int64 **)qword_1800B3ED0 != &qword_1800B3EC8 )
    __fastfail(3u);
  *(_QWORD *)(a2 + 32) = qword_1800B3ED0;
  *v7 = &qword_1800B3EC8;
  *v6 = v7;
  dword_1800B3EC0 = 0;
  qword_1800B3ED0 = a2 + 24;
  RtlConvertSRWLockExclusiveToShared(&unk_1800B3EB8);
  sub_18002EC14(a1, a2, 0LL);
  LODWORD(v8) = RtlReleaseSRWLockShared(&unk_1800B3EB8);
  if ( (unsigned int)dword_1800B3250 > 5 && (qword_1800B3260 & 1) != 0 )
  {
    v8 = qword_1800B3268 & 1;
    if ( v8 == qword_1800B3268 )
    {
      v14 = 0;
      v17 = 0;
      v12 = &Uuid;
      v13 = 16;
      v15 = &v10;
      v10 = v2;
      v16 = 8;
      LODWORD(v8) = sub_18002E278((__int64)&dword_1800B3250, (unsigned __int8 *)dword_1800A2A45, 0LL, 0LL, 4u, &v11);
    }
  }
  return v8;
}
