/*
 * XREFs of ?GreHidePointerInternal@@YGXPAUHDEV__@@@Z @ 0xAEFD4
 * Callers:
 *     _GreHidePointer@4 @ 0xB02B2 (_GreHidePointer@4.c)
 * Callees:
 *     ?vMovePointer@@YGXPAUHDEV__@@HHJ@Z @ 0x7BC92 (-vMovePointer@@YGXPAUHDEV__@@HHJ@Z.c)
 */

void __thiscall GreHidePointerInternal(_DWORD *this, HDEV a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // edi
  int v5; // ebx
  int v6; // ecx
  int v7; // [esp-4h] [ebp-10h]
  int v8; // [esp+0h] [ebp-Ch]
  int v9; // [esp+4h] [ebp-8h]

  GreAcquireSemaphore(this[10]);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemPointer()", this[10], 4);
  if ( ((unsigned int)&loc_20000 & this[6]) != 0 )
  {
    v3 = (_DWORD *)this[277];
    v4 = (_DWORD *)*v3;
    v5 = v3[2];
    do
    {
      v6 = v4[9];
      if ( (*(_DWORD *)(v6 + 1416) & 0x2000) == 0 )
        vMovePointer(-1, v6, (HDEV)0xFFFFFFFF, dword_275648, v8, v9);
      v4 = (_DWORD *)*v4;
      --v5;
    }
    while ( v5 );
  }
  else
  {
    vMovePointer(-1, (int)this, (HDEV)0xFFFFFFFF, dword_275648, v8, v9);
  }
  v7 = this[10];
  this[11] = -1;
  this[12] = -1;
  EtwTraceGreLockReleaseSemaphore(L"po.hsemPointer()", v7);
  JUMPOUT(0x24EA5C);
}
