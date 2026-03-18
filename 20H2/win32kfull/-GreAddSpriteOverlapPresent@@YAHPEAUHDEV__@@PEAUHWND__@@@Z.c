/*
 * XREFs of ?GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C027E5AC
 * Callers:
 *     ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x1C0275BC8 (-InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C008513C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00856F8 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C008608C (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?pSpCreatePresent@@YAPEAU_PRESENT@@PEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C02811C4 (-pSpCreatePresent@@YAPEAU_PRESENT@@PEAUHDEV__@@PEAUHWND__@@@Z.c)
 *     ?pSpGetPresent@@YAPEAU_PRESENT@@PEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C028127C (-pSpGetPresent@@YAPEAU_PRESENT@@PEAUHDEV__@@PEAUHWND__@@@Z.c)
 *     ?vSpRemovePresent@@YAXPEAUHDEV__@@PEAU_PRESENT@@@Z @ 0x1C0283A10 (-vSpRemovePresent@@YAXPEAUHDEV__@@PEAU_PRESENT@@@Z.c)
 */

__int64 __fastcall GreAddSpriteOverlapPresent(HDEV a1, HWND a2)
{
  struct _SPRITESTATE *v2; // r12
  unsigned int v3; // esi
  BOOL v6; // edi
  unsigned int v7; // r12d
  HWND v8; // rdx
  HDEV v9; // rcx
  struct _PRESENT *Present; // r14
  unsigned int i; // r12d
  struct _PRESENT *v12; // rax
  HDEV v13; // rcx
  __int64 v14; // rdx
  SPRITERANGELOCK *v15; // rbx
  HWND v16; // rdx
  HDEV v17; // rcx
  unsigned int v18; // r12d
  __int64 v19; // rdi
  SPRITERANGELOCK *v21; // [rsp+50h] [rbp+8h]
  SPRITERANGELOCK *v22; // [rsp+50h] [rbp+8h]

  v2 = (struct _SPRITESTATE *)(a1 + 22);
  v3 = 0;
  v6 = 0;
  if ( !*((_DWORD *)a1 + 37) )
  {
    v15 = (SPRITERANGELOCK *)(a1 + 52);
    SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(a1 + 52));
    Present = pSpGetPresent(a1, a2);
    if ( !Present )
    {
      Present = pSpCreatePresent(v17, v16);
      v6 = Present != 0LL;
    }
    SPRITERANGELOCK::vUnlock(v15);
    goto LABEL_16;
  }
  v7 = 0;
  while ( 1 )
  {
    v21 = (SPRITERANGELOCK *)(*(_QWORD *)(*((_QWORD *)a1 + 19) + 8LL * v7) + 208LL);
    SPRITERANGELOCK::vLockExclusive(v21);
    Present = pSpGetPresent(*(HDEV *)(*((_QWORD *)a1 + 19) + 8LL * v7), a2);
    if ( !Present )
      break;
LABEL_6:
    SPRITERANGELOCK::vUnlock(v21);
    if ( ++v7 >= *((_DWORD *)a1 + 37) )
      goto LABEL_12;
  }
  Present = pSpCreatePresent(v9, v8);
  if ( Present )
  {
    v6 = 1;
    goto LABEL_6;
  }
  SPRITERANGELOCK::vUnlock(v21);
  v6 = 0;
  for ( i = 0; i < *((_DWORD *)a1 + 37); ++i )
  {
    v22 = (SPRITERANGELOCK *)(*(_QWORD *)(*((_QWORD *)a1 + 19) + 8LL * i) + 208LL);
    SPRITERANGELOCK::vLockExclusive(v22);
    v12 = pSpGetPresent(*(HDEV *)(*((_QWORD *)a1 + 19) + 8LL * i), a2);
    Present = v12;
    if ( v12 )
    {
      vSpRemovePresent(v13, v12);
      Win32FreePool(v14);
    }
    SPRITERANGELOCK::vUnlock(v22);
  }
LABEL_12:
  v15 = (SPRITERANGELOCK *)(a1 + 52);
  v2 = (struct _SPRITESTATE *)(a1 + 22);
LABEL_16:
  if ( v6 )
  {
    if ( *((_DWORD *)a1 + 37) )
    {
      v18 = 0;
      do
      {
        v19 = *(_QWORD *)(*((_QWORD *)a1 + 19) + 8LL * v18);
        SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v19 + 208));
        vSpComputeNoPresentRegion((struct _SPRITESTATE *)(*(_QWORD *)(*((_QWORD *)a1 + 19) + 8LL * v18) + 88LL), 0);
        SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v19 + 208));
        ++v18;
      }
      while ( v18 < *((_DWORD *)a1 + 37) );
    }
    else
    {
      SPRITERANGELOCK::vLockExclusive(v15);
      vSpComputeNoPresentRegion(v2, 0);
      SPRITERANGELOCK::vUnlock(v15);
    }
  }
  LOBYTE(v3) = Present != 0LL;
  return v3;
}
