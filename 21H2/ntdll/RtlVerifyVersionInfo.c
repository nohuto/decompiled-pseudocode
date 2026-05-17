/*
 * XREFs of RtlVerifyVersionInfo @ 0x18007B110
 * Callers:
 *     <none>
 * Callees:
 *     RtlpVerCompare @ 0x18003CF80 (RtlpVerCompare.c)
 *     RtlGetVersion @ 0x18003E4E0 (RtlGetVersion.c)
 *     RtlpVerGetConditionMask @ 0x18007B338 (RtlpVerGetConditionMask.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     memset @ 0x1800A4780 (memset.c)
 */

__int64 __fastcall RtlVerifyVersionInfo(__int64 a1, int a2, __int64 a3)
{
  char v4; // si
  char v6; // di
  __int64 result; // rax
  bool v8; // al
  int v9; // edi
  int v10; // eax
  bool v11; // zf
  unsigned int v12; // r10d
  int v13; // r11d
  int v14; // r9d
  int ConditionMask; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  bool v19[16]; // [rsp+30h] [rbp-D0h] BYREF
  int v20[72]; // [rsp+40h] [rbp-C0h] BYREF

  v4 = a2;
  v6 = 0;
  if ( !a2 )
    return 3221225485LL;
  memset(&v20[1], 0, 0x118uLL);
  v20[0] = 284;
  result = RtlGetVersion(v20);
  if ( !(_DWORD)result )
  {
    if ( (v4 & 0x40) != 0 && *(_WORD *)(a1 + 280) )
    {
      v12 = 0;
      v13 = *(unsigned __int16 *)(a1 + 280);
      do
      {
        v14 = 1 << v12;
        if ( (v13 & (1 << v12)) != 0 )
        {
          if ( a3 >= 0 )
            ConditionMask = 0;
          else
            ConditionMask = RtlpVerGetConditionMask(a3, 64LL);
          v16 = ConditionMask - 6;
          if ( v16 )
          {
            if ( v16 != 1 )
              return 3221225485LL;
            if ( (v20[70] & (unsigned __int16)v14) != 0 )
              v6 = 1;
          }
          else if ( (v20[70] & (unsigned __int16)v14) == 0 )
          {
            return 3221225561LL;
          }
        }
        ++v12;
      }
      while ( v12 < 0x10 );
      if ( (unsigned int)RtlpVerGetConditionMask(a3, 64LL) == 7 && !v6 )
        return 3221225561LL;
    }
    v8 = 1;
    v19[0] = 1;
    v9 = 1;
    if ( (v4 & 2) != 0 )
    {
      if ( a3 >= 0 )
        v9 = (unsigned __int8)((unsigned __int64)a3 >> 4);
      else
        v9 = RtlpVerGetConditionMask(a3, 2LL);
      v11 = !RtlpVerCompare(v9, *(_DWORD *)(a1 + 4), v20[1], v19, 0);
      v8 = v19[0];
      if ( v11 )
      {
        if ( !v19[0] )
          return 3221225561LL;
      }
      else if ( !v19[0] )
      {
        goto LABEL_10;
      }
    }
    if ( (v4 & 1) == 0 )
      goto LABEL_6;
    if ( v9 == 1 )
    {
      if ( a3 < 0 )
        v9 = RtlpVerGetConditionMask(a3, 1LL);
      else
        v9 = (unsigned __int8)((unsigned __int64)a3 >> 2);
    }
    v11 = !RtlpVerCompare(v9, *(_DWORD *)(a1 + 8), v20[2], v19, 1);
    v8 = v19[0];
    if ( v11 )
    {
      if ( !v19[0] )
        return 3221225561LL;
    }
    else
    {
LABEL_6:
      if ( !v8 )
        goto LABEL_10;
    }
    if ( (v4 & 0x20) != 0 )
    {
      if ( v9 == 1 )
      {
        if ( a3 < 0 )
          v9 = RtlpVerGetConditionMask(a3, 32LL);
        else
          v9 = 0;
      }
      if ( !RtlpVerCompare(v9, *(unsigned __int16 *)(a1 + 276), LOWORD(v20[69]), v19, 0) )
      {
        if ( !v19[0] )
          return 3221225561LL;
        goto LABEL_9;
      }
      v8 = v19[0];
    }
    if ( v8 )
    {
LABEL_9:
      if ( (v4 & 0x10) != 0 )
      {
        if ( v9 == 1 )
        {
          if ( a3 < 0 )
            v9 = RtlpVerGetConditionMask(a3, 16LL);
          else
            v9 = 0;
        }
        if ( !RtlpVerCompare(v9, *(unsigned __int16 *)(a1 + 278), HIWORD(v20[69]), v19, 1) )
          return 3221225561LL;
      }
    }
LABEL_10:
    if ( (v4 & 4) != 0 )
    {
      v17 = a3 < 0 ? RtlpVerGetConditionMask(a3, 4LL) : BYTE2(a3);
      if ( !RtlpVerCompare(v17, *(_DWORD *)(a1 + 12), v20[3], v19, 0) )
        return 3221225561LL;
    }
    if ( (v4 & 8) != 0 )
    {
      v18 = a3 < 0 ? RtlpVerGetConditionMask(a3, 8LL) : 0;
      if ( !RtlpVerCompare(v18, *(_DWORD *)(a1 + 16), v20[4], v19, 0) )
        return 3221225561LL;
    }
    if ( v4 < 0 )
    {
      v10 = a3 >= 0 ? 0 : RtlpVerGetConditionMask(a3, 128LL);
      if ( !RtlpVerCompare(v10, *(unsigned __int8 *)(a1 + 282), BYTE2(v20[70]), v19, 0) )
        return 3221225561LL;
    }
    return 0LL;
  }
  return result;
}
