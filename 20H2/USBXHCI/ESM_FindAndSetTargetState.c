/*
 * XREFs of ESM_FindAndSetTargetState @ 0x1C0009140
 * Callers:
 *     ESM_RunStateMachine @ 0x1C0008980 (ESM_RunStateMachine.c)
 * Callees:
 *     WPP_RECORDER_SF_qLLL @ 0x1C00092F0 (WPP_RECORDER_SF_qLLL.c)
 *     ESM_LogUnhandledEvent @ 0x1C004F298 (ESM_LogUnhandledEvent.c)
 */

char __fastcall ESM_FindAndSetTargetState(__int64 a1, unsigned int a2, _BYTE *a3)
{
  __int64 v3; // r15
  _BYTE *v4; // r10
  __int64 v5; // r12
  unsigned int v6; // ebp
  int v7; // r13d
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // ebx
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rcx
  bool v16; // zf
  unsigned __int8 v18; // cl
  unsigned __int8 v19; // al
  int v20; // esi
  int v21; // [rsp+20h] [rbp-58h]

  LODWORD(v3) = *(_DWORD *)(a1 + 880);
  v4 = a3;
  v5 = *(_QWORD *)(a1 + 968);
  v6 = v3;
  v7 = *(_DWORD *)(a1 + 976);
  *a3 = 0;
  while ( 1 )
  {
    v10 = v6;
    LODWORD(v11) = 0;
    v12 = 1002;
    v13 = *(_QWORD *)(v5 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4LL * v6 + 852) - v7));
    v14 = *(_DWORD *)(v13 + 32);
    if ( v14 != 1000 )
    {
      v15 = 0LL;
      while ( a2 != v14 )
      {
        v11 = (unsigned int)(v11 + 1);
        v15 = (unsigned int)v11;
        v14 = *(_DWORD *)(v13 + 8 * v11 + 32);
        if ( v14 == 1000 )
          goto LABEL_18;
      }
      v12 = *(_DWORD *)(v13 + 8 * v15 + 36);
      if ( v12 != 1002 )
        break;
    }
LABEL_18:
    if ( !v6 )
      break;
    --v6;
  }
  if ( v12 == 1000 )
    return 0;
  if ( v12 == 1002 )
  {
    ESM_LogUnhandledEvent(a1, a2);
    return 0;
  }
  if ( v6 < (unsigned int)v3 )
  {
    v18 = *(_BYTE *)(a1 + 832);
    do
    {
      v3 = (unsigned int)(v3 - 1);
      v19 = v18;
      v20 = *(_DWORD *)(a1 + 4 * v3 + 852);
      if ( *(_DWORD *)(a1 + 976) == 2000 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_qLLL(
          WPP_GLOBAL_Control->DeviceExtension,
          (unsigned int)&WPP_RECORDER_INITIALIZED,
          v13,
          v10,
          v21,
          *(_QWORD *)(a1 + 960),
          *(_DWORD *)(a1 + 12LL * ((v18 - 1) & 0x3F) + 4),
          232,
          *(_DWORD *)(a1 + 4 * v3 + 852));
        v19 = *(_BYTE *)(a1 + 832);
      }
      *(_DWORD *)(a1 + 12LL * v19 + 4) = v20;
      *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 8) = v3;
      *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832)) = 1000;
      v18 = (*(_BYTE *)(a1 + 832) + 1) & 0x3F;
      *(_BYTE *)(a1 + 832) = v18;
    }
    while ( (unsigned int)v3 > v6 );
    v4 = a3;
    v10 = v6;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v5 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4 * v10 + 852) - v7)) + 16LL) & 0x20) != 0 )
    *v4 = 1;
  *(_DWORD *)(a1 + 4 * v10 + 852) = v12;
  v16 = *(_DWORD *)(a1 + 976) == 2000;
  *(_DWORD *)(a1 + 880) = v6;
  if ( v16 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLLL(
      WPP_GLOBAL_Control->DeviceExtension,
      (unsigned int)&WPP_RECORDER_INITIALIZED,
      v13,
      v10,
      v21,
      *(_QWORD *)(a1 + 960),
      *(_DWORD *)(a1 + 12LL * ((*(_BYTE *)(a1 + 832) - 1) & 0x3F) + 4),
      a2,
      v12);
  *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 4) = v12;
  *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 8) = v6;
  *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832)) = a2;
  *(_BYTE *)(a1 + 832) = (*(_BYTE *)(a1 + 832) + 1) & 0x3F;
  return 1;
}
