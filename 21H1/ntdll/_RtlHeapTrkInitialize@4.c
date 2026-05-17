/*
 * XREFs of _RtlHeapTrkInitialize@4 @ 0x4B364170
 * Callers:
 *     <none>
 * Callees:
 *     _RtlDestroyHeap@4 @ 0x4B2AF870 (_RtlDestroyHeap@4.c)
 *     _RtlCreateHeap@24 @ 0x4B2C0F40 (_RtlCreateHeap@24.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlSetHeapInformation@16 @ 0x4B2ECAF0 (_RtlSetHeapInformation@16.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _NtQueryPerformanceCounter@8 @ 0x4B2F2C90 (_NtQueryPerformanceCounter@8.c)
 *     _RtlSetHeapDebuggingInformation@8 @ 0x4B357004 (_RtlSetHeapDebuggingInformation@8.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x4B364433 (RtlpHeapTrkAllocCacheAligned.c)
 *     RtlpHeapTrkGenerateHashRandoms @ 0x4B36481D (RtlpHeapTrkGenerateHashRandoms.c)
 */

int __stdcall RtlHeapTrkInitialize(void *a1)
{
  int result; // eax
  int *Heap; // eax
  int v3; // eax
  _DWORD *v4; // ecx
  int v5; // edx
  int v6; // esi
  _DWORD (__stdcall *v7)(_DWORD, _DWORD, _DWORD, _DWORD); // [esp+Ch] [ebp-38h] BYREF
  __int16 v8; // [esp+10h] [ebp-34h]
  int v9; // [esp+12h] [ebp-32h]
  int v10; // [esp+16h] [ebp-2Eh]
  int v11; // [esp+1Ah] [ebp-2Ah]
  int v12; // [esp+1Eh] [ebp-26h]
  __int16 v13; // [esp+22h] [ebp-22h]
  int (__stdcall *v14)(int, int, int, int, int, int); // [esp+24h] [ebp-20h]
  _BYTE v15[8]; // [esp+28h] [ebp-1Ch] BYREF
  _DWORD v16[2]; // [esp+30h] [ebp-14h] BYREF
  int v17; // [esp+38h] [ebp-Ch] BYREF
  int v18; // [esp+3Ch] [ebp-8h] BYREF
  _DWORD *v19; // [esp+40h] [ebp-4h] BYREF

  v18 = 0x10000;
  v19 = 0;
  v16[0] = 0;
  v16[1] = 0;
  if ( Handle )
    return -1073741823;
  if ( !a1 || ZwMapViewOfSection((int)a1, -1, (int)&v19, 0, 0, (int)v16, (int)&v18, 1, 0, 4) < 0 )
    return -1073741811;
  if ( *v19 < 0x400u )
    return -1073741789;
  if ( v19[7] > 0x40u || v19[8] > 2u || !v19[1] || v19[1] == -1 || !v19[2] || v19[2] == -1 || !v19[3] || v19[3] == -1 )
    return -1073741811;
  result = NtQueryPerformanceCounter((int)v15, (int)&qword_4B3A6950);
  if ( result >= 0 )
  {
    if ( qword_4B3A6950 )
    {
      dword_4B3A6C60 = v19[8];
      RtlpHeapTrkGenerateHashRandoms();
      Heap = RtlCreateHeap(v19[7] != 0 ? 0 : 2, 0, (_DWORD *)(v19[7] << 20), 0, 0, 0);
      dword_4B3A6D94 = (int)Heap;
      if ( Heap )
      {
        v17 = 2;
        RtlSetHeapInformation(Heap, 0, (int)&v17, 4u);
        dword_4B3A6D8C = NtCurrentPeb()->NumberOfProcessors;
        if ( (unsigned __int8)RtlpHeapTrkAllocCacheAligned(32, dword_4B3A6D8C) )
        {
          if ( (unsigned __int8)RtlpHeapTrkAllocCacheAligned(4, 16) )
          {
            if ( (unsigned __int8)RtlpHeapTrkAllocCacheAligned(4, 16) )
            {
              dword_4B3A6C54 = RtlAllocateHeap(dword_4B3A6D94, 0, 63352);
              if ( dword_4B3A6C54 )
              {
                v3 = RtlAllocateHeap(dword_4B3A6D94, 0, 63352);
                v4 = (_DWORD *)v3;
                dword_4B3A6C5C = v3;
                if ( v3 )
                {
                  Handle = a1;
                  v5 = dword_4B3A6C54 - v3;
                  dword_4B3A6C58 = 0;
                  v6 = 7919;
                  do
                  {
                    *(_DWORD *)((char *)v4 + v5 + 4) = (char *)v4 + v5;
                    *(_DWORD *)((char *)v4 + v5) = (char *)v4 + v5;
                    v4[1] = v4;
                    *v4 = v4;
                    v4 += 2;
                    --v6;
                  }
                  while ( v6 );
                  v9 = 0;
                  v10 = 0;
                  v11 = 0;
                  v12 = 0;
                  v13 = 0;
                  v7 = RtlpHeapTrkInterceptor;
                  v8 = 0;
                  v14 = RtlpHeapTrkLeakCallback;
                  if ( RtlSetHeapDebuggingInformation(0, &v7) >= 0 )
                  {
                    NtUnmapViewOfSection(-1, (int)v19);
                    return 0;
                  }
                }
              }
            }
          }
        }
        RtlDestroyHeap(dword_4B3A6D94);
        dword_4B3A6D94 = 0;
        dword_4B3A6D9C = 0;
        dword_4B3A6C54 = 0;
        dword_4B3A6D84 = 0;
        dword_4B3A6D80 = 0;
        dword_4B3A6C5C = 0;
        dword_4B3A6D90 = 0;
        dword_4B3A6D7C = 0;
        if ( v19 )
          NtUnmapViewOfSection(-1, (int)v19);
        if ( Handle )
        {
          NtClose(Handle);
          Handle = 0;
        }
      }
    }
    return -1073741823;
  }
  return result;
}
