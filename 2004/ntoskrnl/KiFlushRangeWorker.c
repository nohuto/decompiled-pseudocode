/*
 * XREFs of KiFlushRangeWorker @ 0x140324C90
 * Callers:
 *     KeFlushMultipleRangeTb @ 0x14023A4F0 (KeFlushMultipleRangeTb.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x1403F82A0 (KiSetUserTbFlushPending.c)
 */

char __fastcall KiFlushRangeWorker(__int64 a1, __int64 a2)
{
  void **v2; // rbx
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rsi
  int v6; // edi
  _KPROCESS *Process; // rcx
  __int64 v9; // r15
  unsigned __int64 v10; // rbp
  _KPROCESS *v12; // rcx
  __int128 v14; // [rsp+20h] [rbp-58h]
  __int128 v15; // [rsp+30h] [rbp-48h]

  v2 = *(void ***)a1;
  v4 = *(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8);
  do
  {
    v5 = (unsigned __int64)*v2;
    v6 = (1 << *(_DWORD *)(a1 + 12)) & 0xA;
    if ( v6 )
    {
      if ( KiFlushPcid )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( !Process->AddressPolicy )
        {
          if ( (KiFlushPcid & 2) != 0 )
          {
            *(_QWORD *)&v14 = 1LL;
            *((_QWORD *)&v14 + 1) = *v2;
            _EAX = 0;
            __asm { invpcid eax, [rsp+78h+var_58] }
          }
          else
          {
            KiSetUserTbFlushPending(Process, a2);
          }
        }
      }
    }
    __invlpg((void *)v5);
    LOBYTE(_RAX) = 8 * ((v5 >> 10) & 3);
    v9 = 4096LL << (9 * ((unsigned __int8)(v5 >> 10) & 3u));
    v10 = v5 & 0x3FF;
    if ( (v5 & 0x3FF) != 0 )
    {
      do
      {
        v5 += v9;
        if ( v6 )
        {
          if ( KiFlushPcid )
          {
            _RAX = KeGetCurrentThread();
            v12 = _RAX->ApcState.Process;
            if ( !v12->AddressPolicy )
            {
              if ( (KiFlushPcid & 2) != 0 )
              {
                *(_QWORD *)&v15 = 1LL;
                *((_QWORD *)&v15 + 1) = v5;
                LODWORD(_RAX) = 0;
                __asm { invpcid eax, [rsp+78h+var_48] }
              }
              else
              {
                LOBYTE(_RAX) = KiSetUserTbFlushPending(v12, a2);
              }
            }
          }
        }
        __invlpg((void *)v5);
        --v10;
      }
      while ( v10 );
    }
    ++v2;
  }
  while ( (unsigned __int64)v2 < v4 );
  return (char)_RAX;
}
