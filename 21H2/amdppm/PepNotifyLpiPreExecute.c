/*
 * XREFs of PepNotifyLpiPreExecute @ 0x1C000CF20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PepNotifyLpiPreExecute(__int64 *a1, __int64 a2, int a3, unsigned int a4, unsigned int *a5)
{
  unsigned int v5; // edx
  unsigned int *v6; // r8
  __int64 v7; // rcx
  __int64 result; // rax
  _DWORD v9[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]

  if ( a3 == -1 )
    return 0LL;
  v5 = 0;
  if ( a4 )
  {
    v6 = a5;
    do
    {
      if ( !*(_BYTE *)(56LL * *v6 + qword_1C00149C0 + 48) )
        break;
      ++v5;
      ++v6;
    }
    while ( v5 < a4 );
  }
  v7 = *a1;
  v9[0] = 0;
  v9[1] = v5;
  v10 = (__int64)a5;
  result = PoFxProcessorNotification(v7, 37LL, v9);
  if ( (int)result < 0 )
    return 0LL;
  if ( v9[0] < 0 )
    return v9[0];
  return result;
}
