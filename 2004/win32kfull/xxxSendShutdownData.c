/*
 * XREFs of xxxSendShutdownData @ 0x1C0234298
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00B3CF8 (xxxProcessEventMessage.c)
 * Callees:
 *     _GetWindowIcon @ 0x1C0008284 (_GetWindowIcon.c)
 *     _GetProp @ 0x1C0022FD8 (_GetProp.c)
 *     SfnCOPYDATA @ 0x1C00436E0 (SfnCOPYDATA.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00AE624 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

__int64 __fastcall xxxSendShutdownData(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  unsigned int v7; // ecx
  unsigned __int64 v8; // rdx
  char *Prop; // rax
  __int64 v11; // [rsp+48h] [rbp-C0h] BYREF
  int v12; // [rsp+50h] [rbp-B8h]
  int v13; // [rsp+54h] [rbp-B4h]
  _QWORD *v14; // [rsp+58h] [rbp-B0h]
  _QWORD v15[134]; // [rsp+68h] [rbp-A0h] BYREF

  memset(v15, 0, 0x428uLL);
  v13 = 0;
  if ( gspwndBSDR )
  {
    if ( a1 == 0xFFFF )
    {
LABEL_19:
      v14 = v15;
      v15[0] = a1;
      v11 = 0LL;
      v12 = 1064;
      SfnCOPYDATA(
        (__int64 *)gspwndBSDR,
        0x329u,
        a2,
        (__int64)&v11,
        *(_QWORD *)(*((_QWORD *)gspwndBSDR + 5) + 120LL),
        *(_QWORD *)(gpsi + 752LL));
      return 0LL;
    }
    v4 = (_QWORD *)ValidateHwndEx(a1, 0LL, 0LL);
    if ( !a2 )
    {
      if ( v4 )
        *(_DWORD *)(v4[5] + 232LL) &= ~0x4000u;
      goto LABEL_19;
    }
    v5 = (__int64)v4;
    if ( v4 )
    {
      v6 = v4[5];
      if ( *v4 == ghwndBlocking )
      {
        a2 = 2LL;
LABEL_9:
        *(_DWORD *)(v6 + 232) |= 0x4000u;
        v15[1] = GetWindowIcon((__int64)v4, 1LL);
        v7 = *(_DWORD *)(*(_QWORD *)(v5 + 40) + 184LL);
        if ( v7 )
        {
          v8 = ((unsigned __int64)v7 >> 1) + 1;
          if ( v8 > 0x105 )
            v8 = 261LL;
          RtlStringCchCopyW((char *)&v15[67] + 2, v8, *(char **)(v5 + 184));
        }
        else
        {
          WORD1(v15[67]) = 0;
        }
        Prop = (char *)GetProp(v5, (unsigned __int16)gatomShutdownBlockingReason, 1LL);
        if ( Prop )
          RtlStringCchCopyW((char *)&v15[2], 261LL, Prop);
        else
          LOWORD(v15[2]) = 0;
        goto LABEL_19;
      }
      if ( *(_DWORD *)(v6 + 236) == 1 )
        goto LABEL_9;
    }
  }
  return 0LL;
}
