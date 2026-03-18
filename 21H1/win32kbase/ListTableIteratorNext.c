/*
 * XREFs of ListTableIteratorNext @ 0x1C0188CF8
 * Callers:
 *     RIMCmActiveContactsBegin @ 0x1C01864D8 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsNext @ 0x1C0186644 (RIMCmActiveContactsNext.c)
 * Callees:
 *     ListTableEnd @ 0x1C0188CA0 (ListTableEnd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ListTableIteratorNext(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  _QWORD *v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // edx
  __int64 v8; // r10
  unsigned int v9; // r9d
  _QWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // xmm1_8
  _BYTE v14[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *a2;
  if ( !*a2 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
    v2 = *a2;
  }
  if ( *((_DWORD *)a2 + 2) >= *(_DWORD *)(v2 + 8) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v5 = *(_QWORD **)a2[2];
  *(_OWORD *)a1 = *(_OWORD *)a2;
  v6 = *(_QWORD *)a1;
  v7 = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 16) = v5;
  v8 = *(_QWORD *)v6;
  if ( v5 == (_QWORD *)(*(_QWORD *)v6 + 16LL * v7) )
  {
    v9 = *(_DWORD *)(v6 + 8);
    while ( 1 )
    {
      *(_DWORD *)(a1 + 8) = ++v7;
      if ( v7 >= v9 )
        break;
      v5 = (_QWORD *)(v8 + 16LL * v7);
      v10 = (_QWORD *)*v5;
      *(_QWORD *)(a1 + 16) = *v5;
      if ( v10 != v5 )
        return a1;
    }
    if ( v7 != v9 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5);
      v6 = *(_QWORD *)a1;
    }
    v11 = ListTableEnd((__int64)v14, v6);
    v12 = *(_QWORD *)(v11 + 16);
    *(_OWORD *)a1 = *(_OWORD *)v11;
    *(_QWORD *)(a1 + 16) = v12;
  }
  return a1;
}
