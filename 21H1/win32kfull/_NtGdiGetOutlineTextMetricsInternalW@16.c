/*
 * XREFs of _NtGdiGetOutlineTextMetricsInternalW@16 @ 0x85E6C
 * Callers:
 *     <none>
 * Callees:
 *     _GreGetOutlineTextMetricsInternalW@16 @ 0x85F6E (_GreGetOutlineTextMetricsInternalW@16.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __stdcall NtGdiGetOutlineTextMetricsInternalW(HDC a1, size_t Size, char *a3, unsigned int a4)
{
  void *v4; // esi
  size_t v5; // edi
  int OutlineTextMetricsInternalW; // eax
  int v7; // ebx
  int v9; // [esp+10h] [ebp-24h] BYREF
  int v10; // [esp+14h] [ebp-20h]
  void *v11; // [esp+18h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  v4 = 0;
  v11 = 0;
  v9 = 0;
  v10 = 0;
  v5 = Size;
  if ( Size && a3 )
  {
    if ( Size <= 0x2710000 )
    {
      v4 = (void *)AllocFreeTmpBuffer(Size);
      v11 = v4;
    }
    if ( !v4 )
      return 0;
    memset(v4, 0, Size);
  }
  else
  {
    v5 = 0;
    v4 = 0;
    v11 = 0;
  }
  OutlineTextMetricsInternalW = GreGetOutlineTextMetricsInternalW(a1, v5, (int)v4, (int)&v9);
  v7 = OutlineTextMetricsInternalW != -1 ? OutlineTextMetricsInternalW : 0;
  if ( v7 )
  {
    ms_exc.registration.TryLevel = 0;
    if ( a4 + 8 > _MmUserProbeAddress || a4 + 8 <= a4 || (a4 & 3) != 0 )
      *(_BYTE *)_MmUserProbeAddress = 0;
    *(_DWORD *)a4 = v9;
    *(_DWORD *)(a4 + 4) = v10;
    if ( v5 )
    {
      if ( (unsigned int)&a3[v5] > _MmUserProbeAddress || &a3[v5] <= a3 || ((unsigned __int8)a3 & 3) != 0 )
        *(_BYTE *)_MmUserProbeAddress = 0;
      memcpy(a3, v4, v5);
    }
    ms_exc.registration.TryLevel = -2;
  }
  if ( v4 )
    FreeTmpBuffer(v4);
  return v7;
}
