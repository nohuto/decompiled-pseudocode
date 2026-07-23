/*
 * XREFs of HalpPmemErrorDeferredHandler @ 0x1404D028C
 * Callers:
 *     HalpErrorDeferredHandler @ 0x1404CFF00 (HalpErrorDeferredHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     MmGetPageBadStatus @ 0x14052FA50 (MmGetPageBadStatus.c)
 *     WheaAttemptPhysicalPageOffline @ 0x14095D530 (WheaAttemptPhysicalPageOffline.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall HalpPmemErrorDeferredHandler(_DWORD **a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // rbx
  __int64 i; // rsi
  unsigned __int64 v6; // rax
  unsigned int v7; // r15d
  __int64 v8; // r14
  char v9; // bp
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v3 = *a1;
  for ( i = 0LL; (unsigned int)i < v3[21]; i = (unsigned int)(i + 1) )
  {
    v6 = *(_QWORD *)&v3[6 * i + 24];
    if ( v6 > 0x32 )
    {
      *(_QWORD *)&v3[6 * i + 24] = 50LL;
      v6 = 50LL;
    }
    *(_QWORD *)&v3[6 * i + 26] = 0LL;
    v7 = 0;
    v8 = *(_QWORD *)&v3[6 * i + 22];
    if ( v6 )
    {
      v9 = 0;
      do
      {
        v10 = v8 << 12;
        if ( (unsigned int)MmGetPageBadStatus(&v10)
          || (LOBYTE(a3) = 1, !(unsigned int)WheaAttemptPhysicalPageOffline(v8, 0LL, a3)) )
        {
          *(_QWORD *)&v3[6 * i + 26] |= 1LL << v9;
        }
        ++v7;
        ++v8;
        v9 = v7;
      }
      while ( (unsigned __int64)v7 < *(_QWORD *)&v3[6 * i + 24] );
    }
  }
  if ( HalpHvWheaEnlightenedCpuManager && qword_140C4A258 )
  {
    LOBYTE(a3) = 1;
    qword_140C4A258(a1, 0LL, a3);
  }
  ExFreePoolWithTag(v3, 0x206C6148u);
}
