/*
 * XREFs of ?DrawOutline@@YGXPAUHDC__@@HHHHHPAUHBRUSH__@@@Z @ 0x1A8E86
 * Callers:
 *     _xxxDrawMenuItem@24 @ 0xB61DA (_xxxDrawMenuItem@24.c)
 *     _MNDrawEdge@16 @ 0x1A9824 (_MNDrawEdge@16.c)
 * Callees:
 *     _GrePolyPatBlt@20 @ 0x722C4 (_GrePolyPatBlt@20.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

void __userpurge DrawOutline(int a1@<edx>, HDC a2@<ecx>, HDC a3, int a4, int a5, int a6, int a7, int a8, HBRUSH a9)
{
  _DWORD v9[21]; // [esp+18h] [ebp-5Ch] BYREF

  v9[0] = a1;
  v9[5] = a1;
  v9[10] = a4 + a1 - a6;
  v9[1] = a3;
  v9[6] = a3;
  v9[11] = a3;
  v9[15] = a1;
  v9[3] = a5;
  v9[7] = a4;
  v9[13] = a5;
  v9[17] = a4;
  v9[2] = a6;
  v9[4] = a7;
  v9[8] = a6;
  v9[9] = a7;
  v9[12] = a6;
  v9[14] = a7;
  v9[16] = (char *)a3 + a5 - a6;
  v9[18] = a6;
  v9[19] = a7;
  GrePolyPatBlt(a2, 0xF00021u, (struct XDCOBJ *)v9, 4u, a5);
}
