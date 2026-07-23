/*
 * XREFs of KiSwapDirectoryTableBaseTarget @ 0x1403885F0
 * Callers:
 *     <none>
 * Callees:
 *     KiSetAddressPolicy @ 0x1402AC2D0 (KiSetAddressPolicy.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MmStealTopLevelPage @ 0x140388728 (MmStealTopLevelPage.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1404FACE0 (HvlSwitchVirtualAddressSpace.c)
 */

unsigned __int64 __fastcall KiSwapDirectoryTableBaseTarget(
        __int64 a1,
        __int64 a2,
        volatile signed __int32 *a3,
        __int64 a4)
{
  __int64 v5; // rbp
  signed __int32 v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  signed __int32 v13; // eax
  unsigned int v14; // edi
  unsigned __int64 result; // rax
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  int v19; // [rsp+58h] [rbp+10h] BYREF
  int i; // [rsp+68h] [rbp+20h] BYREF

  v19 = 0;
  v5 = *(_QWORD *)(a2 + 8);
  v8 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v9 = ~v8 & 0x80000000;
  if ( (v8 & 0x7FFFFFFF) != 0 )
  {
    while ( (*(_DWORD *)a4 & 0x80000000) != v9 )
      KeYieldProcessorEx(&v19, a2, (__int64)a3, a4);
  }
  else
  {
    *(_DWORD *)a4 = v9 | *(_DWORD *)(a4 + 4);
  }
  if ( (unsigned int)MmStealTopLevelPage(*(_QWORD *)(a2 + 16)) )
    *(_BYTE *)a2 = 1;
  v13 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v14 = ~v13 & 0x80000000;
  if ( (v13 & 0x7FFFFFFF) != 0 )
  {
    for ( i = 0; ; KeYieldProcessorEx(&i, v10, v11, v12) )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v14 )
        break;
    }
  }
  else
  {
    result = v14 | *(_DWORD *)(a4 + 4);
    *(_DWORD *)a4 = result;
  }
  if ( *(_BYTE *)a2 )
  {
    result = (unsigned __int64)KeGetCurrentThread();
    if ( *(_QWORD *)(result + 184) == v5 )
    {
      v16 = *(_QWORD *)(v5 + 40);
      if ( KiKvaShadow )
      {
        v17 = v16 | 0x8000000000000000uLL;
        if ( (v16 & 2) == 0 )
          v17 = *(_QWORD *)(v5 + 40);
        __writegsqword(0x9000u, v17);
        KiSetAddressPolicy();
      }
      result = (unsigned int)HvlEnlightenments;
      if ( (HvlEnlightenments & 1) != 0 )
        result = HvlSwitchVirtualAddressSpace(v16);
      else
        __writecr3(v16);
      if ( !KiFlushPcid && KiKvaShadow )
      {
        v18 = __readcr4();
        if ( (v18 & 0x20080) != 0 )
        {
          result = v18 ^ 0x80;
          __writecr4(v18 ^ 0x80);
          __writecr4(v18);
        }
        else
        {
          result = __readcr3();
          __writecr3(result);
        }
      }
    }
  }
  _InterlockedDecrement(a3);
  return result;
}
