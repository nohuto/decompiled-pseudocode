/*
 * XREFs of _TransformMessageBetweenCoordinateSpaces@24 @ 0x6C458
 * Callers:
 *     _xxxInterSendMsgEx@36 @ 0x43A56 (_xxxInterSendMsgEx@36.c)
 *     ?_PostTransformableMessageExtended@@YGPAUtagQMSG@@PAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x6CB50 (-_PostTransformableMessageExtended@@YGPAUtagQMSG@@PAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@H@Z.c)
 * Callees:
 *     _IsPointerParentNotify@8 @ 0x46012 (_IsPointerParentNotify@8.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _CaptureAndValidateUserModeDpiAwarenessContext@4 @ 0x6B7E0 (_CaptureAndValidateUserModeDpiAwarenessContext@4.c)
 *     _DoesMsgNeedDPITransform@12 @ 0xA87BE (_DoesMsgNeedDPITransform@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 */

int __fastcall TransformMessageBetweenCoordinateSpaces(unsigned int a1, int a2, int *a3, __int16 *a4, int a5, int a6)
{
  int v7; // edx
  int CurrentThreadDpiAwarenessContext; // eax
  unsigned int v9; // edi
  int *ThreadWin32Thread; // eax
  int v11; // eax
  int CurrentProcessWin32Process; // eax
  int v13; // ecx
  int v14; // eax
  _DWORD *v15; // ebx
  int v16; // edx
  int v18; // esi
  int v19; // esi
  _DWORD *v20; // esi
  int v21; // edi
  int v23; // ebx
  __int16 *v24; // esi
  int v25; // eax
  _DWORD *v26; // eax
  _DWORD *v27; // eax
  bool v28; // zf
  int v29; // eax
  unsigned int v30; // eax
  int v31; // ecx
  int v32; // [esp+10h] [ebp-58h]
  int v33; // [esp+10h] [ebp-58h]
  int v34; // [esp+10h] [ebp-58h]
  int v35; // [esp+10h] [ebp-58h]
  int v36; // [esp+10h] [ebp-58h]
  PKTHREAD CurrentThread; // [esp+1Ch] [ebp-4Ch]
  int v38; // [esp+1Ch] [ebp-4Ch]
  int v39; // [esp+1Ch] [ebp-4Ch]
  int v40; // [esp+24h] [ebp-44h] BYREF
  int v41; // [esp+28h] [ebp-40h]
  unsigned int v42; // [esp+2Ch] [ebp-3Ch] BYREF
  int v43; // [esp+30h] [ebp-38h]
  int v44; // [esp+34h] [ebp-34h] BYREF
  int v45; // [esp+38h] [ebp-30h]
  int v46; // [esp+3Ch] [ebp-2Ch] BYREF
  int v47; // [esp+40h] [ebp-28h]
  int v48; // [esp+44h] [ebp-24h] BYREF
  int v49; // [esp+48h] [ebp-20h]
  int v50; // [esp+4Ch] [ebp-1Ch]
  int v51; // [esp+50h] [ebp-18h]
  int v52; // [esp+54h] [ebp-14h] BYREF
  int v53; // [esp+58h] [ebp-10h]
  int v54; // [esp+5Ch] [ebp-Ch]
  int v55; // [esp+60h] [ebp-8h]

  v46 = a2;
  v7 = a6;
  v32 = 0;
  if ( a5 )
  {
    CurrentThreadDpiAwarenessContext = *(_DWORD *)(*(_DWORD *)(a5 + 20) + 184);
  }
  else
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    v7 = a6;
  }
  v42 = CurrentThreadDpiAwarenessContext;
  if ( v7 )
  {
    v9 = *(_DWORD *)(*(_DWORD *)(v7 + 20) + 184);
  }
  else
  {
    v9 = 18;
    CurrentThread = KeGetCurrentThread();
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
      {
        v11 = *ThreadWin32Thread;
        v38 = v11;
        if ( v11 )
        {
          if ( *(_DWORD *)(v11 + 204) )
          {
            CaptureAndValidateUserModeDpiAwarenessContext((_DWORD *)v11);
            v11 = v38;
          }
          if ( *(_DWORD *)(v11 + 192) )
          {
            v9 = *(_DWORD *)(v11 + 192);
          }
          else
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
            if ( CurrentProcessWin32Process )
              v9 = *(_DWORD *)(CurrentProcessWin32Process + 156);
            v11 = v38;
          }
          if ( (*(_BYTE *)(v11 + 180) & 4) != 0 && (v9 & 0xF) == 2 && (v9 & 0xF0) == 0x20 )
            v9 |= 0x20000000u;
        }
      }
    }
  }
  if ( (((v42 >> 8) ^ (v9 >> 8)) & 0x1FF) == 0 )
  {
    v13 = (v42 & 0xF) == 2 && (v42 & 0x20000000) != 0;
    v14 = (v9 & 0xF) == 2 && (v9 & 0x20000000) != 0;
    if ( v13 == v14 )
      return 0;
  }
  v15 = *(_DWORD **)a4;
  if ( !DoesMsgNeedDPITransform(*(_DWORD *)a4) )
    return 0;
  v44 = 0;
  v45 = 0;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  if ( !v46 )
    goto LABEL_45;
  if ( a1 <= 0x220 )
  {
    if ( a1 != 544 )
    {
      if ( a1 >= 0x46 )
      {
        if ( a1 <= 0x47 )
        {
          v52 = v15[2];
          v53 = v15[3];
          v54 = v15[2] + v15[4];
          v55 = v15[5] + v15[3];
          v32 = TransformRectBetweenCoordinateSpaces(&v48, &v52, a5, v16);
          v15[2] = v48;
          v15[3] = v49;
          v15[4] = v50 - v48;
          v15[5] = v51 - v49;
        }
        else
        {
          if ( a1 == 83 )
            return TransformPointBetweenCoordinateSpaces(v15 + 5, v15 + 5, a5, v16);
          if ( a1 == 131 )
          {
            if ( *a3 )
            {
              v18 = TransformRectBetweenCoordinateSpaces(v15, v15, a5, v16);
              v19 = TransformRectBetweenCoordinateSpaces(v15 + 4, v15 + 4, a5, a6) | v18;
              v33 = TransformRectBetweenCoordinateSpaces(v15 + 8, v15 + 8, a5, a6) | v19;
              v20 = (_DWORD *)v15[12];
              v52 = v20[2];
              v53 = v20[3];
              v54 = v20[2] + v20[4];
              v55 = v20[5] + v20[3];
              v21 = TransformRectBetweenCoordinateSpaces(&v48, &v52, a5, a6) | v33;
              v20[2] = v48;
              v20[3] = v49;
              v20[4] = v50 - v48;
              v20[5] = v51 - v49;
              return v21;
            }
            return TransformRectBetweenCoordinateSpaces(v15, v15, a5, v16);
          }
        }
      }
      goto LABEL_45;
    }
    v52 = v15[3];
    v53 = v15[4];
    v54 = v15[3] + v15[5];
    v55 = v15[6] + v15[4];
    v32 = TransformRectBetweenCoordinateSpaces(&v48, &v52, a5, v16);
    v15[3] = v48;
    v15[4] = v49;
    v15[5] = v50 - v48;
    v15[6] = v51 - v49;
    goto LABEL_62;
  }
  if ( a1 != 643 )
  {
    if ( a1 == 833 || a1 == 834 )
    {
      v21 = 1;
      goto LABEL_46;
    }
LABEL_45:
    v21 = v32;
LABEL_46:
    v23 = a5;
    goto LABEL_47;
  }
  v25 = *a3;
  if ( *a3 != 7 && v25 != 8 )
  {
    if ( v25 == 11 || v25 == 12 )
    {
      v34 = TransformPointBetweenCoordinateSpaces(v15 + 1, v15 + 1, a5, v16);
      v26 = v15 + 3;
      v23 = a5;
      v21 = TransformRectBetweenCoordinateSpaces(v26, v26, a5, a6) | v34;
      goto LABEL_64;
    }
    if ( v25 == 16 )
    {
      v23 = a5;
      v40 = *a4;
      v41 = a4[1];
      v32 = TransformPointBetweenCoordinateSpaces(&v44, &v40, a5, v16);
      *a4 = v44;
      a4[1] = v45;
      goto LABEL_63;
    }
LABEL_62:
    v23 = a5;
LABEL_63:
    v21 = v32;
    goto LABEL_64;
  }
  v35 = TransformPointBetweenCoordinateSpaces(v15 + 2, v15 + 2, a5, v16);
  v27 = v15 + 4;
  v23 = a5;
  v21 = TransformRectBetweenCoordinateSpaces(v27, v27, a5, a6) | v35;
LABEL_47:
  if ( a1 <= 0x210 )
  {
    if ( a1 == 528 )
    {
LABEL_78:
      v28 = !IsPointerParentNotify(a1, *a3);
      goto LABEL_84;
    }
    if ( a1 <= 0x112 )
    {
      if ( a1 != 274 )
      {
        if ( a1 != 3 )
        {
          if ( a1 != 123 && a1 != 132 && (a1 <= 0x9F || a1 > 0xA9 && (a1 <= 0xAA || a1 > 0xAD)) )
            return v21;
          goto LABEL_99;
        }
LABEL_101:
        if ( !v23 )
          return v21;
        v31 = *(_DWORD *)(v23 + 20);
        v46 = 0;
        v47 = 0;
        v40 = *a4;
        v41 = a4[1];
        v42 = *(_DWORD *)(v31 + 68);
        v43 = *(_DWORD *)(v31 + 72);
        TransformPointBetweenCoordinateSpaces(&v46, &v42, a6, v23);
        v40 += v46;
        v41 += v47;
        v36 = TransformPointBetweenCoordinateSpaces(&v44, &v40, v23, a6);
        *(_DWORD *)a4 = (unsigned __int16)(v44 - v42) | ((unsigned __int16)(v45 - v43) << 16);
        return v36;
      }
      if ( !a4[1] )
        return v21;
      goto LABEL_78;
    }
    if ( a1 < 0x200 )
      return v21;
    if ( a1 <= 0x209 )
      goto LABEL_101;
    if ( a1 != 522 )
    {
      if ( a1 <= 0x20D )
        goto LABEL_101;
      v28 = a1 == 526;
LABEL_84:
      if ( !v28 )
        return v21;
    }
LABEL_99:
    v24 = a4;
LABEL_100:
    v40 = *v24;
    v41 = v24[1];
    v36 = TransformPointBetweenCoordinateSpaces(&v44, &v40, v23, a6);
    *(_DWORD *)v24 = (unsigned __int16)v44 | ((unsigned __int16)v45 << 16);
    return v36;
  }
  if ( a1 <= 0x2A0 )
  {
    if ( a1 == 672 )
      goto LABEL_99;
LABEL_64:
    switch ( a1 )
    {
      case 0x241u:
      case 0x242u:
      case 0x243u:
      case 0x245u:
      case 0x246u:
      case 0x247u:
      case 0x249u:
      case 0x24Au:
      case 0x24Eu:
      case 0x24Fu:
      case 0x251u:
      case 0x252u:
        goto LABEL_99;
      default:
        return v21;
    }
    return v21;
  }
  if ( a1 == 673 )
    goto LABEL_101;
  if ( a1 <= 0x2F1 )
    return v21;
  if ( a1 <= 0x2F4 )
    goto LABEL_99;
  if ( a1 != 787 )
  {
    if ( a1 == 831 )
    {
      if ( a6 )
      {
        v29 = *(_DWORD *)a4;
        v46 = v29;
        if ( v29 )
        {
          v21 = TransformRectBetweenCoordinateSpaces(v29 + 4, v29 + 4, v23, a6);
          v30 = v46 + 44;
          v42 = v46 + 44;
          v39 = 6;
          do
          {
            v21 |= TransformRectBetweenCoordinateSpaces(v30, v30, v23, a6);
            v30 = v42 + 16;
            v28 = v39-- == 1;
            v42 += 16;
          }
          while ( !v28 );
        }
      }
    }
    return v21;
  }
  v24 = a4;
  if ( *(_DWORD *)a4 != -1 )
    goto LABEL_100;
  return v21;
}
