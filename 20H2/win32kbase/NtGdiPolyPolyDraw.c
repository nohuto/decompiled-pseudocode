/*
 * XREFs of NtGdiPolyPolyDraw @ 0x1C00C4640
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C003C5B0 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     FreeTmpBuffer @ 0x1C005CCE0 (FreeTmpBuffer.c)
 *     AllocFreeTmpBuffer @ 0x1C005CD90 (AllocFreeTmpBuffer.c)
 *     EngSetLastError @ 0x1C00AAA00 (EngSetLastError.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C00C4A24 (GreCreatePolyPolygonRgnInternal.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D3840 (memmove.c)
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
  unsigned int v14; // r13d
  __int64 i; // rcx
  size_t v16; // r8
  void *v17; // rdx
  __int64 (__fastcall *v18)(__int64, struct _POINTL *, unsigned int *, _QWORD, unsigned int); // rax
  int v19; // eax
  __int64 (__fastcall *v21)(__int64, struct _POINTL *, _QWORD); // rax
  int v22; // eax
  int v23; // eax
  unsigned int v25; // [rsp+34h] [rbp-E4h] BYREF
  __int64 v26; // [rsp+38h] [rbp-E0h]
  unsigned int v27; // [rsp+40h] [rbp-D8h]
  int v28; // [rsp+44h] [rbp-D4h]
  unsigned int v29; // [rsp+48h] [rbp-D0h]
  __int64 v30; // [rsp+50h] [rbp-C8h]
  unsigned int *v31; // [rsp+58h] [rbp-C0h]
  struct _POINTL *v32; // [rsp+60h] [rbp-B8h]
  void *Src; // [rsp+68h] [rbp-B0h]
  void *v34; // [rsp+70h] [rbp-A8h]
  __int64 v35; // [rsp+78h] [rbp-A0h]
  struct _POINTL v36; // [rsp+80h] [rbp-98h] BYREF

  v5 = a4;
  Src = a3;
  v34 = a2;
  v26 = a1;
  v35 = a1;
  v29 = a4;
  v27 = 0;
  PolyPolygonRgnInternal = 1LL;
  v30 = 1LL;
  v25 = 0;
  if ( !a4 )
    return 0LL;
  if ( a5 == 2 )
  {
    if ( qword_1C024F7F0 )
    {
      v22 = qword_1C024F7F0();
      v9 = -1073741637;
      a1 = v26;
    }
    else
    {
      v9 = -1073741637;
      v22 = -1073741637;
    }
    if ( v22 < 0 )
      return PolyPolygonRgnInternal;
    v23 = (int)qword_1C024F7F8;
    if ( qword_1C024F7F8 )
      v23 = qword_1C024F7F8(a1, a2, a3, (unsigned int)v5);
    if ( v23 )
      return PolyPolygonRgnInternal;
  }
  else
  {
    v9 = -1073741637;
  }
  if ( (unsigned int)v5 <= 1 )
  {
    v10 = &v25;
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
      v10 = (unsigned int *)PALLOCMEM2((unsigned int)(4 * v5), 1886221383LL, 0);
    }
LABEL_6:
    v31 = v10;
    if ( v10 )
    {
      v11 = &v36;
      v32 = &v36;
      v28 = 0;
      v12 = Src;
      v13 = (char *)Src + 4 * v5;
      if ( v13 < Src || (unsigned __int64)v13 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v10, v12, 4 * v5);
      v14 = 0;
      v27 = 0;
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v28 = i;
        if ( (unsigned int)i >= a4 )
          break;
        v14 += v10[i];
        v27 = v14;
      }
      if ( v14 > 0x4E2000 )
        goto LABEL_21;
      if ( v14 > 0xA )
      {
        v11 = (struct _POINTL *)AllocFreeTmpBuffer(8 * v14);
        v32 = v11;
      }
      if ( v11 )
      {
        v16 = 8LL * v14;
        v17 = v34;
        if ( (char *)v34 + v16 < v34 || (unsigned __int64)v34 + v16 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v11, v17, v16);
      }
      else
      {
LABEL_21:
        PolyPolygonRgnInternal = 0LL;
        v30 = 0LL;
      }
      if ( !PolyPolygonRgnInternal )
        goto LABEL_31;
      switch ( a5 )
      {
        case 1:
          if ( qword_1C024F7E0 )
            v9 = qword_1C024F7E0(a4, v26);
          if ( v9 >= 0 )
          {
            v18 = (__int64 (__fastcall *)(__int64, struct _POINTL *, unsigned int *, _QWORD, unsigned int))qword_1C024F7E8;
            goto LABEL_28;
          }
          goto LABEL_67;
        case 2:
          if ( qword_1C024F810 )
            v9 = qword_1C024F810(a4, v26);
          if ( v9 >= 0 )
          {
            v18 = (__int64 (__fastcall *)(__int64, struct _POINTL *, unsigned int *, _QWORD, unsigned int))qword_1C024F818;
LABEL_28:
            if ( v18 )
            {
              v19 = v18(v26, v11, v10, a4, v14);
LABEL_30:
              PolyPolygonRgnInternal = v19;
              goto LABEL_31;
            }
            goto LABEL_75;
          }
          goto LABEL_67;
        case 3:
          if ( qword_1C024F800 )
            v9 = qword_1C024F800(a4, v26);
          if ( v9 < 0 )
            goto LABEL_67;
          v21 = (__int64 (__fastcall *)(__int64, struct _POINTL *, _QWORD))qword_1C024F808;
          break;
        case 4:
          if ( qword_1C024F830 )
            v9 = qword_1C024F830(a4, v26);
          if ( v9 < 0 )
            goto LABEL_67;
          v21 = (__int64 (__fastcall *)(__int64, struct _POINTL *, _QWORD))qword_1C024F838;
          break;
        case 5:
          if ( qword_1C024F820 )
            v9 = qword_1C024F820(a4, v26);
          if ( v9 >= 0 )
          {
            v21 = (__int64 (__fastcall *)(__int64, struct _POINTL *, _QWORD))qword_1C024F828;
            break;
          }
          break;
        case 6:
          PolyPolygonRgnInternal = GreCreatePolyPolygonRgnInternal(v11, v14);
          goto LABEL_31;
        default:
LABEL_67:
          PolyPolygonRgnInternal = 0LL;
LABEL_31:
          if ( v11 && v11 != &v36 )
            FreeTmpBuffer((char *)v11);
          if ( v10 != &v25 )
            Win32FreePool((__int64)v10);
          return PolyPolygonRgnInternal;
      }
      if ( v21 )
      {
        v19 = v21(v26, v11, v25);
        goto LABEL_30;
      }
LABEL_75:
      v19 = 0;
      goto LABEL_30;
    }
    return 0LL;
  }
  return 0LL;
}
