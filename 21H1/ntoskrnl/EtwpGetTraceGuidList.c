/*
 * XREFs of EtwpGetTraceGuidList @ 0x1409301B8
 * Callers:
 *     NtTraceControl @ 0x1405F56E0 (NtTraceControl.c)
 * Callees:
 *     EtwpGetNextGuidEntry @ 0x1405F35EC (EtwpGetNextGuidEntry.c)
 */

__int64 __fastcall EtwpGetTraceGuidList(__int64 a1, GUID *a2, _DWORD *a3)
{
  int v3; // ebx
  unsigned int v4; // ebp
  unsigned int v5; // edi
  signed __int64 *v8; // rdx
  __int64 i; // r14
  signed __int64 *NextGuidEntry; // rax
  unsigned int v11; // ecx
  GUID **v12; // rdx

  v3 = 0;
  v4 = *a3 >> 4;
  v5 = 0;
  v8 = 0LL;
  for ( i = a1; ; a1 = i )
  {
    NextGuidEntry = EtwpGetNextGuidEntry(a1, v8, 0);
    if ( !NextGuidEntry )
      break;
    if ( NextGuidEntry[5] != *(_QWORD *)&PrivateLoggerNotificationGuid.Data1
      || NextGuidEntry[6] != *(_QWORD *)PrivateLoggerNotificationGuid.Data4 )
    {
      if ( ++v5 > 0xFFFFFFF )
        goto LABEL_15;
      if ( v5 <= v4 )
        *a2++ = *(GUID *)(NextGuidEntry + 5);
    }
    v8 = NextGuidEntry;
  }
  v11 = 0;
  v12 = &EtwpUmglProviders;
  while ( ++v5 <= 0xFFFFFFF )
  {
    if ( v5 <= v4 )
      *a2++ = **v12;
    ++v11;
    v12 += 2;
    if ( v11 >= 0xA )
      goto LABEL_16;
  }
LABEL_15:
  v3 = -2147483643;
LABEL_16:
  *a3 = 16 * v5;
  if ( v3 >= 0 && v5 > v4 )
    return (unsigned int)-1073741789;
  return (unsigned int)v3;
}
