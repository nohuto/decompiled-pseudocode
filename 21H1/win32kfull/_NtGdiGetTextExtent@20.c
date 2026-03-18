/*
 * XREFs of _NtGdiGetTextExtent@20 @ 0x2132A6
 * Callers:
 *     <none>
 * Callees:
 *     _GreGetTextExtentW@20 @ 0xE26D8 (_GreGetTextExtentW@20.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __stdcall NtGdiGetTextExtent(HDC a1, void *Src, unsigned int a3, ULONG a4, char a5)
{
  const void *v5; // ecx
  int TextExtentW; // ebx
  char *v7; // esi
  ULONG v8; // edx
  struct tagSIZE *v9; // ecx
  struct tagSIZE v11; // [esp+20h] [ebp-50h] BYREF
  int v12; // [esp+28h] [ebp-48h]
  int v13; // [esp+2Ch] [ebp-44h]
  char *v14; // [esp+30h] [ebp-40h]
  char v15; // [esp+34h] [ebp-3Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+58h] [ebp-18h]

  v12 = a3;
  v5 = Src;
  TextExtentW = 0;
  v11.cx = 0;
  v11.cy = 0;
  v7 = 0;
  v14 = 0;
  v13 = 0;
  if ( (a3 & 0x80000000) != 0 )
    return TextExtentW;
  if ( !a3 )
  {
    TextExtentW = 1;
LABEL_22:
    ms_exc.registration.TryLevel = 1;
    v9 = (struct tagSIZE *)a4;
    if ( a4 >= _MmUserProbeAddress )
      v9 = (struct tagSIZE *)_MmUserProbeAddress;
    *v9 = v11;
    ms_exc.registration.TryLevel = -2;
    return TextExtentW;
  }
  if ( Src )
  {
    ms_exc.registration.TryLevel = 0;
    if ( v12 > 16 )
    {
      if ( a3 > 0x1388000 )
      {
LABEL_10:
        if ( v7 )
        {
          v8 = (ULONG)v5 + 2 * a3;
          if ( v8 < (unsigned int)v5 || v8 > _MmUserProbeAddress )
            *(_BYTE *)_MmUserProbeAddress = 0;
          memcpy(v7, v5, 2 * a3);
          TextExtentW = 1;
          v13 = 1;
        }
        ms_exc.registration.TryLevel = -2;
        goto LABEL_16;
      }
      v7 = (char *)AllocFreeTmpBuffer(2 * a3);
      v5 = Src;
    }
    else
    {
      v7 = &v15;
    }
    v14 = v7;
    goto LABEL_10;
  }
LABEL_16:
  if ( TextExtentW )
    TextExtentW = GreGetTextExtentW(a1, (unsigned __int16 *)v7, a3, &v11, a5);
  if ( v12 > 16 && v7 )
    FreeTmpBuffer(v7);
  if ( TextExtentW )
    goto LABEL_22;
  return TextExtentW;
}
