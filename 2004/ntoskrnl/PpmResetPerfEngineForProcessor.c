/*
 * XREFs of PpmResetPerfEngineForProcessor @ 0x1403811AC
 * Callers:
 *     PopHandleNextState @ 0x140990110 (PopHandleNextState.c)
 * Callees:
 *     PpmResetPerfTimes @ 0x1403A2974 (PpmResetPerfTimes.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PpmResetPerfEngineForProcessor(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rcx
  void (__fastcall *v5)(_QWORD); // rax
  unsigned int k; // esi
  __int64 v8; // rbp
  __int64 v9; // r14
  int v10; // ecx
  __int64 i; // rbx
  unsigned int j; // edi
  void (__fastcall *v13)(_QWORD); // rax
  __int64 v14; // rsi
  void (__fastcall *v15)(_QWORD); // rax

  if ( !*(_DWORD *)(a1 + 36) )
  {
    for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
    {
      if ( *(_DWORD *)(i + 208) )
      {
        for ( j = 0; j < *(_DWORD *)(i + 200); ++j )
        {
          v13 = *(void (__fastcall **)(_QWORD))(i + 272);
          v14 = *(_QWORD *)(i + 216) + 136LL * j;
          if ( v13 )
            v13(*(_QWORD *)(v14 + 8));
          if ( *(_DWORD *)(v14 + 16) == 1 )
            PpmResetPerfTimes(*(_QWORD *)v14);
        }
      }
    }
  }
  v2 = a1 + 33128;
  v3 = *(_QWORD *)(a1 + 33128);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 33136);
    if ( v4 )
    {
      v5 = *(void (__fastcall **)(_QWORD))(v3 + 272);
      if ( v5 )
        v5(*(_QWORD *)(v4 + 8));
      if ( v2 == *(_QWORD *)(v3 + 16) )
      {
        for ( k = 0; k < *(_DWORD *)(v3 + 200); ++k )
        {
          v8 = *(_QWORD *)(v3 + 216);
          v9 = 136LL * k;
          v10 = *(_DWORD *)(v9 + v8 + 16);
          if ( v10 )
          {
            v15 = *(void (__fastcall **)(_QWORD))(v3 + 272);
            if ( v15 )
            {
              v15(*(_QWORD *)(v9 + v8 + 8));
              v10 = *(_DWORD *)(v9 + v8 + 16);
            }
            if ( v10 == 1 )
              PpmResetPerfTimes(*(_QWORD *)(v9 + v8));
          }
        }
      }
    }
  }
  return PpmResetPerfTimes(v2);
}
