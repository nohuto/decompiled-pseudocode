/*
 * XREFs of ?CleanEventMessage@@YGXPAUtagQMSG@@@Z @ 0x9C3D2
 * Callers:
 *     _xxxProcessEventMessage@8 @ 0x13A0E (_xxxProcessEventMessage@8.c)
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     _DestroyThreadsMessages@8 @ 0x6FE90 (_DestroyThreadsMessages@8.c)
 *     _FreeMessageList@4 @ 0x9C39C (_FreeMessageList@4.c)
 *     _SuspendThreadQueue@4 @ 0xA68FC (_SuspendThreadQueue@4.c)
 *     ?RedistributeInput@@YGXPAUtagQMSG@@PAUtagQ@@PAUtagTHREADINFO@@@Z @ 0xC7FE4 (-RedistributeInput@@YGXPAUtagQMSG@@PAUtagQ@@PAUtagTHREADINFO@@@Z.c)
 *     ?_HandleDelegatedInputWorker@@YGPAUtagQMSG@@PAUtagTHREADINFO@@KPAU1@@Z @ 0x14DF5D (-_HandleDelegatedInputWorker@@YGPAUtagQMSG@@PAUtagTHREADINFO@@KPAU1@@Z.c)
 * Callees:
 *     ?RemoveNotify@@YGXPAUtagNOTIFY@@@Z @ 0xA3C88 (-RemoveNotify@@YGXPAUtagNOTIFY@@@Z.c)
 *     ??0?$CLockDomainExclusiveAllowRecursionInUserCrit@VDLT_WINEVENT@@@@QAE@XZ @ 0xD2D2C (--0-$CLockDomainExclusiveAllowRecursionInUserCrit@VDLT_WINEVENT@@@@QAE@XZ.c)
 *     _FreePointerMessageParams@4 @ 0x15A014 (_FreePointerMessageParams@4.c)
 */

void __stdcall CleanEventMessage(struct tagQMSG *a1)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  struct tagNOTIFY *v10; // [esp+0h] [ebp-14h]
  tagDomLock *v11; // [esp+8h] [ebp-Ch] BYREF
  char v12; // [esp+Ch] [ebp-8h]

  v1 = *((_DWORD *)a1 + 15);
  if ( v1 > 20 )
  {
    v7 = v1 - 22;
    if ( !v7 )
    {
      Win32FreePool(**((_DWORD **)a1 + 4));
      goto LABEL_14;
    }
    v8 = v7 - 4;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 != 1 )
          return;
LABEL_14:
        Win32FreePool(*((_DWORD *)a1 + 4));
        return;
      }
    }
    else if ( !*((_DWORD *)a1 + 5) )
    {
      return;
    }
LABEL_24:
    Win32FreePool(*((_DWORD *)a1 + 5));
    return;
  }
  if ( v1 == 20 )
  {
    FreePointerMessageParams(a1);
    return;
  }
  v2 = v1 - 3;
  if ( !v2 )
    goto LABEL_14;
  v3 = v2 - 1;
  if ( !v3 )
    goto LABEL_14;
  v4 = v3 - 5;
  if ( v4 )
  {
    v5 = v4 - 3;
    if ( v5 )
    {
      if ( v5 == 5 && *((_DWORD *)a1 + 4) == 1 )
        goto LABEL_24;
    }
    else
    {
      CLockDomainExclusiveAllowRecursionInUserCrit<DLT_WINEVENT>::CLockDomainExclusiveAllowRecursionInUserCrit<DLT_WINEVENT>(&v11);
      RemoveNotify(v10);
      if ( !v12 )
        tagDomLock::UnLockExclusive(v11);
    }
  }
  else
  {
    v6 = *((_DWORD *)a1 + 3);
    if ( v6 == 26 || v6 == 27 )
      UserDeleteAtom(*((unsigned __int16 *)a1 + 10));
  }
}
