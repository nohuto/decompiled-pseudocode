/*
 * XREFs of GreSaveScreenBits @ 0x1C029F5A0
 * Callers:
 *     CreateSpb @ 0x1C0153C30 (CreateSpb.c)
 *     ?SpbApc@@YAXPEAX00@Z @ 0x1C021AA60 (-SpbApc@@YAXPEAX00@Z.c)
 *     FreeSpb @ 0x1C021AD24 (FreeSpb.c)
 *     RestoreSpb @ 0x1C021AF30 (RestoreSpb.c)
 *     ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1C023F6CC (-SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000F68C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C002D44C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C002D58C (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreSaveScreenBits(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, _QWORD, __int64, __int128 *); // rbp
  __int64 v10; // rax
  __int128 *v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rdi
  int v14; // eax
  __int64 v16; // [rsp+30h] [rbp-68h] BYREF
  __int64 v17; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v18[8]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v19; // [rsp+48h] [rbp-50h] BYREF

  v8 = 0LL;
  v19 = 0LL;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v18, ghsemDynamicModeChange, a3, a4);
  v17 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( (*(_DWORD *)(a1 + 40) & 0x400) == 0 )
  {
    v16 = ghsemSprite;
    GreAcquireSemaphore(ghsemSprite);
    v9 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *))(a1 + 3008);
    if ( v9 )
    {
      v10 = *(_QWORD *)(a1 + 2552);
      v11 = &v19;
      if ( a2 != 2 )
        v11 = (__int128 *)a4;
      v12 = 0LL;
      v13 = (v10 + 24) & -(__int64)(v10 != 0);
      if ( v13 )
      {
        v14 = *(_DWORD *)(((v10 + 24) & -(__int64)(v10 != 0)) + 0x58);
        if ( (v14 & 0x80004000) != 0 && (v14 & 0x200) == 0 )
        {
          v12 = v13 - 24;
          GreLockDisplayDevice(*(_QWORD *)(v13 - 24 + 48));
        }
      }
      v8 = v9(v13, a2, a3, v11);
      if ( v12 )
        GreUnlockDisplayDevice(*(_QWORD *)(v12 + 48));
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v16);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v17);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v18);
  return v8;
}
