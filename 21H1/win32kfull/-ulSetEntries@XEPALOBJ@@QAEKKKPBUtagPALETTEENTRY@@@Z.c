/*
 * XREFs of ?ulSetEntries@XEPALOBJ@@QAEKKKPBUtagPALETTEENTRY@@@Z @ 0x22337C
 * Callers:
 *     _NtGdiColorCorrectPalette@24 @ 0x21BFC4 (_NtGdiColorCorrectPalette@24.c)
 *     _GreSetPaletteEntries@16 @ 0x21E422 (_GreSetPaletteEntries@16.c)
 * Callees:
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

unsigned int __thiscall XEPALOBJ::ulSetEntries(
        XEPALOBJ *this,
        unsigned int a2,
        unsigned int a3,
        const struct tagPALETTEENTRY *a4)
{
  int v5; // edx
  const struct tagPALETTEENTRY *v6; // esi
  unsigned int v7; // ecx
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  _BYTE *v10; // edx
  const struct tagPALETTEENTRY *v11; // ebx
  unsigned int v12; // edi
  signed __int32 v13; // edx
  int v14; // esi
  unsigned int v17; // [esp+18h] [ebp+8h]
  unsigned int v18; // [esp+1Ch] [ebp+Ch]
  const struct tagPALETTEENTRY *v19; // [esp+20h] [ebp+10h]
  const struct tagPALETTEENTRY *v20; // [esp+20h] [ebp+10h]

  v5 = *(_DWORD *)this;
  if ( (*(_DWORD *)(*(_DWORD *)this + 16) & 0x100) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
    v5 = *(_DWORD *)this;
  }
  if ( (struct PALETTE *)v5 == ppalDefault )
    return 0;
  if ( (*(_DWORD *)(v5 + 16) & 0x100000) != 0 )
    return 0;
  v6 = a4;
  if ( !a4 )
    return 0;
  v19 = *(const struct tagPALETTEENTRY **)(v5 + 20);
  if ( a2 >= (unsigned int)v19 )
    return 0;
  v7 = a3;
  if ( a2 + a3 > (unsigned int)v19 )
    v7 = (unsigned int)v19 - a2;
  if ( !v7 )
    return 0;
  v18 = *(_DWORD *)(v5 + 76) + 4 * a2;
  v20 = 0;
  v8 = *(_DWORD **)(v5 + 52);
  if ( v8 )
  {
    *v8 = 0;
    v5 = *(_DWORD *)this;
    v20 = (const struct tagPALETTEENTRY *)(a2 + *(_DWORD *)(*(_DWORD *)this + 52) + 4);
  }
  v9 = *(_DWORD **)(v5 + 56);
  if ( v9 )
  {
    *v9 = 0;
    v10 = (_BYTE *)(*(_DWORD *)(*(_DWORD *)this + 56) + a2 + 4);
  }
  else
  {
    v10 = 0;
  }
  v11 = v20;
  v12 = v18 - (_DWORD)v6;
  v17 = v7;
  do
  {
    --v7;
    *(const struct tagPALETTEENTRY *)((char *)v6 + v12) = *v6;
    if ( v11 )
    {
      v11->peRed = 0;
      v11 = (const struct tagPALETTEENTRY *)((char *)v11 + 1);
    }
    if ( v10 )
      *v10++ = 0;
    ++v6;
  }
  while ( v7 );
  v13 = _InterlockedIncrement((volatile signed __int32 *)ulXlatePalUnique);
  *(_DWORD *)(*(_DWORD *)this + 24) = v13;
  v14 = *(_DWORD *)(*(_DWORD *)this + 80);
  if ( v14 != *(_DWORD *)this )
    *(_DWORD *)(v14 + 24) = v13;
  return v17;
}
