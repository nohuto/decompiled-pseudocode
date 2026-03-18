/*
 * XREFs of _cParseFontResources@16 @ 0xE8BCC
 * Callers:
 *     ?UmfdEscParseFontResources@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0xE8B2C (-UmfdEscParseFontResources@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     _pvFindResource@20 @ 0xE621E (_pvFindResource@20.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __fastcall cParseFontResources(int a1, _DWORD *a2, _DWORD *a3, PVOID *a4)
{
  int v4; // edx
  int v6; // ebx
  int *v7; // eax
  unsigned __int16 *v8; // ecx
  int i; // eax
  int Resource; // eax
  int *v11; // edx
  int v12; // edx
  int v14; // [esp+1Ch] [ebp-30h] BYREF
  int v15; // [esp+20h] [ebp-2Ch]
  int v16; // [esp+24h] [ebp-28h]
  int v17; // [esp+28h] [ebp-24h]
  int *v18; // [esp+2Ch] [ebp-20h]
  int v19; // [esp+30h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]

  v15 = a1;
  v19 = 0;
  *a2 = 0;
  *a3 = 0;
  v4 = *(_DWORD *)(a1 + 12);
  if ( *(_WORD *)v4 == 23117 && *(_DWORD *)(v4 + 60) > *(_DWORD *)(a1 + 16) )
    return 0;
  if ( (int)LdrResFindResourceDirectory(v4 | 1, 8, 0, &v19, 0, 0, 0) < 0 )
    return 0;
  v6 = *(unsigned __int16 *)(v19 + 14);
  if ( !*(_WORD *)(v19 + 14) )
    return 0;
  if ( a4 )
  {
    v7 = (int *)EngAllocMem(1u, 4 * v6, 0x64666D42u);
    v18 = v7;
    *a4 = v7;
    if ( v7 )
    {
      ms_exc.registration.TryLevel = 0;
      v8 = (unsigned __int16 *)(v19 + 16);
      v17 = v19 + 16;
      for ( i = 0; ; i = v16 + 1 )
      {
        v16 = i;
        if ( i >= v6 )
          break;
        v14 = 0;
        Resource = pvFindResource(
                     *(_DWORD *)(v15 + 12) + 1,
                     *(_DWORD *)(v15 + 12) + *(_DWORD *)(v15 + 16),
                     *v8,
                     8,
                     &v14);
        v11 = v18;
        *v18 = Resource;
        v18 = v11 + 1;
        if ( !Resource )
        {
          v6 = 0;
          break;
        }
        v8 = (unsigned __int16 *)(v17 + 8);
        v17 += 8;
      }
      ms_exc.registration.TryLevel = -2;
      goto LABEL_14;
    }
    return 0;
  }
LABEL_14:
  if ( v6 <= 0 )
  {
    if ( a4 )
    {
      EngFreeMem(*a4);
      *a4 = 0;
    }
  }
  else
  {
    v12 = v15;
    *a2 = *(_DWORD *)(v15 + 12);
    *a3 = *(_DWORD *)(v12 + 16);
  }
  return v6;
}
