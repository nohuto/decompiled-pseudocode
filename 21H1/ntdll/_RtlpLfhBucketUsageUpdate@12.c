/*
 * XREFs of _RtlpLfhBucketUsageUpdate@12 @ 0x4B377DEF
 * Callers:
 *     _RtlpHpLfhBucketUpdateStats@12 @ 0x4B3763A4 (_RtlpHpLfhBucketUpdateStats@12.c)
 * Callees:
 *     <none>
 */

signed __int32 __fastcall RtlpLfhBucketUsageUpdate(int a1, int a2, int a3)
{
  volatile signed __int32 *v3; // edi
  unsigned __int32 v4; // ecx
  signed __int32 v5; // edx
  int v6; // eax
  volatile signed __int32 v8; // [esp+Ch] [ebp-Ch]
  volatile signed __int32 v9; // [esp+14h] [ebp-4h]

  v3 = (volatile signed __int32 *)(a1 + 4 * (a2 + 32));
  do
  {
    v4 = *v3;
    v5 = *v3;
    v8 = *v3;
    v9 = *v3;
    if ( (*v3 & 1) == 0 )
      break;
    if ( a3 )
    {
      if ( (BYTE2(v4) & 0x1Fu) > 0x10 || HIWORD(v4) > 0xFF00u )
        return v5;
      v6 = HIWORD(v4) + 33;
      goto LABEL_9;
    }
    if ( HIWORD(v8) > 1u )
    {
      LOWORD(v6) = HIWORD(v8) - 1;
LABEL_9:
      HIWORD(v9) = v6;
      v5 = v9;
    }
  }
  while ( _InterlockedCompareExchange(v3, v5, v4) != v4 );
  return v5;
}
