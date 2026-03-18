/*
 * XREFs of EditionKeyEventLLHook @ 0x1C0074DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C0055FC0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     PhkFirstValid @ 0x1C0074E6C (PhkFirstValid.c)
 *     PtiKbdFromQ @ 0x1C00BEA34 (PtiKbdFromQ.c)
 *     HasHidTable @ 0x1C00D5400 (HasHidTable.c)
 *     IsUninterceptable @ 0x1C01020E0 (IsUninterceptable.c)
 *     IsSAS @ 0x1C0102810 (IsSAS.c)
 *     ?IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z @ 0x1C0107278 (-IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall EditionKeyEventLLHook(
        __int64 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned __int8 a5,
        unsigned __int16 a6,
        int a7,
        unsigned int a8,
        int a9,
        __int64 a10,
        unsigned int a11,
        _QWORD *a12)
{
  __int64 Valid; // r14
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rbx
  unsigned __int16 v20; // ax
  __int64 v21; // rsi
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned int v26; // [rsp+34h] [rbp-2Ch] BYREF
  int v27; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v28[4]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v29; // [rsp+50h] [rbp-10h]

  v26 = a4;
  Valid = PhkFirstValid(a1, 13LL);
  if ( !Valid )
    return 0LL;
  v27 = 0;
  if ( gpqForeground )
  {
    v17 = PtiKbdFromQ(gpqForeground);
    if ( v17 )
    {
      v18 = *(_QWORD *)(v17 + 424);
      if ( v18 == *(_QWORD *)(*(_QWORD *)(Valid + 16) + 424LL)
        && (PVOID)grpdeskRitInput != grpdeskLogon
        && (unsigned int)HasHidTable(v17)
        && (*(_DWORD *)(*(_QWORD *)(v18 + 832) + 100LL) & 0x10) != 0 )
      {
        return 0LL;
      }
    }
  }
  v19 = *(_QWORD *)(a1 + 1360);
  v28[1] = a6;
  v20 = a2 | 0x2000;
  v28[0] = a5;
  if ( a3 == a4 )
    v20 = a2;
  v28[3] = a9;
  v29 = a10;
  v28[2] = (a8 != 0 ? 0x10 : 0) | (a7 != 0 ? 0x80 : 0) | HIBYTE(v20);
  if ( !a8 || a11 )
  {
    *(_DWORD *)(a1 + 1360) = -1;
    *(_DWORD *)(a1 + 1364) = -1;
  }
  else
  {
    *(_QWORD *)(a1 + 1360) = *a12;
  }
  v21 = *(_QWORD *)(a1 + 1376);
  v22 = v26;
  *(_QWORD *)(a1 + 1376) = v28;
  if ( !xxxCallHook2((struct tagHOOK *)Valid, 0, v22, (__int64)v28, &v27, 0)
    || (LOBYTE(v23) = a5, *(_QWORD *)(a1 + 1360) = v19, (unsigned int)IsSAS(v23, &v26))
    || IsUninterceptable(v24, a5) )
  {
    *(_QWORD *)(a1 + 1360) = v19;
    *(_QWORD *)(a1 + 1376) = v21;
    return !(unsigned int)IsGpqForegroundAccessibleExplicit(a8, a1, *a12, a11);
  }
  *(_QWORD *)(a1 + 1376) = v21;
  return 1LL;
}
