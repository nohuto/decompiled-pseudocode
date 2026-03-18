/*
 * XREFs of _NtGdiGetEmbUFI@28 @ 0x212CF5
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _GreGetUFI@28 @ 0x1D8D94 (_GreGetUFI@28.c)
 */

int __stdcall NtGdiGetEmbUFI(HDC a1, ULONG a2, char *a3, ULONG a4, ULONG a5, ULONG a6, int *a7)
{
  _DWORD *v7; // ebx
  int result; // eax
  _DWORD *v9; // eax
  char v10; // dl
  size_t v11; // esi
  _DWORD *v12; // eax
  _DWORD *v13; // ecx
  int v14; // [esp+14h] [ebp-80h] BYREF
  int v15; // [esp+18h] [ebp-7Ch]
  int v16; // [esp+1Ch] [ebp-78h] BYREF
  size_t MaxCount; // [esp+20h] [ebp-74h] BYREF
  int v18; // [esp+24h] [ebp-70h] BYREF
  int v19; // [esp+28h] [ebp-6Ch] BYREF
  int v20; // [esp+2Ch] [ebp-68h]
  _BYTE Src[76]; // [esp+30h] [ebp-64h] BYREF
  CPPEH_RECORD ms_exc; // [esp+7Ch] [ebp-18h]

  v7 = (_DWORD *)a2;
  v14 = 0;
  v15 = 0;
  v19 = 0;
  memset(Src, 0, 0x48u);
  MaxCount = 0;
  v16 = 0;
  v18 = 0;
  result = GreGetUFI(a1, &v14, Src, &MaxCount, &v16, &v19, &v18);
  v20 = result;
  ms_exc.registration.TryLevel = 0;
  if ( result )
  {
    if ( a2 >= _MmUserProbeAddress )
      v7 = (_DWORD *)_MmUserProbeAddress;
    *v7 = v14;
    v7[1] = v15;
    v9 = (_DWORD *)a6;
    if ( a6 >= _MmUserProbeAddress )
      v9 = (_DWORD *)_MmUserProbeAddress;
    v10 = v19;
    *v9 = v19;
    if ( (unsigned int)(a7 + 1) > _MmUserProbeAddress || a7 + 1 <= a7 )
      *(_BYTE *)_MmUserProbeAddress = 0;
    *a7 = v18;
    if ( (v10 & 2) != 0 && a3 )
    {
      v11 = MaxCount;
      if ( (unsigned int)&a3[MaxCount] > _MmUserProbeAddress || &a3[MaxCount] <= a3 )
        *(_BYTE *)_MmUserProbeAddress = 0;
      memcpy(a3, Src, v11);
      v12 = (_DWORD *)a4;
      if ( a4 >= _MmUserProbeAddress )
        v12 = (_DWORD *)_MmUserProbeAddress;
      *v12 = v11;
      v13 = (_DWORD *)a5;
      if ( a5 >= _MmUserProbeAddress )
        v13 = (_DWORD *)_MmUserProbeAddress;
      *v13 = v16;
    }
    return v20;
  }
  return result;
}
