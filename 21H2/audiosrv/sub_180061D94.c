/*
 * XREFs of sub_180061D94 @ 0x180061D94
 * Callers:
 *     HandlerProc @ 0x180038010 (HandlerProc.c)
 *     ServiceMain @ 0x180061950 (ServiceMain.c)
 *     StartAddress @ 0x180061C30 (StartAddress.c)
 *     sub_180061CC0 @ 0x180061CC0 (sub_180061CC0.c)
 *     sub_180115240 @ 0x180115240 (sub_180115240.c)
 *     sub_180115400 @ 0x180115400 (sub_180115400.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall sub_180061D94(int a1, int a2, int a3)
{
  int v3; // eax

  v3 = 0;
  dword_18019E654 = a1;
  dword_18019E65C = a2;
  dword_18019E668 = a3;
  if ( a1 == 4 )
    v3 = 193;
  dword_18019E658 = v3;
  if ( a1 == 4 || a1 == 1 )
    dword_18019E664 = 0;
  else
    dword_18019E664 = dword_18019D840++;
  return SetServiceStatus((SERVICE_STATUS_HANDLE)qword_18019E670, (LPSERVICE_STATUS)&dword_18019E650);
}
