/*
 * XREFs of ?_RemoveWindowAction@CWindowGroup@@AEAAXPEAVCWindow@@@Z @ 0x1C0240868
 * Callers:
 *     _lambda_e3bb960287ece658ac40c5b32ccf215b_::operator() @ 0x1C023F83C (_lambda_e3bb960287ece658ac40c5b32ccf215b_--operator().c)
 *     ?SetWindowGroup@WindowGroupingWindowManagement@@YAJAEBUWINDOW_GROUP_ID@@PEAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C02404AC (-SetWindowGroup@WindowGroupingWindowManagement@@YAJAEBUWINDOW_GROUP_ID@@PEAUtagWND@@W4SET_WINDOW.c)
 * Callees:
 *     ?_FreeWindow@CWindowGroup@@AEAAXPEAPEAVCWindow@@@Z @ 0x1C02407DC (-_FreeWindow@CWindowGroup@@AEAAXPEAPEAVCWindow@@@Z.c)
 */

void __fastcall CWindowGroup::_RemoveWindowAction(CWindowGroup *this, struct CWindow *a2)
{
  int v2; // r8d
  struct CWindow *v3; // r10
  struct CWindow *v4; // rdx
  __int64 v5; // [rsp+30h] [rbp+8h]
  struct CWindow *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v2 = *((_DWORD *)a2 + 6);
  v3 = a2;
  if ( (unsigned int)(v2 - 1) <= 1 && v2 )
    *((_QWORD *)this + (unsigned int)(v2 - 1) + 5) = 0LL;
  v5 = *((_QWORD *)a2 + 1) & (-1LL << (*((_DWORD *)this + 7) & 0x1F));
  v4 = (struct CWindow *)(*((_QWORD *)this + 4)
                        + 8LL
                        * ((37
                          * (BYTE6(v5)
                           + 37
                           * (BYTE5(v5)
                            + 37
                            * (BYTE4(v5)
                             + 37
                             * (BYTE3(v5) + 37 * (BYTE2(v5) + 37 * (BYTE1(v5) + 37 * ((unsigned __int8)v5 + 11623883)))))))
                          + HIBYTE(v5)) & (unsigned int)((*((_DWORD *)this + 7) >> 5) - 1)));
  if ( (*(_QWORD *)v3 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    v3 = v6;
  while ( (*(_QWORD *)v4 & 1) == 0 )
  {
    if ( *(struct CWindow **)v4 == v3 )
    {
      *(_QWORD *)v4 = *(_QWORD *)v3;
      --*((_DWORD *)this + 6);
      *(_QWORD *)v3 |= 0x8000000000000002uLL;
      break;
    }
    v4 = *(struct CWindow **)v4;
  }
  CWindowGroup::_FreeWindow((CWindowGroup *)0x8000000000000002LL, &v6);
}
