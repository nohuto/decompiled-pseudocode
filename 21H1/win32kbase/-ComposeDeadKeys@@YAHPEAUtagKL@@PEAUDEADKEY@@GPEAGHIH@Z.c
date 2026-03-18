/*
 * XREFs of ?ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z @ 0x1C01B4460
 * Callers:
 *     xxxInternalToUnicode @ 0x1C0059060 (xxxInternalToUnicode.c)
 * Callees:
 *     WPP_RECORDER_SF_hD @ 0x1C00594AC (WPP_RECORDER_SF_hD.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C014157C (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_hDhD @ 0x1C01B4678 (WPP_RECORDER_SF_hDhD.c)
 */

__int64 __fastcall ComposeDeadKeys(
        struct tagKL *a1,
        struct DEADKEY *a2,
        unsigned __int16 a3,
        unsigned __int16 *a4,
        int a5,
        char a6,
        int a7)
{
  struct DEADKEY *v8; // rdi
  int v10; // r14d
  unsigned int v12; // esi
  int v13; // ecx
  int v14; // r9d
  int v15; // [rsp+20h] [rbp-58h]

  v8 = a2;
  v10 = a3;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_hDhD((_DWORD)a1, (_DWORD)a2, a3, 10);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Dd(
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      4u,
      0x10u,
      0xBu,
      (__int64)&WPP_452ce174e4dd36ee8a008521dfdf54c5_Traceguids);
  if ( a5 >= 1 )
  {
    v12 = v10 | (*((unsigned __int16 *)a1 + 37) << 16);
    if ( v8 )
    {
      if ( !a7 && (a6 & 4) == 0 )
        *((_WORD *)a1 + 37) = 0;
      while ( *(_DWORD *)v8 )
      {
        if ( *(_DWORD *)v8 == v12 )
        {
          if ( (*((_BYTE *)v8 + 6) & 1) != 0 )
          {
            if ( !a7 && (a6 & 4) == 0 )
              *((_WORD *)a1 + 37) = *((_WORD *)v8 + 2);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_hD(0, (_DWORD)a2, a3, 13, v15, *((_WORD *)a1 + 37), *((_WORD *)a1 + 37));
            return 0xFFFFFFFFLL;
          }
          v13 = *((unsigned __int16 *)v8 + 2);
          *a4 = v13;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return 1LL;
          v14 = 14;
          goto LABEL_32;
        }
        v8 = (struct DEADKEY *)((char *)v8 + 8);
      }
    }
    *a4 = HIWORD(v12);
    if ( a5 <= 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_hD(HIWORD(v12), (_DWORD)a2, a3, 16, v15, SBYTE2(v12), SBYTE2(v12));
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v13 = (unsigned __int16)v12;
          v14 = 17;
LABEL_32:
          WPP_RECORDER_SF_hD(v13, (_DWORD)a2, a3, v14, v15, v13, v13);
        }
      }
      return 1LL;
    }
    else
    {
      a4[1] = v12;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_hDhD(*a4, (unsigned __int16)v12, a3, 15);
      return 2LL;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        (_DWORD)a2,
        16,
        12,
        (__int64)&WPP_452ce174e4dd36ee8a008521dfdf54c5_Traceguids);
    }
    return 0LL;
  }
}
