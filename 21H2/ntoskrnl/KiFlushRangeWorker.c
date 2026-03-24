/*
 * XREFs of KiFlushRangeWorker @ 0x140290C30
 * Callers:
 *     KeFlushMultipleRangeTb @ 0x14033B620 (KeFlushMultipleRangeTb.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x1403FF4F0 (KiSetUserTbFlushPending.c)
 */

char __fastcall KiFlushRangeWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void **v4; // rbx
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rsi
  int v8; // edi
  _KPROCESS *Process; // rcx
  __int64 v11; // r15
  unsigned __int64 v12; // rbp
  _KPROCESS *v14; // rcx
  __int128 v16; // [rsp+20h] [rbp-58h]
  __int128 v17; // [rsp+30h] [rbp-48h]

  v4 = *(void ***)a1;
  v6 = *(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8);
  do
  {
    v7 = (unsigned __int64)*v4;
    v8 = (1 << *(_DWORD *)(a1 + 12)) & 0xA;
    if ( v8 )
    {
      if ( KiFlushPcid )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( !Process->AddressPolicy )
        {
          if ( (KiFlushPcid & 2) != 0 )
          {
            *(_QWORD *)&v16 = 1LL;
            *((_QWORD *)&v16 + 1) = *v4;
            _EAX = 0;
            __asm { invpcid eax, [rsp+78h+var_58] }
          }
          else
          {
            KiSetUserTbFlushPending(Process, a2, a3, a4);
          }
        }
      }
    }
    __invlpg((void *)v7);
    LOBYTE(_RAX) = 8 * ((v7 >> 10) & 3);
    v11 = 4096LL << (9 * ((unsigned __int8)(v7 >> 10) & 3u));
    v12 = v7 & 0x3FF;
    if ( (v7 & 0x3FF) != 0 )
    {
      do
      {
        v7 += v11;
        if ( v8 )
        {
          if ( KiFlushPcid )
          {
            _RAX = KeGetCurrentThread();
            v14 = _RAX->ApcState.Process;
            if ( !v14->AddressPolicy )
            {
              if ( (KiFlushPcid & 2) != 0 )
              {
                *(_QWORD *)&v17 = 1LL;
                *((_QWORD *)&v17 + 1) = v7;
                LODWORD(_RAX) = 0;
                __asm { invpcid eax, [rsp+78h+var_48] }
              }
              else
              {
                LOBYTE(_RAX) = KiSetUserTbFlushPending(v14, a2, a3, a4);
              }
            }
          }
        }
        __invlpg((void *)v7);
        --v12;
      }
      while ( v12 );
    }
    ++v4;
  }
  while ( (unsigned __int64)v4 < v6 );
  return (char)_RAX;
}
