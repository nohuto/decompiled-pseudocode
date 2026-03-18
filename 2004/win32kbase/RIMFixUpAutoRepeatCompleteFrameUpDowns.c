/*
 * XREFs of RIMFixUpAutoRepeatCompleteFrameUpDowns @ 0x1C01734D8
 * Callers:
 *     rimDispatchCompleteFrame @ 0x1C0175C04 (rimDispatchCompleteFrame.c)
 * Callees:
 *     memmove @ 0x1C00D3980 (memmove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMFixUpAutoRepeatCompleteFrameUpDowns(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int v8; // r14d
  unsigned int v9; // ebp
  int v10; // r8d
  __int64 v11; // rdx
  unsigned int i; // ecx
  __int64 v13; // r9
  int v14; // eax
  unsigned int v15; // eax
  _DWORD *v16; // rdx
  __int64 v17; // r8
  bool v18; // zf
  unsigned int v19; // edx
  __int64 v20; // rdi
  unsigned int v21; // eax
  __int64 v22; // r8
  unsigned int v23; // ecx

  if ( (*(_DWORD *)(a2 + 200) & 0x80u) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( (*(_DWORD *)(a2 + 184) & 0x200) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( *(_QWORD *)(a1 + 344) == -1LL )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  result = *(unsigned int *)(a3 + 24);
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0LL;
  for ( i = result; (unsigned int)v11 < (unsigned int)result; i = result )
  {
    v13 = *(_QWORD *)(a3 + 120);
    v14 = *(_DWORD *)(192 * v11 + v13 + 28);
    if ( (v14 & 0x10000) != 0 )
    {
      v15 = v14 & 0xFFFCFFFF | 0x20000;
      *(_DWORD *)(192 * v11 + v13 + 28) = v15;
      if ( (v15 & 0x2000) != 0 )
        v10 = 1;
    }
    result = *(unsigned int *)(a3 + 24);
    v11 = (unsigned int)(v11 + 1);
  }
  if ( *(_QWORD *)(a1 + 640) && v10 )
  {
    PoLatencySensitivityHint(2LL, v11);
    result = *(unsigned int *)(a3 + 24);
    i = *(_DWORD *)(a3 + 24);
  }
  if ( (_DWORD)result )
  {
    v16 = (_DWORD *)(*(_QWORD *)(a3 + 120) + 28LL);
    v17 = i;
    do
    {
      v18 = (*v16 & 0x40000) == 0;
      result = v9 + 1;
      v16 += 48;
      if ( v18 )
        result = v9;
      v9 = result;
      --v17;
    }
    while ( v17 );
    if ( (_DWORD)result )
    {
      do
      {
        v19 = *(_DWORD *)(a3 + 24);
        v20 = 0LL;
        v21 = v19;
        if ( v19 )
        {
          v22 = *(_QWORD *)(a3 + 120);
          while ( (*(_DWORD *)(192 * v20 + v22 + 28) & 0x40000) == 0 )
          {
            v20 = (unsigned int)(v20 + 1);
            if ( (unsigned int)v20 >= v19 )
              goto LABEL_33;
          }
          ++v8;
          if ( *(_QWORD *)(a3 + 104) == v22 + 192 * v20 )
            *(_QWORD *)(a3 + 104) = 0LL;
          if ( (unsigned int)v20 < v19 )
          {
            do
            {
              v23 = v19;
              if ( (unsigned int)v20 >= v19 - 1 )
              {
                v21 = *(_DWORD *)(a3 + 24);
              }
              else
              {
                memmove(
                  (void *)(*(_QWORD *)(a3 + 120) + 192 * v20),
                  (const void *)(*(_QWORD *)(a3 + 120) + 192LL * (unsigned int)(v20 + 1)),
                  0xC0uLL);
                v21 = *(_DWORD *)(a3 + 24);
                v23 = v21;
              }
              v20 = (unsigned int)(v20 + 1);
              v19 = v23;
            }
            while ( (unsigned int)v20 < v23 );
          }
        }
LABEL_33:
        ;
      }
      while ( v8 < v9 );
      result = v21 - v8;
      *(_DWORD *)(a3 + 24) = result;
    }
  }
  return result;
}
