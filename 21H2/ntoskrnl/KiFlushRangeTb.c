/*
 * XREFs of KiFlushRangeTb @ 0x1403A22F0
 * Callers:
 *     KeFlushMultipleRangeTb @ 0x1402F3C40 (KeFlushMultipleRangeTb.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x1403AD40C (KeFlushMultipleRangeCurrentTb.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x140420AD0 (KiSetUserTbFlushPending.c)
 */

char __fastcall KiFlushRangeTb(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // esi
  _KPROCESS *Process; // rcx
  __int64 v8; // rbp
  unsigned __int64 v9; // rdi
  _KPROCESS *v10; // rcx
  __int128 v13; // [rsp+20h] [rbp-48h]
  __int128 v14; // [rsp+30h] [rbp-38h]

  v5 = (1 << a2) & 0xA;
  if ( v5 )
  {
    if ( KiFlushPcid )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( !Process->AddressPolicy )
      {
        if ( (KiFlushPcid & 2) != 0 )
        {
          *(_QWORD *)&v13 = 1LL;
          *((_QWORD *)&v13 + 1) = a1;
          _EAX = 0;
          __asm { invpcid eax, [rsp+68h+var_48] }
        }
        else
        {
          KiSetUserTbFlushPending(Process, a2, a3, a4);
        }
      }
    }
  }
  __invlpg((void *)a1);
  LOBYTE(_RAX) = 8 * ((a1 >> 10) & 3);
  v8 = 4096LL << (9 * ((unsigned __int8)(a1 >> 10) & 3u));
  v9 = a1 & 0x3FF;
  if ( (a1 & 0x3FF) != 0 )
  {
    do
    {
      a1 += v8;
      if ( v5 )
      {
        if ( KiFlushPcid )
        {
          _RAX = KeGetCurrentThread();
          v10 = _RAX->ApcState.Process;
          if ( !v10->AddressPolicy )
          {
            if ( (KiFlushPcid & 2) != 0 )
            {
              *(_QWORD *)&v14 = 1LL;
              *((_QWORD *)&v14 + 1) = a1;
              LODWORD(_RAX) = 0;
              __asm { invpcid eax, [rsp+68h+var_38] }
            }
            else
            {
              LOBYTE(_RAX) = KiSetUserTbFlushPending(v10, a2, a3, a4);
            }
          }
        }
      }
      __invlpg((void *)a1);
      --v9;
    }
    while ( v9 );
  }
  return (char)_RAX;
}
