/*
 * XREFs of TpCallbackIndependent @ 0x180062300
 * Callers:
 *     <none>
 * Callees:
 *     NtAlpcSetInformation @ 0x18009E240 (NtAlpcSetInformation.c)
 *     NtSetInformationWorkerFactory @ 0x1800A0480 (NtSetInformationWorkerFactory.c)
 *     TppRaiseInvalidParameter @ 0x18011263C (TppRaiseInvalidParameter.c)
 */

NTSTATUS __fastcall TpCallbackIndependent(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rdi
  __int64 v4; // rdi
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  __int64 v7; // rsi
  __int64 v8; // rax
  signed __int32 v9; // r9d
  int v10; // eax
  signed __int32 v11; // edx
  signed __int32 v12; // r8d
  int v13; // eax
  int v14; // ecx
  void *v16; // rcx
  int PortInformation; // [rsp+40h] [rbp+8h] BYREF
  int WorkerFactoryInformation; // [rsp+48h] [rbp+10h] BYREF
  signed __int64 v19; // [rsp+50h] [rbp+18h]

  v2 = 0;
  v3 = 0LL;
  if ( !a1 || *(_DWORD *)(a1 + 72) )
  {
    TppRaiseInvalidParameter(a1, a2, a1);
    v13 = -1073741811;
    goto LABEL_17;
  }
  v4 = *(_QWORD *)(a1 + 184);
  if ( v4 )
    v3 = *(_QWORD *)(v4 + 144);
  else
    v3 = *(_QWORD *)(a1 + 128);
  if ( !v3 )
  {
    v13 = -1073741811;
LABEL_24:
    v14 = v13;
    goto LABEL_25;
  }
  if ( TppPoolpSerializedPool == v3 )
  {
    v13 = -1073741637;
    goto LABEL_24;
  }
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 416));
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 420));
  _m_prefetchw((const void *)(v3 + 8));
  v5 = *(_QWORD *)(v3 + 8);
  v19 = v5;
  do
  {
    LODWORD(v19) = (unsigned __int16)(v19 ^ (v19 + 1)) ^ (unsigned int)v19;
    v6 = v5;
    v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 8), v19, v5);
    v19 = v5;
  }
  while ( v6 != v5 );
  *(_DWORD *)(a1 + 144) |= 0x10u;
  v7 = *(_QWORD *)(a1 + 136);
  *(_DWORD *)(a1 + 72) = 2;
  if ( v7 && (*(_BYTE *)(v7 + 288) & 3) == 3 )
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(v7 + 216);
      v9 = *(_DWORD *)(v7 + 284);
      if ( !v8 || (v10 = *(_DWORD *)(v8 + 440)) == 0 )
        v10 = MEMORY[0x7FFE03C0];
      v11 = v10 + *(_DWORD *)(*(_QWORD *)(v7 + 216) + 420LL);
      v12 = v10 + v11;
      if ( v9 >= v11 && v9 <= v10 + v12 )
        break;
      if ( v9 == _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 284), v12, v9) )
      {
        v16 = *(void **)(v7 + 272);
        PortInformation = v10 + v11;
        NtAlpcSetInformation(v16, AlpcAdjustCompletionListConcurrencyCountInformation, &PortInformation, 4u);
      }
    }
  }
  v13 = 0;
LABEL_17:
  v14 = v13;
  if ( v13 >= 0 )
  {
    WorkerFactoryInformation = 2;
    return NtSetInformationWorkerFactory(*(HANDLE *)(v3 + 56), WorkerFactoryCallbackType, &WorkerFactoryInformation, 4u);
  }
LABEL_25:
  if ( v13 != -1073741637 )
    return v14;
  return v2;
}
