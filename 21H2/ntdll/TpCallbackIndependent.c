/*
 * XREFs of TpCallbackIndependent @ 0x1800637F0
 * Callers:
 *     <none>
 * Callees:
 *     NtAlpcSetInformation @ 0x18009E7D0 (NtAlpcSetInformation.c)
 *     NtSetInformationWorkerFactory @ 0x1800A0A50 (NtSetInformationWorkerFactory.c)
 *     TppRaiseInvalidParameter @ 0x1801124DC (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpCallbackIndependent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi
  __int64 v6; // rdi
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  __int64 v9; // rsi
  __int64 v10; // rax
  signed __int32 v11; // r9d
  int v12; // eax
  signed __int32 v13; // edx
  signed __int32 v14; // r8d
  int v15; // eax
  unsigned int v16; // ecx
  __int64 v18; // rcx
  int v19; // [rsp+40h] [rbp+8h] BYREF
  int v20; // [rsp+48h] [rbp+10h] BYREF
  signed __int64 v21; // [rsp+50h] [rbp+18h]

  v4 = 0;
  v5 = 0LL;
  if ( !a1 || *(_DWORD *)(a1 + 72) )
  {
    TppRaiseInvalidParameter(a1, a2, a1, a4);
    v15 = -1073741811;
    goto LABEL_17;
  }
  v6 = *(_QWORD *)(a1 + 184);
  if ( v6 )
    v5 = *(_QWORD *)(v6 + 144);
  else
    v5 = *(_QWORD *)(a1 + 128);
  if ( !v5 )
  {
    v15 = -1073741811;
LABEL_24:
    v16 = v15;
    goto LABEL_25;
  }
  if ( TppPoolpSerializedPool == v5 )
  {
    v15 = -1073741637;
    goto LABEL_24;
  }
  _InterlockedDecrement((volatile signed __int32 *)(v5 + 416));
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 420));
  _m_prefetchw((const void *)(v5 + 8));
  v7 = *(_QWORD *)(v5 + 8);
  v21 = v7;
  do
  {
    LODWORD(v21) = (unsigned __int16)(v21 ^ (v21 + 1)) ^ (unsigned int)v21;
    v8 = v7;
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 8), v21, v7);
    v21 = v7;
  }
  while ( v8 != v7 );
  *(_DWORD *)(a1 + 144) |= 0x10u;
  v9 = *(_QWORD *)(a1 + 136);
  *(_DWORD *)(a1 + 72) = 2;
  if ( v9 && (*(_BYTE *)(v9 + 288) & 3) == 3 )
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(v9 + 216);
      v11 = *(_DWORD *)(v9 + 284);
      if ( !v10 || (v12 = *(_DWORD *)(v10 + 440)) == 0 )
        v12 = MEMORY[0x7FFE03C0];
      v13 = v12 + *(_DWORD *)(*(_QWORD *)(v9 + 216) + 420LL);
      v14 = v12 + v13;
      if ( v11 >= v13 && v11 <= v12 + v14 )
        break;
      if ( v11 == _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 284), v14, v11) )
      {
        v18 = *(_QWORD *)(v9 + 272);
        v19 = v12 + v13;
        NtAlpcSetInformation(v18, 8LL, &v19);
      }
    }
  }
  v15 = 0;
LABEL_17:
  v16 = v15;
  if ( v15 >= 0 )
  {
    v20 = 2;
    return NtSetInformationWorkerFactory(*(_QWORD *)(v5 + 56), 9LL, &v20);
  }
LABEL_25:
  if ( v15 != -1073741637 )
    return v16;
  return v4;
}
