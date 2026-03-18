/*
 * XREFs of ??0CWindowGroup@@QAE@ABUWINDOW_GROUP_ID@@@Z @ 0x19E957
 * Callers:
 *     ?CreateGroup@CWindowGroupManager@@QAEJPAUWINDOW_GROUP_ID@@@Z @ 0x19EE4C (-CreateGroup@CWindowGroupManager@@QAEJPAUWINDOW_GROUP_ID@@@Z.c)
 * Callees:
 *     <none>
 */

CWindowGroup *__thiscall CWindowGroup::CWindowGroup(CWindowGroup *this, const struct WINDOW_GROUP_ID *a2)
{
  CWindowGroup *result; // eax

  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 2) = *(_DWORD *)a2;
  result = this;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 5) = 0;
  return result;
}
