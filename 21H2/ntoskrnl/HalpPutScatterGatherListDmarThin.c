/*
 * XREFs of HalpPutScatterGatherListDmarThin @ 0x140516B78
 * Callers:
 *     HalPutScatterGatherListDmarThin @ 0x140516470 (HalPutScatterGatherListDmarThin.c)
 *     HalpConstructScatterGatherListDmarThin @ 0x140516878 (HalpConstructScatterGatherListDmarThin.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

char __fastcall HalpPutScatterGatherListDmarThin(__int64 a1, _DWORD *a2)
{
  char v2; // di
  __int64 v3; // rbx
  unsigned __int64 v6; // rdx
  _QWORD *v7; // rax
  __int64 i; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-20h]
  unsigned __int64 v11; // [rsp+30h] [rbp-18h]

  v10 = 0LL;
  v2 = 0;
  v11 = 0LL;
  v3 = 0LL;
  for ( i = *(_QWORD *)(a1 + 552); (unsigned int)v3 < *a2; v3 = (unsigned int)(v3 + 1) )
  {
    v6 = *(_QWORD *)&a2[6 * v3 + 4] & 0xFFFFFFFFFFFFF000uLL;
    if ( (_DWORD)v3 || v6 != **(_QWORD **)(a1 + 552) )
    {
      if ( !v2 )
      {
        ((void (__fastcall *)(_QWORD, unsigned __int64, unsigned __int64))qword_140C4BDB0)(
          *(_QWORD *)(*(_QWORD *)(a1 + 504) + 40LL),
          v6,
          ((a2[6 * v3 + 6] + (a2[6 * v3 + 4] & 0xFFFu) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) >> 12);
        continue;
      }
    }
    else
    {
      v2 = 1;
    }
    v7 = *(_QWORD **)(a1 + 552);
    v11 = (a2[6 * v3 + 6] + (a2[6 * v3 + 4] & 0xFFFu) + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
    v10 = v6 - *v7;
    ((void (__fastcall *)(__int64 *))qword_140C4BE08)(&i);
  }
  return v2;
}
