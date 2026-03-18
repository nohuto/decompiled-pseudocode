/*
 * XREFs of sub_1C0016670 @ 0x1C0016670
 * Callers:
 *     sub_1C00162A8 @ 0x1C00162A8 (sub_1C00162A8.c)
 *     sub_1C0016EC0 @ 0x1C0016EC0 (sub_1C0016EC0.c)
 *     sub_1C00177A8 @ 0x1C00177A8 (sub_1C00177A8.c)
 *     sub_1C00301E8 @ 0x1C00301E8 (sub_1C00301E8.c)
 *     sub_1C003DC2C @ 0x1C003DC2C (sub_1C003DC2C.c)
 *     sub_1C003E230 @ 0x1C003E230 (sub_1C003E230.c)
 *     sub_1C0048FE8 @ 0x1C0048FE8 (sub_1C0048FE8.c)
 *     sub_1C0049400 @ 0x1C0049400 (sub_1C0049400.c)
 *     sub_1C0056620 @ 0x1C0056620 (sub_1C0056620.c)
 *     sub_1C0057714 @ 0x1C0057714 (sub_1C0057714.c)
 *     sub_1C0057830 @ 0x1C0057830 (sub_1C0057830.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 */

void __fastcall sub_1C0016670(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rbp
  __int64 v8; // rax
  KSPIN_LOCK *v9; // rdi
  KIRQL v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  void (__fastcall *v16)(_QWORD, __int64, __int64, _QWORD); // rax

  v4 = a4;
  if ( !a1 )
    sub_1C002DC78(0LL, 0LL);
  v8 = *(_QWORD *)(a1 + 64);
  if ( !v8 )
    goto LABEL_18;
  if ( *(_DWORD *)v8 != 541218120 )
    sub_1C002DC78(a1, v8);
  v9 = (KSPIN_LOCK *)(v8 + 3720);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 3720));
  if ( (dword_1C006B268 & 0x100) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 64);
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
      *(_DWORD *)v12 = 825054788;
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_QWORD *)(v12 + 16) = a2;
      *(_QWORD *)(v12 + 24) = a3;
    }
    if ( (dword_1C006B268 & 0x100) != 0 )
    {
      v13 = *(_QWORD *)(a1 + 64);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
        *(_DWORD *)v14 = 841832004;
        *(_QWORD *)(v14 + 8) = 0LL;
        *(_QWORD *)(v14 + 16) = a2;
        *(_QWORD *)(v14 + 24) = v4;
      }
    }
  }
  v15 = *(_QWORD *)(a1 + 64);
  if ( !v15 )
LABEL_18:
    sub_1C002DC78(a1, 0LL);
  if ( *(_DWORD *)v15 != 541218120 )
    sub_1C002DC78(a1, *(_QWORD *)(a1 + 64));
  v16 = *(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(v15 + 4472);
  if ( v16 )
    v16(*(_QWORD *)(v15 + 4232), a2, a3, (unsigned int)v4);
  KeReleaseSpinLock(v9, v10);
}
