/*
 * XREFs of _FindQMsg@24 @ 0x6A480
 * Callers:
 *     ?xxxReadPostMessage@@YGHPAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIPAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x69F40 (-xxxReadPostMessage@@YGHPAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIPAU_QMSG_POSTCHAR_FLAGS@@H@Z.c)
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 * Callees:
 *     @HMValidateHandleNoRip@8 @ 0x16F4A (@HMValidateHandleNoRip@8.c)
 *     _WPP_RECORDER_SF_qqq@32 @ 0x350A8 (_WPP_RECORDER_SF_qqq@32.c)
 *     _DelQEntry@12 @ 0x6D770 (_DelQEntry@12.c)
 *     ?CheckRemoveHotkeyBit@@YGXPAUtagTHREADINFO@@PAUtagMLIST@@@Z @ 0xC52E8 (-CheckRemoveHotkeyBit@@YGXPAUtagTHREADINFO@@PAUtagMLIST@@@Z.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     _FreeDdeXact@4 @ 0x17FF12 (_FreeDdeXact@4.c)
 */

_DWORD *__fastcall FindQMsg(int a1, _DWORD *a2, _DWORD *a3, unsigned int a4, unsigned int a5, int a6)
{
  int v6; // ecx
  _DWORD *v7; // edi
  unsigned int v8; // ebx
  _DWORD *v9; // esi
  _DWORD *v10; // ecx
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  unsigned int v17; // ecx
  struct tagTHREADINFO *v19; // [esp+0h] [ebp-1Ch]
  struct tagMLIST *v20; // [esp+4h] [ebp-18h]
  PKTHREAD CurrentThread; // [esp+Ch] [ebp-10h]
  int v22; // [esp+Ch] [ebp-10h]
  _DWORD *v25; // [esp+18h] [ebp-4h]

  v6 = 0;
  v7 = (_DWORD *)*a2;
  v25 = 0;
  if ( !*a2 )
    return (_DWORD *)v6;
  while ( 1 )
  {
    v8 = v7[2];
    v9 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( !IsThreadCrossSessionAttached() )
      PsGetThreadWin32Thread(CurrentThread);
    if ( (unsigned int)(unsigned __int16)v8 >= *(_DWORD *)(_gpsi + 4)
      || (v22 = _gSharedInfo[1] + (unsigned __int16)v8 * _gSharedInfo[2],
          v10 = (_DWORD *)HMPkheFromPhe(v22),
          v11 = HIWORD(v8),
          (_WORD)v11 != *(_WORD *)(v22 + 14))
      && (_WORD)v11
      && (_WORD)v11 != 0xFFFF
      || (*(_BYTE *)(v22 + 13) & 1) != 0
      || *(_BYTE *)(v22 + 12) != 1
      || (v9 = (_DWORD *)*v10) == 0 )
    {
      if ( v7[2] )
      {
        if ( v7[3] == 786 )
          CheckRemoveHotkeyBit(v19, v20);
        v12 = *(_DWORD *)(a1 + 236);
        if ( *(_DWORD **)(v12 + 40) == v7 && *(_DWORD *)(v12 + 36) == a1 )
        {
          EtwTraceInputQueueUnLocked(*(_DWORD *)(a1 + 236));
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v13) = 4;
            WPP_RECORDER_SF_qqq(
              *(_DWORD *)(a1 + 236),
              v13,
              0x12u,
              21,
              (int)&WPP_fae14e43e2df34d42d304f3db5b27b93_Traceguids,
              *(_DWORD *)(a1 + 236),
              _gptiCurrent,
              *(_DWORD *)(*(_DWORD *)(a1 + 236) + 36));
          }
          *(_DWORD *)(*(_DWORD *)(a1 + 236) + 36) = 0;
        }
        goto LABEL_28;
      }
    }
    if ( !a6 )
      break;
    v14 = a3 ? *a3 : 0;
    if ( v14 != v7[2] )
      break;
    if ( v7[3] != -2147482652 )
      break;
    v15 = HMValidateHandleNoRip(v7[5], 11);
    if ( !v15 || (*(_DWORD *)(v15 + 32) & 0x200) == 0 )
      break;
    FreeDdeXact(v15);
LABEL_28:
    DelQEntry(1);
    v7 = (_DWORD *)*a2;
LABEL_55:
    if ( !v7 )
      return v25;
  }
  if ( a3 && a3 != v9 && (a3 != (_DWORD *)1 || v9) )
  {
    if ( v9 )
    {
      while ( (*(_BYTE *)(v9[5] + 23) & 0xC0) == 0x40 )
      {
        v9 = (_DWORD *)v9[14];
        if ( a3 == v9 )
        {
          v16 = 1;
          goto LABEL_38;
        }
        if ( !v9 )
          break;
      }
    }
    v16 = 0;
LABEL_38:
    if ( !v16 )
      goto LABEL_54;
  }
  v17 = v7[3];
  if ( v17 + 2147482655 <= 7 )
    v17 &= ~0x80000000;
  if ( a4 )
  {
    if ( a4 <= a5 )
    {
      if ( v17 >= a4 )
        goto LABEL_50;
    }
    else if ( v17 < a5 || v17 > a4 )
    {
      goto LABEL_51;
    }
LABEL_54:
    v7 = (_DWORD *)*v7;
    goto LABEL_55;
  }
  if ( a5 == -1 )
    goto LABEL_51;
LABEL_50:
  if ( v17 > a5 )
    goto LABEL_54;
LABEL_51:
  if ( a6 )
  {
    if ( !v25 )
      v25 = v7;
    goto LABEL_54;
  }
  return v7;
}
