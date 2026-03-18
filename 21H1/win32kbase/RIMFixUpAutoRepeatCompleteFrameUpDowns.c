/*
 * XREFs of RIMFixUpAutoRepeatCompleteFrameUpDowns @ 0x1C0179808
 * Callers:
 *     rimDispatchCompleteFrame @ 0x1C017BF34 (rimDispatchCompleteFrame.c)
 * Callees:
 *     memmove @ 0x1C00D2F00 (memmove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMFixUpAutoRepeatCompleteFrameUpDowns(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v7; // r14d
  unsigned int v8; // ebp
  int v9; // r8d
  __int64 v10; // rdx
  unsigned int i; // ecx
  __int64 v12; // r9
  int v13; // eax
  unsigned int v14; // eax
  _DWORD *v15; // rdx
  __int64 v16; // r8
  bool v17; // zf
  unsigned int v18; // edx
  __int64 v19; // rdi
  unsigned int v20; // eax
  __int64 v21; // r8
  unsigned int v22; // ecx

  if ( (*(_DWORD *)(a2 + 200) & 0x80u) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( (*(_DWORD *)(a2 + 184) & 0x200) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( *(_QWORD *)(a1 + 344) == -1LL )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  result = *(unsigned int *)(a3 + 24);
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0LL;
  for ( i = result; (unsigned int)v10 < (unsigned int)result; i = result )
  {
    v12 = *(_QWORD *)(a3 + 120);
    v13 = *(_DWORD *)(192 * v10 + v12 + 28);
    if ( (v13 & 0x10000) != 0 )
    {
      v14 = v13 & 0xFFFCFFFF | 0x20000;
      *(_DWORD *)(192 * v10 + v12 + 28) = v14;
      if ( (v14 & 0x2000) != 0 )
        v9 = 1;
    }
    result = *(unsigned int *)(a3 + 24);
    v10 = (unsigned int)(v10 + 1);
  }
  if ( *(_QWORD *)(a1 + 640) && v9 )
  {
    PoLatencySensitivityHint(2LL, v10);
    result = *(unsigned int *)(a3 + 24);
    i = *(_DWORD *)(a3 + 24);
  }
  if ( (_DWORD)result )
  {
    v15 = (_DWORD *)(*(_QWORD *)(a3 + 120) + 28LL);
    v16 = i;
    do
    {
      v17 = (*v15 & 0x40000) == 0;
      result = v8 + 1;
      v15 += 48;
      if ( v17 )
        result = v8;
      v8 = result;
      --v16;
    }
    while ( v16 );
    if ( (_DWORD)result )
    {
      do
      {
        v18 = *(_DWORD *)(a3 + 24);
        v19 = 0LL;
        v20 = v18;
        if ( v18 )
        {
          v21 = *(_QWORD *)(a3 + 120);
          while ( (*(_DWORD *)(192 * v19 + v21 + 28) & 0x40000) == 0 )
          {
            v19 = (unsigned int)(v19 + 1);
            if ( (unsigned int)v19 >= v18 )
              goto LABEL_33;
          }
          ++v7;
          if ( *(_QWORD *)(a3 + 104) == v21 + 192 * v19 )
            *(_QWORD *)(a3 + 104) = 0LL;
          if ( (unsigned int)v19 < v18 )
          {
            do
            {
              v22 = v18;
              if ( (unsigned int)v19 >= v18 - 1 )
              {
                v20 = *(_DWORD *)(a3 + 24);
              }
              else
              {
                memmove(
                  (void *)(*(_QWORD *)(a3 + 120) + 192 * v19),
                  (const void *)(*(_QWORD *)(a3 + 120) + 192LL * (unsigned int)(v19 + 1)),
                  0xC0uLL);
                v20 = *(_DWORD *)(a3 + 24);
                v22 = v20;
              }
              v19 = (unsigned int)(v19 + 1);
              v18 = v22;
            }
            while ( (unsigned int)v19 < v22 );
          }
        }
LABEL_33:
        ;
      }
      while ( v7 < v8 );
      result = v20 - v7;
      *(_DWORD *)(a3 + 24) = result;
    }
  }
  return result;
}
