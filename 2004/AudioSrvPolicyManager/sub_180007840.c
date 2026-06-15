/*
 * XREFs of sub_180007840 @ 0x180007840
 * Callers:
 *     <none>
 * Callees:
 *     sub_180006770 @ 0x180006770 (sub_180006770.c)
 *     sub_18000736C @ 0x18000736C (sub_18000736C.c)
 *     sub_18002880C @ 0x18002880C (sub_18002880C.c)
 *     sub_180028944 @ 0x180028944 (sub_180028944.c)
 *     sub_18002A3EC @ 0x18002A3EC (sub_18002A3EC.c)
 *     sub_18002A4F8 @ 0x18002A4F8 (sub_18002A4F8.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180007840(__int64 a1)
{
  unsigned int v2; // r14d
  __int64 v3; // rbx
  DWORD v4; // eax
  DWORD v5; // esi
  __int64 v6; // rcx
  int v7; // edi
  struct _RTL_CRITICAL_SECTION *v8; // r15
  _DWORD *v10; // [rsp+20h] [rbp-38h]
  int v11; // [rsp+68h] [rbp+10h]
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  v12 = 0LL;
  v2 = 0;
  if ( (int)sub_180006770(a1, 0LL, (__int64)&v12) < 0 )
  {
LABEL_16:
    v3 = v12;
    goto LABEL_17;
  }
  v3 = v12;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 48LL))(v12);
  v5 = v4;
  if ( v4 && ((unsigned int)sub_18002A3EC(v4) || (int)sub_18000736C(v6, v5) >= 0) )
  {
    sub_180028944(v5);
    v7 = 1;
    v8 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
    EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
    if ( !(unsigned int)sub_18002880C(v5) && (!*v10 || !v10[86]) )
      v7 = 0;
    if ( v8 )
      LeaveCriticalSection(v8);
    if ( v7 || v11 && v11 != 0xFFFF )
    {
      if ( _InterlockedExchange((volatile __int32 *)(a1 + 48), sub_18002A4F8(v5)) != *(_DWORD *)(a1 + 48) )
        v2 = v7 + 1;
      goto LABEL_16;
    }
  }
LABEL_17:
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return v2;
}
