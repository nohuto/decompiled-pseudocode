/*
 * XREFs of GreRectVisible @ 0x1C009775C
 * Callers:
 *     NtGdiRectVisible @ 0x1C0097700 (NtGdiRectVisible.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00690E4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C00978D8 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0098F74 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00A0F50 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00A1148 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00A1484 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00A47D0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00F3124 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall GreRectVisible(HDC a1, struct _RECTL *a2)
{
  unsigned int v3; // ebx
  struct REGION *v4; // rax
  struct _RECTL v5; // xmm0
  _DWORD *v6; // rcx
  LONG right; // eax
  LONG left; // edx
  _QWORD v10[2]; // [rsp+20h] [rbp-E0h] BYREF
  struct REGION *v11; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v12[2]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v13[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+58h] [rbp-A8h] BYREF
  int v15; // [rsp+60h] [rbp-A0h]
  _BYTE v16[32]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v17; // [rsp+90h] [rbp-70h] BYREF
  int v18; // [rsp+98h] [rbp-68h]
  int v19; // [rsp+9Ch] [rbp-64h]
  __int16 v20; // [rsp+A0h] [rbp-60h]
  char v21[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v22; // [rsp+C8h] [rbp-38h]
  struct _RECTL v23; // [rsp+140h] [rbp+40h] BYREF
  struct _POINTL v24; // [rsp+150h] [rbp+50h] BYREF
  struct _POINTL v25; // [rsp+158h] [rbp+58h] BYREF
  LONG v26; // [rsp+160h] [rbp+60h]
  LONG bottom; // [rsp+164h] [rbp+64h]
  LONG v28; // [rsp+168h] [rbp+68h]
  LONG v29; // [rsp+16Ch] [rbp+6Ch]

  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  if ( !v10[0] )
  {
    EngSetLastError(6u);
    v3 = -1;
    goto LABEL_9;
  }
  v17 = 0LL;
  v18 = 0;
  v19 = 0;
  v3 = 1;
  v20 = 256;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v16, (struct XDCOBJ *)v10, 1);
  if ( (v16[24] & 1) != 0 )
  {
    v4 = XDCOBJ::prgnEffRao((XDCOBJ *)v10);
    v5 = *a2;
    v11 = v4;
    v23 = v5;
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v12, (struct XDCOBJ *)v10, 0x80000204);
    if ( (*(_DWORD *)(v12[0] + 32LL) & 1) != 0 )
    {
      EXFORMOBJ::vOrder((EXFORMOBJ *)v12, &v23);
      EXFORMOBJ::bXform((EXFORMOBJ *)v12, (struct ERECTL *)&v23);
      v6 = (_DWORD *)(v10[0] + 1024LL);
      if ( (*(_DWORD *)(v10[0] + 40LL) & 1) == 0 )
        v6 = (_DWORD *)(v10[0] + 1016LL);
      v23.left += *v6;
      v23.right += *v6;
      v23.top += v6[1];
      v23.bottom += v6[1];
      v3 = RGNOBJ::bInside((RGNOBJ *)&v11, &v23) == 2;
      goto LABEL_7;
    }
    right = a2->right;
    left = a2->left;
    v24.y = a2->top;
    v25.x = right;
    v25.y = v24.y;
    v26 = right;
    bottom = a2->bottom;
    v29 = bottom;
    v24.x = left;
    v28 = left;
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v21);
    if ( v22 )
    {
      if ( EPATHOBJ::bMoveTo((EPATHOBJ *)v21, (struct EXFORMOBJ *)v12, &v24)
        && EPATHOBJ::bPolyLineTo((EPATHOBJ *)v21, (struct EXFORMOBJ *)v12, &v25, 3u)
        && EPATHOBJ::bCloseFigure((EPATHOBJ *)v21) )
      {
        v15 = 0;
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v14, (struct EPATHOBJ *)v21, 1u, 0LL);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v14);
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v13);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v13);
        if ( v14 && v13[0] )
        {
          if ( RGNOBJ::bMerge((RGNOBJ *)v13, (struct RGNOBJ *)&v11, (struct RGNOBJ *)&v14, 8u)
            && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v13) != 1 )
          {
            v3 = 2;
          }
        }
        else
        {
          EngSetLastError(8u);
          v3 = -1;
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v13);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v14);
        goto LABEL_16;
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v3 = -1;
LABEL_16:
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v21);
  }
LABEL_7:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v16);
  if ( v17 )
    DLODCOBJ::vUnlock((DLODCOBJ *)&v17);
LABEL_9:
  if ( v10[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v10);
  return v3;
}
