/*
 * XREFs of ?xxxHandleDesktopMessages@@YGHPAUtagTHREADINFO@@PAUtagTERMINAL@@@Z @ 0xA18FA
 * Callers:
 *     _xxxDesktopThread@4 @ 0xE3DD4 (_xxxDesktopThread@4.c)
 * Callees:
 *     _WPP_RECORDER_SF_q@24 @ 0x1B74E (_WPP_RECORDER_SF_q@24.c)
 *     _xxxDispatchMessage@4 @ 0x45B62 (_xxxDispatchMessage@4.c)
 *     ?DestroyPendingDesktops@@YGXPAUtagTHREADINFO@@PAUtagTERMINAL@@@Z @ 0x7CC38 (-DestroyPendingDesktops@@YGXPAUtagTHREADINFO@@PAUtagTERMINAL@@@Z.c)
 *     _xxxInternalGetMessage@24 @ 0xA199C (_xxxInternalGetMessage@24.c)
 *     _xxxCleanupMotherDesktopWindow@4 @ 0xD4B02 (_xxxCleanupMotherDesktopWindow@4.c)
 */

int __fastcall xxxHandleDesktopMessages(_DWORD *a1, int *a2)
{
  int v4; // edx
  unsigned int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8[7]; // [esp+Ch] [ebp-1Ch] BYREF

  memset(v8, 0, sizeof(v8));
  while ( 1 )
  {
    if ( !xxxInternalGetMessage(0, 0, 1, 0) )
      return 1;
    if ( a2 == &gTermNOIO )
    {
      v6 = v8[1];
      if ( v8[1] != 18 )
        goto LABEL_6;
      xxxCleanupMotherDesktopWindow(a2);
    }
    v6 = v8[1];
    if ( v8[1] == 18 )
    {
      v7 = a1[126];
      if ( v7 <= 1 )
        break;
    }
LABEL_6:
    if ( v6 == 796 )
    {
      if ( v8[2] == 2 )
        DestroyPendingDesktops(a1, (int)a2);
    }
    else
    {
      xxxDispatchMessage(v8);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_q(v7, v4, 8u, 21, (int)&WPP_a30ede561e3e317e1a4494e99a1f5b97_Traceguids, a1[126]);
  }
  return 0;
}
