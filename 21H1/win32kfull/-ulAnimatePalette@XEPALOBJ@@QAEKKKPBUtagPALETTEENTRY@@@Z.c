/*
 * XREFs of ?ulAnimatePalette@XEPALOBJ@@QAEKKKPBUtagPALETTEENTRY@@@Z @ 0x223193
 * Callers:
 *     _GreAnimatePalette@16 @ 0x21E235 (_GreAnimatePalette@16.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QAE@XZ @ 0x213BE (--0DYNAMICMODECHANGESHARELOCK@@QAE@XZ.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 */

unsigned int __thiscall XEPALOBJ::ulAnimatePalette(
        XEPALOBJ *this,
        struct tagPALETTEENTRY a2,
        unsigned int a3,
        const struct tagPALETTEENTRY *a4)
{
  struct PALETTE *v5; // edx
  unsigned int v6; // ecx
  unsigned int v7; // ebx
  unsigned int v8; // esi
  int v9; // eax
  unsigned __int8 *v10; // edi
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  unsigned int v14; // ecx
  const struct tagPALETTEENTRY *v15; // eax
  unsigned int v16; // eax
  bool v17; // zf
  unsigned int v18; // ebx
  int v19; // edx
  const struct tagPALETTEENTRY *v20; // eax
  void (__stdcall *v21)(_DWORD, int *, _DWORD, _DWORD, _DWORD); // edx
  int v23; // [esp+8h] [ebp-14h] BYREF
  int v24; // [esp+Ch] [ebp-10h]
  XEPALOBJ *v25; // [esp+10h] [ebp-Ch]
  int v26; // [esp+14h] [ebp-8h] BYREF
  char v27; // [esp+1Bh] [ebp-1h] BYREF

  v25 = this;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v27);
  v5 = *(struct PALETTE **)this;
  if ( *(struct PALETTE **)this == ppalDefault )
    goto LABEL_26;
  if ( !a4 )
    goto LABEL_26;
  v6 = *((_DWORD *)v5 + 5);
  v7 = (unsigned int)a2;
  if ( *(_DWORD *)&a2 >= v6 )
    goto LABEL_26;
  v8 = a3;
  if ( *(_DWORD *)&a2 + a3 > v6 )
    v8 = v6 - *(_DWORD *)&a2;
  if ( !v8 )
  {
LABEL_26:
    v18 = 0;
    goto LABEL_27;
  }
  v9 = *((_DWORD *)v5 + 19);
  a2 = 0;
  v10 = 0;
  v26 = 0;
  a3 = v9 + 4 * v7;
  v23 = _ghsemPalette;
  GreAcquireSemaphore(_ghsemPalette);
  v11 = *(_DWORD *)v25;
  if ( *(_DWORD *)(*(_DWORD *)v25 + 40) )
  {
    v12 = *(_DWORD *)(v11 + 36);
    if ( (*(_DWORD *)(v12 + 1456) & 0x100) != 0 )
    {
      v26 = *(_DWORD *)(v12 + 1112);
      v13 = *(_DWORD *)(v11 + 56);
      if ( v13 )
        v10 = (unsigned __int8 *)(v13 + v7 + 4);
    }
  }
  v14 = a3;
  v15 = (const struct tagPALETTEENTRY *)((char *)a4 - a3);
  a4 = (const struct tagPALETTEENTRY *)((char *)a4 - a3);
  do
  {
    v16 = *(unsigned int *)((char *)v15 + v14);
    --v8;
    v17 = (*(_BYTE *)(v14 + 3) & 1) == 0;
    v18 = (unsigned int)a2;
    a3 = v16;
    if ( !v17 )
    {
      v18 = *(_DWORD *)&a2 + 1;
      *(_DWORD *)v14 = v16;
      a2 = (struct tagPALETTEENTRY)v18;
      if ( !v10 )
        goto LABEL_18;
      v19 = *v10;
      v24 = *(_DWORD *)(v26 + 76);
      if ( (*(_BYTE *)(v24 + 4 * v19 + 3) & 1) != 0 )
      {
        HIBYTE(a3) = *(_BYTE *)(v24 + 4 * v19 + 3);
        *(_DWORD *)(v24 + 4 * v19) = a3;
        v18 = (unsigned int)a2;
      }
    }
    if ( v10 )
      ++v10;
LABEL_18:
    v15 = a4;
    v14 += 4;
  }
  while ( v8 );
  SEMOBJ::vUnlock((SEMOBJ *)&v23);
  if ( v10 )
  {
    a4 = *(const struct tagPALETTEENTRY **)(*(_DWORD *)v25 + 36);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)&a3, (struct PDEVOBJ *)&a4);
    a2 = a4[10];
    ((void (__fastcall *)(_DWORD))GreAcquireSemaphore)(a2);
    GreAcquireSemaphore(*(_DWORD *)&a4[8]);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *(_DWORD *)&a4[8], 11);
    v20 = a4;
    if ( (*(_DWORD *)&a4[364] & 0x100) != 0 && (*(_DWORD *)&a4[6] & 0x400) == 0 )
    {
      v21 = (void (__stdcall *)(_DWORD, int *, _DWORD, _DWORD, _DWORD))a4[273];
      if ( v21 )
      {
        v21(*(_DWORD *)(*(_DWORD *)&a4[4] + 1108), &v26, 0, 0, *(_DWORD *)(v26 + 20));
        v20 = a4;
      }
      else
      {
        v18 = 0;
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", *(_DWORD *)&v20[8]);
    GreReleaseSemaphoreInternal(*(_DWORD *)&a4[8]);
    SEMOBJ::vUnlock((SEMOBJ *)&a2);
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&a3);
  }
LABEL_27:
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
  return v18;
}
