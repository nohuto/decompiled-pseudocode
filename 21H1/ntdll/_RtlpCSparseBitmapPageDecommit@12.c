/*
 * XREFs of _RtlpCSparseBitmapPageDecommit@12 @ 0x4B37E559
 * Callers:
 *     _RtlCSparseBitmapBitsClear@12 @ 0x4B37DE0D (_RtlCSparseBitmapBitsClear@12.c)
 * Callees:
 *     @RtlpWakeByAddress@12 @ 0x4B2DF2F6 (@RtlpWakeByAddress@12.c)
 *     _RtlpWaitOnAddress@20 @ 0x4B2DF747 (_RtlpWaitOnAddress@20.c)
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlpCSparseBitmapLock@12 @ 0x4B38003A (_RtlpCSparseBitmapLock@12.c)
 *     _RtlpCSparseBitmapUnlock@4 @ 0x4B380071 (_RtlpCSparseBitmapUnlock@4.c)
 */

char __fastcall RtlpCSparseBitmapPageDecommit(int a1, unsigned int a2, int a3)
{
  unsigned int v3; // ebx
  const signed __int32 *v4; // eax
  unsigned int v5; // esi
  unsigned int v6; // edi
  unsigned int v7; // edx
  signed __int32 *v8; // eax
  BOOL v9; // edx
  signed __int32 v10; // edx
  int v11; // ecx
  bool v12; // dl
  const signed __int32 *v13; // ebx
  signed __int32 v14; // edx
  _DWORD *v15; // ecx
  _BYTE v17[12]; // [esp+10h] [ebp-64h] BYREF
  unsigned int v18; // [esp+1Ch] [ebp-58h]
  const signed __int32 *v19; // [esp+20h] [ebp-54h]
  signed __int32 v20; // [esp+24h] [ebp-50h] BYREF
  PVOID BaseAddress; // [esp+28h] [ebp-4Ch] BYREF
  ULONG_PTR RegionSize; // [esp+2Ch] [ebp-48h] BYREF
  const signed __int32 *v23; // [esp+34h] [ebp-40h]
  unsigned int v24; // [esp+38h] [ebp-3Ch]
  BOOL v25; // [esp+3Ch] [ebp-38h]
  unsigned int v26; // [esp+40h] [ebp-34h]
  const signed __int32 *v27; // [esp+44h] [ebp-30h]
  int v28; // [esp+48h] [ebp-2Ch]
  int v29; // [esp+4Ch] [ebp-28h]
  unsigned int v30; // [esp+50h] [ebp-24h]
  const signed __int32 *v31; // [esp+54h] [ebp-20h]
  int v32; // [esp+58h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+5Ch] [ebp-18h]

  v3 = a2;
  v30 = a2;
  v32 = a1;
  v28 = 0;
  v4 = *(const signed __int32 **)(a1 + 4);
  v18 = *(_DWORD *)(a1 + 8);
  v19 = v4;
  v5 = a2 << 15;
  v24 = a2 << 15;
  v6 = 0x8000;
  v29 = 0x8000;
  v7 = v18 - (a2 << 15);
  if ( v7 <= 0x8000 )
  {
    v6 = v7;
    v29 = v7;
  }
  while ( 1 )
  {
    if ( a3 )
      goto LABEL_20;
    ms_exc.registration.TryLevel = 0;
    LOBYTE(v8) = v18;
    if ( v5 >= v18 )
    {
LABEL_5:
      v9 = 0;
      goto LABEL_19;
    }
    if ( v6 > 1 )
    {
      LOBYTE(v8) = v18 - v5;
      if ( v18 - v5 < v6 )
        goto LABEL_5;
      v26 = v6 + v5 - 1;
      v31 = &v19[v5 >> 5];
      v27 = &v19[v26 >> 5];
      v10 = *v31;
      if ( v31 == v27 )
      {
        v8 = (signed __int32 *)(0xFFFFFFFF >> (32 - v6) << v5);
      }
      else
      {
        v8 = (signed __int32 *)(-1 << v5);
        if ( (v10 & (-1 << v5)) != 0 )
          goto LABEL_5;
        v8 = (signed __int32 *)v31;
        while ( 1 )
        {
          v31 = ++v8;
          v10 = *v8;
          if ( v8 == v27 )
            break;
          if ( v10 )
            goto LABEL_5;
        }
        v8 = (signed __int32 *)(0xFFFFFFFF >> ~(_BYTE)v26);
      }
      v9 = ((unsigned int)v8 & v10) == 0;
    }
    else
    {
      if ( v6 != 1 )
        goto LABEL_5;
      LOBYTE(v8) = (_BYTE)v19;
      v9 = !_bittest(v19, v5);
    }
LABEL_19:
    v25 = v9;
    ms_exc.registration.TryLevel = -2;
    v11 = v32;
    if ( !v9 )
      goto LABEL_40;
LABEL_20:
    a3 = 0;
    RtlpCSparseBitmapLock(v17);
    HIDWORD(RegionSize) = *(_DWORD *)(v32 + 16);
    v26 = v32 + 16;
    if ( HIDWORD(RegionSize) == -1 )
      break;
    RtlpCSparseBitmapUnlock(v17);
    RtlpWaitOnAddress((volatile signed __int64 *)v26, (int)&RegionSize + 4, 4u, 0, RtlpWaitOnAddressSpinCycleCount);
    v11 = v32;
    v8 = *(signed __int32 **)v32;
    if ( !_bittest(*(const signed __int32 **)v32, v3) )
      goto LABEL_40;
  }
  *(_DWORD *)(v32 + 16) = v3;
  RtlpCSparseBitmapUnlock(v17);
  v28 = 1;
  v11 = v32;
  v8 = *(signed __int32 **)v32;
  if ( !_bittest(*(const signed __int32 **)v32, v3) )
    goto LABEL_40;
  LOBYTE(v8) = v18;
  if ( v5 >= v18 )
    goto LABEL_40;
  if ( v6 <= 1 )
  {
    if ( v6 == 1 )
    {
      LOBYTE(v8) = (_BYTE)v19;
      v12 = _bittest(v19, v5) == 0;
      goto LABEL_37;
    }
    goto LABEL_40;
  }
  LOBYTE(v8) = v18 - v5;
  if ( v18 - v5 < v6 )
    goto LABEL_40;
  v13 = &v19[v5 >> 5];
  v23 = &v19[(v5 - 1 + v6) >> 5];
  v14 = *v13;
  if ( v13 != v23 )
  {
    v8 = (signed __int32 *)(-1 << v5);
    if ( (v14 & (-1 << v5)) == 0 )
    {
      LOBYTE(v8) = (_BYTE)v23;
      while ( ++v13 != v23 )
      {
        if ( *v13 )
          goto LABEL_39;
      }
      LOBYTE(v8) = -((*v13 & (0xFFFFFFFF >> ~(v6 + v5 - 1))) != 0);
      v12 = (*v13 & (0xFFFFFFFF >> ~(v6 + v5 - 1))) == 0;
      goto LABEL_36;
    }
LABEL_39:
    v11 = v32;
    goto LABEL_40;
  }
  v8 = (signed __int32 *)(0xFFFFFFFF >> (32 - v6) << v5);
  v12 = ((unsigned int)v8 & v14) == 0;
LABEL_36:
  v11 = v32;
  v3 = v30;
LABEL_37:
  if ( v12 )
  {
    _interlockedbittestandreset(*(volatile signed __int32 **)v11, v3);
    BaseAddress = (PVOID)(*(_DWORD *)(v11 + 4) + (v3 << 12));
    LODWORD(RegionSize) = 4096;
    LOBYTE(v8) = NtFreeVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, 0x4000u);
    goto LABEL_39;
  }
LABEL_40:
  if ( v28 )
  {
    v15 = (_DWORD *)(v11 + 16);
    *v15 = -1;
    _InterlockedOr(&v20, 0);
    LOBYTE(v8) = RtlpWakeByAddress((unsigned int)v15, 1, (int)v15);
  }
  return (char)v8;
}
