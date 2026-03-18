/*
 * XREFs of ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C0245424
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00B4500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     CalcSBStuff @ 0x1C0027538 (CalcSBStuff.c)
 *     GetWndSBDisableFlags @ 0x1C014A7FC (GetWndSBDisableFlags.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01D4E90 (safe_cast_fnid_to_PSBWND.c)
 */

__int64 __fastcall HitTestScrollBar(struct tagWND *a1, unsigned int a2, struct tagPOINT a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // edi
  LONG *v9; // rsi
  int v10; // r14d
  LONG y; // r15d
  LONG x; // ebx
  __int64 v13; // rcx
  LONG *v14; // rcx
  LONG *v15; // rax
  LONG *v16; // rdx
  LONG *v17; // rsi
  char v20[36]; // [rsp+30h] [rbp-50h] BYREF
  char v21; // [rsp+54h] [rbp-2Ch] BYREF
  char v22; // [rsp+58h] [rbp-28h] BYREF
  char v23; // [rsp+60h] [rbp-20h] BYREF
  char v24; // [rsp+64h] [rbp-1Ch] BYREF

  v5 = safe_cast_fnid_to_PSBWND((__int64)a1);
  v8 = 0;
  v9 = (LONG *)v5;
  if ( v5 )
  {
    v10 = *(_DWORD *)(v5 + 12);
    y = a3.y;
    x = a3.x;
  }
  else
  {
    v13 = *(_QWORD *)(v6 + 40);
    if ( (*(_BYTE *)(v13 + 26) & 0x40) == 0 || a2 )
      x = a3.x - *(_DWORD *)(v13 + 88);
    else
      x = *(_DWORD *)(v13 + 96) - a3.x;
    y = a3.y - *(_DWORD *)(v13 + 92);
    LOBYTE(v10) = GetWndSBDisableFlags((__int64)a1, a2, v7);
  }
  if ( (v10 & 3) == 3 )
    return 4294967294LL;
  if ( v9 )
  {
    v14 = v9 + 16;
    v15 = v9 + 17;
    v16 = v9 + 14;
    v17 = v9 + 13;
  }
  else
  {
    CalcSBStuff((__int64)a1, (__int64)v20, a2);
    v14 = (LONG *)&v23;
    v15 = (LONG *)&v24;
    v16 = (LONG *)&v22;
    v17 = (LONG *)&v21;
  }
  if ( a2 )
    x = y;
  if ( x < *v17 )
  {
    if ( (v10 & 1) == 0 )
      return 60LL;
    return 4294967294LL;
  }
  if ( x >= *v16 )
  {
    if ( (v10 & 2) == 0 )
      return 61LL;
    return 4294967294LL;
  }
  if ( x < *v15 )
    return 62LL;
  LOBYTE(v8) = x < *v14;
  return (unsigned int)(v8 + 63);
}
