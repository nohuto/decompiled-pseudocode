/*
 * XREFs of HvlSvmAcknowledgePageRequest @ 0x1404F6940
 * Callers:
 *     <none>
 * Callees:
 *     HvlpFastAcknowledgePageRequest @ 0x1404F7500 (HvlpFastAcknowledgePageRequest.c)
 *     HvlpSlowAcknowledgePageRequest @ 0x1404F770C (HvlpSlowAcknowledgePageRequest.c)
 *     HvlpHvToNtStatus @ 0x1404FAC74 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlSvmAcknowledgePageRequest(unsigned int a1, __int64 a2, _DWORD *a3)
{
  __int64 v6; // r9
  unsigned int v7; // ebx
  __int64 v8; // rcx
  unsigned __int16 v9; // ax
  unsigned int v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0;
  v6 = 0LL;
  v7 = a1;
  if ( a1 )
  {
    while ( v7 < 0x66 )
    {
      v8 = v7;
      if ( v7 > 2 )
        goto LABEL_4;
      v9 = HvlpFastAcknowledgePageRequest(v7, a2, &v11, v6);
LABEL_5:
      v7 -= v11;
      v6 = v9;
      if ( !v9 )
      {
        a2 += 40LL * v11;
        if ( v7 )
          continue;
      }
      goto LABEL_7;
    }
    v8 = 102LL;
LABEL_4:
    v9 = HvlpSlowAcknowledgePageRequest(v8, a2, &v11, v6);
    goto LABEL_5;
  }
LABEL_7:
  if ( a3 )
    *a3 = a1 - v7;
  return HvlpHvToNtStatus((unsigned __int16)v6);
}
