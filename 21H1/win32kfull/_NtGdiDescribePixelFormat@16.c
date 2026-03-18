/*
 * XREFs of _NtGdiDescribePixelFormat@16 @ 0x21237A
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _GreDescribePixelFormat@16 @ 0x222832 (_GreDescribePixelFormat@16.c)
 */

int __stdcall NtGdiDescribePixelFormat(HDC a1, int a2, size_t MaxCount, char *a4)
{
  int result; // eax
  size_t v5; // esi
  int v6; // edi
  _BYTE Src[44]; // [esp+14h] [ebp-44h] BYREF
  CPPEH_RECORD ms_exc; // [esp+40h] [ebp-18h]

  result = 0;
  memset(Src, 0, 0x28u);
  v5 = MaxCount;
  if ( !MaxCount || a4 )
  {
    if ( MaxCount >= 0x28 )
      v5 = 40;
    v6 = GreDescribePixelFormat(a1, v5, (int)Src);
    if ( v6 && v5 )
    {
      ms_exc.registration.TryLevel = 0;
      if ( (unsigned int)&a4[v5] > _MmUserProbeAddress || &a4[v5] <= a4 || ((unsigned __int8)a4 & 3) != 0 )
        *(_BYTE *)_MmUserProbeAddress = 0;
      memcpy(a4, Src, v5);
      ms_exc.registration.TryLevel = -2;
    }
    return v6;
  }
  return result;
}
