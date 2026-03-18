/*
 * XREFs of ?ulSetEntries@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x1C02BD4A8
 * Callers:
 *     NtGdiColorCorrectPalette @ 0x1C02B6800 (NtGdiColorCorrectPalette.c)
 *     GreSetPaletteEntries @ 0x1C02B7CA0 (GreSetPaletteEntries.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall XEPALOBJ::ulSetEntries(
        XEPALOBJ *this,
        __int64 a2,
        unsigned int a3,
        const struct tagPALETTEENTRY *a4)
{
  __int64 v4; // r10
  __int64 v7; // rsi
  unsigned int v9; // ecx
  _BYTE *v10; // rdx
  _BYTE *v11; // rcx
  __int64 v12; // r9
  _DWORD *v13; // rax
  _DWORD *v14; // rax
  unsigned int v15; // r10d
  __int64 v16; // r9
  signed __int32 v17; // edx
  __int64 v18; // r8

  v4 = *(_QWORD *)this;
  v7 = (unsigned int)a2;
  if ( (*(_DWORD *)(*(_QWORD *)this + 24LL) & 0x100) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
    v4 = *(_QWORD *)this;
  }
  if ( (struct PALETTE *)v4 == ppalDefault )
    return 0LL;
  if ( (*(_DWORD *)(v4 + 24) & 0x100000) != 0 )
    return 0LL;
  if ( !a4 )
    return 0LL;
  v9 = *(_DWORD *)(v4 + 28);
  if ( (unsigned int)v7 >= v9 )
    return 0LL;
  if ( (unsigned int)v7 + a3 > v9 )
    a3 = v9 - v7;
  if ( !a3 )
    return 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = *(_QWORD *)(v4 + 112) + 4 * v7;
  v13 = *(_DWORD **)(v4 + 72);
  if ( v13 )
  {
    *v13 = 0;
    v4 = *(_QWORD *)this;
    v10 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)this + 72LL) + v7 + 4);
  }
  v14 = *(_DWORD **)(v4 + 80);
  if ( v14 )
  {
    *v14 = 0;
    v11 = (_BYTE *)(v7 + *(_QWORD *)(*(_QWORD *)this + 80LL) + 4LL);
  }
  v15 = a3;
  v16 = v12 - (_QWORD)a4;
  do
  {
    --a3;
    *(const struct tagPALETTEENTRY *)((char *)a4 + v16) = *a4;
    if ( v10 )
      *v10++ = 0;
    if ( v11 )
      *v11++ = 0;
    ++a4;
  }
  while ( a3 );
  v17 = _InterlockedIncrement(*(volatile signed __int32 **)&ulXlatePalUnique);
  *(_DWORD *)(*(_QWORD *)this + 32LL) = v17;
  v18 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  if ( v18 != *(_QWORD *)this )
    *(_DWORD *)(v18 + 32) = v17;
  return v15;
}
