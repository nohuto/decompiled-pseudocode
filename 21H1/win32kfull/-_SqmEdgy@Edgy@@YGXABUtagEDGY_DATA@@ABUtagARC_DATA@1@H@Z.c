/*
 * XREFs of ?_SqmEdgy@Edgy@@YGXABUtagEDGY_DATA@@ABUtagARC_DATA@1@H@Z @ 0x16EF43
 * Callers:
 *     ?_OnEnterActive@Edgy@@YGXAAUtagEDGY_DATA@@ABUtagARC_DATA@1@@Z @ 0x16EC4E (-_OnEnterActive@Edgy@@YGXAAUtagEDGY_DATA@@ABUtagARC_DATA@1@@Z.c)
 *     ?_OnLeaveDisambiguation@Edgy@@YGXAAUtagEDGY_DATA@@W4tagEDGY_STATE@@ABUtagARC_DATA@1@@Z @ 0x16EDB2 (-_OnLeaveDisambiguation@Edgy@@YGXAAUtagEDGY_DATA@@W4tagEDGY_STATE@@ABUtagARC_DATA@1@@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

void __userpurge Edgy::_SqmEdgy(
        int a1@<edx>,
        int a2@<ecx>,
        Edgy *this,
        const struct tagEDGY_DATA *a4,
        const struct Edgy::tagARC_DATA *a5,
        int a6)
{
  int v7; // eax
  int v8; // ecx
  _DWORD v9[12]; // [esp+4h] [ebp-34h] BYREF

  if ( _gSqmIsOptedIn )
  {
    v7 = *(_DWORD *)(a1 + 12);
    v9[3] = 0;
    v9[7] = 0;
    v9[11] = 0;
    v8 = *(_DWORD *)(a2 + 12) - 1;
    v9[2] = v7;
    v9[1] = 1;
    v9[5] = 1;
    v9[9] = 1;
    v9[0] = 16;
    v9[10] = *(_DWORD *)(a1 + 28) - *(_DWORD *)(a2 + 188);
    v9[4] = 16;
    v9[6] = (this != 0) | (v8 != 0 ? 0 : 2);
    v9[8] = 16;
    WinSqmAddToStreamEx(0, 8509, 3, v9, 0);
  }
}
