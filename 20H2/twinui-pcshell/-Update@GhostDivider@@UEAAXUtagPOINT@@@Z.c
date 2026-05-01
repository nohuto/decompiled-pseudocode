/*
 * XREFs of ?Update@GhostDivider@@UEAAXUtagPOINT@@@Z @ 0x1804206C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GhostDivider::Update(GhostDivider *this, struct tagPOINT a2)
{
  int v2; // r9d
  int v3; // r8d

  v2 = *((_DWORD *)this + 18);
  v3 = a2.x - *((_DWORD *)this + 19) / 2;
  *((_DWORD *)this + 17) = v3;
  SetWindowPos(*((HWND *)this + 3), 0LL, v3, v2, 0, 0, 0x55u);
}
