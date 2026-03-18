/*
 * XREFs of MNCheckButtonDownState @ 0x1C0237578
 * Callers:
 *     xxxCallHandleMenuMessages @ 0x1C0237A60 (xxxCallHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x1C023C570 (xxxMenuWindowProc.c)
 * Callees:
 *     UnlockMFMWFPWindow @ 0x1C023797C (UnlockMFMWFPWindow.c)
 */

__int64 __fastcall MNCheckButtonDownState(__int64 a1)
{
  bool v2; // cf
  __int64 result; // rax

  v2 = (_GetKeyState(*(unsigned int *)(a1 + 76)) & 0x8000u) != 0LL;
  result = *(_DWORD *)(a1 + 8) & 0xFFFFFFF7;
  *(_DWORD *)(a1 + 8) = result | (v2 ? 8 : 0);
  if ( !(result & 8 | (v2 ? 8 : 0)) )
  {
    *(_DWORD *)(a1 + 8) = result & 0xFFFFDF7F | (v2 ? 8 : 0);
    return UnlockMFMWFPWindow(a1 + 64);
  }
  return result;
}
