/*
 * XREFs of ListTableIteratorNext @ 0x1C0180AB8
 * Callers:
 *     RIMCmActiveContactsBegin @ 0x1C017E3A8 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsNext @ 0x1C017E514 (RIMCmActiveContactsNext.c)
 * Callees:
 *     ListTableEnd @ 0x1C0180A60 (ListTableEnd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ListTableIteratorNext(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  _QWORD *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r10
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // rax
  __int64 v14; // xmm1_8
  _BYTE v16[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *a2;
  if ( !*a2 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
    v4 = *a2;
  }
  if ( *((_DWORD *)a2 + 2) >= *(_DWORD *)(v4 + 8) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v7 = *(_QWORD **)a2[2];
  *(_OWORD *)a1 = *(_OWORD *)a2;
  v8 = *(_QWORD *)a1;
  LODWORD(v9) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 16) = v7;
  v10 = *(_QWORD *)v8;
  if ( v7 == (_QWORD *)(*(_QWORD *)v8 + 16LL * (unsigned int)v9) )
  {
    v11 = *(unsigned int *)(v8 + 8);
    while ( 1 )
    {
      v9 = (unsigned int)(v9 + 1);
      *(_DWORD *)(a1 + 8) = v9;
      if ( (unsigned int)v9 >= (unsigned int)v11 )
        break;
      v7 = (_QWORD *)(v10 + 16LL * (unsigned int)v9);
      v12 = (_QWORD *)*v7;
      *(_QWORD *)(a1 + 16) = *v7;
      if ( v12 != v7 )
        return a1;
    }
    if ( (_DWORD)v9 != (_DWORD)v11 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v9, v8, v11);
      v8 = *(_QWORD *)a1;
    }
    v13 = ListTableEnd((__int64)v16, v8, v8, v11);
    v14 = *(_QWORD *)(v13 + 16);
    *(_OWORD *)a1 = *(_OWORD *)v13;
    *(_QWORD *)(a1 + 16) = v14;
  }
  return a1;
}
