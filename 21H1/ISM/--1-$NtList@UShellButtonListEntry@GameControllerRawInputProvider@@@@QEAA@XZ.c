/*
 * XREFs of ??1?$NtList@UShellButtonListEntry@GameControllerRawInputProvider@@@@QEAA@XZ @ 0x1800410B4
 * Callers:
 *     ??1GameControllerRawInputProvider@@UEAA@XZ @ 0x1800886E4 (--1GameControllerRawInputProvider@@UEAA@XZ.c)
 * Callees:
 *     ??_GShellButtonListEntry@GameControllerRawInputProvider@@QEAAPEAXI@Z @ 0x1800411A8 (--_GShellButtonListEntry@GameControllerRawInputProvider@@QEAAPEAXI@Z.c)
 */

GameControllerRawInputProvider::ShellButtonListEntry *__fastcall NtList<GameControllerRawInputProvider::ShellButtonListEntry>::~NtList<GameControllerRawInputProvider::ShellButtonListEntry>(
        GameControllerRawInputProvider::ShellButtonListEntry **a1,
        unsigned int a2)
{
  GameControllerRawInputProvider::ShellButtonListEntry *result; // rax
  GameControllerRawInputProvider::ShellButtonListEntry **v4; // rcx

  for ( result = *a1; ; result = *a1 )
  {
    v4 = *(GameControllerRawInputProvider::ShellButtonListEntry ***)result;
    if ( *((GameControllerRawInputProvider::ShellButtonListEntry ***)result + 1) != a1 || v4[1] != result )
      __fastfail(3u);
    *a1 = (GameControllerRawInputProvider::ShellButtonListEntry *)v4;
    v4[1] = (GameControllerRawInputProvider::ShellButtonListEntry *)a1;
    if ( result == (GameControllerRawInputProvider::ShellButtonListEntry *)a1 )
      break;
    GameControllerRawInputProvider::ShellButtonListEntry::`scalar deleting destructor'(result, a2);
    a1[2] = (GameControllerRawInputProvider::ShellButtonListEntry *)((char *)a1[2] - 1);
  }
  return result;
}
