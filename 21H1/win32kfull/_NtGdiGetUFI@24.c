/*
 * XREFs of _NtGdiGetUFI@24 @ 0x213461
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _GreGetUFI@28 @ 0x1D8D94 (_GreGetUFI@28.c)
 */

int __stdcall NtGdiGetUFI(HDC a1, ULONG a2, char *a3, ULONG a4, ULONG a5, ULONG a6)
{
  _DWORD *v6; // ebx
  int result; // eax
  _DWORD *v8; // ecx
  char v9; // al
  size_t v10; // esi
  _DWORD *v11; // eax
  _DWORD *v12; // ecx
  int v13; // [esp+10h] [ebp-7Ch] BYREF
  int v14; // [esp+14h] [ebp-78h]
  int v15; // [esp+18h] [ebp-74h] BYREF
  size_t MaxCount; // [esp+1Ch] [ebp-70h] BYREF
  int v17; // [esp+20h] [ebp-6Ch] BYREF
  int v18; // [esp+24h] [ebp-68h]
  _BYTE Src[76]; // [esp+28h] [ebp-64h] BYREF
  CPPEH_RECORD ms_exc; // [esp+74h] [ebp-18h]

  v6 = (_DWORD *)a2;
  v13 = 0;
  v14 = 0;
  v17 = 0;
  memset(Src, 0, 0x48u);
  MaxCount = 0;
  v15 = 0;
  result = GreGetUFI(a1, &v13, Src, &MaxCount, &v15, &v17, 0);
  v18 = result;
  ms_exc.registration.TryLevel = 0;
  if ( result )
  {
    if ( a2 >= _MmUserProbeAddress )
      v6 = (_DWORD *)_MmUserProbeAddress;
    *v6 = v13;
    v6[1] = v14;
    v8 = (_DWORD *)a6;
    if ( a6 >= _MmUserProbeAddress )
      v8 = (_DWORD *)_MmUserProbeAddress;
    v9 = v17;
    *v8 = v17;
    if ( (v9 & 2) != 0 && a3 )
    {
      v10 = MaxCount;
      if ( (unsigned int)&a3[MaxCount] > _MmUserProbeAddress || &a3[MaxCount] <= a3 )
        *(_BYTE *)_MmUserProbeAddress = 0;
      memcpy(a3, Src, v10);
      v11 = (_DWORD *)a4;
      if ( a4 >= _MmUserProbeAddress )
        v11 = (_DWORD *)_MmUserProbeAddress;
      *v11 = v10;
      v12 = (_DWORD *)a5;
      if ( a5 >= _MmUserProbeAddress )
        v12 = (_DWORD *)_MmUserProbeAddress;
      *v12 = v15;
    }
    return v18;
  }
  return result;
}
