/*
 * XREFs of ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C0061074
 * Callers:
 *     xxxDrawMenuItem @ 0x1C0060D14 (xxxDrawMenuItem.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C01214B4 (xxxDrawMenuBarUnderlines.c)
 *     xxxRealDrawMenuItem @ 0x1C024E90C (xxxRealDrawMenuItem.c)
 * Callees:
 *     ?MNInitDrawItemStruct@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagDRAWITEMSTRUCT@@@Z @ 0x1C0060EC0 (-MNInitDrawItemStruct@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagD.c)
 *     MNInitUAHMenuItem @ 0x1C0061230 (MNInitUAHMenuItem.c)
 *     MNInitUAHMenu @ 0x1C0061288 (MNInitUAHMenu.c)
 *     MNGetpItemIndex @ 0x1C00636B8 (MNGetpItemIndex.c)
 *     xxxSendMessage @ 0x1C009BB64 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     MNIsUAHMenu @ 0x1C00AF118 (MNIsUAHMenu.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

__int64 **__fastcall xxxSendMenuDrawItemMessage(
        __int64 a1,
        int a2,
        __int64 ***a3,
        __int64 *a4,
        int a5,
        int a6,
        __int64 a7)
{
  __int64 v7; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *v15; // rcx
  int v16; // r14d
  int v17; // r12d
  __int64 **result; // rax
  __int64 *v19; // rcx
  __int64 *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 *v30; // rcx
  int v31; // r9d
  __int128 v32; // [rsp+40h] [rbp-B1h] BYREF
  __int64 v33; // [rsp+50h] [rbp-A1h]
  _DWORD v34[36]; // [rsp+60h] [rbp-91h] BYREF

  v7 = a7;
  memset(v34, 0, sizeof(v34));
  v15 = (__int64 *)a3[2];
  v33 = 0LL;
  v32 = 0LL;
  v16 = 1;
  if ( !v15 )
    v15 = **a3;
  v17 = MNIsUAHMenu(v15, v12, v13, v14);
  result = (__int64 **)MNInitDrawItemStruct(a1, a2, a3, a4, a5, a6, (__int64)v34);
  if ( (**a3)[10] && ((*(_DWORD *)*a4 & 0x100) != 0 || *(_QWORD *)(*a4 + 96) == -1LL) )
  {
    v25 = (**a3)[10];
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    *(_QWORD *)&v32 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v32;
    *((_QWORD *)&v32 + 1) = v25;
    HMLockObject(v25);
    xxxSendMessage((**a3)[10], 43LL, 0LL, v34);
    ThreadUnlock1(v28, v27, v29);
    v30 = (__int64 *)a3[2];
    if ( !v30 )
      v30 = **a3;
    result = (__int64 **)MNGetpItemIndex(v30, a4);
    if ( (_DWORD)result == -1 )
      v16 = v31;
  }
  if ( v17 )
  {
    if ( a7 || (result = *a3, (v7 = (**a3)[10]) != 0) )
    {
      if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000020) != 0x80000000 )
        v34[4] &= ~0x100u;
      v19 = (__int64 *)a3[2];
      if ( !v19 )
        v19 = **a3;
      MNInitUAHMenu(v19, a1, &v34[16]);
      if ( v16 )
      {
        v20 = (__int64 *)a3[2];
        if ( !v20 )
          v20 = **a3;
        MNInitUAHMenuItem(v20, a4, &v34[22]);
      }
      v21 = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)&v32 = *(_QWORD *)(v21 + 408);
      *(_QWORD *)(v21 + 408) = &v32;
      *((_QWORD *)&v32 + 1) = v7;
      HMLockObject(v7);
      xxxSendMessage(v7, 146LL, 0LL, v34);
      return (__int64 **)ThreadUnlock1(v23, v22, v24);
    }
  }
  return result;
}
