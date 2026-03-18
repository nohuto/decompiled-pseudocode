/*
 * XREFs of EditionKeyEventLLHook @ 0x1C0045F20
 * Callers:
 *     <none>
 * Callees:
 *     PhkFirstValid @ 0x1C0045FAC (PhkFirstValid.c)
 *     IsUninterceptable @ 0x1C0054B04 (IsUninterceptable.c)
 *     IsSAS @ 0x1C0055240 (IsSAS.c)
 *     HasHidTable @ 0x1C0090220 (HasHidTable.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C009A2E0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     PtiKbdFromQ @ 0x1C00B04B8 (PtiKbdFromQ.c)
 *     ?IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z @ 0x1C01070C8 (-IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
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
  unsigned __int64 v22; // r8
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
      v18 = *(_QWORD *)(v17 + 416);
      if ( v18 == *(_QWORD *)(*(_QWORD *)(Valid + 16) + 416LL)
        && (PVOID)grpdeskRitInput != grpdeskLogon
        && (unsigned int)HasHidTable(v17)
        && (*(_DWORD *)(*(_QWORD *)(v18 + 832) + 100LL) & 0x10) != 0 )
      {
        return 0LL;
      }
    }
  }
  v19 = *(_QWORD *)(a1 + 1352);
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
    *(_DWORD *)(a1 + 1352) = -1;
    *(_DWORD *)(a1 + 1356) = -1;
  }
  else
  {
    *(_QWORD *)(a1 + 1352) = *a12;
  }
  v21 = *(_QWORD *)(a1 + 1368);
  v22 = v26;
  *(_QWORD *)(a1 + 1368) = v28;
  if ( !xxxCallHook2((struct tagHOOK *)Valid, 0, v22, (__int64)v28, &v27, 0)
    || (LOBYTE(v23) = a5, *(_QWORD *)(a1 + 1352) = v19, (unsigned int)IsSAS(v23, &v26))
    || IsUninterceptable(v24, a5) )
  {
    *(_QWORD *)(a1 + 1352) = v19;
    *(_QWORD *)(a1 + 1368) = v21;
    return !(unsigned int)IsGpqForegroundAccessibleExplicit(a8, a1, *a12, a11);
  }
  *(_QWORD *)(a1 + 1368) = v21;
  return 1LL;
}
