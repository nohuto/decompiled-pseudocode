/*
 * XREFs of ?DeferPointerCursorOperation@@YGXPBUtagPOINTER_INFO@@ABUtagPOINTERCURSORDATA@@@Z @ 0x1486B3
 * Callers:
 *     ?ContactVisualizationWorker@@YGHKPAXKHK@Z @ 0x14834D (-ContactVisualizationWorker@@YGHKPAXKHK@Z.c)
 * Callees:
 *     _INPUTDEST_FROM_PWND@4 @ 0x9B69A (_INPUTDEST_FROM_PWND@4.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

void __fastcall DeferPointerCursorOperation(int a1, _DWORD *a2)
{
  _DWORD *v3; // esi
  int v4; // ecx
  _DWORD *v5; // eax
  volatile __int32 *v6; // ecx
  unsigned int v7; // eax
  _DWORD *v8; // ebx
  _DWORD *v9; // esi
  signed __int32 v10; // ebx
  _DWORD v11[27]; // [esp+10h] [ebp-150h] BYREF
  _DWORD *v12; // [esp+7Ch] [ebp-E4h]
  _BYTE v13[104]; // [esp+80h] [ebp-E0h] BYREF
  _BYTE v14[116]; // [esp+E8h] [ebp-78h] BYREF

  v3 = a2;
  v4 = *(_DWORD *)(a1 + 20);
  v12 = a2;
  v5 = (_DWORD *)ValidateHwnd(v4);
  if ( v5 )
  {
    qmemcpy(v13, INPUTDEST_FROM_PWND(v5, v11), sizeof(v13));
    CInputDest::CInputDest((CInputDest *)v14, (const struct tagINPUTDEST *)v13);
    UpdateGlobalCursorOwner(v14, a1 + 24);
    CInputDest::~CInputDest((CInputDest *)v14);
    v3 = v12;
  }
  v6 = (volatile __int32 *)&Feedback::gppcdFree;
  v7 = 0;
  while ( 1 )
  {
    v8 = (_DWORD *)_InterlockedExchange(v6, 0);
    if ( v8 )
      break;
    v7 += 4;
    ++v6;
    if ( v7 >= 0xC )
      return;
  }
  *v8 = *v3;
  v9 = v3 + 1;
  v8[1] = *v9;
  v8[2] = v9[1];
  v10 = _InterlockedExchange(&Feedback::gppcdLatest, (__int32)v8);
  if ( v10 )
    _InterlockedCompareExchange(
      (volatile signed __int32 *)&(&Feedback::gppcdFree)[(v10 - (int)&Feedback::gpcd) / 0xCu],
      v10,
      0);
  KeSetEvent(Feedback::gpevtPointerCursorOperation, 1, 0);
}
