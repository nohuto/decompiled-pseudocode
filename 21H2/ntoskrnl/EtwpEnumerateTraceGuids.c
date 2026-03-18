/*
 * XREFs of EtwpEnumerateTraceGuids @ 0x1407949D4
 * Callers:
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 * Callees:
 *     EtwpGetNextGuidEntry @ 0x1407969D0 (EtwpGetNextGuidEntry.c)
 */

__int64 __fastcall EtwpEnumerateTraceGuids(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v4; // edi
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 i; // rsi
  __int64 v11; // rdx
  __int64 NextGuidEntry; // rax
  __int64 v13; // r8
  unsigned int v14; // r10d
  __int64 (**v15)[2]; // r9
  __int64 v16; // r11
  __int64 result; // rax
  __int64 v18; // rdx

  v4 = 0;
  v6 = 0;
  v7 = 0LL;
  for ( i = a1; ; a1 = i )
  {
    NextGuidEntry = EtwpGetNextGuidEntry(a1, v7, 0LL);
    if ( !NextGuidEntry )
      break;
    if ( ++v6 > 0x71C71C7 )
    {
LABEL_16:
      v4 = -2147483643;
      goto LABEL_15;
    }
    if ( v6 <= a3 )
    {
      v11 = 9LL * (v6 - 1);
      *(_OWORD *)(a2 + 4 * v11) = *(_OWORD *)(NextGuidEntry + 40);
      *(_DWORD *)(a2 + 4 * v11 + 28) = *(_DWORD *)(NextGuidEntry + 80);
      *(_DWORD *)(a2 + 4 * v11 + 20) = *(unsigned __int16 *)(NextGuidEntry + 88);
      *(_DWORD *)(a2 + 4 * v11 + 24) = *(unsigned __int8 *)(NextGuidEntry + 90);
      *(_BYTE *)(a2 + 4 * v11 + 32) = *(_BYTE *)(NextGuidEntry + 91) & 1;
    }
    v7 = NextGuidEntry;
  }
  if ( i == EtwpHostSiloState )
    v13 = 2147353472LL;
  else
    v13 = *(_QWORD *)(*(_QWORD *)(i + 8) + 1320LL) + 550LL;
  v14 = 0;
  v15 = &EtwpUmglProviders;
  do
  {
    v16 = *((unsigned __int8 *)v15 + 8);
    if ( *(_BYTE *)(v13 + 2 * v16) )
    {
      if ( ++v6 > 0x71C71C7 )
        goto LABEL_16;
      if ( v6 <= a3 )
      {
        v18 = 9LL * (v6 - 1);
        *(_OWORD *)(a2 + 4 * v18) = *(_OWORD *)*v15;
        *(_DWORD *)(a2 + 4 * v18 + 20) = *(unsigned __int8 *)(v13 + 2 * v16);
        *(_DWORD *)(a2 + 4 * v18 + 28) = *(unsigned __int8 *)(v13 + 2 * v16 + 1);
        *(_DWORD *)(a2 + 4 * v18 + 24) = 0;
        *(_BYTE *)(a2 + 4 * v18 + 32) = 1;
      }
    }
    ++v14;
    v15 += 2;
  }
  while ( v14 < 0xA );
  if ( v6 > a3 )
    v4 = -1073741789;
LABEL_15:
  result = v4;
  *a4 = v6;
  return result;
}
