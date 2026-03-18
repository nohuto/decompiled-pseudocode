/*
 * XREFs of ?xxxWindowSizeStartingHandler@CallShell@@YG_NPAUtagWND@@H@Z @ 0x19C48F
 * Callers:
 *     ?xxxQueryShellForSizeCooperation@@YGXPAU_MOVESIZEDATA@@@Z @ 0x1751C3 (-xxxQueryShellForSizeCooperation@@YGXPAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x92764 (_anonymous_namespace_--xxxCallIAMWindowManagementHandler.c)
 *     _anonymous_namespace_::GetModifiersStateForShell @ 0xB5874 (_anonymous_namespace_--GetModifiersStateForShell.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

bool __fastcall CallShell::xxxWindowSizeStartingHandler(int *a1, int a2)
{
  _DWORD *v3; // edi
  int v5; // eax
  _DWORD v7[15]; // [esp+10h] [ebp-40h] BYREF

  v3 = (_DWORD *)a1[2];
  memset(v7, 0, sizeof(v7));
  v5 = *a1;
  v7[1] = 2;
  v7[0] = v5;
  v7[6] = a2;
  v7[7] = anonymous_namespace_::GetModifiersStateForShell(v3);
  TransformRectBetweenCoordinateSpaces(&v7[2], a1[5] + 52, *(_DWORD *)(v3[62] + 200), a1);
  return anonymous_namespace_::xxxCallIAMWindowManagementHandler(v7) != 0;
}
