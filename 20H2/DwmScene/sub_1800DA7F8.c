/*
 * XREFs of sub_1800DA7F8 @ 0x1800DA7F8
 * Callers:
 *     sub_1800DB1F8 @ 0x1800DB1F8 (sub_1800DB1F8.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800113F8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall sub_1800DA7F8(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::VertexLayoutState::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v4 = (_QWORD *)(a1 + 40);
  *v4 = 0LL;
  v4[1] = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_BYTE *)(a1 + 68) = 1;
  std::shared_ptr<__ExceptionPtr>::operator=(v4, (_QWORD *)(a2 + 736));
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 752);
  return a1;
}
