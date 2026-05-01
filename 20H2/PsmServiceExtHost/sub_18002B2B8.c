/*
 * XREFs of sub_18002B2B8 @ 0x18002B2B8
 * Callers:
 *     sub_18002B0F8 @ 0x18002B0F8 (sub_18002B0F8.c)
 *     sub_18002B3C0 @ 0x18002B3C0 (sub_18002B3C0.c)
 *     sub_180030370 @ 0x180030370 (sub_180030370.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_18002B2B8(unsigned int *a1, __int64 a2, int a3)
{
  unsigned int **v6; // rcx
  unsigned int *v7; // rax
  char result; // al
  int v9; // ecx
  int v10; // [rsp+30h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+40h] [rbp-68h] BYREF
  UUID *v12; // [rsp+60h] [rbp-48h]
  int v13; // [rsp+68h] [rbp-40h]
  int v14; // [rsp+6Ch] [rbp-3Ch]
  int *v15; // [rsp+70h] [rbp-38h]
  int v16; // [rsp+78h] [rbp-30h]
  int v17; // [rsp+7Ch] [rbp-2Ch]

  RtlAcquireSRWLockExclusive(a1 + 2);
  a1[4] = GetCurrentThreadId();
  v6 = (unsigned int **)*((_QWORD *)a1 + 4);
  v7 = (unsigned int *)(a2 + 8);
  if ( *v6 != a1 + 6 )
    __fastfail(3u);
  *(_QWORD *)v7 = a1 + 6;
  *(_QWORD *)(a2 + 16) = v6;
  *v6 = v7;
  *((_QWORD *)a1 + 4) = v7;
  if ( a3 == 1 )
  {
    dword_1800B3D68 = 0;
    RtlReleaseSRWLockExclusive(&unk_1800B3D60);
  }
  else if ( a3 == 2 )
  {
    RtlReleaseSRWLockShared(&unk_1800B3D60);
  }
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))a2)(a2, *a1, *((_QWORD *)a1 + 5));
  a1[4] = 0;
  result = RtlReleaseSRWLockExclusive(a1 + 2);
  if ( (unsigned int)dword_1800B3250 > 5 )
  {
    result = sub_180010470((__int64)&dword_1800B3250, 8LL);
    if ( result )
    {
      v14 = 0;
      v17 = 0;
      v12 = &Uuid;
      v10 = *a1;
      v15 = &v10;
      v16 = 4;
      v13 = 16;
      return sub_18002E278(v9, (int)&dword_1800A3354, 0, 0, 4u, &v11);
    }
  }
  return result;
}
