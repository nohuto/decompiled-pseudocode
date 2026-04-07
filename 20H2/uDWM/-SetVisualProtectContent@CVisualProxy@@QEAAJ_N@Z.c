/*
 * XREFs of ?SetVisualProtectContent@CVisualProxy@@QEAAJ_N@Z @ 0x1800BDEBC
 * Callers:
 *     ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x1800194B4 (-EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?SetVisualProtectContent@CTopLevelWindow@@QEAAJ_N@Z @ 0x180094DFC (-SetVisualProtectContent@CTopLevelWindow@@QEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisualProxy::SetVisualProtectContent(CVisualProxy *this, char a2, __int64 a3)
{
  LOBYTE(a3) = a2;
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 416LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           a3);
}
