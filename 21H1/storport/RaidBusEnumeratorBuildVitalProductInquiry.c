/*
 * XREFs of RaidBusEnumeratorBuildVitalProductInquiry @ 0x1C0015764
 * Callers:
 *     RaidBusEnumeratorGenericInquiry @ 0x1C0015174 (RaidBusEnumeratorGenericInquiry.c)
 * Callees:
 *     RaidInitializeInquirySrb @ 0x1C0072584 (RaidInitializeInquirySrb.c)
 */

_QWORD *__fastcall RaidBusEnumeratorBuildVitalProductInquiry(
        __int64 *a1,
        unsigned int a2,
        _QWORD *a3,
        int a4,
        unsigned int a5,
        _QWORD *a6)
{
  __int64 v6; // rdi
  __int64 v8; // rbx
  char v10; // si
  char v11; // r13
  __int64 v12; // rbp
  __int64 v13; // rax
  char v14; // cl
  _QWORD *result; // rax
  unsigned int v16; // r8d
  __int64 v17; // rcx
  unsigned __int64 v18; // rax

  v6 = a3[2];
  v8 = *a1;
  v10 = 0;
  v11 = 0;
  v12 = 0LL;
  RaidInitializeInquirySrb(v6, a2, a2 >> 8, HIWORD(a2), a3[4], a5, *(_BYTE *)(*a1 + 410));
  if ( *(_BYTE *)(v8 + 410) == 1 )
  {
    *(_DWORD *)(v6 + 24) |= 0x80110u;
    v16 = 0;
    *(_QWORD *)(v6 + 104) = 0LL;
    *(_QWORD *)(v6 + 64) = a3[4];
    for ( *(_DWORD *)(v6 + 60) = a5; v16 < *(_DWORD *)(v6 + 56); ++v16 )
    {
      v17 = *(unsigned int *)(v6 + 4LL * v16 + 120);
      if ( (unsigned int)v17 >= 0x80 )
      {
        v18 = *(unsigned int *)(v6 + 16);
        if ( (unsigned int)v17 <= (unsigned int)v18 )
        {
          if ( *(_DWORD *)(v17 + v6) == 64 && v17 + 40 <= v18 )
          {
            v12 = (unsigned int)v17 + v6 + 24;
            *(_QWORD *)((unsigned int)v17 + v6 + 16) = a3[3];
            *(_BYTE *)((unsigned int)v17 + v6 + 9) = 18;
            v11 = 1;
          }
          if ( v11 )
            break;
        }
      }
    }
  }
  else
  {
    *(_QWORD *)(v6 + 56) = 0LL;
    v12 = v6 + 72;
    *(_QWORD *)(v6 + 32) = a3[3];
    *(_BYTE *)(v6 + 11) = 18;
    v13 = a3[4];
    *(_DWORD *)(v6 + 12) |= 0x80110u;
    *(_QWORD *)(v6 + 24) = v13;
    *(_DWORD *)(v6 + 16) = a5;
  }
  v14 = *(_BYTE *)(v12 + 1) & 0xFE;
  if ( a4 != -1 )
  {
    v14 = *(_BYTE *)(v12 + 1) | 1;
    v10 = a4;
  }
  *(_BYTE *)(v12 + 1) = v14;
  result = a6;
  *(_BYTE *)(v12 + 2) = v10;
  *a6 = v6;
  return result;
}
