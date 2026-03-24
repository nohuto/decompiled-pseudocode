/*
 * XREFs of EtwpGetTraceGuidList @ 0x140934A68
 * Callers:
 *     NtTraceControl @ 0x1405EAF60 (NtTraceControl.c)
 * Callees:
 *     EtwpGetNextGuidEntry @ 0x1406E100C (EtwpGetNextGuidEntry.c)
 */

__int64 __fastcall EtwpGetTraceGuidList(__int64 a1, _OWORD *a2, _DWORD *a3)
{
  int v3; // ebx
  unsigned int v4; // ebp
  unsigned int v5; // edi
  __int64 *v8; // rdx
  __int64 i; // r14
  signed __int64 *NextGuidEntry; // rax
  unsigned int v11; // ecx
  __int64 (**v12)[2]; // rdx

  v3 = 0;
  v4 = *a3 >> 4;
  v5 = 0;
  v8 = 0LL;
  for ( i = a1; ; a1 = i )
  {
    NextGuidEntry = EtwpGetNextGuidEntry(a1, v8, 0);
    if ( !NextGuidEntry )
      break;
    if ( *(_OWORD *)(NextGuidEntry + 5) != PrivateLoggerNotificationGuid )
    {
      if ( ++v5 > 0xFFFFFFF )
        goto LABEL_14;
      if ( v5 <= v4 )
        *a2++ = *(_OWORD *)(NextGuidEntry + 5);
    }
    v8 = NextGuidEntry;
  }
  v11 = 0;
  v12 = &EtwpUmglProviders;
  while ( ++v5 <= 0xFFFFFFF )
  {
    if ( v5 <= v4 )
      *a2++ = *(_OWORD *)*v12;
    ++v11;
    v12 += 2;
    if ( v11 >= 0xA )
      goto LABEL_15;
  }
LABEL_14:
  v3 = -2147483643;
LABEL_15:
  *a3 = 16 * v5;
  if ( v3 >= 0 && v5 > v4 )
    return (unsigned int)-1073741789;
  return (unsigned int)v3;
}
