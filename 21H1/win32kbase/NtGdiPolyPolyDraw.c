/*
 * XREFs of NtGdiPolyPolyDraw @ 0x1C00C4C40
 * Callers:
 *     <none>
 * Callees:
 *     EngSetLastError @ 0x1C003C4D0 (EngSetLastError.c)
 *     AllocFreeTmpBuffer @ 0x1C00738E0 (AllocFreeTmpBuffer.c)
 *     FreeTmpBuffer @ 0x1C0073B40 (FreeTmpBuffer.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C008D744 (PALLOCMEM2.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C00C5024 (GreCreatePolyPolygonRgnInternal.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 */

__int64 __fastcall NtGdiPolyPolyDraw(__int64 a1, void *a2, void *a3, unsigned int a4, int a5)
{
  __int64 v5; // r13
  __int64 PolyPolygonRgnInternal; // rdi
  int v9; // r14d
  unsigned int *v10; // r12
  struct _POINTL *v11; // r15
  void *v12; // rdx
  char *v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // r13d
  __int64 i; // rcx
  size_t v17; // r8
  void *v18; // rdx
  __int64 v19; // rdx
  __int64 (__fastcall *v20)(__int64, struct _POINTL *, unsigned int *, _QWORD, unsigned int); // rax
  int v21; // eax
  __int64 (__fastcall *v23)(__int64, struct _POINTL *, _QWORD); // rax
  int v24; // eax
  int v25; // eax
  unsigned int v27; // [rsp+34h] [rbp-E4h] BYREF
  __int64 v28; // [rsp+38h] [rbp-E0h]
  unsigned int v29; // [rsp+40h] [rbp-D8h]
  int v30; // [rsp+44h] [rbp-D4h]
  unsigned int v31; // [rsp+48h] [rbp-D0h]
  __int64 v32; // [rsp+50h] [rbp-C8h]
  unsigned int *v33; // [rsp+58h] [rbp-C0h]
  struct _POINTL *v34; // [rsp+60h] [rbp-B8h]
  void *Src; // [rsp+68h] [rbp-B0h]
  void *v36; // [rsp+70h] [rbp-A8h]
  __int64 v37; // [rsp+78h] [rbp-A0h]
  struct _POINTL v38; // [rsp+80h] [rbp-98h] BYREF

  v5 = a4;
  Src = a3;
  v36 = a2;
  v28 = a1;
  v37 = a1;
  v31 = a4;
  v29 = 0;
  PolyPolygonRgnInternal = 1LL;
  v32 = 1LL;
  v27 = 0;
  if ( !a4 )
    return 0LL;
  if ( a5 == 2 )
  {
    if ( qword_1C02577B0 )
    {
      v24 = qword_1C02577B0();
      v9 = -1073741637;
      a1 = v28;
    }
    else
    {
      v9 = -1073741637;
      v24 = -1073741637;
    }
    if ( v24 < 0 )
      return PolyPolygonRgnInternal;
    v25 = (int)qword_1C02577B8;
    if ( qword_1C02577B8 )
      v25 = qword_1C02577B8(a1, a2, a3, (unsigned int)v5);
    if ( v25 )
      return PolyPolygonRgnInternal;
  }
  else
  {
    v9 = -1073741637;
  }
  if ( (unsigned int)v5 <= 1 )
  {
    v10 = &v27;
    goto LABEL_6;
  }
  if ( (unsigned int)(a5 - 3) > 2 )
  {
    if ( (unsigned int)v5 > 0x9C4000 )
    {
      EngSetLastError(0x57u);
      v10 = 0LL;
    }
    else
    {
      v10 = (unsigned int *)PALLOCMEM2((unsigned int)(4 * v5), 0x706D7447u, 0);
    }
LABEL_6:
    v33 = v10;
    if ( v10 )
    {
      v11 = &v38;
      v34 = &v38;
      v30 = 0;
      v12 = Src;
      v13 = (char *)Src + 4 * v5;
      if ( v13 < Src || (unsigned __int64)v13 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v10, v12, 4 * v5);
      v15 = 0;
      v29 = 0;
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v30 = i;
        if ( (unsigned int)i >= a4 )
          break;
        v15 += v10[i];
        v29 = v15;
      }
      if ( v15 > 0x4E2000 )
        goto LABEL_21;
      if ( v15 > 0xA )
      {
        v11 = (struct _POINTL *)AllocFreeTmpBuffer(8 * v15);
        v34 = v11;
      }
      if ( v11 )
      {
        v17 = 8LL * v15;
        v18 = v36;
        if ( (char *)v36 + v17 < v36 || (unsigned __int64)v36 + v17 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v11, v18, v17);
      }
      else
      {
LABEL_21:
        PolyPolygonRgnInternal = 0LL;
        v32 = 0LL;
      }
      v19 = v28;
      if ( !PolyPolygonRgnInternal )
        goto LABEL_31;
      switch ( a5 )
      {
        case 1:
          if ( qword_1C02577A0 )
            v9 = qword_1C02577A0(a4, v28);
          if ( v9 >= 0 )
          {
            v20 = (__int64 (__fastcall *)(__int64, struct _POINTL *, unsigned int *, _QWORD, unsigned int))qword_1C02577A8;
            goto LABEL_28;
          }
          goto LABEL_67;
        case 2:
          if ( qword_1C02577D0 )
            v9 = qword_1C02577D0(a4, v28);
          if ( v9 >= 0 )
          {
            v20 = (__int64 (__fastcall *)(__int64, struct _POINTL *, unsigned int *, _QWORD, unsigned int))qword_1C02577D8;
LABEL_28:
            if ( v20 )
            {
              v21 = v20(v28, v11, v10, a4, v15);
LABEL_30:
              PolyPolygonRgnInternal = v21;
              goto LABEL_31;
            }
            goto LABEL_75;
          }
          goto LABEL_67;
        case 3:
          if ( qword_1C02577C0 )
            v9 = qword_1C02577C0(a4, v28);
          if ( v9 < 0 )
            goto LABEL_67;
          v23 = (__int64 (__fastcall *)(__int64, struct _POINTL *, _QWORD))qword_1C02577C8;
          break;
        case 4:
          if ( qword_1C02577F0 )
            v9 = qword_1C02577F0(a4, v28);
          if ( v9 < 0 )
            goto LABEL_67;
          v23 = (__int64 (__fastcall *)(__int64, struct _POINTL *, _QWORD))qword_1C02577F8;
          break;
        case 5:
          if ( qword_1C02577E0 )
            v9 = qword_1C02577E0(a4, v28);
          if ( v9 >= 0 )
          {
            v23 = (__int64 (__fastcall *)(__int64, struct _POINTL *, _QWORD))qword_1C02577E8;
            break;
          }
          break;
        case 6:
          PolyPolygonRgnInternal = GreCreatePolyPolygonRgnInternal(v11, v15);
          goto LABEL_31;
        default:
LABEL_67:
          PolyPolygonRgnInternal = 0LL;
LABEL_31:
          if ( v11 && v11 != &v38 )
            FreeTmpBuffer((char *)v11);
          if ( v10 != &v27 )
            Win32FreePool((__int64)v10, v19, v14);
          return PolyPolygonRgnInternal;
      }
      if ( v23 )
      {
        v21 = v23(v28, v11, v27);
        goto LABEL_30;
      }
LABEL_75:
      v21 = 0;
      goto LABEL_30;
    }
    return 0LL;
  }
  return 0LL;
}
