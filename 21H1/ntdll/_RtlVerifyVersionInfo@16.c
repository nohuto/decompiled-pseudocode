/*
 * XREFs of _RtlVerifyVersionInfo@16 @ 0x4B363DF0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpVerGetConditionMask@12 @ 0x4B2AE80E (_RtlpVerGetConditionMask@12.c)
 *     _RtlGetVersion@4 @ 0x4B2AFEF0 (_RtlGetVersion@4.c)
 *     _RtlpVerCompare@20 @ 0x4B2B0391 (_RtlpVerCompare@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __stdcall RtlVerifyVersionInfo(int a1, int a2, signed __int64 a3)
{
  int result; // eax
  int v4; // edx
  int v5; // eax
  unsigned int v6; // ecx
  int v7; // ebx
  int ConditionMask; // eax
  int v9; // eax
  char v10; // bl
  char v11; // al
  int v12; // ebx
  bool v13; // zf
  int v14; // eax
  int v15; // ebx
  int v16; // eax
  int v17; // eax
  unsigned int v18; // [esp+Ch] [ebp-12Ch]
  int v19; // [esp+10h] [ebp-128h]
  char v20; // [esp+17h] [ebp-121h] BYREF
  _DWORD v21[71]; // [esp+18h] [ebp-120h] BYREF

  v20 = 0;
  if ( !a2 )
    return -1073741811;
  memset(&v21[1], 0, 0x118u);
  v21[0] = 284;
  result = RtlGetVersion((int)v21);
  if ( result )
    return result;
  if ( (a2 & 0x40) != 0 )
  {
    v5 = *(unsigned __int16 *)(a1 + 280);
    if ( (_WORD)v5 )
    {
      v6 = 0;
      v19 = *(unsigned __int16 *)(a1 + 280);
      v18 = 0;
      while ( 1 )
      {
        v7 = 1 << v6;
        if ( (v5 & (1 << v6)) == 0 )
          goto LABEL_16;
        if ( a3 < 0 )
        {
          ConditionMask = RtlpVerGetConditionMask(0x40u, v4, a3, SHIDWORD(a3));
          v6 = v18;
        }
        else
        {
          ConditionMask = 0;
        }
        v9 = ConditionMask - 6;
        if ( !v9 )
          break;
        if ( v9 != 1 )
          return -1073741811;
        v5 = v19;
        if ( (v21[70] & (unsigned __int16)v7) == 0 )
          goto LABEL_16;
        v10 = 1;
        v20 = 1;
LABEL_17:
        v18 = ++v6;
        if ( v6 >= 0x10 )
        {
          if ( RtlpVerGetConditionMask(0x40u, v4, a3, SHIDWORD(a3)) != 7 || v10 )
            goto LABEL_20;
          return -1073741735;
        }
      }
      if ( (v21[70] & (unsigned __int16)v7) == 0 )
        return -1073741735;
      v5 = v19;
LABEL_16:
      v10 = v20;
      goto LABEL_17;
    }
  }
LABEL_20:
  v11 = 1;
  v12 = 1;
  v20 = 1;
  if ( (a2 & 2) != 0 )
  {
    if ( a3 < 0 )
      v12 = RtlpVerGetConditionMask(2u, v4, a3, SHIDWORD(a3));
    else
      v12 = (unsigned __int8)((unsigned __int64)a3 >> 4);
    v13 = !RtlpVerCompare(v12, *(_DWORD *)(a1 + 4), v21[1], (bool *)&v20, 0);
    v11 = v20;
    if ( v13 )
    {
      if ( !v20 )
        return -1073741735;
    }
    else if ( !v20 )
    {
      goto LABEL_53;
    }
  }
  if ( (a2 & 1) == 0 )
    goto LABEL_36;
  if ( v12 == 1 )
  {
    if ( a3 < 0 )
      v12 = RtlpVerGetConditionMask(1u, v4, a3, SHIDWORD(a3));
    else
      v12 = (unsigned __int8)((unsigned __int64)a3 >> 2);
  }
  v13 = !RtlpVerCompare(v12, *(_DWORD *)(a1 + 8), v21[2], (bool *)&v20, 1);
  v11 = v20;
  if ( v13 )
  {
    if ( !v20 )
      return -1073741735;
  }
  else
  {
LABEL_36:
    if ( !v11 )
      goto LABEL_53;
  }
  if ( (a2 & 0x20) == 0 )
  {
LABEL_46:
    if ( !v11 )
      goto LABEL_53;
    goto LABEL_47;
  }
  if ( v12 == 1 )
  {
    if ( a3 < 0 )
      v12 = RtlpVerGetConditionMask(0x20u, v4, a3, SHIDWORD(a3));
    else
      v12 = 0;
  }
  if ( RtlpVerCompare(v12, *(unsigned __int16 *)(a1 + 276), LOWORD(v21[69]), (bool *)&v20, 0) )
  {
    v11 = v20;
    goto LABEL_46;
  }
  if ( !v20 )
    return -1073741735;
LABEL_47:
  if ( (a2 & 0x10) != 0 )
  {
    if ( v12 == 1 )
    {
      if ( a3 < 0 )
        v12 = RtlpVerGetConditionMask(0x10u, v4, a3, SHIDWORD(a3));
      else
        v12 = 0;
    }
    if ( !RtlpVerCompare(v12, *(unsigned __int16 *)(a1 + 278), HIWORD(v21[69]), (bool *)&v20, 1) )
      return -1073741735;
  }
LABEL_53:
  if ( (a2 & 4) != 0 )
  {
    if ( a3 < 0 )
      v14 = RtlpVerGetConditionMask(4u, v4, a3, SHIDWORD(a3));
    else
      v14 = BYTE2(a3);
    v15 = a1;
    if ( !RtlpVerCompare(v14, *(_DWORD *)(a1 + 12), v21[3], (bool *)&v20, 0) )
      return -1073741735;
  }
  else
  {
    v15 = a1;
  }
  if ( ((a2 & 8) == 0
     || (a3 < 0 ? (v16 = RtlpVerGetConditionMask(8u, v4, a3, SHIDWORD(a3))) : (v16 = 0),
         RtlpVerCompare(v16, *(_DWORD *)(v15 + 16), v21[4], (bool *)&v20, 0)))
    && ((a2 & 0x80u) == 0
     || (a3 < 0 ? (v17 = RtlpVerGetConditionMask(0x80u, v4, a3, SHIDWORD(a3))) : (v17 = 0),
         RtlpVerCompare(v17, *(unsigned __int8 *)(v15 + 282), BYTE2(v21[70]), (bool *)&v20, 0))) )
  {
    return 0;
  }
  else
  {
    return -1073741735;
  }
}
