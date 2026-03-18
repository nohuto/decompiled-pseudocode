/*
 * XREFs of _NtGdiQueryFonts@12 @ 0x213BD4
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _GreQueryFonts@12 @ 0x1D905B (_GreQueryFonts@12.c)
 */

unsigned int __stdcall NtGdiQueryFonts(char *a1, unsigned int a2, ULONG a3)
{
  unsigned int v3; // edi
  struct _UNIVERSAL_FONT_ID *v4; // esi
  unsigned int v5; // ebx
  union _LARGE_INTEGER *v6; // ecx
  size_t v7; // ebx
  union _LARGE_INTEGER v9; // [esp+10h] [ebp-24h] BYREF
  struct _UNIVERSAL_FONT_ID *v10; // [esp+18h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  v3 = 0;
  v4 = 0;
  v10 = 0;
  v9.QuadPart = 0LL;
  v5 = a2;
  if ( a2 && a1 )
  {
    if ( a2 <= 0x4E2000 )
    {
      v4 = (struct _UNIVERSAL_FONT_ID *)AllocFreeTmpBuffer(8 * a2);
      v10 = v4;
    }
    if ( !v4 )
      v3 = -1;
  }
  if ( v3 != -1 )
  {
    v3 = GreQueryFonts(v4, a2, &v9);
    if ( v3 != -1 )
    {
      ms_exc.registration.TryLevel = 0;
      v6 = (union _LARGE_INTEGER *)a3;
      if ( a3 >= _MmUserProbeAddress )
        v6 = (union _LARGE_INTEGER *)_MmUserProbeAddress;
      *v6 = v9;
      if ( a1 )
      {
        if ( v3 < a2 )
          v5 = v3;
        v7 = 8 * v5;
        if ( (unsigned int)&a1[v7] > _MmUserProbeAddress || &a1[v7] <= a1 || ((unsigned __int8)a1 & 3) != 0 )
          *(_BYTE *)_MmUserProbeAddress = 0;
        memcpy(a1, v4, v7);
      }
      ms_exc.registration.TryLevel = -2;
    }
  }
  if ( v4 )
    FreeTmpBuffer(v4);
  if ( v3 == -1 )
    EngSetLastError(8u);
  return v3;
}
