/*
 * XREFs of EtwpUpdateEnableMask @ 0x140637DA8
 * Callers:
 *     NtTraceEvent @ 0x14027E790 (NtTraceEvent.c)
 *     EtwpRegisterUMGuid @ 0x1406DB250 (EtwpRegisterUMGuid.c)
 *     EtwpRegisterProvider @ 0x140762EE0 (EtwpRegisterProvider.c)
 * Callees:
 *     EtwpCheckLoggerControlAccess @ 0x140637BEC (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x140638848 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140638894 (EtwpAcquireLoggerContextByLoggerId.c)
 */

void __fastcall EtwpUpdateEnableMask(__int64 a1, char a2, char a3, char a4, _BYTE *a5)
{
  _DWORD *v5; // rbx
  unsigned int i; // edi
  int v10; // esi
  __int64 v11; // rax
  __int64 v12; // rbp
  int v13; // eax

  if ( !a2 )
  {
    v5 = (_DWORD *)(a1 + 136);
    for ( i = 0; i < 8; ++i )
    {
      if ( *(v5 - 2) && (!a3 || (*v5 & 0x400) != 0) )
      {
        v10 = 0;
        v11 = EtwpAcquireLoggerContextByLoggerId(*(_QWORD *)(a1 + 392), *((unsigned __int16 *)v5 - 1), 0LL);
        v12 = v11;
        if ( v11 )
        {
          v13 = *(_DWORD *)(v11 + 12);
          if ( a4 )
          {
            if ( (v13 & 0x80u) != 0 )
              v10 = EtwpCheckLoggerControlAccess(0x200u, v12);
          }
          else if ( (v13 & 0x1000000) != 0 )
          {
            v10 = -1073741790;
          }
          EtwpReleaseLoggerContext(v12, 0LL);
          if ( !v10 )
            *a5 |= 1 << i;
        }
      }
      v5 += 8;
    }
  }
}
