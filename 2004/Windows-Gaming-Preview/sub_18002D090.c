/*
 * XREFs of sub_18002D090 @ 0x18002D090
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800319F8 @ 0x1800319F8 (sub_1800319F8.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall sub_18002D090(__int64 a1, __int64 *a2)
{
  unsigned int v4; // esi
  _DWORD *v5; // rbx
  RTL_SRWLOCK *v6; // rdi
  void *v7; // rax
  __int64 v8; // rax

  *a2 = 0LL;
  if ( *(_BYTE *)(a1 + 168) )
  {
    v5 = (_DWORD *)(a1 + 144);
    v6 = (RTL_SRWLOCK *)(a1 + 152);
    if ( *(_DWORD *)(a1 + 144) == 1 )
    {
      if ( SLODWORD(v6->Ptr) >= 0 )
        ++LODWORD(v6->Ptr);
    }
    else
    {
      AcquireSRWLockShared((PSRWLOCK)(a1 + 152));
    }
    v4 = 0;
    v7 = operator new(0x58uLL, (const struct std::nothrow_t *)&unk_18005AF88);
    if ( v7 && (v8 = sub_1800319F8(v7, a1 - 16)) != 0 )
      *a2 = v8;
    else
      v4 = -2147024882;
    if ( v5 )
    {
      if ( *v5 == 1 )
        --LODWORD(v6->Ptr);
      else
        ReleaseSRWLockShared(v6);
    }
  }
  else
  {
    v4 = -2147418113;
    RoOriginateError(2147549183LL, 0LL);
  }
  return v4;
}
