/*
 * XREFs of _RtlpSetSegmentInfo@8 @ 0x4B2F2640
 * Callers:
 *     _RtlpAllocateHeapInternal@16 @ 0x4B2C5D90 (_RtlpAllocateHeapInternal@16.c)
 *     _RtlpLocalInfoAllocFromCache@8 @ 0x4B37109C (_RtlpLocalInfoAllocFromCache@8.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlpLogHeapAffinitySlotAssign@12 @ 0x4B36ED37 (_RtlpLogHeapAffinitySlotAssign@12.c)
 */

int __fastcall RtlpSetSegmentInfo(unsigned int a1, unsigned int a2)
{
  signed __int64 v2; // rax
  int v3; // edi
  int v5; // ebx
  signed __int32 *v6; // eax
  signed __int32 v7; // esi
  int v8; // esi
  signed __int64 v9; // rax
  signed __int64 v10; // kr00_8
  bool v11; // zf
  int v12; // edx
  volatile signed __int64 *v13; // edi
  int v14; // ecx
  unsigned int v15; // ebx
  unsigned int v16; // edx
  signed __int64 v17; // rax
  signed __int64 v18; // rax
  unsigned int v19; // ecx
  int v20; // eax
  __int64 v21; // [esp+4h] [ebp-1Ch]
  int v22; // [esp+8h] [ebp-18h]
  volatile signed __int32 *v23; // [esp+Ch] [ebp-14h]
  int v24; // [esp+10h] [ebp-10h]
  unsigned int v25; // [esp+10h] [ebp-10h]
  int v26; // [esp+14h] [ebp-Ch]
  unsigned int v28; // [esp+1Ch] [ebp-4h]
  volatile signed __int64 *v29; // [esp+1Ch] [ebp-4h]
  int v30; // [esp+1Ch] [ebp-4h]

  v2 = __PAIR64__(a1, a2);
  v26 = v2;
  if ( *(_DWORD *)a1 == (_DWORD)v2 )
    return 1;
  v3 = 0;
  v28 = MEMORY[0x7FFE036A] > 1u ? 0x64 : 0;
  v5 = 0;
  v6 = (signed __int32 *)(a1 + 16);
  v23 = (volatile signed __int32 *)(a1 + 16);
  while ( 1 )
  {
    v7 = *v6;
    v24 = *v6;
    if ( (*v6 & 0x80000000) == 0 )
    {
      if ( !(_WORD)v7 )
        return v3;
      HIDWORD(v2) = a1;
      if ( _InterlockedCompareExchange(v23, v7 | 0x80000000, v7) == v7 )
        break;
    }
    if ( ++v5 > v28 )
    {
      v7 = -1;
      v24 = -1;
      break;
    }
    v6 = (signed __int32 *)(HIDWORD(v2) + 16);
  }
  if ( v7 != -1 )
  {
    if ( v7 )
    {
      v8 = -*(unsigned __int16 *)(HIDWORD(v2) + 24);
      LODWORD(v2) = *(_DWORD *)HIDWORD(v2) + 80;
      v22 = v8;
      v29 = (volatile signed __int64 *)v2;
      do
      {
        do
        {
          v9 = *(_QWORD *)v2;
          v10 = v9;
          v2 = _InterlockedCompareExchange64(v29, __SPAIR64__(HIDWORD(v9) - 1, (int)v9 + v8), v9);
          v8 = v22;
          v11 = (_DWORD)v2 == (_DWORD)v10;
          LODWORD(v2) = v29;
        }
        while ( !v11 );
      }
      while ( HIDWORD(v2) != HIDWORD(v10) );
      v7 = v24;
      v12 = *(unsigned __int16 *)(a1 + 24);
      v30 = v12;
      v13 = (volatile signed __int64 *)(v26 + 80);
      do
      {
        v11 = v12 == 0;
        v14 = *(_DWORD *)(v26 + 84);
        LODWORD(v21) = *(_DWORD *)v13;
        HIDWORD(v21) = v14;
        v15 = *(_DWORD *)v13 + v12;
        v16 = v14 + 1;
        if ( v11 )
          v16 = v14 - 1;
        v25 = v16;
        HIDWORD(v17) = *(_DWORD *)(v26 + 84);
        LODWORD(v17) = *(_DWORD *)v13;
        v18 = _InterlockedCompareExchange64(v13, __SPAIR64__(v25, v15), v17);
        v19 = HIDWORD(v18);
        v12 = v30;
      }
      while ( __PAIR64__(v19, v18) != v21 );
      *(_DWORD *)a1 = v26;
      v3 = 1;
      if ( RtlGetCurrentServiceSessionId() )
        v20 = (int)NtCurrentPeb()->SharedData + 550;
      else
        v20 = 2147353472;
      if ( *(_BYTE *)v20 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapAffinitySlotAssign(LOBYTE(NtCurrentTeb()->HeapData) - 1);
    }
    *v23 = v7;
  }
  return v3;
}
