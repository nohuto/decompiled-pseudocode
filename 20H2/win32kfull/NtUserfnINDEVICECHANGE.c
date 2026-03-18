/*
 * XREFs of NtUserfnINDEVICECHANGE @ 0x1C0116820
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00B9A60 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00B9AE0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 */

__int64 __fastcall NtUserfnINDEVICECHANGE(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned int *a4,
        __int64 a5,
        char a6)
{
  _DWORD *v9; // rsi
  __int64 v10; // rbx
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned int v24; // ecx
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int128 v29; // [rsp+60h] [rbp-48h] BYREF
  __int64 v30; // [rsp+70h] [rbp-38h]
  volatile void *Address; // [rsp+C8h] [rbp+20h]

  Address = a4;
  v9 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  if ( a3 <= 0x800A && ((_DWORD)a3 == 0x8000 || (_DWORD)a3 == 32772 || (unsigned int)a3 > 0x8006) && !a4 )
  {
LABEL_69:
    v10 = 0LL;
    UserSetLastError(87LL, 32778LL, a3);
    return v10;
  }
  if ( (a3 & 0x8000) == 0 )
    goto LABEL_6;
  if ( !a4 )
  {
    UserSetLastError(87LL, 32778LL, a3);
    return 0LL;
  }
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    a4 = (unsigned int *)MmUserProbeAddress;
  v12 = *a4;
  if ( *a4 < 0xC )
    goto LABEL_69;
  ProbeForRead(Address, *a4, 1u);
  if ( v12 + 2 < v12 )
  {
    UserSetLastError(87LL, v13, v14);
    return 0LL;
  }
  v15 = Win32AllocPoolWithQuota(v12 + 2, 1986294613LL);
  v9 = (_DWORD *)v15;
  if ( v15 )
  {
    PushW32ThreadLock(v15, &v29, (__int64)Win32FreePool);
    memmove(v9, (const void *)Address, v12);
    *((_WORD *)v9 + ((unsigned __int64)v12 >> 1)) = 0;
    if ( *v9 == v12 )
    {
      switch ( v9[1] )
      {
        case 3:
          if ( v12 >= 0x10 )
          {
            v27 = -1LL;
            do
              ++v27;
            while ( *((_WORD *)v9 + v27 + 6) );
            if ( (int)v27 + 1 >= (unsigned int)v27 )
            {
              v28 = 2LL * (unsigned int)(v27 + 1);
              if ( v28 <= 0xFFFFFFFF && (int)v28 + 12 >= (unsigned int)v28 && (int)v28 + 12 <= v12 )
                goto LABEL_6;
            }
          }
          v10 = 0LL;
          break;
        case 5:
          if ( v12 >= 0x20 )
          {
            v25 = -1LL;
            do
              ++v25;
            while ( *((_WORD *)v9 + v25 + 14) );
            if ( (int)v25 + 1 >= (unsigned int)v25 )
            {
              v26 = 2LL * (unsigned int)(v25 + 1);
              if ( v26 <= 0xFFFFFFFF && (int)v26 + 28 >= (unsigned int)v26 && (int)v26 + 28 <= v12 )
                goto LABEL_6;
            }
          }
          v10 = 0LL;
          break;
        case 6:
          if ( v12 < 0x38 )
          {
            v10 = 0LL;
          }
          else
          {
            if ( a3 != 32774 )
              goto LABEL_6;
            v18 = (int)v9[12];
            if ( (int)v18 < 0 )
              goto LABEL_6;
            if ( (v18 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( (int)v18 + 52 > v12 )
            {
              v10 = 0LL;
            }
            else
            {
              v21 = (unsigned __int64)v9 + v18 + 52;
              if ( v21 >= (unsigned __int64)(v9 + 13) )
              {
                v22 = -1LL;
                do
                  ++v22;
                while ( *(_WORD *)(v21 + 2 * v22) );
                if ( (int)v22 + 1 >= (unsigned int)v22 )
                {
                  v23 = 2LL * (unsigned int)(v22 + 1);
                  if ( v23 <= 0xFFFFFFFF )
                  {
                    v24 = v23 + 52;
                    if ( (int)v23 + 52 >= (unsigned int)v23
                      && (unsigned int)v18 + v24 >= v24
                      && (unsigned int)v18 + v24 <= v12 )
                    {
LABEL_6:
                      v10 = ((__int64 (__fastcall *)(__int64, _QWORD, unsigned __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
                              a1,
                              a2,
                              a3);
                      break;
                    }
                  }
                }
              }
              v10 = 0LL;
            }
          }
          break;
        case 7:
          if ( v12 >= 0x1A0 )
          {
            v19 = -1LL;
            do
              ++v19;
            while ( *((_WORD *)v9 + v19 + 8) );
            if ( (int)v19 + 1 >= (unsigned int)v19 )
            {
              v20 = 2LL * (unsigned int)(v19 + 1);
              if ( v20 <= 0xFFFFFFFF && (int)v20 + 16 >= (unsigned int)v20 && (int)v20 + 16 <= v12 )
                goto LABEL_6;
            }
          }
          v10 = 0LL;
          break;
        default:
          goto LABEL_6;
      }
    }
    else
    {
      v10 = 0LL;
    }
  }
  else
  {
    UserSetLastError(8LL, v16, v17);
    v10 = 0LL;
  }
  if ( v9 )
    PopAndFreeAlwaysW32ThreadLock((__int64)&v29);
  return v10;
}
