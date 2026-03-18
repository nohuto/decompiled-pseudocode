/*
 * XREFs of RIMCmActivateContact @ 0x1C017E274
 * Callers:
 *     rimFindOrCreateActiveContact @ 0x1C017A304 (rimFindOrCreateActiveContact.c)
 * Callees:
 *     rimGetNextFreeCursor @ 0x1C017EB94 (rimGetNextFreeCursor.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 *__fastcall RIMCmActivateContact(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 **v6; // rcx
  __int64 *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 *v10; // rax
  int NextFreeCursor; // eax
  __int64 **v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx

  v6 = (__int64 **)(a1 + 920);
  v7 = *v6;
  if ( *v6 == (__int64 *)v6 )
    return 0LL;
  v8 = a2 % *(_DWORD *)(a1 + 944);
  v9 = *(_QWORD *)(a1 + 936) + 16LL * (a2 % *(_DWORD *)(a1 + 944));
  if ( (__int64 **)v7[1] != v6 )
    goto LABEL_18;
  v10 = (__int64 *)*v7;
  if ( *(__int64 **)(*v7 + 8) != v7 )
    goto LABEL_18;
  *v6 = v10;
  v10[1] = (__int64)v6;
  if ( (v7[2] & 2) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v8, a3, a4);
  if ( *((_DWORD *)v7 - 2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v8, a3, a4);
  *((_DWORD *)v7 + 4) |= 2u;
  *((_DWORD *)v7 - 4) = a2;
  if ( *(_DWORD *)(a1 + 720) != 1 || (*(_DWORD *)(a1 + 312) & 0x20) != 0 )
    NextFreeCursor = rimGetNextFreeCursor(a1);
  else
    NextFreeCursor = *(unsigned __int16 *)(*(_QWORD *)(a1 + 968) + 4LL);
  *((_DWORD *)v7 - 3) = NextFreeCursor;
  v7[1] = 0LL;
  *v7 = 0LL;
  v12 = *(__int64 ***)(v9 + 8);
  if ( *v12 != (__int64 *)v9 )
LABEL_18:
    __fastfail(3u);
  *v7 = v9;
  v7[1] = (__int64)v12;
  *v12 = v7;
  *(_QWORD *)(v9 + 8) = v7;
  v13 = *(unsigned int *)(a1 + 952);
  if ( (unsigned int)v13 >= *(_DWORD *)(a1 + 720) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v13, a3, a4);
    LODWORD(v13) = *(_DWORD *)(a1 + 952);
  }
  ++*(_DWORD *)(a1 + 956);
  v14 = (unsigned int)(v13 + 1);
  *(_DWORD *)(a1 + 952) = v14;
  if ( (unsigned int)v14 < *(_DWORD *)(a1 + 956) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v14, a3, a4);
  return v7 - 2;
}
