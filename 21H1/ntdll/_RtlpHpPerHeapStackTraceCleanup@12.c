/*
 * XREFs of _RtlpHpPerHeapStackTraceCleanup@12 @ 0x4B36DA1B
 * Callers:
 *     _RtlpHpStackTraceHeapDestroy@4 @ 0x4B2AFD4E (_RtlpHpStackTraceHeapDestroy@4.c)
 *     _RtlpHpStackTraceHeapDisable@8 @ 0x4B36E4A0 (_RtlpHpStackTraceHeapDisable@8.c)
 * Callees:
 *     _RtlRunOnceBeginInitialize@12 @ 0x4B2B2320 (_RtlRunOnceBeginInitialize@12.c)
 *     _RtlpHpMetadataFree@12 @ 0x4B379479 (_RtlpHpMetadataFree@12.c)
 *     _RtlStackDbStackRemove@8 @ 0x4B38A807 (_RtlStackDbStackRemove@8.c)
 */

int __fastcall RtlpHpPerHeapStackTraceCleanup(PRTL_RUN_ONCE RunOnce, int a2, int a3)
{
  int result; // eax
  _DWORD *v4; // edi
  _DWORD *v5; // edx
  _DWORD *v6; // esi
  _DWORD *v7; // ecx
  _DWORD *v8; // ebx
  _DWORD *j; // ecx
  _DWORD *i; // [esp+10h] [ebp-10h]
  PVOID Context; // [esp+14h] [ebp-Ch] BYREF
  int v12; // [esp+18h] [ebp-8h]
  PRTL_RUN_ONCE v13; // [esp+1Ch] [ebp-4h]

  v12 = a2;
  v13 = RunOnce;
  result = RtlRunOnceBeginInitialize(RunOnce, 1u, &Context);
  if ( result >= 0 )
  {
    v4 = Context;
    v5 = (_DWORD *)*((_DWORD *)Context + 4);
    v6 = v5;
    for ( i = v5; ; v5 = i )
    {
      if ( !v6 )
        goto LABEL_8;
      v7 = (_DWORD *)*v6;
      result = *v6 & 0x80000002;
      if ( result == -2147483646 )
      {
        result = MEMORY[0];
        v7 = (_DWORD *)*v6;
      }
      if ( ((unsigned __int8)v7 & 1) != 0 )
      {
LABEL_8:
        ++v5;
        result = v4[4] + 4 * (v4[3] >> 5);
        while ( 1 )
        {
          if ( (unsigned int)v5 >= result )
          {
            v5 = i;
            v7 = 0;
            goto LABEL_13;
          }
          if ( (*v5 & 1) == 0 )
            break;
          ++v5;
        }
        v6 = (_DWORD *)*v5;
        v7 = (_DWORD *)*v5;
        i = v5;
      }
      else
      {
        v6 = v7;
      }
LABEL_13:
      if ( !v7 )
        break;
      v8 = v6;
      for ( j = v5; (*j & 1) == 0; j = (_DWORD *)*j )
      {
        if ( (_DWORD *)*j == v6 )
        {
          *j = *v6;
          --v4[2];
          *v6 |= 0x80000002;
          v6 = j;
          goto LABEL_21;
        }
      }
      v8 = 0;
LABEL_21:
      RtlStackDbStackRemove(&dword_4B3A6838, v8[2]);
      RtlpHpMetadataFree(RtlpHpEnvHandle, dword_4B3A446C);
    }
    if ( *((_DWORD *)Context + 4) )
      result = RtlpHpMetadataFree(RtlpHpEnvHandle, dword_4B3A446C);
    if ( v12 )
    {
      v4[2] = 0;
      v4[4] = 0;
      v4[3] = 0;
    }
    else
    {
      result = RtlpHpMetadataFree(RtlpHpEnvHandle, dword_4B3A446C);
      if ( a3 )
      {
        result = (int)v13;
        v13->Value = 0;
      }
    }
  }
  return result;
}
