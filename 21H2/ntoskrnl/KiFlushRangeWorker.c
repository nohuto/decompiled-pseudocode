/*
 * XREFs of KiFlushRangeWorker @ 0x14020EBA0
 * Callers:
 *     KeFlushMultipleRangeTb @ 0x140346370 (KeFlushMultipleRangeTb.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x1403FF6D0 (KiSetUserTbFlushPending.c)
 */

char __fastcall KiFlushRangeWorker(__int64 a1)
{
  void **v1; // rbx
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rsi
  int v5; // edi
  __int64 v7; // r15
  unsigned __int64 v8; // rbp
  __int128 v11; // [rsp+20h] [rbp-58h]
  __int128 v12; // [rsp+30h] [rbp-48h]

  v1 = *(void ***)a1;
  v3 = *(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8);
  do
  {
    v4 = (unsigned __int64)*v1;
    v5 = (1 << *(_DWORD *)(a1 + 12)) & 0xA;
    if ( v5 && KiFlushPcid && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
    {
      if ( (KiFlushPcid & 2) != 0 )
      {
        *(_QWORD *)&v11 = 1LL;
        *((_QWORD *)&v11 + 1) = *v1;
        _EAX = 0;
        __asm { invpcid eax, [rsp+78h+var_58] }
      }
      else
      {
        KiSetUserTbFlushPending();
      }
    }
    __invlpg((void *)v4);
    LOBYTE(_RAX) = 8 * ((v4 >> 10) & 3);
    v7 = 4096LL << (9 * ((unsigned __int8)(v4 >> 10) & 3u));
    v8 = v4 & 0x3FF;
    if ( (v4 & 0x3FF) != 0 )
    {
      do
      {
        v4 += v7;
        if ( v5 )
        {
          if ( KiFlushPcid )
          {
            _RAX = KeGetCurrentThread();
            if ( !_RAX->ApcState.Process->AddressPolicy )
            {
              if ( (KiFlushPcid & 2) != 0 )
              {
                *(_QWORD *)&v12 = 1LL;
                *((_QWORD *)&v12 + 1) = v4;
                LODWORD(_RAX) = 0;
                __asm { invpcid eax, [rsp+78h+var_48] }
              }
              else
              {
                LOBYTE(_RAX) = KiSetUserTbFlushPending();
              }
            }
          }
        }
        __invlpg((void *)v4);
        --v8;
      }
      while ( v8 );
    }
    ++v1;
  }
  while ( (unsigned __int64)v1 < v3 );
  return (char)_RAX;
}
