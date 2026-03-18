/*
 * XREFs of KiFlushRangeTb @ 0x1403C5FD0
 * Callers:
 *     KeFlushMultipleRangeTb @ 0x14023A4F0 (KeFlushMultipleRangeTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x1403C5EEC (KeFlushMultipleRangeCurrentTb.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x1403F82A0 (KiSetUserTbFlushPending.c)
 */

char __fastcall KiFlushRangeTb(unsigned __int64 a1, __int64 a2)
{
  int v3; // edi
  __int64 v5; // rbp
  bool v6; // zf
  unsigned __int64 i; // rsi
  _KPROCESS *Process; // rcx
  _KPROCESS *v10; // rcx
  __int128 v12; // [rsp+20h] [rbp-48h]
  __int128 v13; // [rsp+30h] [rbp-38h]

  v3 = (1 << a2) & 0xA;
  if ( v3 )
  {
    if ( KiFlushPcid )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( !Process->AddressPolicy )
      {
        if ( (KiFlushPcid & 2) != 0 )
        {
          *(_QWORD *)&v12 = 1LL;
          *((_QWORD *)&v12 + 1) = a1;
          _EAX = 0;
          __asm { invpcid eax, [rsp+68h+var_48] }
        }
        else
        {
          KiSetUserTbFlushPending(Process, a2);
        }
      }
    }
  }
  LOBYTE(_RAX) = 8 * ((a1 >> 10) & 3);
  v5 = 4096LL << (9 * ((unsigned __int8)(a1 >> 10) & 3u));
  v6 = (a1 & 0x3FF) == 0;
  for ( i = a1 & 0x3FF; ; v6 = i == 0 )
  {
    __invlpg((void *)a1);
    if ( v6 )
      break;
    a1 += v5;
    if ( v3 )
    {
      if ( KiFlushPcid )
      {
        _RAX = KeGetCurrentThread();
        v10 = _RAX->ApcState.Process;
        if ( !v10->AddressPolicy )
        {
          if ( (KiFlushPcid & 2) != 0 )
          {
            *(_QWORD *)&v13 = 1LL;
            *((_QWORD *)&v13 + 1) = a1;
            LODWORD(_RAX) = 0;
            __asm { invpcid eax, [rsp+68h+var_38] }
          }
          else
          {
            LOBYTE(_RAX) = KiSetUserTbFlushPending(v10, a2);
          }
        }
      }
    }
    --i;
  }
  return (char)_RAX;
}
