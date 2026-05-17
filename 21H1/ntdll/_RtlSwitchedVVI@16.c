/*
 * XREFs of _RtlSwitchedVVI@16 @ 0x4B2B0060
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpVerGetConditionMask@12 @ 0x4B2AE80E (_RtlpVerGetConditionMask@12.c)
 *     _RtlpVerCompare@20 @ 0x4B2B0391 (_RtlpVerCompare@20.c)
 *     _SwitchedRtlGetVersion@4 @ 0x4B2B0445 (_SwitchedRtlGetVersion@4.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     __aullshr @ 0x4B2F6840 (__aullshr.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __stdcall RtlSwitchedVVI(int a1, int a2, signed __int64 a3)
{
  int result; // eax
  int v4; // edx
  char v5; // al
  int v6; // esi
  unsigned int v7; // eax
  char v8; // cl
  bool v9; // zf
  int v10; // esi
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // esi
  int v14; // eax
  int ConditionMask; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  unsigned int v19; // [esp+Ch] [ebp-12Ch]
  int v20; // [esp+10h] [ebp-128h]
  char v21; // [esp+17h] [ebp-121h] BYREF
  _DWORD v22[71]; // [esp+18h] [ebp-120h] BYREF

  v21 = 0;
  if ( !a2 )
    return -1073741811;
  memset(&v22[1], 0, 0x118u);
  v22[0] = 284;
  result = SwitchedRtlGetVersion(v22);
  if ( !result )
  {
    if ( (a2 & 0x40) != 0 )
    {
      v11 = *(unsigned __int16 *)(a1 + 280);
      if ( (_WORD)v11 )
      {
        v12 = 0;
        v20 = *(unsigned __int16 *)(a1 + 280);
        v19 = 0;
        do
        {
          v13 = 1 << v12;
          if ( (v11 & (1 << v12)) != 0 )
          {
            if ( a3 < 0 )
            {
              ConditionMask = RtlpVerGetConditionMask(0x40u, v4, a3, SHIDWORD(a3));
              v12 = v19;
            }
            else
            {
              ConditionMask = 0;
            }
            v14 = ConditionMask - 6;
            if ( v14 )
            {
              if ( v14 != 1 )
                return -1073741811;
              v11 = v20;
              if ( (v22[70] & (unsigned __int16)v13) != 0 )
                v21 = 1;
            }
            else
            {
              if ( (v22[70] & (unsigned __int16)v13) == 0 )
                return -1073741735;
              v11 = v20;
            }
          }
          v19 = ++v12;
        }
        while ( v12 < 0x10 );
        if ( RtlpVerGetConditionMask(0x40u, v4, a3, SHIDWORD(a3)) == 7 && !v21 )
          return -1073741735;
      }
    }
    v5 = 1;
    v6 = 1;
    v21 = 1;
    if ( (a2 & 2) != 0 )
    {
      if ( a3 < 0 )
      {
        v7 = 2;
        v8 = 0;
        do
        {
          ++v8;
          v7 >>= 1;
        }
        while ( v7 );
        v6 = ((unsigned __int64)a3 >> (3 * v8 - 3)) & 7;
      }
      else
      {
        v6 = (unsigned __int8)((unsigned __int64)a3 >> 4);
      }
      v9 = (unsigned __int8)RtlpVerCompare(v6, *(_DWORD *)(a1 + 4), v22[1], &v21, 0) == 0;
      v5 = v21;
      if ( v9 )
      {
        if ( !v21 )
          return -1073741735;
      }
      else if ( !v21 )
      {
LABEL_12:
        if ( (a2 & 4) == 0 )
        {
          v10 = a1;
          goto LABEL_14;
        }
        if ( a3 < 0 )
          v16 = RtlpVerGetConditionMask(4u, v4, a3, SHIDWORD(a3));
        else
          v16 = BYTE2(a3);
        v10 = a1;
        if ( (unsigned __int8)RtlpVerCompare(v16, *(_DWORD *)(a1 + 12), v22[3], &v21, 0) )
        {
LABEL_14:
          if ( (a2 & 8) != 0 )
          {
            v17 = a3 < 0 ? RtlpVerGetConditionMask(8u, v4, a3, SHIDWORD(a3)) : 0;
            if ( !(unsigned __int8)RtlpVerCompare(v17, *(_DWORD *)(v10 + 16), v22[4], &v21, 0) )
              return -1073741735;
          }
          if ( (a2 & 0x80u) != 0 )
          {
            v18 = a3 < 0 ? RtlpVerGetConditionMask(0x80u, v4, a3, SHIDWORD(a3)) : 0;
            if ( !(unsigned __int8)RtlpVerCompare(v18, *(unsigned __int8 *)(v10 + 282), BYTE2(v22[70]), &v21, 0) )
              return -1073741735;
          }
          return 0;
        }
        return -1073741735;
      }
    }
    if ( (a2 & 1) == 0 )
      goto LABEL_21;
    if ( v6 == 1 )
    {
      if ( a3 < 0 )
        v6 = RtlpVerGetConditionMask(1u, v4, a3, SHIDWORD(a3));
      else
        v6 = (unsigned __int8)((unsigned __int64)a3 >> 2);
    }
    v9 = (unsigned __int8)RtlpVerCompare(v6, *(_DWORD *)(a1 + 8), v22[2], &v21, 1) == 0;
    v5 = v21;
    if ( v9 )
    {
      if ( !v21 )
        return -1073741735;
    }
    else
    {
LABEL_21:
      if ( !v5 )
        goto LABEL_12;
    }
    if ( (a2 & 0x20) != 0 )
    {
      if ( v6 == 1 )
      {
        if ( a3 < 0 )
          v6 = RtlpVerGetConditionMask(0x20u, v4, a3, SHIDWORD(a3));
        else
          v6 = 0;
      }
      if ( !(unsigned __int8)RtlpVerCompare(v6, *(unsigned __int16 *)(a1 + 276), LOWORD(v22[69]), &v21, 0) )
      {
        if ( !v21 )
          return -1073741735;
        goto LABEL_24;
      }
      v5 = v21;
    }
    if ( !v5 )
      goto LABEL_12;
LABEL_24:
    if ( (a2 & 0x10) != 0 )
    {
      if ( v6 == 1 )
      {
        if ( a3 < 0 )
          v6 = RtlpVerGetConditionMask(0x10u, v4, a3, SHIDWORD(a3));
        else
          v6 = 0;
      }
      if ( !(unsigned __int8)RtlpVerCompare(v6, *(unsigned __int16 *)(a1 + 278), HIWORD(v22[69]), &v21, 1) )
        return -1073741735;
    }
    goto LABEL_12;
  }
  return result;
}
