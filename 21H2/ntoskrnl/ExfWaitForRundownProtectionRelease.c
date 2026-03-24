/*
 * XREFs of ExfWaitForRundownProtectionRelease @ 0x1402A2790
 * Callers:
 *     ExWaitForRundownProtectionRelease @ 0x1402797E0 (ExWaitForRundownProtectionRelease.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 */

int __fastcall ExfWaitForRundownProtectionRelease(
        volatile signed __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4)
{
  volatile signed __int64 *v4; // r8
  unsigned __int64 v5; // rcx
  bool v6; // zf
  signed __int32 *v7; // rax
  int v8; // ecx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v15; // [rsp+30h] [rbp-38h] BYREF
  __int128 Object; // [rsp+38h] [rbp-30h] BYREF
  char *v17; // [rsp+48h] [rbp-20h]
  signed __int32 v18[6]; // [rsp+50h] [rbp-18h] BYREF
  int v19; // [rsp+70h] [rbp+8h] BYREF

  *(_QWORD *)v18 = 1LL;
  v17 = 0LL;
  v4 = a1;
  Object = 0LL;
  do
  {
    v5 = a2 >> 1;
    v15 = a2 >> 1;
    v7 = (signed __int32 *)_InterlockedCompareExchange64(v4, (signed __int64)&v15 + 1, a2);
    v6 = a2 == (_QWORD)v7;
    a2 = (unsigned __int64)v7;
  }
  while ( !v6 );
  if ( v5 )
  {
    v19 = 0;
    if ( KeGetCurrentIrql() >= 2u )
    {
      while ( 1 )
      {
        LODWORD(v7) = v18[0];
        if ( (v18[0] & 1) == 0 )
          break;
        KeYieldProcessorEx(&v19, a2, (__int64)v4, a4);
      }
    }
    else if ( MEMORY[0xFFFFF7800000036A] <= 1u )
    {
LABEL_11:
      LOWORD(Object) = 1;
      v17 = (char *)&Object + 8;
      *((_QWORD *)&Object + 1) = (char *)&Object + 8;
      v7 = v18;
      BYTE2(Object) = 6;
      DWORD1(Object) = 0;
      if ( _interlockedbittestandreset(v18, 0) )
        LODWORD(v7) = KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    }
    else if ( MEMORY[0xFFFFF78000000297] )
    {
      v10 = __rdtsc();
      v11 = v10 + (unsigned int)ExpSpinCycleCount;
      while ( 1 )
      {
        __asm { monitorx rax, rcx, rdx }
        LODWORD(v7) = v18[0];
        if ( (v18[0] & 1) == 0 )
          break;
        v12 = v10;
        v13 = __rdtsc();
        v10 = v13;
        if ( v13 <= v12 || v13 >= v11 )
          goto LABEL_11;
        __asm { mwaitx  rax, rcx, rbx }
      }
    }
    else
    {
      LODWORD(v7) = ExpSpinCycleCount / (unsigned int)MEMORY[0xFFFFF780000002D6];
      v8 = 0;
      while ( (v18[0] & 1) != 0 )
      {
        if ( v8 == (_DWORD)v7 )
          goto LABEL_11;
        _mm_pause();
        ++v8;
      }
    }
  }
  return (int)v7;
}
