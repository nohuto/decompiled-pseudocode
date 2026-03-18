/*
 * XREFs of sub_1C0015C80 @ 0x1C0015C80
 * Callers:
 *     sub_1C0012EFC @ 0x1C0012EFC (sub_1C0012EFC.c)
 *     sub_1C0013058 @ 0x1C0013058 (sub_1C0013058.c)
 *     sub_1C00162A8 @ 0x1C00162A8 (sub_1C00162A8.c)
 *     sub_1C0016EC0 @ 0x1C0016EC0 (sub_1C0016EC0.c)
 *     sub_1C00177A8 @ 0x1C00177A8 (sub_1C00177A8.c)
 *     sub_1C002A530 @ 0x1C002A530 (sub_1C002A530.c)
 *     sub_1C00301E8 @ 0x1C00301E8 (sub_1C00301E8.c)
 *     sub_1C003DC2C @ 0x1C003DC2C (sub_1C003DC2C.c)
 *     sub_1C003E230 @ 0x1C003E230 (sub_1C003E230.c)
 *     sub_1C0048FE8 @ 0x1C0048FE8 (sub_1C0048FE8.c)
 *     sub_1C0049400 @ 0x1C0049400 (sub_1C0049400.c)
 *     sub_1C0056620 @ 0x1C0056620 (sub_1C0056620.c)
 *     sub_1C0057714 @ 0x1C0057714 (sub_1C0057714.c)
 *     sub_1C0057830 @ 0x1C0057830 (sub_1C0057830.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 */

__int64 __fastcall sub_1C0015C80(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r15
  __int64 v8; // rax
  KSPIN_LOCK *v9; // r14
  KIRQL v10; // r12
  __int64 v11; // rdi
  __int64 v12; // rdx
  unsigned int v13; // ecx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // r10
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 (__fastcall *v20)(_QWORD, __int64, __int64, _QWORD); // rax
  int v21; // ecx
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // r8

  v4 = a4;
  if ( !a1 )
    goto LABEL_33;
  v8 = *(_QWORD *)(a1 + 64);
  if ( !v8 )
    goto LABEL_32;
  if ( *(_DWORD *)v8 != 541218120 )
    sub_1C002DC78(a1, *(_QWORD *)(a1 + 64));
  v9 = (KSPIN_LOCK *)(v8 + 3720);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 3720));
  if ( !a2 )
LABEL_33:
    sub_1C002DC78(0LL, 0LL);
  v11 = *(_QWORD *)(a2 + 64);
  if ( !v11 )
    sub_1C002DC78(a2, 0LL);
  if ( *(_DWORD *)v11 != 1329877064 )
    sub_1C002DC78(a2, *(_QWORD *)(a2 + 64));
  v12 = *(int *)(v11 + 1152);
  v13 = *(_DWORD *)(v11 + 1152);
  if ( (dword_1C006B268 & 0x100) != 0 )
  {
    v14 = *(_QWORD *)(a1 + 64);
    if ( v14 )
    {
      v15 = *(_QWORD *)(v14 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
      *(_DWORD *)v15 = 824923716;
      *(_QWORD *)(v15 + 8) = 0LL;
      *(_QWORD *)(v15 + 16) = a2;
      *(_QWORD *)(v15 + 24) = v12;
      v13 = *(_DWORD *)(v11 + 1152);
    }
  }
  if ( v13 == 2 )
  {
    v16 = *(_QWORD *)(v11 + 1160);
    if ( (dword_1C006B268 & 0x100) != 0 )
    {
      v17 = *(_QWORD *)(a1 + 64);
      if ( v17 )
      {
        v18 = *(_QWORD *)(v17 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v17 + 880)) & *(_DWORD *)(v17 + 884));
        *(_DWORD *)v18 = 724260420;
        *(_QWORD *)(v18 + 8) = 0LL;
        *(_QWORD *)(v18 + 16) = v4;
        *(_QWORD *)(v18 + 24) = v16;
      }
    }
    v19 = *(_QWORD *)(a1 + 64);
    if ( v19 )
    {
      if ( *(_DWORD *)v19 != 541218120 )
        sub_1C002DC78(a1, *(_QWORD *)(a1 + 64));
      v20 = *(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(v19 + 4464);
      if ( v20 )
      {
        v21 = v20(*(_QWORD *)(v19 + 4232), v16, a3, (unsigned int)v4);
        if ( v21 >= 0 )
        {
          v22 = *(_QWORD *)(v11 + 1160);
LABEL_19:
          if ( (dword_1C006B268 & 0x100) != 0 )
          {
            v23 = *(_QWORD *)(a1 + 64);
            if ( v23 )
            {
              v24 = *(_QWORD *)(v23 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v23 + 880)) & *(_DWORD *)(v23 + 884));
              *(_DWORD *)v24 = 841700932;
              *(_QWORD *)(v24 + 16) = v21;
              *(_QWORD *)(v24 + 8) = 0LL;
              *(_QWORD *)(v24 + 24) = v22;
            }
          }
          goto LABEL_22;
        }
      }
      else
      {
        v21 = -1073741822;
      }
      v22 = 0LL;
      goto LABEL_19;
    }
LABEL_32:
    sub_1C002DC78(a1, 0LL);
  }
  if ( v13 <= 1 )
    sub_1C000FD80(a1, 256, 1146497825, a2, (int)v13);
  v22 = 0LL;
LABEL_22:
  KeReleaseSpinLock(v9, v10);
  return v22;
}
