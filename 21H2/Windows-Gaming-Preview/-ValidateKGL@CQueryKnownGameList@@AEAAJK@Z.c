/*
 * XREFs of ?ValidateKGL@CQueryKnownGameList@@AEAAJK@Z @ 0x180040D6C
 * Callers:
 *     ?RuntimeClassInitialize@CQueryKnownGameList@@QEAAJPEBG@Z @ 0x18003F5AC (-RuntimeClassInitialize@CQueryKnownGameList@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003268 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StrCmpInsensitive@KnownGameList@@YAHPEBGK0K@Z @ 0x180042A88 (-StrCmpInsensitive@KnownGameList@@YAHPEBGK0K@Z.c)
 *     __security_check_cookie @ 0x1800443F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180045FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CQueryKnownGameList::ValidateKGL(CQueryKnownGameList *this, unsigned int a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  unsigned int v6; // edx
  unsigned int v7; // ecx
  unsigned int v8; // r14d
  unsigned int v9; // esi
  int v10; // eax
  unsigned int v11; // ebp
  __int64 v12; // rax
  unsigned int v14[2]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v15; // [rsp+28h] [rbp-40h]
  unsigned int v16; // [rsp+2Ch] [rbp-3Ch]
  __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( *((_DWORD *)this + 10) )
  {
    v6 = *((_DWORD *)this + 11);
    if ( v6 >= a2 )
    {
      v4 = -2147024809;
      v5 = 809LL;
      goto LABEL_43;
    }
    v7 = *((_DWORD *)this + 12);
    if ( v7 >= a2 )
    {
      v4 = -2147024809;
      v5 = 810LL;
      goto LABEL_43;
    }
    if ( *((_DWORD *)this + 9) == 5 )
    {
      if ( *((_DWORD *)this + 13) != 16 )
      {
        v4 = -2147024809;
        v5 = 814LL;
        goto LABEL_43;
      }
    }
    else
    {
      if ( *((_DWORD *)this + 13) < 0x10u )
      {
        v4 = -2147024809;
        v5 = 819LL;
        goto LABEL_43;
      }
      if ( *((_DWORD *)this + 9) < 2u )
        goto LABEL_15;
    }
    if ( *((_DWORD *)this + 15) > 2u )
    {
      v4 = -2147024809;
      v5 = 825LL;
      goto LABEL_43;
    }
LABEL_15:
    if ( *((_DWORD *)this + 9) >= 3u && (unsigned __int16)(*((_WORD *)this + 33) - 1) > 8u )
    {
      v4 = -2147024809;
      v5 = 831LL;
      goto LABEL_43;
    }
    if ( v6 + v7 < v7 )
    {
      v5 = 834LL;
LABEL_42:
      v4 = -2147024362;
      goto LABEL_43;
    }
    if ( v6 + v7 >= a2 )
    {
      v4 = -2147024809;
      v5 = 835LL;
      goto LABEL_43;
    }
    v8 = v7 / *((_DWORD *)this + 13);
    if ( v7 % *((_DWORD *)this + 13) )
    {
      v4 = -2147024809;
      v5 = 836LL;
      goto LABEL_43;
    }
    v9 = 0;
    if ( !v8 )
      return 0LL;
    while ( 1 )
    {
      v10 = (*(__int64 (__fastcall **)(CQueryKnownGameList *, _QWORD, unsigned int *))(*(_QWORD *)this + 88LL))(
              this,
              v9,
              v14);
      v11 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x34F,
          (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
          (const char *)(unsigned int)v10);
        return v11;
      }
      if ( v15 >= a2 )
      {
        v4 = -2147024809;
        v5 = 849LL;
        goto LABEL_43;
      }
      if ( v16 >= a2 )
      {
        v4 = -2147024809;
        v5 = 850LL;
        goto LABEL_43;
      }
      if ( v16 + v15 < v15 )
      {
        v5 = 851LL;
        goto LABEL_42;
      }
      if ( v16 + v15 > a2 )
      {
        v4 = -2147024809;
        v5 = 852LL;
        goto LABEL_43;
      }
      if ( !v9 )
        goto LABEL_32;
      v12 = *(_QWORD *)v14;
      if ( LOWORD(v14[0]) )
        break;
LABEL_33:
      ++v9;
      v17 = v12;
      if ( v9 >= v8 )
        return 0LL;
    }
    if ( (int)KnownGameList::StrCmpInsensitive(
                (KnownGameList *)&v17,
                (const unsigned __int16 *)4,
                (unsigned int)v14,
                (const unsigned __int16 *)4,
                v14[0]) >= 0 )
    {
      v4 = -2147024809;
      v5 = 859LL;
      goto LABEL_43;
    }
LABEL_32:
    v12 = *(_QWORD *)v14;
    goto LABEL_33;
  }
  v4 = -2147024809;
  v5 = 808LL;
LABEL_43:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
    (const char *)v4);
  return v4;
}
