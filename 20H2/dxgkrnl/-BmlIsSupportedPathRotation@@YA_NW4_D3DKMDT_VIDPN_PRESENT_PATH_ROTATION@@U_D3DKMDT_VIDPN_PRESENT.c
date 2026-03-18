/*
 * XREFs of ?BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C013A40C
 * Callers:
 *     BmlPinPathContentRotation @ 0x1C013A280 (BmlPinPathContentRotation.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C025A820 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000A51C (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000A564 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 */

unsigned __int8 __fastcall BmlIsSupportedPathRotation(
        unsigned int a1,
        struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT a2)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // r10d
  unsigned int v7; // eax
  int v8; // eax
  unsigned __int8 v9; // r8
  unsigned int v10; // r10d
  unsigned int v11; // r10d
  int v13; // eax
  int v14; // eax
  __int64 v15; // rax
  int v16; // eax
  int v17; // eax

  v2 = (int)a1;
  v3 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(a1) - 1;
  if ( v3 )
  {
    v13 = v3 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        if ( v14 != 1 )
          goto LABEL_13;
        v7 = v6 >> 3;
      }
      else
      {
        v7 = v6 >> 2;
      }
    }
    else
    {
      v7 = v6 >> 1;
    }
  }
  else
  {
    LOBYTE(v7) = v6;
  }
  if ( (v7 & 1) == 0 )
    return 0;
  v8 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(v2) - 1;
  if ( !v8 )
  {
    v11 = v10 >> 4;
    goto LABEL_6;
  }
  v16 = v8 - 1;
  if ( v16 )
  {
    v17 = v16 - 1;
    if ( v17 )
    {
      if ( v17 == 1 )
      {
        v11 = v10 >> 7;
        goto LABEL_6;
      }
LABEL_13:
      v15 = WdLogNewEntry5_WdAssertion(v5, v4);
      *(_QWORD *)(v15 + 24) = v2;
      WdLogEvent5_WdAssertion(v15);
      return 0;
    }
    v11 = v10 >> 6;
  }
  else
  {
    v11 = v10 >> 5;
  }
LABEL_6:
  if ( ((unsigned __int8)v11 & v9) == 0 )
    return 0;
  return v9;
}
