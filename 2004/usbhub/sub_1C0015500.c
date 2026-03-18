/*
 * XREFs of sub_1C0015500 @ 0x1C0015500
 * Callers:
 *     sub_1C0012810 @ 0x1C0012810 (sub_1C0012810.c)
 *     sub_1C0015BF8 @ 0x1C0015BF8 (sub_1C0015BF8.c)
 * Callees:
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 */

__int64 __fastcall sub_1C0015500(__int64 a1)
{
  _DWORD *v2; // rdx
  unsigned __int16 i; // bx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rcx
  KIRQL v10; // al
  bool v11; // zf
  KSPIN_LOCK *v12; // rcx

  if ( !a1 )
    sub_1C002DC78(0LL, 0LL);
  v2 = *(_DWORD **)(a1 + 64);
  if ( !v2 )
LABEL_28:
    sub_1C002DC78(a1, 0LL);
  if ( *v2 != 541218120 )
    sub_1C002DC78(a1, v2);
  for ( i = 1; ; ++i )
  {
    v4 = *(_QWORD *)(a1 + 64);
    if ( !v4 )
      goto LABEL_28;
    if ( *(_DWORD *)v4 != 541218120 )
      sub_1C002DC78(a1, v4);
    if ( i > *(unsigned __int8 *)(v4 + 2938) )
      return 0LL;
    if ( (dword_1C006B268 & 8) != 0 )
    {
      v5 = *(_QWORD *)(v4 + 888)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v4 + 880)) & *(_DWORD *)(v4 + 884));
      *(_DWORD *)v5 = 1413771367;
      *(_QWORD *)(v5 + 16) = i;
      *(_QWORD *)(v5 + 8) = 0LL;
      *(_QWORD *)(v5 + 24) = 0LL;
    }
    if ( i )
    {
      v6 = *(_QWORD *)(a1 + 64);
      if ( !v6 )
        goto LABEL_28;
      if ( *(_DWORD *)v6 != 541218120 )
        sub_1C002DC78(a1, v6);
      if ( i > *(unsigned __int8 *)(v6 + 2938) )
      {
        v8 = 0LL;
      }
      else
      {
        v7 = *(_QWORD *)(v6 + 3056);
        if ( v7 )
        {
          v8 = 2928LL * i + v7 - 2928;
          if ( (dword_1C006B268 & 8) != 0 )
          {
            v9 = *(_QWORD *)(v6 + 888)
               + 32LL
               * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
            *(_DWORD *)v9 = 1044672615;
            *(_QWORD *)(v9 + 8) = 0LL;
            *(_QWORD *)(v9 + 16) = i;
            *(_QWORD *)(v9 + 24) = v8;
          }
        }
        else
        {
          v8 = 0LL;
        }
      }
    }
    else
    {
      v8 = 0LL;
    }
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 440));
    *(_DWORD *)(v8 + 448) = 1;
    v11 = *(_QWORD *)(v8 + 456) != v8 + 456;
    *(_DWORD *)(v8 + 448) = 0;
    v12 = (KSPIN_LOCK *)(v8 + 440);
    if ( v11 )
      break;
    KeReleaseSpinLock(v12, v10);
  }
  KeReleaseSpinLock(v12, v10);
  return 3221225473LL;
}
