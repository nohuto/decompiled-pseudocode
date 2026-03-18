/*
 * XREFs of NtGdiExtEscape @ 0x1C008D480
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C00673AC (PALLOCMEM2.c)
 *     bUMPD @ 0x1C008BEA4 (bUMPD.c)
 *     GreExtEscape @ 0x1C008BEF0 (GreExtEscape.c)
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C008D09C (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     UmfdDispatchEscape @ 0x1C008D6E0 (UmfdDispatchEscape.c)
 *     UmfdDispatchWinLogonEscape @ 0x1C00E9F98 (UmfdDispatchWinLogonEscape.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     GreScalingDispatchEscape @ 0x1C029E444 (GreScalingDispatchEscape.c)
 *     GreNamedEscape @ 0x1C02A6814 (GreNamedEscape.c)
 */

__int64 __fastcall NtGdiExtEscape(HDC a1, char *a2, int a3, int a4, int a5, char *Src, int a7, char *a8)
{
  __int64 v8; // r14
  char *v10; // rdi
  __int64 result; // rax
  char *v12; // r13
  char *v13; // rbx
  size_t v14; // r14
  unsigned int v15; // [rsp+30h] [rbp-318h]
  int v16; // [rsp+38h] [rbp-310h]
  int v17; // [rsp+3Ch] [rbp-30Ch]
  wchar_t *Str1; // [rsp+60h] [rbp-2E8h]
  _OWORD v21[2]; // [rsp+70h] [rbp-2D8h] BYREF
  _OWORD v22[2]; // [rsp+90h] [rbp-2B8h] BYREF
  char v23; // [rsp+B0h] [rbp-298h] BYREF
  char v24; // [rsp+D0h] [rbp-278h] BYREF
  _WORD v25[264]; // [rsp+F0h] [rbp-258h] BYREF

  v8 = a3;
  v10 = 0LL;
  Str1 = 0LL;
  result = 0xFFFFFFFFLL;
  v15 = -1;
  memset(v21, 0, sizeof(v21));
  memset(v22, 0, sizeof(v22));
  v17 = 0;
  v16 = 0;
  v12 = 0LL;
  if ( a5 < 0 || a7 < 0 || a3 < 0 || a1 && a2 )
    goto LABEL_31;
  if ( gpidLogon && PsGetCurrentProcessId() == (HANDLE)gpidLogon )
  {
    UmfdDispatchWinLogonEscape(Src);
    return 0LL;
  }
  if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost() )
  {
    UmfdDispatchEscape(Src);
    return 0LL;
  }
  if ( a2 )
  {
    if ( (int)v8 > 260 )
      goto LABEL_76;
    Str1 = v25;
    v14 = 2 * v8;
    if ( &a2[v14] < a2 || (unsigned __int64)&a2[v14] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v25, a2, v14);
    v25[v14 / 2] = 0;
  }
  if ( Str1 && !_wcsicmp(Str1, L"GSESC") && (int)GreScalingDispatchEscape(Src) >= 0 )
    return 0LL;
  if ( a5 )
  {
    if ( (unsigned int)bUMPD(a1) )
    {
      if ( a5 > 32 )
      {
        if ( (unsigned __int64)&Src[a5] > MmUserProbeAddress || &Src[a5] < Src )
          *(_BYTE *)MmUserProbeAddress = 0;
        v12 = Src;
        goto LABEL_22;
      }
    }
    else if ( a5 > 32 )
    {
      if ( a5 <= 40960000 )
        v12 = (char *)PALLOCMEM2((unsigned int)a5, 1886221383LL, 0);
      if ( !v12 )
        goto LABEL_76;
      v17 = 1;
      goto LABEL_18;
    }
    v12 = &v23;
LABEL_18:
    if ( &Src[a5] < Src || (unsigned __int64)&Src[a5] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v12, Src, a5);
  }
LABEL_22:
  if ( !a7 )
  {
LABEL_23:
    v13 = a8;
    goto LABEL_24;
  }
  if ( (unsigned int)bUMPD(a1) )
  {
    v13 = a8;
    ProbeForWrite(a8, a7, 1u);
    v10 = a8;
LABEL_24:
    if ( v17 && v12 )
      PushThreadGuardedObject(v21, v12, Win32FreePool);
    if ( v16 && v10 )
      PushThreadGuardedObject(v22, v10, Win32FreePool);
    if ( Str1 )
      result = GreNamedEscape(Str1, a7, (__int64)v10);
    else
      result = GreExtEscape(a1, a4, a5, v12, a7, v10);
    v15 = result;
    if ( v17 && v12 )
    {
      PopThreadGuardedObject(v21);
      result = v15;
    }
    if ( v16 && v10 )
    {
      PopThreadGuardedObject(v22);
      result = v15;
    }
    if ( a7 && v10 != v13 )
    {
      if ( (unsigned __int64)&v13[a7] > MmUserProbeAddress || &v13[a7] <= v13 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v13, v10, a7);
      result = v15;
    }
    goto LABEL_31;
  }
  if ( a7 <= 32 )
  {
    v10 = &v24;
LABEL_61:
    memset(v10, 0, a7);
    goto LABEL_23;
  }
  if ( a7 <= 40960000 )
    v10 = (char *)PALLOCMEM2((unsigned int)a7, 1886221383LL, 0);
  if ( v10 )
  {
    v16 = 1;
    goto LABEL_61;
  }
LABEL_76:
  result = 0xFFFFFFFFLL;
LABEL_31:
  if ( v16 && v10 )
  {
    Win32FreePool(v10);
    result = v15;
  }
  if ( v17 )
  {
    if ( v12 )
    {
      Win32FreePool(v12);
      return v15;
    }
  }
  return result;
}
