/*
 * XREFs of TopologyProcessMIDIElement @ 0x1C0027570
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TopologyProcessMIDIElement(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        unsigned int *a6)
{
  _DWORD *v6; // r13
  unsigned int v7; // r14d
  unsigned int *v8; // rax
  int v10; // r15d
  __int64 v11; // r10
  int v12; // esi
  unsigned int v13; // edi
  char v14; // r12
  __int64 v15; // rbx
  int v16; // r9d
  unsigned int v17; // r8d
  int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  __int64 i; // rdx
  __int64 v23; // rcx
  int v24; // r14d
  __int64 result; // rax

  v6 = a6;
  v7 = 0;
  v8 = a5;
  v10 = *(_DWORD *)(a2 + 64);
  v11 = a1;
  v12 = *a6;
  v13 = *a5;
  v14 = 1;
  v15 = a4 + 16LL * *a6;
  v16 = 0;
  if ( v10 )
  {
    do
    {
      if ( v16 < 0 )
        break;
      v17 = 0;
      v18 = v10 - (v10 & (v10 - 1));
      v10 &= v10 - 1;
      v19 = 168LL * v13;
      *(_DWORD *)(v19 + a3 + 80) = *(_DWORD *)(a2 + 16);
      if ( v18 == 2048 )
        v17 = 37;
      if ( v18 == 1024 )
        v17 = 36;
      if ( v18 == 512 )
        v17 = 35;
      if ( v18 == 256 )
        v17 = 34;
      if ( v18 == 128 )
        v17 = 33;
      if ( v18 == 64 )
        v17 = 32;
      if ( v18 == 32 )
        v17 = 31;
      if ( v18 == 16 )
        v17 = 30;
      if ( v18 == 8 )
        v17 = 29;
      if ( v18 == 4 )
        v17 = 28;
      if ( v18 == 2 )
        v17 = 27;
      if ( v18 == 1 )
        v17 = 26;
      *(_DWORD *)(v19 + a3 + 76) = v17;
      v20 = 4LL * v17;
      *(_QWORD *)(v19 + a3 + 8) = NodeDescriptorInfo[v20];
      *(_QWORD *)(v19 + a3 + 16) = (&off_1C0014438)[v20];
      if ( v17 )
      {
        v21 = ((__int64 (__fastcall *)(__int64, __int64, __int64))MIDIElementProcessRtn[v17 - 26])(v11, a2, a3);
        v11 = a1;
        v16 = v21;
      }
      if ( v14 )
      {
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 32); v15 += 16LL )
        {
          v23 = 3 * i;
          ++v12;
          i = (unsigned int)(i + 1);
          *(_QWORD *)v15 = *(unsigned int *)(*(_QWORD *)(a2 + 56) + 4 * v23);
          *(_DWORD *)(v15 + 8) = v13;
          *(_DWORD *)(v15 + 12) = 1;
        }
        v14 = 0;
      }
      else
      {
        *(_DWORD *)(v15 + 4) = 0;
        *(_DWORD *)v15 = v7;
        *(_DWORD *)(v15 + 8) = v13;
        *(_DWORD *)(v15 + 12) = 1;
        v15 += 16LL;
        ++v12;
      }
      v24 = v13++;
      v7 = v24 | 0x80000000;
    }
    while ( v10 );
    v6 = a6;
    v8 = a5;
  }
  *v8 = v13;
  result = 0LL;
  *v6 = v12;
  return result;
}
