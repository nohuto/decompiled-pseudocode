/*
 * XREFs of sub_18002E784 @ 0x18002E784
 * Callers:
 *     sub_18002E6A0 @ 0x18002E6A0 (sub_18002E6A0.c)
 *     sub_18002E740 @ 0x18002E740 (sub_18002E740.c)
 *     sub_1800CA850 @ 0x1800CA850 (sub_1800CA850.c)
 *     sub_1800CAA10 @ 0x1800CAA10 (sub_1800CAA10.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B5768 @ 0x1800B5768 (sub_1800B5768.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002E784(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  __int64 v4; // rax
  unsigned int v5; // esi
  __int64 v6; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]
  int v8; // [rsp+40h] [rbp+8h] BYREF
  int v9; // [rsp+44h] [rbp+Ch]

  if ( !*(_BYTE *)(a1 + 984) || !*(_QWORD *)(a1 + 992) )
    return 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 1000);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 1000));
  if ( *(_QWORD *)(a1 + 1040) )
  {
LABEL_13:
    if ( v3 )
      LeaveCriticalSection(v3);
    return 0LL;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(), __int64))(*(_QWORD *)qword_18019E640 + 8LL))(
         qword_18019E640,
         sub_1800C9F40,
         a1);
  *(_QWORD *)(a1 + 1040) = v4;
  if ( v4 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(), __int64))(*(_QWORD *)qword_18019E640 + 56LL))(
           qword_18019E640,
           sub_1800C9970,
           a1);
    *(_QWORD *)(a1 + 1048) = v6;
    if ( !v6 )
    {
      v5 = sub_1800B5768(retaddr, 4766LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp");
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)qword_18019E640 + 16LL))(
        qword_18019E640,
        *(_QWORD *)(a1 + 1040));
      *(_QWORD *)(a1 + 1040) = 0LL;
      goto LABEL_9;
    }
    v8 = -50000000;
    v9 = -1;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 40));
    (*(void (__fastcall **)(__int64, _QWORD, int *, _QWORD, int))(*(_QWORD *)qword_18019E640 + 24LL))(
      qword_18019E640,
      *(_QWORD *)(a1 + 1040),
      &v8,
      0LL,
      100);
    goto LABEL_13;
  }
  v5 = sub_1800B5768(retaddr, 4759LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp");
LABEL_9:
  if ( v3 )
    LeaveCriticalSection(v3);
  return v5;
}
