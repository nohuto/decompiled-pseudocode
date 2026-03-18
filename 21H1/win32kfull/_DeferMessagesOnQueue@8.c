/*
 * XREFs of _DeferMessagesOnQueue@8 @ 0xC2828
 * Callers:
 *     ?xxxGetNextSysMsg@@YGPAUtagQMSG@@PAUtagTHREADINFO@@PAU1@1PAVCMultiPerObjectLockExclusivePpiPtiQ@@@Z @ 0x3C4EA (-xxxGetNextSysMsg@@YGPAUtagQMSG@@PAUtagTHREADINFO@@PAU1@1PAVCMultiPerObjectLockExclusivePpiPtiQ@.c)
 * Callees:
 *     _WPP_RECORDER_SF_qiqdd@44 @ 0x6C1F6 (_WPP_RECORDER_SF_qiqdd@44.c)
 *     _IsHiddenByInputService@4 @ 0xAAB8E (_IsHiddenByInputService@4.c)
 *     ?DeferMessage@@YGXPAUtagMLIST@@PAUtagQMSG@@@Z @ 0xC28BC (-DeferMessage@@YGXPAUtagMLIST@@PAUtagQMSG@@@Z.c)
 */

_DWORD *__usercall DeferMessagesOnQueue@<eax>(_DWORD *a1@<edx>, _DWORD *a2@<ecx>, struct tagMLIST *a3@<ebx>)
{
  int v3; // edi
  int v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // ebx
  int v8; // eax
  _DWORD *v9; // edx
  int v10; // edx
  int v11; // ecx
  struct tagMLIST *v13; // [esp-4h] [ebp-Ch]
  struct tagQMSG *v14; // [esp+0h] [ebp-8h]

  v3 = 0;
  if ( a1 )
  {
    v13 = a3;
    do
    {
      v5 = a1[17];
      if ( !v5 || (*(_DWORD *)(v5 + 264) & 0x10000) == 0 )
        break;
      v6 = (_DWORD *)a1[1];
      v7 = (_DWORD *)*a1;
      if ( v6 )
        *v6 = v7;
      else
        *a2 = v7;
      v8 = a1[1];
      if ( *a1 )
        *(_DWORD *)(*a1 + 4) = v8;
      else
        a2[1] = v8;
      a1[1] = 0;
      *a1 = 0;
      DeferMessage(v13, v14);
      if ( !IsHiddenByInputService(v9) )
      {
        ++v3;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qiqdd(
            v11,
            16,
            (int)&WPP_fae14e43e2df34d42d304f3db5b27b93_Traceguids,
            v10,
            *(_DWORD *)(v10 + 96),
            *(_DWORD *)(v10 + 100),
            (char)a2,
            a2[3],
            a2[2] - v3);
      }
      a1 = v7;
    }
    while ( v7 );
  }
  a2[2] -= v3;
  return a1;
}
