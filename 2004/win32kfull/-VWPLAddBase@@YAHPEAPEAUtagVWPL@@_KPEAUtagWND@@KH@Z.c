/*
 * XREFs of ?VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C0025CC8
 * Callers:
 *     SetHungFlag @ 0x1C003094C (SetHungFlag.c)
 *     _ChangeWindowMessageFilterEx @ 0x1C0037408 (_ChangeWindowMessageFilterEx.c)
 *     InternalInvalidate3 @ 0x1C0073974 (InternalInvalidate3.c)
 *     SetGestureConfigSettings @ 0x1C0121044 (SetGestureConfigSettings.c)
 *     _RegisterShellHookWindow @ 0x1C0126240 (_RegisterShellHookWindow.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C0026844 (WPP_RECORDER_SF_qq.c)
 */

__int64 __fastcall VWPLAddBase(struct tagVWPL **a1, __int64 a2, struct tagWND *a3, unsigned int a4)
{
  __int64 v4; // rbx
  __int64 v6; // rbp
  unsigned int *v8; // rax
  unsigned int v9; // ecx
  unsigned int v10; // r8d
  struct tagWND **v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  unsigned int v15; // eax
  unsigned __int64 v16; // rdx
  unsigned int v17; // r9d
  unsigned __int64 v18; // rdx

  v4 = a4;
  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      (_DWORD)a1,
      a2,
      11,
      11,
      (__int64)&WPP_7b6843d7872833607704d87654b4b262_Traceguids,
      (char)*a1,
      (char)a3);
  }
  v8 = (unsigned int *)*a1;
  if ( *a1 )
  {
    if ( !v8[3] )
    {
      v9 = *v8;
      v10 = 0;
      if ( *v8 )
      {
        v11 = (struct tagWND **)(v8 + 6);
        while ( a3 != *v11 )
        {
          ++v10;
          v11 += 2;
          if ( v10 >= v9 )
            goto LABEL_9;
        }
        return 0LL;
      }
LABEL_9:
      v12 = v8[1];
      if ( v9 < (unsigned int)v12 )
      {
LABEL_10:
        v13 = *v8;
        *(_QWORD *)&v8[4 * v13 + 6] = a3;
        *(_QWORD *)&v8[4 * v13 + 4] = v6;
        ++*v8;
        return 1LL;
      }
      v16 = 16 * v12;
      if ( v16 <= 0xFFFFFFFF )
      {
        v17 = v16 + 16;
        if ( (unsigned int)v16 < 0xFFFFFFF0 )
        {
          v18 = 16LL * v8[2];
          if ( v18 <= 0xFFFFFFFF && v17 + (unsigned int)v18 >= v17 )
          {
            v8 = (unsigned int *)UserReAllocPoolZInit(*a1, v17, v17 + (unsigned int)v18, 1819702101LL);
            if ( v8 )
            {
              v8[1] += v8[2];
              goto LABEL_15;
            }
          }
        }
      }
    }
  }
  else
  {
    v15 = 16 * v4;
    if ( (unsigned __int64)(16 * v4) <= 0xFFFFFFFF && v15 < 0xFFFFFFF0 )
    {
      v8 = (unsigned int *)Win32AllocPoolZInit(v15 + 16, 1819702101LL);
      if ( v8 )
      {
        *v8 = 0;
        v8[3] = 0;
        v8[1] = v4;
        v8[2] = v4;
LABEL_15:
        *a1 = (struct tagVWPL *)v8;
        goto LABEL_10;
      }
    }
  }
  return 0LL;
}
